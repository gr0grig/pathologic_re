GlobalVarCount = 5
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 float 
	G_VAR_3 bool 
	G_VAR_4 object 

Strings:
	all
	attack_on
	attack_off
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
	GenerateMoney: iMin > iMax
	Money
	ognemet_ammo
	rusk
	flame
	Attach
	SetLength
	GetLength
	flame_loop
	FadeIn
	FadeOut
	cattack
	@GetHeight
	GetHeight
	in
	disease
	add
	reputation
	Intersect
	Next

Import:
	SetTimer (2 args)
	GetDirection (1 args)
	Hold (0 args)
	Rotate (3 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	Face (1 args)
	SetAttackState (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	KillTimer (1 args)
	RemoveActor (1 args)
	SetRTEnvelope (2 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	GetPosition (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
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
	self (1 args)
	CreateObjectSet (1 args)
	Trace (1 args)
	irand (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetAttackDistance (1 args)
	AddActorByType (4 args)
	GetHeight (1 args)
	PlayLoopedGlobalSound (5 args)
	IsPlayerActor (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_1 Op = 0x15 Vars = (object)
		EVENT_3 Op = 0x21 Vars = (object)
		EVENT_17 Op = 0x2d Vars = (object)
		EVENT_30 Op = 0x3d Vars = (object, object)
		EVENT_7 Op = 0x53 Vars = (int)
	GTASK_1 Vars = (object, bool) Params = 2
		EVENT_1 Op = 0xb3 Vars = (object)
		EVENT_3 Op = 0xca Vars = (object)
		EVENT_17 Op = 0xe1 Vars = (object)
		EVENT_30 Op = 0xfc Vars = (object, object)
		EVENT_7 Op = 0x108 Vars = (int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x13f Vars = (object)
		EVENT_22 Op = 0x1b4 Vars = (object, int, float, float)
		EVENT_16 Op = 0x1b6 Vars = (object, string)
		EVENT_41 Op = 0x1b8 Vars = (object)

Events:
EVENT_22 Op = 0x3cb Vars = (object, int, float, float)
EVENT_16 Op = 0x3d3 Vars = (object, string)
EVENT_41 Op = 0x3e0 Vars = (object)

0x0: PushEmpty(cvector, bool, cvector, bool)
0x1: PushEmpty()
0x2: Call 0x300

0x3: Pop(0)
0x4: Push((int) 75)
0x5: Push((float)0.5)
0x6: @ SetTimer(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: @ GetDirection(Stack[-2])
0x9: Pop(0)
0xa: @ Hold()
0xb: Pop(0)
0xc: Push(CvectorIndex(Stack[-2], 0))
0xd: Push(CvectorIndex(Stack[-3], 2))
0xe: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xf: Pop(2)
0x10: Pop(0); Push((bool) Stack[-1] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: GOTO 0xc

0x13: GOTO 0xa

0x14: Return(); Pop(4)

0x15: PushEmpty()
0x16: PushEmpty(bool, object)
0x17: Stack[-1] = Stack[-3]
0x18: Call 0x470

0x19: Pop(1)
0x1a: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1b: PushEmpty(object, bool)
0x1c: Stack[-2] = Stack[-3]
0x1d: Stack[-1] = (bool) 0
0x1e: Call 0x5f

0x1f: Pop(2)
0x20: Return(); Pop(0)

0x21: PushEmpty()
0x22: PushEmpty(bool, object)
0x23: Stack[-1] = Stack[-3]
0x24: Call 0x47e

0x25: Pop(1)
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: PushEmpty(object, bool)
0x28: Stack[-2] = Stack[-3]
0x29: Stack[-1] = (bool) 0
0x2a: Call 0x5f

0x2b: Pop(2)
0x2c: Return(); Pop(0)

0x2d: PushEmpty()
0x2e: PushEmpty(bool, object)
0x2f: Stack[-1] = Stack[-3]
0x30: Call 0x23f

0x31: Pop(1)
0x32: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x33: PushEmpty(object)
0x34: Stack[-1] = Stack[-2]
0x35: Call 0x3b2

0x36: Pop(1)
0x37: PushEmpty(object, bool)
0x38: Stack[-2] = Stack[-3]
0x39: Stack[-1] = (bool) 1
0x3a: Call 0x5f

0x3b: Pop(2)
0x3c: Return(); Pop(0)

0x3d: PushEmpty()
0x3e: PushEmpty(bool, object, object)
0x3f: Stack[-2] = Stack[-5]
0x40: Stack[-1] = Stack[-4]
0x41: Call 0x3e6

0x42: Pop(2)
0x43: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x44: PushEmpty(bool, object)
0x45: Stack[-1] = Stack[-4]
0x46: Call 0x23f

0x47: Pop(1)
0x48: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x49: PushEmpty(object)
0x4a: Stack[-1] = Stack[-3]
0x4b: Call 0x3b2

0x4c: Pop(1)
0x4d: PushEmpty(object, bool)
0x4e: Stack[-2] = Stack[-4]
0x4f: Stack[-1] = (bool) 0
0x50: Call 0x5f

0x51: Pop(2)
0x52: Return(); Pop(0)

0x53: PushEmpty()
0x54: Push((int) 75)
0x55: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: @ ResetAAS()
0x58: Pop(0)
0x59: GOTO 0x5e

0x5a: PushEmpty(int)
0x5b: Stack[-1] = Stack[-2]
0x5c: Call 0x40e

0x5d: Pop(1)
0x5e: Return(); Pop(0)

0x5f: PushEmpty()
0x60: @ StopGroup0()
0x61: Pop(0)
0x62: PushEmpty(object, bool)
0x63: Stack[-2] = Stack[-4]
0x64: Stack[-1] = Stack[-3]
0x65: Push(-2, 2); TaskCall(1)
0x66: Call 0x6a

0x67: Pop(-2, 2); TaskReturn
0x68: Pop(2)
0x69: Return(); Pop(0)

0x6a: PushEmpty()
0x6b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x6c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6d: @ Face(Stack[-0])
0x6e: Pop(0)
0x6f: PushEmpty(bool)
0x70: Stack[-1] = (bool) 1
0x71: Call 0x329

0x72: Pop(1)
0x73: Push((bool) 1)
0x74: @ SetAttackState(Stack[-1])
0x75: Pop(1)
0x76: Push("all")
0x77: Push("attack_on")
0x78: @ PlayAnimation(Stack[-2], Stack[-1])
0x79: Pop(2)
0x7a: @ WaitForAnimEnd()
0x7b: Pop(0)
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 0
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x82: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 0
0x85: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 1
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a: Call 0x4a6

0x8b: Pop(1)
0x8c: Pop(1); Push((bool) Stack[-1] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90: Call 0x463

0x91: Pop(1)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 0
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Stack[-1] = (bool) 1
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0xa0

0x99: PushEmpty(object)
0x9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b: Call 0x380

0x9c: Pop(1)
0x9d: @ WaitForAnimEnd()
0x9e: Pop(0)
0x9f: GOTO 0x7c

0xa0: Stack[0 + Tasks[-1].StackPointer] = 0
0xa1: Push((bool) 0)
0xa2: @ SetAttackState(Stack[-1])
0xa3: Pop(1)
0xa4: PushEmpty(bool)
0xa5: Stack[-1] = (bool) 0
0xa6: Call 0x329

0xa7: Pop(1)
0xa8: @ StopAsync()
0xa9: Pop(0)
0xaa: Push("all")
0xab: Push("attack_off")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0xb1: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: PushEmpty(bool)
0xb8: Stack[-1] = (bool) 0
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[-4]
0xbb: Call 0x470

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbe: PushEmpty(bool, object, object)
0xbf: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[-5]
0xc1: Call 0x48c

0xc2: Pop(2)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Stack[-1] = (bool) 1
0xc5: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: @ Face(Stack[-1])
0xc8: Pop(0)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: Push( Stack[1 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: Return(); Pop(0)

0xce: PushEmpty(bool)
0xcf: Stack[-1] = (bool) 0
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-4]
0xd2: Call 0x47e

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[-5]
0xd8: Call 0x48c

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Stack[-1] = (bool) 1
0xdc: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xde: @ Face(Stack[-1])
0xdf: Pop(0)
0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[-2]
0xe4: Call 0x3b2

0xe5: Pop(1)
0xe6: PushEmpty(bool)
0xe7: Stack[-1] = (bool) 1
0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[-4]
0xea: Call 0x23f

0xeb: Pop(1)
0xec: Pop(1); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[-4]
0xf0: Call 0x463

0xf1: Pop(1)
0xf2: Pop(1); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf4: Stack[-1] = (bool) 0
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Return(); Pop(0)

0xf7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xf9: @ Face(Stack[-1])
0xfa: Pop(0)
0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty(bool, object, object)
0xfe: Stack[-2] = Stack[-5]
0xff: Stack[-1] = Stack[-4]
0x100: Call 0x3e6

0x101: Pop(2)
0x102: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-3]
0x105: Call 0xe1

0x106: Pop(1)
0x107: Return(); Pop(0)

0x108: PushEmpty()
0x109: Push((int) 75)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10c: @ ResetAAS()
0x10d: Pop(0)
0x10e: GOTO 0x113

0x10f: PushEmpty(int)
0x110: Stack[-1] = Stack[-2]
0x111: Call 0x40e

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty()
0x115: Push((int) 75)
0x116: @ KillTimer(Stack[-1])
0x117: Pop(1)
0x118: PushEmpty(object)
0x119: Stack[-1] = Stack[-2]
0x11a: Call 0x11d

0x11b: Pop(1)
0x11c: Return(); Pop(0)

0x11d: PushEmpty()
0x11e: Push((int) 70)
0x11f: @ KillTimer(Stack[-1])
0x120: Pop(1)
0x121: PushEmpty(bool)
0x122: Stack[-1] = (bool) 0
0x123: Call 0x329

0x124: Pop(1)
0x125: Push(GlobalVars[0])
0x126: @ RemoveActor(Stack[-1])
0x127: Pop(1)
0x128: PushEmpty()
0x129: Call 0x2d6

0x12a: Pop(0)
0x12b: PushEmpty(object)
0x12c: Stack[-1] = Stack[-2]
0x12d: Call 0x130

0x12e: Pop(1)
0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: EventDisable(0)
0x132: PushEmpty(object)
0x133: Stack[-1] = Stack[-2]
0x134: Call 0x147

0x135: Pop(1)
0x136: Push((int) 50)
0x137: Push((int) 40)
0x138: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: EventEnable(0)
0x13b: @ Hold()
0x13c: Pop(0)
0x13d: GOTO 0x13b

0x13e: Return(); Pop(0)

0x13f: PushEmpty(bool, bool)
0x140: @ IsOverrideActive(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x144: @ WorkWithCorpse(Stack[-3])
0x145: Pop(0)
0x146: Return(); Pop(2)

0x147: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x148: Pop(0); Push((bool) Stack[-21] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "fdie"
0x14c: Call 0x19e

0x14d: Pop(1)
0x14e: GOTO 0x19d

0x14f: @@ GetPosition(Stack[-10])
0x150: Pop(0)
0x151: @ GetPosition(Stack[-9])
0x152: Pop(0)
0x153: @ GetDirection(Stack[-8])
0x154: Pop(0)
0x155: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x156: Push(CvectorIndex(Stack[-7], 0))
0x157: Push(CvectorIndex(Stack[-9], 0))
0x158: Pop(2); Push(Stack[-2] * Stack[-1]);
0x159: Push(CvectorIndex(Stack[-8], 2))
0x15a: Push(CvectorIndex(Stack[-10], 2))
0x15b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x15c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15d: Push((int) 0)
0x15e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x160: Stack[-6] = "fdie"
0x161: GOTO 0x163

0x162: Stack[-6] = "bdie"
0x163: @ RemoveRTEnvelope()
0x164: Pop(0)
0x165: @ SetDeathState()
0x166: Pop(0)
0x167: @ Stop()
0x168: Pop(0)
0x169: @ StopAsync()
0x16a: Pop(0)
0x16b: Stack[-5] = Stack[-21]
0x16c: Push("GetScriptProperty")
0x16d: Push((int) 2)
0x16e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x16f: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x170: Push("Owner")
0x171: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x172: Pop(1)
0x173: Push(Stack[-4])
0x174: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x175: Push("Owner")
0x176: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x177: Pop(1)
0x178: Pop(0); Push((bool) Stack[-5] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-5] = Stack[-21]
0x17b: Push("@GetEyesHeight")
0x17c: Push((int) 1)
0x17d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x17e: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17f: @@ GetEyesHeight(Stack[-2])
0x180: Pop(0)
0x181: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x182: Push(CvectorIndex(Stack[-1], 1))
0x183: Stack[-1] = Stack[-3]
0x184: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x185: Push("head")
0x186: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x187: Pop(1)
0x188: Stack[-3] = (bool) 1
0x189: GOTO 0x18b

0x18a: Stack[-3] = (bool) 0
0x18b: Push("all")
0x18c: @ PlayAnimation(Stack[-1], Stack[-7])
0x18d: Pop(1)
0x18e: @ WaitForAnimEnd()
0x18f: Pop(0)
0x190: Push(Stack[-3])
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: @ StopAsync()
0x193: Pop(0)
0x194: Push("head")
0x195: @ UnlookAsync(Stack[-1])
0x196: Pop(1)
0x197: Push("all")
0x198: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x199: Pop(1)
0x19a: @ RemoveEnvelope()
0x19b: Pop(0)
0x19c: Stack[-5] = 0
0x19d: Return(); Pop(20)

0x19e: PushEmpty()
0x19f: @ RemoveRTEnvelope()
0x1a0: Pop(0)
0x1a1: @ SetDeathState()
0x1a2: Pop(0)
0x1a3: @ Stop()
0x1a4: Pop(0)
0x1a5: @ StopAsync()
0x1a6: Pop(0)
0x1a7: @ StopSecondaryAnimation()
0x1a8: Pop(0)
0x1a9: Push("all")
0x1aa: @ PlayAnimation(Stack[-1], Stack[-2])
0x1ab: Pop(1)
0x1ac: @ WaitForAnimEnd()
0x1ad: Pop(0)
0x1ae: Push("all")
0x1af: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x1b0: Pop(1)
0x1b1: @ RemoveEnvelope()
0x1b2: Pop(0)
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty()
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty()
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: Push((int) 1)
0x1bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1be: Stack[-2] = "fire"
0x1bf: Return(); Pop(0)

0x1c0: Stack[-2] = "phys"
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1c3: @ GetPosition(Stack[-3])
0x1c4: Pop(0)
0x1c5: @@ GetPosition(Stack[-2])
0x1c6: Pop(0)
0x1c7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1c8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1c9: Return(); Pop(6)

0x1ca: PushEmpty(bool, bool)
0x1cb: Push("HasProperty")
0x1cc: Push((int) 2)
0x1cd: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1ce: Pop(1); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-5] = (bool) 0
0x1d1: Return(); Pop(2)

0x1d2: @@ HasProperty(Stack[-3], Stack[-1])
0x1d3: Pop(0)
0x1d4: Stack[-5] = Stack[-1]
0x1d5: Return(); Pop(2)

0x1d6: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x1d7: PushEmpty(bool, object, string)
0x1d8: Stack[-2] = Stack[-18]
0x1d9: Stack[-1] = "health"
0x1da: Call 0x1ca

0x1db: Pop(2)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: Stack[-16] = (float) 0.0
0x1df: Return(); Pop(12)

0x1e0: PushEmpty(bool, object, string)
0x1e1: Stack[-2] = Stack[-18]
0x1e2: Stack[-1] = "armor"
0x1e3: Call 0x1ca

0x1e4: Pop(2)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: Stack[-6] = (int) 0
0x1e8: GOTO 0x1ec

0x1e9: Push("armor")
0x1ea: @@ GetProperty(Stack[-1], Stack[-7])
0x1eb: Pop(1)
0x1ec: Push("armor_")
0x1ed: PushEmpty(string, int)
0x1ee: Stack[-1] = Stack[-16]
0x1ef: Call 0x1ba

0x1f0: Pop(1)
0x1f1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1f2: PushEmpty(bool, object, string)
0x1f3: Stack[-2] = Stack[-18]
0x1f4: Stack[-1] = Stack[-8]
0x1f5: Call 0x1ca

0x1f6: Pop(2)
0x1f7: Pop(1); Push((bool) Stack[-1] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-4] = (int) 0
0x1fa: GOTO 0x1fd

0x1fb: @@ GetProperty(Stack[-5], Stack[-4])
0x1fc: Pop(0)
0x1fd: PushEmpty(float, float, float)
0x1fe: Pop(0); Push(Stack[-9] + Stack[-7]);
0x1ff: Push((float)100.0)
0x200: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x201: Stack[-1] = (int) 1
0x202: Call 0x2a0

0x203: Stack[-6] = Stack[-3]
0x204: Pop(3)
0x205: Push("health")
0x206: @@ GetProperty(Stack[-1], Stack[-3])
0x207: Pop(1)
0x208: Push((int) 1)
0x209: Pop(1); Push(Stack[-1] - Stack[-4]);
0x20a: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x20b: Push("health")
0x20c: PushEmpty(float, float, float, float)
0x20d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x20e: Stack[-2] = (int) 0
0x20f: Stack[-1] = (int) 1
0x210: Call 0x2a7

0x211: Pop(3)
0x212: @@ SetProperty(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: Stack[-16] = Stack[-1]
0x215: Return(); Pop(12)

0x216: PushEmpty(bool, bool)
0x217: @@ IsDead(Stack[-1])
0x218: Pop(0)
0x219: Stack[-4] = Stack[-1]
0x21a: Return(); Pop(2)

0x21b: PushEmpty(object, object, object, object)
0x21c: Pop(0); Push((bool) Stack[-5] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-6] = (bool) 0
0x21f: Return(); Pop(4)

0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: Push("IsDead")
0x223: Push((int) 1)
0x224: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[-8]
0x228: Call 0x216

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22d: Stack[-6] = (bool) 0
0x22e: Return(); Pop(4)

0x22f: @ GetScene(Stack[-2])
0x230: Pop(0)
0x231: Pop(0); Push((bool) Stack[-2] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-6] = (bool) 0
0x234: Return(); Pop(4)

0x235: @@ GetScene(Stack[-1])
0x236: Pop(0)
0x237: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: Stack[-6] = (bool) 0
0x23a: Return(); Pop(4)

0x23b: Stack[-6] = (bool) 1
0x23c: Return(); Pop(4)

0x23d: Stack[-1] = 0
0x23e: Stack[-2] = 0
0x23f: PushEmpty(int, int)
0x240: PushEmpty(bool, object)
0x241: Stack[-1] = Stack[-5]
0x242: Call 0x21b

0x243: Pop(1)
0x244: Pop(1); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-4] = (bool) 0
0x247: Return(); Pop(2)

0x248: PushEmpty(bool, object, string)
0x249: Stack[-2] = Stack[-6]
0x24a: Stack[-1] = "noaccess"
0x24b: Call 0x1ca

0x24c: Pop(2)
0x24d: Pop(1); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-4] = (bool) 1
0x250: Return(); Pop(2)

0x251: Push("noaccess")
0x252: @@ GetProperty(Stack[-1], Stack[-2])
0x253: Pop(1)
0x254: Push((int) 0)
0x255: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x256: Return(); Pop(2)

0x257: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x258: PushEmpty(bool)
0x259: Stack[-1] = (bool) 0
0x25a: Push((int) 4)
0x25b: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: Push((int) 5)
0x25e: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Stack[-1] = (bool) 1
0x261: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x262: @ GetScene(Stack[-10])
0x263: Pop(0)
0x264: @ GetPosition(Stack[-8])
0x265: Pop(0)
0x266: @ GetEyesHeight(Stack[-7])
0x267: Pop(0)
0x268: Push(CvectorIndex(Stack[-8], 1))
0x269: Push((int) 2)
0x26a: Pop(1); Push(Stack[-9] / Stack[-1]);
0x26b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x26c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x26d: Push("scripted")
0x26e: Push(CVector(0.0, 0.0, 1.0))
0x26f: Push("blood.xml")
0x270: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Stack[-9] = 0
0x273: Stack[-10] = 0
0x274: Pop(0); Push((bool) Stack[-23] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Return(); Pop(20)

0x277: @ GetSecondaryAnimationType(Stack[-6])
0x278: Pop(0)
0x279: Push((int) 0)
0x27a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Return(); Pop(20)

0x27d: @@ GetPosition(Stack[-5])
0x27e: Pop(0)
0x27f: @ GetPosition(Stack[-4])
0x280: Pop(0)
0x281: @ GetDirection(Stack[-3])
0x282: Pop(0)
0x283: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x284: Push(CvectorIndex(Stack[-2], 0))
0x285: Push(CvectorIndex(Stack[-4], 0))
0x286: Pop(2); Push(Stack[-2] * Stack[-1]);
0x287: Push(CvectorIndex(Stack[-3], 2))
0x288: Push(CvectorIndex(Stack[-5], 2))
0x289: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28b: Push((int) 0)
0x28c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-1] = "fhit"
0x28f: GOTO 0x291

0x290: Stack[-1] = "bhit"
0x291: Push("hit_react")
0x292: Push("1")
0x293: Pop(1); Push(Stack[-3] + Stack[-1]);
0x294: Push("2")
0x295: Pop(1); Push(Stack[-4] + Stack[-1]);
0x296: Push((int) -10)
0x297: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x298: Pop(4)
0x299: Return(); Pop(20)

0x29a: PushEmpty(object, object)
0x29b: @ self(Stack[-1])
0x29c: Pop(0)
0x29d: Stack[-3] = Stack[-1]
0x29e: Return(); Pop(2)

0x29f: Stack[-1] = 0
0x2a0: PushEmpty()
0x2a1: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Stack[-3] = Stack[-2]
0x2a4: GOTO 0x2a6

0x2a5: Stack[-3] = Stack[-1]
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty()
0x2a8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-4] = Stack[-2]
0x2ab: Return(); Pop(0)

0x2ac: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ae: Stack[-4] = Stack[-1]
0x2af: Return(); Pop(0)

0x2b0: Stack[-4] = Stack[-3]
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(object, object)
0x2b3: @ CreateObjectSet(Stack[-1])
0x2b4: Pop(0)
0x2b5: Stack[-3] = Stack[-1]
0x2b6: Return(); Pop(2)

0x2b7: Stack[-1] = 0
0x2b8: PushEmpty(int, int, int, bool, int, int, int, bool)
0x2b9: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bb: Push("GenerateMoney: iMin > iMax")
0x2bc: @ Trace(Stack[-1])
0x2bd: Pop(1)
0x2be: Return(); Pop(8)

0x2bf: Stack[-4] = (int) 0
0x2c0: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c2: Pop(0); Push(Stack[-9] - Stack[-10]);
0x2c3: @ irand(Stack[-4], Stack[-1])
0x2c4: Pop(1)
0x2c5: GOTO 0x2ca

0x2c6: Push((int) 0)
0x2c7: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Return(); Pop(8)

0x2ca: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x2cb: Push((int) 0)
0x2cc: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: Return(); Pop(8)

0x2cf: Push("Money")
0x2d0: @ GetInvItemByName(Stack[-3], Stack[-1])
0x2d1: Pop(1)
0x2d2: Push((int) 0)
0x2d3: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x2d4: Pop(1)
0x2d5: Return(); Pop(8)

0x2d6: PushEmpty(int, bool, int, bool)
0x2d7: Push((int) 0)
0x2d8: @ ClearSubContainer(Stack[-1])
0x2d9: Pop(1)
0x2da: PushEmpty(int, int)
0x2db: Stack[-2] = (int) 600
0x2dc: Stack[-1] = (int) 1500
0x2dd: Call 0x2b8

0x2de: Pop(2)
0x2df: Push((int) 200)
0x2e0: @ irand(Stack[-3], Stack[-1])
0x2e1: Pop(1)
0x2e2: Push((int) 0)
0x2e3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(int, string)
0x2e6: Stack[-1] = "ognemet_ammo"
0x2e7: Call 0x2fb

0x2e8: Pop(1)
0x2e9: Push((int) 0)
0x2ea: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x2eb: Pop(2)
0x2ec: Push((int) 3)
0x2ed: @ irand(Stack[-3], Stack[-1])
0x2ee: Pop(1)
0x2ef: Push((int) 0)
0x2f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f2: PushEmpty(int, string)
0x2f3: Stack[-1] = "rusk"
0x2f4: Call 0x2fb

0x2f5: Pop(1)
0x2f6: Push((int) 0)
0x2f7: Push((int) 1)
0x2f8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Return(); Pop(4)

0x2fb: PushEmpty(int, int)
0x2fc: @ GetInvItemByName(Stack[-1], Stack[-3])
0x2fd: Pop(0)
0x2fe: Stack[-4] = Stack[-1]
0x2ff: Return(); Pop(2)

0x300: PushEmpty(float, object, object, float, object, object)
0x301: Push(GlobalVars[4])
0x302: PushEmpty(object)
0x303: Call 0x2b2

0x304: Stack[-2] = Stack[-1]
0x305: Pop(1)
0x306: GlobalVars[4] = Stack[-1]; Pop(1)
0x307: @ GetAttackDistance(Stack[-3])
0x308: Pop(0)
0x309: Push(GlobalVars[2])
0x30a: Push((float)600.0)
0x30b: Stack[-2] = Stack[-5] / Stack[-1]; Pop(1);
0x30c: GlobalVars[2] = Stack[-1]; Pop(1)
0x30d: @ GetScene(Stack[-2])
0x30e: Pop(0)
0x30f: Push("flame")
0x310: Push(CVector(0.0, 0.0, 0.0))
0x311: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x312: Pop(2)
0x313: PushEmpty(object)
0x314: Call 0x29a

0x315: Pop(0)
0x316: Push("flame")
0x317: @@ Attach(Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: Push(GlobalVars[3])
0x31a: Stack[-1] = (bool) 0
0x31b: GlobalVars[3] = Stack[-1]; Pop(1)
0x31c: Push((float)0.05)
0x31d: @@ SetLength(Stack[-1])
0x31e: Pop(1)
0x31f: Push(GlobalVars[0])
0x320: Stack[-1] = Stack[-2]
0x321: GlobalVars[0] = Stack[-1]; Pop(1)
0x322: Push((int) 70)
0x323: Push((float)0.1)
0x324: @ SetTimer(Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: Return(); Pop(6)

0x327: Stack[-1] = 0
0x328: Stack[-2] = 0
0x329: PushEmpty(float, float, object, cvector, float, float, float, object, cvector, float)
0x32a: Push(Stack[-11])
0x32b: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32c: Push(GlobalVars[2])
0x32d: Stack[-6] = Stack[-1]
0x32e: Pop(1)
0x32f: GOTO 0x331

0x330: Stack[-5] = (float) 0.05
0x331: Push(GlobalVars[0])
0x332: @@ GetLength(Stack[-5])
0x333: Pop(1)
0x334: Pop(0); Push((bool) Stack[-5] < Stack[-4])
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-4] = Stack[-5]
0x337: Push(GlobalVars[0])
0x338: @@ SetLength(Stack[-5])
0x339: Pop(1)
0x33a: Push(GlobalVars[3])
0x33b: Pop(1); Push((bool) Stack[-1] != Stack[-12])
0x33c: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x33d: Push(Stack[-11])
0x33e: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x33f: Push(GlobalVars[1])
0x340: Pop(1); Push((bool) Stack[-1] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x342: Stack[-2] = CVector(0.0, 0.0, 0.0)
0x343: @ GetHeight(Stack[-1])
0x344: Pop(0)
0x345: Push(CvectorIndex(Stack[-2], 1))
0x346: Stack[-1] = Stack[-2]
0x347: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x348: Push("flame_loop")
0x349: Push((int) 0)
0x34a: Push((int) 200)
0x34b: @ PlayLoopedGlobalSound(Stack[-6], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Push(GlobalVars[1])
0x34e: Stack[-1] = Stack[-4]
0x34f: GlobalVars[1] = Stack[-1]; Pop(1)
0x350: Stack[-3] = 0
0x351: Push(GlobalVars[1])
0x352: Push((int) 2)
0x353: @@ FadeIn(Stack[-1])
0x354: Pop(2)
0x355: GOTO 0x35d

0x356: Push(GlobalVars[1])
0x357: Pop(1); Push(( Stack[-1] != 0 )
0x358: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x359: Push(GlobalVars[1])
0x35a: Push((int) 2)
0x35b: @@ FadeOut(Stack[-1])
0x35c: Pop(2)
0x35d: Push(GlobalVars[3])
0x35e: Stack[-1] = Stack[-12]
0x35f: GlobalVars[3] = Stack[-1]; Pop(1)
0x360: Return(); Pop(10)

0x361: PushEmpty(cvector, float, cvector, float, bool, cvector, float, cvector, float, bool)
0x362: @ GetPosition(Stack[-5])
0x363: Pop(0)
0x364: @ GetHeight(Stack[-4])
0x365: Pop(0)
0x366: Push(CvectorIndex(Stack[-5], 1))
0x367: Push((int) 2)
0x368: Pop(1); Push(Stack[-6] / Stack[-1]);
0x369: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x36a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x36b: Stack[-3] = Stack[-11] - Stack[-5]; Pop(0);
0x36c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x36d: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x36e: Push((int) 50)
0x36f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-1] = (bool) 0
0x372: GOTO 0x377

0x373: Push(CvectorIndex(Stack[-3], 1))
0x374: Pop(1); Push(Stack[-1] / Stack[-3]);
0x375: Push((float)-0.14286)
0x376: Stack[-3] = Stack[-2] < Stack[-1]; Pop(2);
0x377: Push("all")
0x378: Push(Stack[-2])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Push("cattack")
0x37b: GOTO 0x37d

0x37c: Push("attack")
0x37d: @ PlayAnimation(Stack[-2], Stack[-1])
0x37e: Pop(2)
0x37f: Return(); Pop(10)

0x380: PushEmpty(cvector, float, cvector, float)
0x381: @@ GetPosition(Stack[-2])
0x382: Pop(0)
0x383: Push("@GetHeight")
0x384: Push((int) 1)
0x385: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x386: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x387: @@ GetHeight(Stack[-1])
0x388: Pop(0)
0x389: Push(CvectorIndex(Stack[-2], 1))
0x38a: Push((int) 2)
0x38b: Pop(1); Push(Stack[-3] / Stack[-1]);
0x38c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x38d: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x38e: PushEmpty(cvector)
0x38f: Stack[-1] = Stack[-3]
0x390: Call 0x361

0x391: Pop(1)
0x392: Return(); Pop(4)

0x393: PushEmpty(bool, float, bool, float)
0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[-7]
0x396: Call 0x23f

0x397: Pop(1)
0x398: Pop(1); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-6] = (bool) 0
0x39b: Return(); Pop(4)

0x39c: Push(GlobalVars[4])
0x39d: @@ in(Stack[-3], Stack[-6])
0x39e: Pop(1)
0x39f: Push(Stack[-2])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-6] = (bool) 1
0x3a2: Return(); Pop(4)

0x3a3: PushEmpty(bool, object, string)
0x3a4: Stack[-2] = Stack[-8]
0x3a5: Stack[-1] = "disease"
0x3a6: Call 0x1ca

0x3a7: Pop(2)
0x3a8: Pop(1); Push((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-6] = (bool) 0
0x3ab: Return(); Pop(4)

0x3ac: Push("disease")
0x3ad: @@ GetProperty(Stack[-1], Stack[-2])
0x3ae: Pop(1)
0x3af: Push((int) 0)
0x3b0: Stack[-7] = Stack[-2] > Stack[-1]; Pop(1);
0x3b1: Return(); Pop(4)

0x3b2: PushEmpty(bool, bool, bool, bool)
0x3b3: Pop(0); Push((bool) Stack[-5] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: Return(); Pop(4)

0x3b6: Push(GlobalVars[4])
0x3b7: @@ in(Stack[-3], Stack[-6])
0x3b8: Pop(1)
0x3b9: Pop(0); Push((bool) Stack[-2] == 0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bb: Push(GlobalVars[4])
0x3bc: @@ add(Stack[-6])
0x3bd: Pop(1)
0x3be: @ IsPlayerActor(Stack[-5], Stack[-1])
0x3bf: Pop(0)
0x3c0: Push(Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c2: Return(); Pop(4)

0x3c3: PushEmpty()
0x3c4: PushEmpty(object)
0x3c5: Stack[-1] = Stack[-2]
0x3c6: Push(-1, 0); TaskCall(2)
0x3c7: Call 0x114

0x3c8: Pop(-1, 0); TaskReturn
0x3c9: Pop(1)
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: PushEmpty(object, int, float)
0x3cd: Stack[-3] = Stack[-7]
0x3ce: Stack[-2] = Stack[-6]
0x3cf: Stack[-1] = Stack[-5]
0x3d0: Call 0x257

0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty(float, float)
0x3d4: Push("health")
0x3d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d7: Push("health")
0x3d8: @ GetProperty(Stack[-1], Stack[-2])
0x3d9: Pop(1)
0x3da: Push((int) 0)
0x3db: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: @ SignalDeath(Stack[-4])
0x3de: Pop(0)
0x3df: Return(); Pop(2)

0x3e0: PushEmpty()
0x3e1: PushEmpty(object)
0x3e2: Stack[-1] = Stack[-2]
0x3e3: Call 0x3c3

0x3e4: Pop(1)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty(float, bool, float, bool)
0x3e7: PushEmpty(bool, object, string)
0x3e8: Stack[-2] = Stack[-8]
0x3e9: Stack[-1] = "reputation"
0x3ea: Call 0x1ca

0x3eb: Pop(2)
0x3ec: Pop(1); Push((bool) Stack[-1] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-7] = (bool) 0
0x3ef: Return(); Pop(4)

0x3f0: Push("reputation")
0x3f1: @@ GetProperty(Stack[-1], Stack[-3])
0x3f2: Pop(1)
0x3f3: Push((float)0.5)
0x3f4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-7] = (bool) 0
0x3f7: Return(); Pop(4)

0x3f8: @ CanSee(Stack[-1], Stack[-6])
0x3f9: Pop(0)
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 1
0x3fc: Push(Stack[-2])
0x3fd: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3fe: PushEmpty(float, object)
0x3ff: Stack[-1] = Stack[-9]
0x400: Call 0x1c2

0x401: Pop(1)
0x402: Push((float)160000.0)
0x403: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: Stack[-1] = (bool) 0
0x406: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x407: Push((float)-0.2)
0x408: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x409: Pop(1)
0x40a: Stack[-7] = (bool) 1
0x40b: Return(); Pop(4)

0x40c: Stack[-7] = (bool) 0
0x40d: Return(); Pop(4)

0x40e: PushEmpty(object, float, object, bool, float, float, float, object, float, object, bool, float, float, float)
0x40f: Push((int) 70)
0x410: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Return(); Pop(14)

0x413: Push(GlobalVars[0])
0x414: Pop(1); Push((bool) Stack[-1] == 0)
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: Return(); Pop(14)

0x417: Push(GlobalVars[0])
0x418: @@ Intersect(Stack[-8], Stack[-7])
0x419: Pop(1)
0x41a: Push(GlobalVars[0])
0x41b: Push(GlobalVars[3])
0x41c: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x41d: PushEmpty(float, float, float)
0x41e: Stack[-2] = Stack[-10]
0x41f: Push(GlobalVars[2])
0x420: Stack[-2] = Stack[-1]
0x421: Pop(1)
0x422: Call 0x2a0

0x423: Pop(2)
0x424: GOTO 0x426

0x425: Push((float)0.05)
0x426: @@ SetLength(Stack[-1])
0x427: Pop(2)
0x428: @@ Next(Stack[-4], Stack[-5])
0x429: Pop(0)
0x42a: Push(Stack[-4])
0x42b: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x42c: PushEmpty(bool)
0x42d: Stack[-1] = (bool) 0
0x42e: Pop(0); Push(( Stack[-6] != 0 )
0x42f: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x430: PushEmpty(object)
0x431: Call 0x29a

0x432: Pop(0)
0x433: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x435: Stack[-1] = (bool) 1
0x436: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x437: PushEmpty(float, object, float, int)
0x438: Stack[-3] = Stack[-9]
0x439: Stack[-2] = (float) 0.1
0x43a: Stack[-1] = (int) 1
0x43b: Call 0x1d6

0x43c: Stack[-7] = Stack[-4]
0x43d: Pop(4)
0x43e: PushEmpty(bool, object, string)
0x43f: Stack[-2] = Stack[-8]
0x440: Stack[-1] = "disease"
0x441: Call 0x1ca

0x442: Pop(2)
0x443: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x444: Push("disease")
0x445: @@ GetProperty(Stack[-1], Stack[-3])
0x446: Pop(1)
0x447: Push((float)0.02)
0x448: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-2] = (int) 0
0x44b: GOTO 0x44e

0x44c: Push((float)0.02)
0x44d: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0x44e: Push("disease")
0x44f: @@ SetProperty(Stack[-1], Stack[-3])
0x450: Pop(1)
0x451: PushEmpty(bool, object, string)
0x452: Stack[-2] = Stack[-8]
0x453: Stack[-1] = "fire"
0x454: Call 0x1ca

0x455: Pop(2)
0x456: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x457: Push("fire")
0x458: @@ GetProperty(Stack[-1], Stack[-2])
0x459: Pop(1)
0x45a: Push("fire")
0x45b: Push((float)0.1)
0x45c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x45d: @@ SetProperty(Stack[-2], Stack[-1])
0x45e: Pop(2)
0x45f: GOTO 0x428

0x460: Return(); Pop(14)

0x461: Stack[-5] = 0
0x462: Stack[-7] = 0
0x463: PushEmpty()
0x464: Stack[-2] = (bool) 0
0x465: Pop(0); Push(( Stack[-1] != 0 )
0x466: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x467: PushEmpty(float, object)
0x468: Stack[-1] = Stack[-3]
0x469: Call 0x1c2

0x46a: Pop(1)
0x46b: Push((float)302500.0)
0x46c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: Stack[-2] = (bool) 1
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: Stack[-2] = (bool) 0
0x472: PushEmpty(bool, object)
0x473: Stack[-1] = Stack[-3]
0x474: Call 0x4a6

0x475: Pop(1)
0x476: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x477: PushEmpty(bool, object)
0x478: Stack[-1] = Stack[-3]
0x479: Call 0x463

0x47a: Pop(1)
0x47b: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47c: Stack[-2] = (bool) 1
0x47d: Return(); Pop(0)

0x47e: PushEmpty()
0x47f: Stack[-2] = (bool) 0
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[-3]
0x482: Call 0x4a6

0x483: Pop(1)
0x484: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x485: PushEmpty(bool, object)
0x486: Stack[-1] = Stack[-3]
0x487: Call 0x463

0x488: Pop(1)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Stack[-2] = (bool) 1
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: Pop(0); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-3] = (bool) 0
0x490: Return(); Pop(0)

0x491: Stack[-3] = (bool) 1
0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[-4]
0x494: Call 0x4a6

0x495: Pop(1)
0x496: Pop(1); Push((bool) Stack[-1] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x498: PushEmpty(float, object)
0x499: Stack[-1] = Stack[-3]
0x49a: Call 0x1c2

0x49b: Pop(1)
0x49c: PushEmpty(float, object)
0x49d: Stack[-1] = Stack[-5]
0x49e: Call 0x1c2

0x49f: Pop(1)
0x4a0: Push((int) 25)
0x4a1: Pop(2); Push(Stack[-2] - Stack[-1]);
0x4a2: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Stack[-3] = (bool) 0
0x4a5: Return(); Pop(0)

0x4a6: PushEmpty()
0x4a7: PushEmpty(bool, object)
0x4a8: Stack[-1] = Stack[-3]
0x4a9: Call 0x393

0x4aa: Stack[-4] = Stack[-2]
0x4ab: Pop(2)
0x4ac: Return(); Pop(0)

