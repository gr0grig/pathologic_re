GlobalVarCount = 5
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 float 
	G_VAR_3 bool 
	G_VAR_4 object 

Strings:
	GetPosition
	GetPFPosition
	walk
	run
	all
	attack_on
	bjump
	attack_off
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	disease
	cattack
	GetProperty
	SetProperty
	fire
	phys
	HasProperty
	HasProperty
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
	ognemet_ammo
	rusk
	flame
	Attach
	SetLength
	GetLength
	flame_loop
	FadeIn
	FadeOut
	@GetHeight
	GetHeight
	in
	add
	reputation
	Intersect
	Next

Import:
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	FollowPath (3 args)
	StopGroup0 (0 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	StopAnimation (0 args)
	Face (1 args)
	SetAttackState (1 args)
	StopAsync (0 args)
	ReportAttack (1 args)
	RemoveActor (1 args)
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
	IsLoaded (1 args)
	self (1 args)
	CreateObjectSet (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetAttackDistance (1 args)
	AddActorByType (4 args)
	GetHeight (1 args)
	PlayLoopedGlobalSound (5 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)

RunOp = 0x199
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 2
		EVENT_1 Op = 0x12 Vars = (object)
		EVENT_3 Op = 0x20 Vars = (object)
		EVENT_17 Op = 0x2e Vars = (object)
		EVENT_7 Op = 0x42 Vars = (int)
		EVENT_10 Op = 0xc4 Vars = (object)
		EVENT_41 Op = 0xcf Vars = (object)
	GTASK_1 Vars = (bool, object, object) Params = 2
		EVENT_17 Op = 0xeb Vars = (object)
		EVENT_7 Op = 0xf8 Vars = (int)
		EVENT_10 Op = 0x17a Vars = (object)
		EVENT_41 Op = 0x185 Vars = (object)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_1 Op = 0x1a1 Vars = (object)
		EVENT_3 Op = 0x1bc Vars = (object)
		EVENT_17 Op = 0x1ca Vars = (object)
		EVENT_30 Op = 0x1de Vars = (object, object)
		EVENT_7 Op = 0x1ea Vars = (int)
		EVENT_10 Op = 0x229 Vars = (object)
		EVENT_28 Op = 0x22d Vars = ()
		EVENT_41 Op = 0x237 Vars = (object)
	GTASK_3  Params = 0
		EVENT_1 Op = 0x242 Vars = (object)
		EVENT_3 Op = 0x25d Vars = (object)
		EVENT_17 Op = 0x26b Vars = (object)
		EVENT_30 Op = 0x27f Vars = (object, object)
		EVENT_7 Op = 0x28b Vars = (int)
	GTASK_4 Vars = (object) Params = 2
		EVENT_17 Op = 0x34e Vars = (object)
		EVENT_7 Op = 0x359 Vars = (int)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x381 Vars = (object)
		EVENT_22 Op = 0x3f6 Vars = (object, int, float, float)
		EVENT_16 Op = 0x3f8 Vars = (object, string)
		EVENT_41 Op = 0x3fa Vars = (object)
	GTASK_6  Params = 1
		EVENT_41 Op = 0x46a Vars = (object)
		EVENT_1 Op = 0x473 Vars = (object)
		EVENT_3 Op = 0x481 Vars = (object)
		EVENT_17 Op = 0x48f Vars = (object)
		EVENT_7 Op = 0x4a3 Vars = (int)

Events:
EVENT_22 Op = 0x768 Vars = (object, int, float, float)
EVENT_16 Op = 0x770 Vars = (object, string)
EVENT_41 Op = 0x77d Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(bool, object, float, float, bool, bool)
0x2: Stack[-5] = Stack[-7]
0x3: Stack[-4] = (int) 350
0x4: Stack[-3] = (int) 5000
0x5: Stack[-2] = (bool) 0
0x6: Stack[-1] = (bool) 1
0x7: Call 0x4c

0x8: Stack[-8] = Stack[-6]
0x9: Pop(6)
0xa: Return(); Pop(0)

0xb: PushEmpty()
0xc: PushEmpty(bool, object)
0xd: Stack[-1] = Stack[-3]
0xe: Call 0x546

0xf: Stack[-4] = Stack[-2]
0x10: Pop(2)
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: PushEmpty(bool, object)
0x14: Stack[-1] = Stack[-3]
0x15: Call 0x701

0x16: Pop(1)
0x17: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x18: PushEmpty()
0x19: Call 0xc8

0x1a: Pop(0)
0x1b: PushEmpty(object)
0x1c: Stack[-1] = Stack[-2]
0x1d: Call 0x708

0x1e: Pop(1)
0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: PushEmpty(bool, object)
0x22: Stack[-1] = Stack[-3]
0x23: Call 0x70e

0x24: Pop(1)
0x25: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x26: PushEmpty()
0x27: Call 0xc8

0x28: Pop(0)
0x29: PushEmpty(object)
0x2a: Stack[-1] = Stack[-2]
0x2b: Call 0x715

0x2c: Pop(1)
0x2d: Return(); Pop(0)

0x2e: PushEmpty()
0x2f: PushEmpty(bool, object)
0x30: Stack[-1] = Stack[-3]
0x31: Call 0x52e

0x32: Pop(1)
0x33: Pop(1); Push((bool) Stack[-1] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: PushEmpty(object)
0x36: Stack[-1] = Stack[-2]
0x37: Call 0x745

0x38: Pop(1)
0x39: Return(); Pop(0)

0x3a: PushEmpty()
0x3b: Call 0xc8

0x3c: Pop(0)
0x3d: PushEmpty(object)
0x3e: Stack[-1] = Stack[-2]
0x3f: Call 0x756

0x40: Pop(1)
0x41: Return(); Pop(0)

0x42: PushEmpty()
0x43: PushEmpty(int)
0x44: Stack[-1] = Stack[-2]
0x45: Call 0xb2

0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Stack[-1] = Stack[-2]
0x49: Call 0x7ab

0x4a: Pop(1)
0x4b: Return(); Pop(0)

0x4c: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4e: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4f: Stack[-7] = Stack[-17]
0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[-23]
0x52: Call 0xb

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: Stack[-22] = (bool) 0
0x57: Return(); Pop(16)

0x58: @@ GetPosition(Stack[-5])
0x59: Pop(0)
0x5a: @ GetPosition(Stack[-4])
0x5b: Pop(0)
0x5c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: Push((int) 0)
0x61: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x63: Pop(0); Push(Stack[-20] * Stack[-20]);
0x64: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x68: @ Stop()
0x69: Pop(0)
0x6a: Stack[-22] = (bool) 0
0x6b: Return(); Pop(16)

0x6c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x6d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x6f: @@ GetPFPosition(Stack[-5])
0x70: Pop(0)
0x71: @ FindPathTo(Stack[-1], Stack[-5])
0x72: Pop(0)
0x73: Pop(0); Push(( Stack[-1] != 0 )
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Stack[-6] = Stack[-1]
0x76: Stack[-1] = 0
0x77: Pop(0); Push(( Stack[-6] != 0 )
0x78: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x79: Push(Stack[-7])
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: Stack[-7] = (bool) 0
0x7c: @ RotatePath(Stack[-6], Stack[-8])
0x7d: Pop(0)
0x7e: Pop(0); Push((bool) Stack[-8] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: GOTO 0xb0

0x81: Push((int) 0)
0x82: Push((float)0.3)
0x83: @ SetTimer(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: PushEmpty(string)
0x86: Call 0xd8

0x87: Pop(0)
0x88: PushEmpty(string)
0x89: Call 0xda

0x8a: Pop(0)
0x8b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: Pop(0); Push((bool) Stack[-8] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Stack[-6] = 0
0x92: GOTO 0xb0

0x93: GOTO 0x95

0x94: GOTO 0xaf

0x95: GOTO 0x97

0x96: Stack[-6] = 0
0x97: GOTO 0xa8

0x98: Push((int) 0)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Push((float)0.5)
0x9c: @ Sleep(Stack[-1], Stack[-9])
0x9d: Pop(1)
0x9e: Pop(0); Push((bool) Stack[-8] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-6] = 0
0xa3: GOTO 0xb0

0xa4: Push((int) 0)
0xa5: Push((float)0.3)
0xa6: @ SetTimer(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Stack[-1] = 0
0xa9: GOTO 0xae

0xaa: Push((int) 0)
0xab: @ KillTimer(Stack[-1])
0xac: Pop(1)
0xad: GOTO 0xb0

0xae: Stack[-6] = 0
0xaf: GOTO 0x50

0xb0: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xb1: Return(); Pop(16)

0xb2: PushEmpty()
0xb3: Push((int) 0)
0xb4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call 0xb

0xba: Pop(1)
0xbb: Pop(1); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xbe: Push((int) 0)
0xbf: @ KillTimer(Stack[-1])
0xc0: Pop(1)
0xc1: @ Stop()
0xc2: Pop(0)
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: @ RequestClearPath(Stack[-1])
0xc6: Pop(0)
0xc7: Return(); Pop(0)

0xc8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc9: Push((int) 0)
0xca: @ KillTimer(Stack[-1])
0xcb: Pop(1)
0xcc: @ Stop()
0xcd: Pop(0)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty()
0xd1: Call 0xc8

0xd2: Pop(0)
0xd3: PushEmpty(object)
0xd4: Stack[-1] = Stack[-2]
0xd5: Call 0x77d

0xd6: Pop(1)
0xd7: Return(); Pop(0)

0xd8: Stack[-1] = "walk"
0xd9: Return(); Pop(0)

0xda: Stack[-1] = "run"
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: PushEmpty(bool, object, float, float, bool, bool)
0xdf: Stack[-5] = Stack[-7]
0xe0: Stack[-4] = (float) 500.0
0xe1: Stack[-3] = (int) 5000
0xe2: Stack[-2] = (bool) 0
0xe3: Stack[-1] = (bool) 1
0xe4: Call 0x102

0xe5: Pop(5)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Stack[2 + Tasks[-1].StackPointer] = 0
0xe9: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0xea: Return(); Pop(0)

0xeb: PushEmpty()
0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[-3]
0xee: Call 0x52e

0xef: Pop(1)
0xf0: Pop(1); Push((bool) Stack[-1] == 0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Return(); Pop(0)

0xf3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf4: PushEmpty()
0xf5: Call 0x17e

0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: PushEmpty(int)
0xfa: Stack[-1] = Stack[-2]
0xfb: Call 0x168

0xfc: Pop(1)
0xfd: PushEmpty(int)
0xfe: Stack[-1] = Stack[-2]
0xff: Call 0x7ab

0x100: Pop(1)
0x101: Return(); Pop(0)

0x102: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x103: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x104: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x105: Stack[-7] = Stack[-17]
0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[-23]
0x108: Call 0x18e

0x109: Pop(1)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-22] = (bool) 0
0x10d: Return(); Pop(16)

0x10e: @@ GetPosition(Stack[-5])
0x10f: Pop(0)
0x110: @ GetPosition(Stack[-4])
0x111: Pop(0)
0x112: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x113: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x114: PushEmpty(bool)
0x115: Stack[-1] = (bool) 0
0x116: Push((int) 0)
0x117: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x119: Pop(0); Push(Stack[-20] * Stack[-20]);
0x11a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 1
0x11d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11e: @ Stop()
0x11f: Pop(0)
0x120: Stack[-22] = (bool) 0
0x121: Return(); Pop(16)

0x122: Pop(0); Push(Stack[-20] * Stack[-20]);
0x123: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x125: @@ GetPFPosition(Stack[-5])
0x126: Pop(0)
0x127: @ FindPathTo(Stack[-1], Stack[-5])
0x128: Pop(0)
0x129: Pop(0); Push(( Stack[-1] != 0 )
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-6] = Stack[-1]
0x12c: Stack[-1] = 0
0x12d: Pop(0); Push(( Stack[-6] != 0 )
0x12e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x12f: Push(Stack[-7])
0x130: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x131: Stack[-7] = (bool) 0
0x132: @ RotatePath(Stack[-6], Stack[-8])
0x133: Pop(0)
0x134: Pop(0); Push((bool) Stack[-8] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: GOTO 0x166

0x137: Push((int) 0)
0x138: Push((float)0.3)
0x139: @ SetTimer(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: PushEmpty(string)
0x13c: Call 0x195

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Call 0x197

0x140: Pop(0)
0x141: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x142: Pop(2)
0x143: Pop(0); Push((bool) Stack[-8] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x145: Push( Stack[0 + Tasks[-1].StackPointer] )
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: Stack[-6] = 0
0x148: GOTO 0x166

0x149: GOTO 0x14b

0x14a: GOTO 0x165

0x14b: GOTO 0x14d

0x14c: Stack[-6] = 0
0x14d: GOTO 0x15e

0x14e: Push((int) 0)
0x14f: @ KillTimer(Stack[-1])
0x150: Pop(1)
0x151: Push((float)0.5)
0x152: @ Sleep(Stack[-1], Stack[-9])
0x153: Pop(1)
0x154: Pop(0); Push((bool) Stack[-8] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x156: Push( Stack[0 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x158: Stack[-6] = 0
0x159: GOTO 0x166

0x15a: Push((int) 0)
0x15b: Push((float)0.3)
0x15c: @ SetTimer(Stack[-2], Stack[-1])
0x15d: Pop(2)
0x15e: Stack[-1] = 0
0x15f: GOTO 0x164

0x160: Push((int) 0)
0x161: @ KillTimer(Stack[-1])
0x162: Pop(1)
0x163: GOTO 0x166

0x164: Stack[-6] = 0
0x165: GOTO 0x106

0x166: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x167: Return(); Pop(16)

0x168: PushEmpty()
0x169: Push((int) 0)
0x16a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: Return(); Pop(0)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call 0x18e

0x170: Pop(1)
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x174: Push((int) 0)
0x175: @ KillTimer(Stack[-1])
0x176: Pop(1)
0x177: @ Stop()
0x178: Pop(0)
0x179: Return(); Pop(0)

0x17a: PushEmpty()
0x17b: @ RequestClearPath(Stack[-1])
0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x17f: Push((int) 0)
0x180: @ KillTimer(Stack[-1])
0x181: Pop(1)
0x182: @ Stop()
0x183: Pop(0)
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: PushEmpty()
0x187: Call 0x17e

0x188: Pop(0)
0x189: PushEmpty(object)
0x18a: Stack[-1] = Stack[-2]
0x18b: Call 0x77d

0x18c: Pop(1)
0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool, object)
0x190: Stack[-1] = Stack[-3]
0x191: Call 0x52e

0x192: Stack[-4] = Stack[-2]
0x193: Pop(2)
0x194: Return(); Pop(0)

0x195: Stack[-1] = "walk"
0x196: Return(); Pop(0)

0x197: Stack[-1] = "run"
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Call 0x62e

0x19b: Pop(0)
0x19c: PushEmpty()
0x19d: Call 0x1f0

0x19e: Pop(0)
0x19f: GOTO 0x19c

0x1a0: Return(); Pop(0)

0x1a1: PushEmpty()
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[-3]
0x1a4: Call 0x701

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call 0x230

0x1a9: Pop(0)
0x1aa: PushEmpty(object)
0x1ab: Stack[-1] = Stack[-2]
0x1ac: Call 0x708

0x1ad: Pop(1)
0x1ae: GOTO 0x1bb

0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[-3]
0x1b1: Call 0x71b

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call 0x230

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-1] = Stack[-2]
0x1b9: Call 0x73b

0x1ba: Pop(1)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty()
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[-3]
0x1bf: Call 0x70e

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c2: PushEmpty()
0x1c3: Call 0x230

0x1c4: Pop(0)
0x1c5: PushEmpty(object)
0x1c6: Stack[-1] = Stack[-2]
0x1c7: Call 0x715

0x1c8: Pop(1)
0x1c9: Return(); Pop(0)

0x1ca: PushEmpty()
0x1cb: PushEmpty(bool, object)
0x1cc: Stack[-1] = Stack[-3]
0x1cd: Call 0x52e

0x1ce: Pop(1)
0x1cf: Pop(1); Push((bool) Stack[-1] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object)
0x1d2: Stack[-1] = Stack[-2]
0x1d3: Call 0x745

0x1d4: Pop(1)
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: Call 0x230

0x1d8: Pop(0)
0x1d9: PushEmpty(object)
0x1da: Stack[-1] = Stack[-2]
0x1db: Call 0x756

0x1dc: Pop(1)
0x1dd: Return(); Pop(0)

0x1de: PushEmpty()
0x1df: PushEmpty(bool, object, object)
0x1e0: Stack[-2] = Stack[-5]
0x1e1: Stack[-1] = Stack[-4]
0x1e2: Call 0x783

0x1e3: Pop(2)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e5: PushEmpty(object)
0x1e6: Stack[-1] = Stack[-3]
0x1e7: Call 0x1ca

0x1e8: Pop(1)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: PushEmpty(int)
0x1ec: Stack[-1] = Stack[-2]
0x1ed: Call 0x7ab

0x1ee: Pop(1)
0x1ef: Return(); Pop(0)

0x1f0: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x1f1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1f2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1f3: Push((float)0.5)
0x1f4: @ rand(Stack[-8], Stack[-1])
0x1f5: Pop(1)
0x1f6: @ Sleep(Stack[-7])
0x1f7: Pop(0)
0x1f8: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x1fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fc: @ GetPosition(Stack[-5])
0x1fd: Pop(0)
0x1fe: @ GetCameraFarDistance(Stack[-4])
0x1ff: Pop(0)
0x200: Push((float)2.5)
0x201: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x202: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x203: Pop(0)
0x204: Push(Stack[-3])
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: GOTO 0x20b

0x207: Push((int) 1)
0x208: @ Sleep(Stack[-1])
0x209: Pop(1)
0x20a: GOTO 0x1fc

0x20b: GOTO 0x20d

0x20c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x20d: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x20e: Pop(0)
0x20f: Pop(0); Push(( Stack[-2] != 0 )
0x210: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x211: @ RotatePath(Stack[-2], Stack[-1])
0x212: Pop(0)
0x213: Push(Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x215: PushEmpty(bool)
0x216: Call 0x240

0x217: Pop(0)
0x218: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x219: Pop(1)
0x21a: Stack[-2] = 0
0x21b: Push(Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: PushEmpty()
0x21e: Push(-0, 0); TaskCall(3)
0x21f: Call 0x291

0x220: Pop(-0, 0); TaskReturn
0x221: Pop(0)
0x222: GOTO 0x226

0x223: Push((int) 1)
0x224: @ Sleep(Stack[-1])
0x225: Pop(1)
0x226: Stack[-2] = 0
0x227: GOTO 0x1f8

0x228: Return(); Pop(14)

0x229: PushEmpty()
0x22a: @ RequestClearPath(Stack[-1])
0x22b: Pop(0)
0x22c: Return(); Pop(0)

0x22d: @ Stop()
0x22e: Pop(0)
0x22f: Return(); Pop(0)

0x230: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x231: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x232: @ Stop()
0x233: Pop(0)
0x234: @ StopGroup0()
0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: PushEmpty()
0x239: Call 0x230

0x23a: Pop(0)
0x23b: PushEmpty(object)
0x23c: Stack[-1] = Stack[-2]
0x23d: Call 0x77d

0x23e: Pop(1)
0x23f: Return(); Pop(0)

0x240: Stack[-1] = (bool) 0
0x241: Return(); Pop(0)

0x242: PushEmpty()
0x243: PushEmpty(bool, object)
0x244: Stack[-1] = Stack[-3]
0x245: Call 0x701

0x246: Pop(1)
0x247: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x248: PushEmpty()
0x249: Call 0x2d6

0x24a: Pop(0)
0x24b: PushEmpty(object)
0x24c: Stack[-1] = Stack[-2]
0x24d: Call 0x708

0x24e: Pop(1)
0x24f: GOTO 0x25c

0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[-3]
0x252: Call 0x71b

0x253: Pop(1)
0x254: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x255: PushEmpty()
0x256: Call 0x2d6

0x257: Pop(0)
0x258: PushEmpty(object)
0x259: Stack[-1] = Stack[-2]
0x25a: Call 0x73b

0x25b: Pop(1)
0x25c: Return(); Pop(0)

0x25d: PushEmpty()
0x25e: PushEmpty(bool, object)
0x25f: Stack[-1] = Stack[-3]
0x260: Call 0x70e

0x261: Pop(1)
0x262: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x263: PushEmpty()
0x264: Call 0x2d6

0x265: Pop(0)
0x266: PushEmpty(object)
0x267: Stack[-1] = Stack[-2]
0x268: Call 0x715

0x269: Pop(1)
0x26a: Return(); Pop(0)

0x26b: PushEmpty()
0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[-3]
0x26e: Call 0x52e

0x26f: Pop(1)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x272: PushEmpty(object)
0x273: Stack[-1] = Stack[-2]
0x274: Call 0x745

0x275: Pop(1)
0x276: Return(); Pop(0)

0x277: PushEmpty()
0x278: Call 0x2d6

0x279: Pop(0)
0x27a: PushEmpty(object)
0x27b: Stack[-1] = Stack[-2]
0x27c: Call 0x756

0x27d: Pop(1)
0x27e: Return(); Pop(0)

0x27f: PushEmpty()
0x280: PushEmpty(bool, object, object)
0x281: Stack[-2] = Stack[-5]
0x282: Stack[-1] = Stack[-4]
0x283: Call 0x783

0x284: Pop(2)
0x285: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x286: PushEmpty(object)
0x287: Stack[-1] = Stack[-3]
0x288: Call 0x26b

0x289: Pop(1)
0x28a: Return(); Pop(0)

0x28b: PushEmpty()
0x28c: PushEmpty(int)
0x28d: Stack[-1] = Stack[-2]
0x28e: Call 0x7ab

0x28f: Pop(1)
0x290: Return(); Pop(0)

0x291: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x292: @ WaitForAnimEnd()
0x293: Pop(0)
0x294: PushEmpty(bool)
0x295: Call 0x5ab

0x296: Pop(0)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Return(); Pop(14)

0x29a: PushEmpty(int)
0x29b: Call 0x5d5

0x29c: Stack[-8] = Stack[-1]
0x29d: Pop(1)
0x29e: Stack[-6] = (int) 0
0x29f: PushEmpty(bool)
0x2a0: Stack[-1] = (bool) 0
0x2a1: Push((int) 5)
0x2a2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a4: PushEmpty(bool)
0x2a5: Call 0x5ab

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 1
0x2a9: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2aa: Push((int) 3)
0x2ab: @ irand(Stack[-6], Stack[-1])
0x2ac: Pop(1)
0x2ad: Push((int) 0)
0x2ae: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2b0: Push(Stack[-7])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b2: @ irand(Stack[-4], Stack[-7])
0x2b3: Pop(0)
0x2b4: Push("all")
0x2b5: PushEmpty(string, int)
0x2b6: Stack[-1] = Stack[-7]
0x2b7: Call 0x5ce

0x2b8: Pop(1)
0x2b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ba: Pop(2)
0x2bb: @ WaitForAnimEnd(Stack[-3])
0x2bc: Pop(0)
0x2bd: Pop(0); Push((bool) Stack[-3] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: GOTO 0x2d5

0x2c0: GOTO 0x2d2

0x2c1: Push((int) 1)
0x2c2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c4: Push((int) 4)
0x2c5: @ rand(Stack[-3], Stack[-1])
0x2c6: Pop(1)
0x2c7: Push((int) 1)
0x2c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c9: @ Sleep(Stack[-1], Stack[-2])
0x2ca: Pop(1)
0x2cb: Pop(0); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d5

0x2ce: GOTO 0x2d2

0x2cf: Push(Stack[-6])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2d5

0x2d2: Push((int) 1)
0x2d3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2d4: GOTO 0x29f

0x2d5: Return(); Pop(14)

0x2d6: @ StopAnimation()
0x2d7: Pop(0)
0x2d8: @ StopGroup0()
0x2d9: Pop(0)
0x2da: Return(); Pop(0)

0x2db: PushEmpty(bool, float, object, bool, float, object)
0x2dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x2dd: @ Face(Stack[-7])
0x2de: Pop(0)
0x2df: Push((bool) 1)
0x2e0: @ SetAttackState(Stack[-1])
0x2e1: Pop(1)
0x2e2: Stack[-3] = (bool) 0
0x2e3: PushEmpty(bool, object)
0x2e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e5: Call 0x800

0x2e6: Pop(1)
0x2e7: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x2e8: PushEmpty(float, object)
0x2e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ea: Call 0x4b1

0x2eb: Stack[-4] = Stack[-2]
0x2ec: Pop(2)
0x2ed: Push((float)90000.0)
0x2ee: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2f0: Pop(0); Push((bool) Stack[-3] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f2: Push((bool) 1)
0x2f3: @ SetAttackState(Stack[-1])
0x2f4: Pop(1)
0x2f5: PushEmpty(bool)
0x2f6: Stack[-1] = (bool) 1
0x2f7: Call 0x657

0x2f8: Pop(1)
0x2f9: Push("all")
0x2fa: Push("attack_on")
0x2fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Stack[-3] = (bool) 1
0x2fe: GOTO 0x303

0x2ff: Push("all")
0x300: Push("bjump")
0x301: @ PlayAnimation(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: GOTO 0x33a

0x304: Push((float)490000.0)
0x305: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x307: Push(Stack[-3])
0x308: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x309: Push((bool) 0)
0x30a: @ SetAttackState(Stack[-1])
0x30b: Pop(1)
0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: Call 0x657

0x30f: Pop(1)
0x310: Push("all")
0x311: Push("attack_off")
0x312: @ PlayAnimation(Stack[-2], Stack[-1])
0x313: Pop(2)
0x314: Stack[-3] = (bool) 0
0x315: GOTO 0x326

0x316: @ StopAsync()
0x317: Pop(0)
0x318: PushEmpty(object, object)
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Push(-2, 3); TaskCall(1)
0x31b: Call 0xdc

0x31c: Pop(-2, 3); TaskReturn
0x31d: Stack[-3] = Stack[-2]
0x31e: Pop(2)
0x31f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x320: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x322: GOTO 0x33f

0x323: @ Face(Stack[-0])
0x324: Pop(0)
0x325: Stack[-1] = 0
0x326: GOTO 0x33a

0x327: Pop(0); Push((bool) Stack[-3] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x329: Push((bool) 1)
0x32a: @ SetAttackState(Stack[-1])
0x32b: Pop(1)
0x32c: PushEmpty(bool)
0x32d: Stack[-1] = (bool) 1
0x32e: Call 0x657

0x32f: Pop(1)
0x330: Push("all")
0x331: Push("attack_on")
0x332: @ PlayAnimation(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: Stack[-3] = (bool) 1
0x335: GOTO 0x33a

0x336: PushEmpty(object)
0x337: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x338: Call 0x6ae

0x339: Pop(1)
0x33a: @ WaitForAnimEnd()
0x33b: Pop(0)
0x33c: @ ReportAttack(Stack[-0])
0x33d: Pop(0)
0x33e: GOTO 0x2e3

0x33f: Push((bool) 0)
0x340: @ SetAttackState(Stack[-1])
0x341: Pop(1)
0x342: Push("all")
0x343: Push("attack_off")
0x344: @ PlayAnimation(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: PushEmpty(bool)
0x347: Stack[-1] = (bool) 0
0x348: Call 0x657

0x349: Pop(1)
0x34a: @ StopAsync()
0x34b: Pop(0)
0x34c: Stack[-8] = Stack[0 + Tasks[-1].StackPointer]
0x34d: Return(); Pop(6)

0x34e: PushEmpty()
0x34f: PushEmpty(object)
0x350: Stack[-1] = Stack[-2]
0x351: Call 0x745

0x352: Pop(1)
0x353: Pop(0); Push(( Stack[-1] != 0 )
0x354: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x355: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x356: @ Face(Stack[-0])
0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: PushEmpty()
0x35a: PushEmpty(int)
0x35b: Stack[-1] = Stack[-2]
0x35c: Call 0x7ab

0x35d: Pop(1)
0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: Push((int) 70)
0x361: @ KillTimer(Stack[-1])
0x362: Pop(1)
0x363: PushEmpty(bool)
0x364: Stack[-1] = (bool) 0
0x365: Call 0x657

0x366: Pop(1)
0x367: Push(GlobalVars[0])
0x368: @ RemoveActor(Stack[-1])
0x369: Pop(1)
0x36a: PushEmpty()
0x36b: Call 0x604

0x36c: Pop(0)
0x36d: PushEmpty(object)
0x36e: Stack[-1] = Stack[-2]
0x36f: Call 0x372

0x370: Pop(1)
0x371: Return(); Pop(0)

0x372: PushEmpty()
0x373: EventDisable(0)
0x374: PushEmpty(object)
0x375: Stack[-1] = Stack[-2]
0x376: Call 0x389

0x377: Pop(1)
0x378: Push((int) 50)
0x379: Push((int) 40)
0x37a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: EventEnable(0)
0x37d: @ Hold()
0x37e: Pop(0)
0x37f: GOTO 0x37d

0x380: Return(); Pop(0)

0x381: PushEmpty(bool, bool)
0x382: @ IsOverrideActive(Stack[-1])
0x383: Pop(0)
0x384: Pop(0); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x386: @ WorkWithCorpse(Stack[-3])
0x387: Pop(0)
0x388: Return(); Pop(2)

0x389: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x38a: Pop(0); Push((bool) Stack[-21] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: PushEmpty(string)
0x38d: Stack[-1] = "fdie"
0x38e: Call 0x3e0

0x38f: Pop(1)
0x390: GOTO 0x3df

0x391: @@ GetPosition(Stack[-10])
0x392: Pop(0)
0x393: @ GetPosition(Stack[-9])
0x394: Pop(0)
0x395: @ GetDirection(Stack[-8])
0x396: Pop(0)
0x397: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x398: Push(CvectorIndex(Stack[-7], 0))
0x399: Push(CvectorIndex(Stack[-9], 0))
0x39a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x39b: Push(CvectorIndex(Stack[-8], 2))
0x39c: Push(CvectorIndex(Stack[-10], 2))
0x39d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x39e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39f: Push((int) 0)
0x3a0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-6] = "fdie"
0x3a3: GOTO 0x3a5

0x3a4: Stack[-6] = "bdie"
0x3a5: @ RemoveRTEnvelope()
0x3a6: Pop(0)
0x3a7: @ SetDeathState()
0x3a8: Pop(0)
0x3a9: @ Stop()
0x3aa: Pop(0)
0x3ab: @ StopAsync()
0x3ac: Pop(0)
0x3ad: Stack[-5] = Stack[-21]
0x3ae: Push("GetScriptProperty")
0x3af: Push((int) 2)
0x3b0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3b1: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b2: Push("Owner")
0x3b3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3b4: Pop(1)
0x3b5: Push(Stack[-4])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b7: Push("Owner")
0x3b8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3b9: Pop(1)
0x3ba: Pop(0); Push((bool) Stack[-5] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: Stack[-5] = Stack[-21]
0x3bd: Push("@GetEyesHeight")
0x3be: Push((int) 1)
0x3bf: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3c0: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c1: @@ GetEyesHeight(Stack[-2])
0x3c2: Pop(0)
0x3c3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3c4: Push(CvectorIndex(Stack[-1], 1))
0x3c5: Stack[-1] = Stack[-3]
0x3c6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3c7: Push("head")
0x3c8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3c9: Pop(1)
0x3ca: Stack[-3] = (bool) 1
0x3cb: GOTO 0x3cd

0x3cc: Stack[-3] = (bool) 0
0x3cd: Push("all")
0x3ce: @ PlayAnimation(Stack[-1], Stack[-7])
0x3cf: Pop(1)
0x3d0: @ WaitForAnimEnd()
0x3d1: Pop(0)
0x3d2: Push(Stack[-3])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: @ StopAsync()
0x3d5: Pop(0)
0x3d6: Push("head")
0x3d7: @ UnlookAsync(Stack[-1])
0x3d8: Pop(1)
0x3d9: Push("all")
0x3da: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3db: Pop(1)
0x3dc: @ RemoveEnvelope()
0x3dd: Pop(0)
0x3de: Stack[-5] = 0
0x3df: Return(); Pop(20)

0x3e0: PushEmpty()
0x3e1: @ RemoveRTEnvelope()
0x3e2: Pop(0)
0x3e3: @ SetDeathState()
0x3e4: Pop(0)
0x3e5: @ Stop()
0x3e6: Pop(0)
0x3e7: @ StopAsync()
0x3e8: Pop(0)
0x3e9: @ StopSecondaryAnimation()
0x3ea: Pop(0)
0x3eb: Push("all")
0x3ec: @ PlayAnimation(Stack[-1], Stack[-2])
0x3ed: Pop(1)
0x3ee: @ WaitForAnimEnd()
0x3ef: Pop(0)
0x3f0: Push("all")
0x3f1: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3f2: Pop(1)
0x3f3: @ RemoveEnvelope()
0x3f4: Pop(0)
0x3f5: Return(); Pop(0)

0x3f6: PushEmpty()
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty()
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty()
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty(bool, float, float, bool, float, float)
0x3fd: PushEmpty(bool, object, string)
0x3fe: Stack[-2] = Stack[-10]
0x3ff: Stack[-1] = "disease"
0x400: Call 0x4b9

0x401: Pop(2)
0x402: Pop(1); Push((bool) Stack[-1] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x404: Return(); Pop(6)

0x405: PushEmpty(bool, object)
0x406: Stack[-1] = Stack[-9]
0x407: Push(-2, 2); TaskCall(0)
0x408: Call 0x0

0x409: Pop(-2, 2); TaskReturn
0x40a: Pop(1)
0x40b: Pop(1); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: Return(); Pop(6)

0x40e: @ Face(Stack[-7])
0x40f: Pop(0)
0x410: @ WaitForAnimEnd(Stack[-3])
0x411: Pop(0)
0x412: Push(Stack[-3])
0x413: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x414: Push("all")
0x415: Push("attack_on")
0x416: @ PlayAnimation(Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: @ WaitForAnimEnd(Stack[-3])
0x419: Pop(0)
0x41a: Push(Stack[-3])
0x41b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x41c: PushEmpty(bool)
0x41d: Stack[-1] = (bool) 1
0x41e: Call 0x657

0x41f: Pop(1)
0x420: Push("all")
0x421: Push("cattack")
0x422: @ PlayAnimation(Stack[-2], Stack[-1])
0x423: Pop(2)
0x424: @ WaitForAnimEnd(Stack[-3])
0x425: Pop(0)
0x426: PushEmpty(bool)
0x427: Stack[-1] = (bool) 1
0x428: Pop(0); Push((bool) Stack[-4] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42a: PushEmpty(bool, object)
0x42b: Stack[-1] = Stack[-10]
0x42c: Call 0x546

0x42d: Pop(1)
0x42e: Pop(1); Push((bool) Stack[-1] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: Stack[-1] = (bool) 0
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: GOTO 0x452

0x433: Push("disease")
0x434: @@ GetProperty(Stack[-1], Stack[-3])
0x435: Pop(1)
0x436: Push((float)0.02)
0x437: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: Push("disease")
0x43a: Push((float)0.0)
0x43b: @@ SetProperty(Stack[-2], Stack[-1])
0x43c: Pop(2)
0x43d: GOTO 0x452

0x43e: Push("disease")
0x43f: Push((float)0.02)
0x440: Pop(1); Push(Stack[-4] - Stack[-1]);
0x441: @@ SetProperty(Stack[-2], Stack[-1])
0x442: Pop(2)
0x443: PushEmpty(bool, object, string)
0x444: Stack[-2] = Stack[-10]
0x445: Stack[-1] = "fire"
0x446: Call 0x4b9

0x447: Pop(2)
0x448: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x449: Push("fire")
0x44a: @@ GetProperty(Stack[-1], Stack[-2])
0x44b: Pop(1)
0x44c: Push("fire")
0x44d: Push((float)0.1)
0x44e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x44f: @@ SetProperty(Stack[-2], Stack[-1])
0x450: Pop(2)
0x451: GOTO 0x420

0x452: PushEmpty(bool)
0x453: Stack[-1] = (bool) 0
0x454: Call 0x657

0x455: Pop(1)
0x456: Push(Stack[-3])
0x457: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x458: Push("all")
0x459: Push("attack_off")
0x45a: @ PlayAnimation(Stack[-2], Stack[-1])
0x45b: Pop(2)
0x45c: @ WaitForAnimEnd()
0x45d: Pop(0)
0x45e: @ StopAsync()
0x45f: Pop(0)
0x460: Return(); Pop(6)

0x461: PushEmpty(bool)
0x462: Stack[-1] = (bool) 0
0x463: Call 0x657

0x464: Pop(1)
0x465: @ Stop()
0x466: Pop(0)
0x467: @ StopAsync()
0x468: Pop(0)
0x469: Return(); Pop(0)

0x46a: PushEmpty()
0x46b: PushEmpty()
0x46c: Call 0x461

0x46d: Pop(0)
0x46e: PushEmpty(object)
0x46f: Stack[-1] = Stack[-2]
0x470: Call 0x77d

0x471: Pop(1)
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: PushEmpty(bool, object)
0x475: Stack[-1] = Stack[-3]
0x476: Call 0x701

0x477: Pop(1)
0x478: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x479: PushEmpty()
0x47a: Call 0x461

0x47b: Pop(0)
0x47c: PushEmpty(object)
0x47d: Stack[-1] = Stack[-2]
0x47e: Call 0x708

0x47f: Pop(1)
0x480: Return(); Pop(0)

0x481: PushEmpty()
0x482: PushEmpty(bool, object)
0x483: Stack[-1] = Stack[-3]
0x484: Call 0x70e

0x485: Pop(1)
0x486: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x487: PushEmpty()
0x488: Call 0x461

0x489: Pop(0)
0x48a: PushEmpty(object)
0x48b: Stack[-1] = Stack[-2]
0x48c: Call 0x715

0x48d: Pop(1)
0x48e: Return(); Pop(0)

0x48f: PushEmpty()
0x490: PushEmpty(bool, object)
0x491: Stack[-1] = Stack[-3]
0x492: Call 0x52e

0x493: Pop(1)
0x494: Pop(1); Push((bool) Stack[-1] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: PushEmpty(object)
0x497: Stack[-1] = Stack[-2]
0x498: Call 0x745

0x499: Pop(1)
0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: Call 0x461

0x49d: Pop(0)
0x49e: PushEmpty(object)
0x49f: Stack[-1] = Stack[-2]
0x4a0: Call 0x756

0x4a1: Pop(1)
0x4a2: Return(); Pop(0)

0x4a3: PushEmpty()
0x4a4: PushEmpty(int)
0x4a5: Stack[-1] = Stack[-2]
0x4a6: Call 0x7ab

0x4a7: Pop(1)
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty()
0x4aa: Push((int) 1)
0x4ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-2] = "fire"
0x4ae: Return(); Pop(0)

0x4af: Stack[-2] = "phys"
0x4b0: Return(); Pop(0)

0x4b1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4b2: @ GetPosition(Stack[-3])
0x4b3: Pop(0)
0x4b4: @@ GetPosition(Stack[-2])
0x4b5: Pop(0)
0x4b6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4b7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4b8: Return(); Pop(6)

0x4b9: PushEmpty(bool, bool)
0x4ba: Push("HasProperty")
0x4bb: Push((int) 2)
0x4bc: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4bd: Pop(1); Push((bool) Stack[-1] == 0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-5] = (bool) 0
0x4c0: Return(); Pop(2)

0x4c1: @@ HasProperty(Stack[-3], Stack[-1])
0x4c2: Pop(0)
0x4c3: Stack[-5] = Stack[-1]
0x4c4: Return(); Pop(2)

0x4c5: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4c6: PushEmpty(bool, object, string)
0x4c7: Stack[-2] = Stack[-18]
0x4c8: Stack[-1] = "health"
0x4c9: Call 0x4b9

0x4ca: Pop(2)
0x4cb: Pop(1); Push((bool) Stack[-1] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cd: Stack[-16] = (float) 0.0
0x4ce: Return(); Pop(12)

0x4cf: PushEmpty(bool, object, string)
0x4d0: Stack[-2] = Stack[-18]
0x4d1: Stack[-1] = "armor"
0x4d2: Call 0x4b9

0x4d3: Pop(2)
0x4d4: Pop(1); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: Stack[-6] = (int) 0
0x4d7: GOTO 0x4db

0x4d8: Push("armor")
0x4d9: @@ GetProperty(Stack[-1], Stack[-7])
0x4da: Pop(1)
0x4db: Push("armor_")
0x4dc: PushEmpty(string, int)
0x4dd: Stack[-1] = Stack[-16]
0x4de: Call 0x4a9

0x4df: Pop(1)
0x4e0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4e1: PushEmpty(bool, object, string)
0x4e2: Stack[-2] = Stack[-18]
0x4e3: Stack[-1] = Stack[-8]
0x4e4: Call 0x4b9

0x4e5: Pop(2)
0x4e6: Pop(1); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-4] = (int) 0
0x4e9: GOTO 0x4ec

0x4ea: @@ GetProperty(Stack[-5], Stack[-4])
0x4eb: Pop(0)
0x4ec: PushEmpty(float, float, float)
0x4ed: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4ee: Push((float)100.0)
0x4ef: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4f0: Stack[-1] = (int) 1
0x4f1: Call 0x5b6

0x4f2: Stack[-6] = Stack[-3]
0x4f3: Pop(3)
0x4f4: Push("health")
0x4f5: @@ GetProperty(Stack[-1], Stack[-3])
0x4f6: Pop(1)
0x4f7: Push((int) 1)
0x4f8: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4f9: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4fa: Push("health")
0x4fb: PushEmpty(float, float, float, float)
0x4fc: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4fd: Stack[-2] = (int) 0
0x4fe: Stack[-1] = (int) 1
0x4ff: Call 0x5bd

0x500: Pop(3)
0x501: @@ SetProperty(Stack[-2], Stack[-1])
0x502: Pop(2)
0x503: Stack[-16] = Stack[-1]
0x504: Return(); Pop(12)

0x505: PushEmpty(bool, bool)
0x506: @@ IsDead(Stack[-1])
0x507: Pop(0)
0x508: Stack[-4] = Stack[-1]
0x509: Return(); Pop(2)

0x50a: PushEmpty(object, object, object, object)
0x50b: Pop(0); Push((bool) Stack[-5] == 0)
0x50c: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50d: Stack[-6] = (bool) 0
0x50e: Return(); Pop(4)

0x50f: PushEmpty(bool)
0x510: Stack[-1] = (bool) 0
0x511: Push("IsDead")
0x512: Push((int) 1)
0x513: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x514: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x515: PushEmpty(bool, object)
0x516: Stack[-1] = Stack[-8]
0x517: Call 0x505

0x518: Pop(1)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Stack[-1] = (bool) 1
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-6] = (bool) 0
0x51d: Return(); Pop(4)

0x51e: @ GetScene(Stack[-2])
0x51f: Pop(0)
0x520: Pop(0); Push((bool) Stack[-2] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-6] = (bool) 0
0x523: Return(); Pop(4)

0x524: @@ GetScene(Stack[-1])
0x525: Pop(0)
0x526: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: Stack[-6] = (bool) 0
0x529: Return(); Pop(4)

0x52a: Stack[-6] = (bool) 1
0x52b: Return(); Pop(4)

0x52c: Stack[-1] = 0
0x52d: Stack[-2] = 0
0x52e: PushEmpty(int, int)
0x52f: PushEmpty(bool, object)
0x530: Stack[-1] = Stack[-5]
0x531: Call 0x50a

0x532: Pop(1)
0x533: Pop(1); Push((bool) Stack[-1] == 0)
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-4] = (bool) 0
0x536: Return(); Pop(2)

0x537: PushEmpty(bool, object, string)
0x538: Stack[-2] = Stack[-6]
0x539: Stack[-1] = "noaccess"
0x53a: Call 0x4b9

0x53b: Pop(2)
0x53c: Pop(1); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53e: Stack[-4] = (bool) 1
0x53f: Return(); Pop(2)

0x540: Push("noaccess")
0x541: @@ GetProperty(Stack[-1], Stack[-2])
0x542: Pop(1)
0x543: Push((int) 0)
0x544: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x545: Return(); Pop(2)

0x546: PushEmpty(object, object, int, object, object, int)
0x547: Pop(0); Push((bool) Stack[-7] == 0)
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-8] = (bool) 0
0x54a: Return(); Pop(6)

0x54b: @ GetScene(Stack[-3])
0x54c: Pop(0)
0x54d: Pop(0); Push((bool) Stack[-3] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-8] = (bool) 0
0x550: Return(); Pop(6)

0x551: @@ GetScene(Stack[-2])
0x552: Pop(0)
0x553: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-8] = (bool) 0
0x556: Return(); Pop(6)

0x557: PushEmpty(bool, object, string)
0x558: Stack[-2] = Stack[-10]
0x559: Stack[-1] = "noaccess"
0x55a: Call 0x4b9

0x55b: Pop(2)
0x55c: Pop(1); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-8] = (bool) 1
0x55f: Return(); Pop(6)

0x560: Push("noaccess")
0x561: @@ GetProperty(Stack[-1], Stack[-2])
0x562: Pop(1)
0x563: Push((int) 0)
0x564: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x565: Return(); Pop(6)

0x566: Stack[-2] = 0
0x567: Stack[-3] = 0
0x568: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x569: PushEmpty(bool)
0x56a: Stack[-1] = (bool) 0
0x56b: Push((int) 4)
0x56c: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56e: Push((int) 5)
0x56f: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: Stack[-1] = (bool) 1
0x572: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x573: @ GetScene(Stack[-10])
0x574: Pop(0)
0x575: @ GetPosition(Stack[-8])
0x576: Pop(0)
0x577: @ GetEyesHeight(Stack[-7])
0x578: Pop(0)
0x579: Push(CvectorIndex(Stack[-8], 1))
0x57a: Push((int) 2)
0x57b: Pop(1); Push(Stack[-9] / Stack[-1]);
0x57c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x57d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x57e: Push("scripted")
0x57f: Push(CVector(0.0, 0.0, 1.0))
0x580: Push("blood.xml")
0x581: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Stack[-9] = 0
0x584: Stack[-10] = 0
0x585: Pop(0); Push((bool) Stack[-23] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x587: Return(); Pop(20)

0x588: @ GetSecondaryAnimationType(Stack[-6])
0x589: Pop(0)
0x58a: Push((int) 0)
0x58b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58d: Return(); Pop(20)

0x58e: @@ GetPosition(Stack[-5])
0x58f: Pop(0)
0x590: @ GetPosition(Stack[-4])
0x591: Pop(0)
0x592: @ GetDirection(Stack[-3])
0x593: Pop(0)
0x594: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x595: Push(CvectorIndex(Stack[-2], 0))
0x596: Push(CvectorIndex(Stack[-4], 0))
0x597: Pop(2); Push(Stack[-2] * Stack[-1]);
0x598: Push(CvectorIndex(Stack[-3], 2))
0x599: Push(CvectorIndex(Stack[-5], 2))
0x59a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59c: Push((int) 0)
0x59d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59f: Stack[-1] = "fhit"
0x5a0: GOTO 0x5a2

0x5a1: Stack[-1] = "bhit"
0x5a2: Push("hit_react")
0x5a3: Push("1")
0x5a4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5a5: Push("2")
0x5a6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5a7: Push((int) -10)
0x5a8: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(4)
0x5aa: Return(); Pop(20)

0x5ab: PushEmpty(bool, bool)
0x5ac: @ IsLoaded(Stack[-1])
0x5ad: Pop(0)
0x5ae: Stack[-3] = Stack[-1]
0x5af: Return(); Pop(2)

0x5b0: PushEmpty(object, object)
0x5b1: @ self(Stack[-1])
0x5b2: Pop(0)
0x5b3: Stack[-3] = Stack[-1]
0x5b4: Return(); Pop(2)

0x5b5: Stack[-1] = 0
0x5b6: PushEmpty()
0x5b7: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b9: Stack[-3] = Stack[-2]
0x5ba: GOTO 0x5bc

0x5bb: Stack[-3] = Stack[-1]
0x5bc: Return(); Pop(0)

0x5bd: PushEmpty()
0x5be: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[-4] = Stack[-2]
0x5c1: Return(); Pop(0)

0x5c2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c4: Stack[-4] = Stack[-1]
0x5c5: Return(); Pop(0)

0x5c6: Stack[-4] = Stack[-3]
0x5c7: Return(); Pop(0)

0x5c8: PushEmpty(object, object)
0x5c9: @ CreateObjectSet(Stack[-1])
0x5ca: Pop(0)
0x5cb: Stack[-3] = Stack[-1]
0x5cc: Return(); Pop(2)

0x5cd: Stack[-1] = 0
0x5ce: PushEmpty(string, string)
0x5cf: Stack[-1] = "idle"
0x5d0: Push(Stack[-3])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5d3: Stack[-4] = Stack[-1]
0x5d4: Return(); Pop(2)

0x5d5: PushEmpty(int, bool, int, bool)
0x5d6: Stack[-2] = (int) 0
0x5d7: Push("all")
0x5d8: PushEmpty(string, int)
0x5d9: Stack[-1] = Stack[-5]
0x5da: Call 0x5ce

0x5db: Pop(1)
0x5dc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(2)
0x5de: Pop(0); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5e0: GOTO 0x5e4

0x5e1: Push((int) 1)
0x5e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5e3: GOTO 0x5d7

0x5e4: Stack[-5] = Stack[-2]
0x5e5: Return(); Pop(4)

0x5e6: PushEmpty(int, int, int, bool, int, int, int, bool)
0x5e7: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e9: Push("GenerateMoney: iMin > iMax")
0x5ea: @ Trace(Stack[-1])
0x5eb: Pop(1)
0x5ec: Return(); Pop(8)

0x5ed: Stack[-4] = (int) 0
0x5ee: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f0: Pop(0); Push(Stack[-9] - Stack[-10]);
0x5f1: @ irand(Stack[-4], Stack[-1])
0x5f2: Pop(1)
0x5f3: GOTO 0x5f8

0x5f4: Push((int) 0)
0x5f5: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f7: Return(); Pop(8)

0x5f8: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x5f9: Push((int) 0)
0x5fa: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fc: Return(); Pop(8)

0x5fd: Push("Money")
0x5fe: @ GetInvItemByName(Stack[-3], Stack[-1])
0x5ff: Pop(1)
0x600: Push((int) 0)
0x601: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x602: Pop(1)
0x603: Return(); Pop(8)

0x604: PushEmpty(int, bool, int, bool)
0x605: Push((int) 0)
0x606: @ ClearSubContainer(Stack[-1])
0x607: Pop(1)
0x608: PushEmpty(int, int)
0x609: Stack[-2] = (int) 600
0x60a: Stack[-1] = (int) 1500
0x60b: Call 0x5e6

0x60c: Pop(2)
0x60d: Push((int) 200)
0x60e: @ irand(Stack[-3], Stack[-1])
0x60f: Pop(1)
0x610: Push((int) 0)
0x611: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x613: PushEmpty(int, string)
0x614: Stack[-1] = "ognemet_ammo"
0x615: Call 0x629

0x616: Pop(1)
0x617: Push((int) 0)
0x618: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x619: Pop(2)
0x61a: Push((int) 3)
0x61b: @ irand(Stack[-3], Stack[-1])
0x61c: Pop(1)
0x61d: Push((int) 0)
0x61e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x620: PushEmpty(int, string)
0x621: Stack[-1] = "rusk"
0x622: Call 0x629

0x623: Pop(1)
0x624: Push((int) 0)
0x625: Push((int) 1)
0x626: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Return(); Pop(4)

0x629: PushEmpty(int, int)
0x62a: @ GetInvItemByName(Stack[-1], Stack[-3])
0x62b: Pop(0)
0x62c: Stack[-4] = Stack[-1]
0x62d: Return(); Pop(2)

0x62e: PushEmpty(float, object, object, float, object, object)
0x62f: Push(GlobalVars[4])
0x630: PushEmpty(object)
0x631: Call 0x5c8

0x632: Stack[-2] = Stack[-1]
0x633: Pop(1)
0x634: GlobalVars[4] = Stack[-1]; Pop(1)
0x635: @ GetAttackDistance(Stack[-3])
0x636: Pop(0)
0x637: Push(GlobalVars[2])
0x638: Push((float)600.0)
0x639: Stack[-2] = Stack[-5] / Stack[-1]; Pop(1);
0x63a: GlobalVars[2] = Stack[-1]; Pop(1)
0x63b: @ GetScene(Stack[-2])
0x63c: Pop(0)
0x63d: Push("flame")
0x63e: Push(CVector(0.0, 0.0, 0.0))
0x63f: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x640: Pop(2)
0x641: PushEmpty(object)
0x642: Call 0x5b0

0x643: Pop(0)
0x644: Push("flame")
0x645: @@ Attach(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Push(GlobalVars[3])
0x648: Stack[-1] = (bool) 0
0x649: GlobalVars[3] = Stack[-1]; Pop(1)
0x64a: Push((float)0.05)
0x64b: @@ SetLength(Stack[-1])
0x64c: Pop(1)
0x64d: Push(GlobalVars[0])
0x64e: Stack[-1] = Stack[-2]
0x64f: GlobalVars[0] = Stack[-1]; Pop(1)
0x650: Push((int) 70)
0x651: Push((float)0.1)
0x652: @ SetTimer(Stack[-2], Stack[-1])
0x653: Pop(2)
0x654: Return(); Pop(6)

0x655: Stack[-1] = 0
0x656: Stack[-2] = 0
0x657: PushEmpty(float, float, object, cvector, float, float, float, object, cvector, float)
0x658: Push(Stack[-11])
0x659: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65a: Push(GlobalVars[2])
0x65b: Stack[-6] = Stack[-1]
0x65c: Pop(1)
0x65d: GOTO 0x65f

0x65e: Stack[-5] = (float) 0.05
0x65f: Push(GlobalVars[0])
0x660: @@ GetLength(Stack[-5])
0x661: Pop(1)
0x662: Pop(0); Push((bool) Stack[-5] < Stack[-4])
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: Stack[-4] = Stack[-5]
0x665: Push(GlobalVars[0])
0x666: @@ SetLength(Stack[-5])
0x667: Pop(1)
0x668: Push(GlobalVars[3])
0x669: Pop(1); Push((bool) Stack[-1] != Stack[-12])
0x66a: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x66b: Push(Stack[-11])
0x66c: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x66d: Push(GlobalVars[1])
0x66e: Pop(1); Push((bool) Stack[-1] == 0)
0x66f: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x670: Stack[-2] = CVector(0.0, 0.0, 0.0)
0x671: @ GetHeight(Stack[-1])
0x672: Pop(0)
0x673: Push(CvectorIndex(Stack[-2], 1))
0x674: Stack[-1] = Stack[-2]
0x675: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x676: Push("flame_loop")
0x677: Push((int) 0)
0x678: Push((int) 200)
0x679: @ PlayLoopedGlobalSound(Stack[-6], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x67a: Pop(3)
0x67b: Push(GlobalVars[1])
0x67c: Stack[-1] = Stack[-4]
0x67d: GlobalVars[1] = Stack[-1]; Pop(1)
0x67e: Stack[-3] = 0
0x67f: Push(GlobalVars[1])
0x680: Push((int) 2)
0x681: @@ FadeIn(Stack[-1])
0x682: Pop(2)
0x683: GOTO 0x68b

0x684: Push(GlobalVars[1])
0x685: Pop(1); Push(( Stack[-1] != 0 )
0x686: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x687: Push(GlobalVars[1])
0x688: Push((int) 2)
0x689: @@ FadeOut(Stack[-1])
0x68a: Pop(2)
0x68b: Push(GlobalVars[3])
0x68c: Stack[-1] = Stack[-12]
0x68d: GlobalVars[3] = Stack[-1]; Pop(1)
0x68e: Return(); Pop(10)

0x68f: PushEmpty(cvector, float, cvector, float, bool, cvector, float, cvector, float, bool)
0x690: @ GetPosition(Stack[-5])
0x691: Pop(0)
0x692: @ GetHeight(Stack[-4])
0x693: Pop(0)
0x694: Push(CvectorIndex(Stack[-5], 1))
0x695: Push((int) 2)
0x696: Pop(1); Push(Stack[-6] / Stack[-1]);
0x697: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x698: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x699: Stack[-3] = Stack[-11] - Stack[-5]; Pop(0);
0x69a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x69b: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x69c: Push((int) 50)
0x69d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69f: Stack[-1] = (bool) 0
0x6a0: GOTO 0x6a5

0x6a1: Push(CvectorIndex(Stack[-3], 1))
0x6a2: Pop(1); Push(Stack[-1] / Stack[-3]);
0x6a3: Push((float)-0.14286)
0x6a4: Stack[-3] = Stack[-2] < Stack[-1]; Pop(2);
0x6a5: Push("all")
0x6a6: Push(Stack[-2])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a8: Push("cattack")
0x6a9: GOTO 0x6ab

0x6aa: Push("attack")
0x6ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x6ac: Pop(2)
0x6ad: Return(); Pop(10)

0x6ae: PushEmpty(cvector, float, cvector, float)
0x6af: @@ GetPosition(Stack[-2])
0x6b0: Pop(0)
0x6b1: Push("@GetHeight")
0x6b2: Push((int) 1)
0x6b3: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6b4: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b5: @@ GetHeight(Stack[-1])
0x6b6: Pop(0)
0x6b7: Push(CvectorIndex(Stack[-2], 1))
0x6b8: Push((int) 2)
0x6b9: Pop(1); Push(Stack[-3] / Stack[-1]);
0x6ba: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6bb: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x6bc: PushEmpty(cvector)
0x6bd: Stack[-1] = Stack[-3]
0x6be: Call 0x68f

0x6bf: Pop(1)
0x6c0: Return(); Pop(4)

0x6c1: PushEmpty(bool, float, bool, float)
0x6c2: PushEmpty(bool, object)
0x6c3: Stack[-1] = Stack[-7]
0x6c4: Call 0x52e

0x6c5: Pop(1)
0x6c6: Pop(1); Push((bool) Stack[-1] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c8: Stack[-6] = (bool) 0
0x6c9: Return(); Pop(4)

0x6ca: Push(GlobalVars[4])
0x6cb: @@ in(Stack[-3], Stack[-6])
0x6cc: Pop(1)
0x6cd: Push(Stack[-2])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cf: Stack[-6] = (bool) 1
0x6d0: Return(); Pop(4)

0x6d1: PushEmpty(bool, object, string)
0x6d2: Stack[-2] = Stack[-8]
0x6d3: Stack[-1] = "disease"
0x6d4: Call 0x4b9

0x6d5: Pop(2)
0x6d6: Pop(1); Push((bool) Stack[-1] == 0)
0x6d7: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d8: Stack[-6] = (bool) 0
0x6d9: Return(); Pop(4)

0x6da: Push("disease")
0x6db: @@ GetProperty(Stack[-1], Stack[-2])
0x6dc: Pop(1)
0x6dd: Push((int) 0)
0x6de: Stack[-7] = Stack[-2] > Stack[-1]; Pop(1);
0x6df: Return(); Pop(4)

0x6e0: PushEmpty()
0x6e1: PushEmpty(object, object)
0x6e2: Stack[-1] = Stack[-3]
0x6e3: Push(-2, 1); TaskCall(4)
0x6e4: Call 0x2db

0x6e5: Pop(-2, 1); TaskReturn
0x6e6: Stack[-3] = Stack[-2]
0x6e7: Pop(2)
0x6e8: @ ResetAAS()
0x6e9: Pop(0)
0x6ea: PushEmpty(bool)
0x6eb: Stack[-1] = (bool) 0
0x6ec: PushEmpty(bool, object)
0x6ed: Stack[-1] = Stack[-4]
0x6ee: Call 0x546

0x6ef: Pop(1)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f1: PushEmpty(bool, object)
0x6f2: Stack[-1] = Stack[-4]
0x6f3: Call 0x505

0x6f4: Pop(1)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f6: Stack[-1] = (bool) 1
0x6f7: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f8: PushEmpty(object)
0x6f9: Stack[-1] = Stack[-2]
0x6fa: Push(-1, 0); TaskCall(6)
0x6fb: Call 0x3fc

0x6fc: Pop(-1, 0); TaskReturn
0x6fd: Pop(1)
0x6fe: @ ResetAAS()
0x6ff: Pop(0)
0x700: Return(); Pop(0)

0x701: PushEmpty()
0x702: PushEmpty(bool, object)
0x703: Stack[-1] = Stack[-3]
0x704: Call 0x800

0x705: Stack[-4] = Stack[-2]
0x706: Pop(2)
0x707: Return(); Pop(0)

0x708: PushEmpty()
0x709: PushEmpty(object)
0x70a: Stack[-1] = Stack[-2]
0x70b: Call 0x6e0

0x70c: Pop(1)
0x70d: Return(); Pop(0)

0x70e: PushEmpty()
0x70f: PushEmpty(bool, object)
0x710: Stack[-1] = Stack[-3]
0x711: Call 0x800

0x712: Stack[-4] = Stack[-2]
0x713: Pop(2)
0x714: Return(); Pop(0)

0x715: PushEmpty()
0x716: PushEmpty(object)
0x717: Stack[-1] = Stack[-2]
0x718: Call 0x6e0

0x719: Pop(1)
0x71a: Return(); Pop(0)

0x71b: PushEmpty(float, float)
0x71c: PushEmpty(bool)
0x71d: Stack[-1] = (bool) 1
0x71e: PushEmpty(bool)
0x71f: Stack[-1] = (bool) 1
0x720: Pop(0); Push((bool) Stack[-5] == 0)
0x721: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x722: PushEmpty(bool, object)
0x723: Stack[-1] = Stack[-7]
0x724: Call 0x505

0x725: Pop(1)
0x726: Pop(1); Push((bool) Stack[-1] == 0)
0x727: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x728: Stack[-1] = (bool) 0
0x729: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72a: PushEmpty(bool, object, string)
0x72b: Stack[-2] = Stack[-7]
0x72c: Stack[-1] = "disease"
0x72d: Call 0x4b9

0x72e: Pop(2)
0x72f: Pop(1); Push((bool) Stack[-1] == 0)
0x730: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x731: Stack[-1] = (bool) 0
0x732: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x733: Stack[-4] = (bool) 0
0x734: Return(); Pop(2)

0x735: Push("disease")
0x736: @@ GetProperty(Stack[-1], Stack[-2])
0x737: Pop(1)
0x738: Push((int) 0)
0x739: Stack[-5] = Stack[-2] > Stack[-1]; Pop(1);
0x73a: Return(); Pop(2)

0x73b: PushEmpty()
0x73c: PushEmpty(object)
0x73d: Stack[-1] = Stack[-2]
0x73e: Push(-1, 0); TaskCall(6)
0x73f: Call 0x3fc

0x740: Pop(-1, 0); TaskReturn
0x741: Pop(1)
0x742: @ ResetAAS()
0x743: Pop(0)
0x744: Return(); Pop(0)

0x745: PushEmpty(bool, bool, bool, bool)
0x746: Pop(0); Push((bool) Stack[-5] == 0)
0x747: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x748: Return(); Pop(4)

0x749: Push(GlobalVars[4])
0x74a: @@ in(Stack[-3], Stack[-6])
0x74b: Pop(1)
0x74c: Pop(0); Push((bool) Stack[-2] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74e: Push(GlobalVars[4])
0x74f: @@ add(Stack[-6])
0x750: Pop(1)
0x751: @ IsPlayerActor(Stack[-5], Stack[-1])
0x752: Pop(0)
0x753: Push(Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x755: Return(); Pop(4)

0x756: PushEmpty()
0x757: PushEmpty(object)
0x758: Stack[-1] = Stack[-2]
0x759: Call 0x745

0x75a: Pop(1)
0x75b: PushEmpty(object)
0x75c: Stack[-1] = Stack[-2]
0x75d: Call 0x6e0

0x75e: Pop(1)
0x75f: Return(); Pop(0)

0x760: PushEmpty()
0x761: PushEmpty(object)
0x762: Stack[-1] = Stack[-2]
0x763: Push(-1, 0); TaskCall(5)
0x764: Call 0x35f

0x765: Pop(-1, 0); TaskReturn
0x766: Pop(1)
0x767: Return(); Pop(0)

0x768: PushEmpty()
0x769: PushEmpty(object, int, float)
0x76a: Stack[-3] = Stack[-7]
0x76b: Stack[-2] = Stack[-6]
0x76c: Stack[-1] = Stack[-5]
0x76d: Call 0x568

0x76e: Pop(3)
0x76f: Return(); Pop(0)

0x770: PushEmpty(float, float)
0x771: Push("health")
0x772: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x774: Push("health")
0x775: @ GetProperty(Stack[-1], Stack[-2])
0x776: Pop(1)
0x777: Push((int) 0)
0x778: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77a: @ SignalDeath(Stack[-4])
0x77b: Pop(0)
0x77c: Return(); Pop(2)

0x77d: PushEmpty()
0x77e: PushEmpty(object)
0x77f: Stack[-1] = Stack[-2]
0x780: Call 0x760

0x781: Pop(1)
0x782: Return(); Pop(0)

0x783: PushEmpty(float, bool, float, bool)
0x784: PushEmpty(bool, object, string)
0x785: Stack[-2] = Stack[-8]
0x786: Stack[-1] = "reputation"
0x787: Call 0x4b9

0x788: Pop(2)
0x789: Pop(1); Push((bool) Stack[-1] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78b: Stack[-7] = (bool) 0
0x78c: Return(); Pop(4)

0x78d: Push("reputation")
0x78e: @@ GetProperty(Stack[-1], Stack[-3])
0x78f: Pop(1)
0x790: Push((float)0.5)
0x791: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x793: Stack[-7] = (bool) 0
0x794: Return(); Pop(4)

0x795: @ CanSee(Stack[-1], Stack[-6])
0x796: Pop(0)
0x797: PushEmpty(bool)
0x798: Stack[-1] = (bool) 1
0x799: Push(Stack[-2])
0x79a: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x79b: PushEmpty(float, object)
0x79c: Stack[-1] = Stack[-9]
0x79d: Call 0x4b1

0x79e: Pop(1)
0x79f: Push((float)160000.0)
0x7a0: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: Stack[-1] = (bool) 0
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a4: Push((float)-0.2)
0x7a5: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7a6: Pop(1)
0x7a7: Stack[-7] = (bool) 1
0x7a8: Return(); Pop(4)

0x7a9: Stack[-7] = (bool) 0
0x7aa: Return(); Pop(4)

0x7ab: PushEmpty(object, float, object, bool, float, float, float, object, float, object, bool, float, float, float)
0x7ac: Push((int) 70)
0x7ad: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7af: Return(); Pop(14)

0x7b0: Push(GlobalVars[0])
0x7b1: Pop(1); Push((bool) Stack[-1] == 0)
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b3: Return(); Pop(14)

0x7b4: Push(GlobalVars[0])
0x7b5: @@ Intersect(Stack[-8], Stack[-7])
0x7b6: Pop(1)
0x7b7: Push(GlobalVars[0])
0x7b8: Push(GlobalVars[3])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7ba: PushEmpty(float, float, float)
0x7bb: Stack[-2] = Stack[-10]
0x7bc: Push(GlobalVars[2])
0x7bd: Stack[-2] = Stack[-1]
0x7be: Pop(1)
0x7bf: Call 0x5b6

0x7c0: Pop(2)
0x7c1: GOTO 0x7c3

0x7c2: Push((float)0.05)
0x7c3: @@ SetLength(Stack[-1])
0x7c4: Pop(2)
0x7c5: @@ Next(Stack[-4], Stack[-5])
0x7c6: Pop(0)
0x7c7: Push(Stack[-4])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7c9: PushEmpty(bool)
0x7ca: Stack[-1] = (bool) 0
0x7cb: Pop(0); Push(( Stack[-6] != 0 )
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7cd: PushEmpty(object)
0x7ce: Call 0x5b0

0x7cf: Pop(0)
0x7d0: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d2: Stack[-1] = (bool) 1
0x7d3: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7d4: PushEmpty(float, object, float, int)
0x7d5: Stack[-3] = Stack[-9]
0x7d6: Stack[-2] = (float) 0.1
0x7d7: Stack[-1] = (int) 1
0x7d8: Call 0x4c5

0x7d9: Stack[-7] = Stack[-4]
0x7da: Pop(4)
0x7db: PushEmpty(bool, object, string)
0x7dc: Stack[-2] = Stack[-8]
0x7dd: Stack[-1] = "disease"
0x7de: Call 0x4b9

0x7df: Pop(2)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7e1: Push("disease")
0x7e2: @@ GetProperty(Stack[-1], Stack[-3])
0x7e3: Pop(1)
0x7e4: Push((float)0.02)
0x7e5: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e7: Stack[-2] = (int) 0
0x7e8: GOTO 0x7eb

0x7e9: Push((float)0.02)
0x7ea: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0x7eb: Push("disease")
0x7ec: @@ SetProperty(Stack[-1], Stack[-3])
0x7ed: Pop(1)
0x7ee: PushEmpty(bool, object, string)
0x7ef: Stack[-2] = Stack[-8]
0x7f0: Stack[-1] = "fire"
0x7f1: Call 0x4b9

0x7f2: Pop(2)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f4: Push("fire")
0x7f5: @@ GetProperty(Stack[-1], Stack[-2])
0x7f6: Pop(1)
0x7f7: Push("fire")
0x7f8: Push((float)0.1)
0x7f9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7fa: @@ SetProperty(Stack[-2], Stack[-1])
0x7fb: Pop(2)
0x7fc: GOTO 0x7c5

0x7fd: Return(); Pop(14)

0x7fe: Stack[-5] = 0
0x7ff: Stack[-7] = 0
0x800: PushEmpty()
0x801: PushEmpty(bool, object)
0x802: Stack[-1] = Stack[-3]
0x803: Call 0x6c1

0x804: Stack[-4] = Stack[-2]
0x805: Pop(2)
0x806: Return(); Pop(0)

