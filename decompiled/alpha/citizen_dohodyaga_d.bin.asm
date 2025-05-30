GlobalVarCount = 1
	G_VAR_0 bool 

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
	noaccess
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	idle

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
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	StopAnimation (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	SetRTEnvelope (2 args)

RunOp = 0x94
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x8e Vars = (object, int, float, float)
		EVENT_16 Op = 0x90 Vars = (object, string)
		EVENT_41 Op = 0x92 Vars = (object)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xac Vars = (object)
		EVENT_17 Op = 0xc0 Vars = (object)
		EVENT_30 Op = 0xd4 Vars = (object, object)
		EVENT_40 Op = 0xee Vars = (object)
		EVENT_42 Op = 0x102 Vars = (object, string)
		EVENT_1 Op = 0x118 Vars = (object)
		EVENT_3 Op = 0x11e Vars = (object)
		EVENT_7 Op = 0x124 Vars = (int)
		EVENT_6 Op = 0x130 Vars = ()
		EVENT_41 Op = 0x147 Vars = (object)
		EVENT_10 Op = 0x1b1 Vars = (object)
		EVENT_28 Op = 0x1b5 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1c8 Vars = (object)
		EVENT_17 Op = 0x1dc Vars = (object)
		EVENT_30 Op = 0x1f0 Vars = (object, object)
		EVENT_40 Op = 0x20a Vars = (object)
		EVENT_42 Op = 0x21e Vars = (object, string)
		EVENT_6 Op = 0x234 Vars = ()
	GTASK_3 Vars = (object) Params = 1
		EVENT_0 Op = 0x2bd Vars = (object)
		EVENT_17 Op = 0x2d1 Vars = (object)
		EVENT_30 Op = 0x2e5 Vars = (object, object)
		EVENT_40 Op = 0x2ff Vars = (object)
		EVENT_42 Op = 0x313 Vars = (object, string)
		EVENT_41 Op = 0x334 Vars = (object)
		EVENT_7 Op = 0x33d Vars = (int)
		EVENT_6 Op = 0x360 Vars = ()
	GTASK_4 Vars = (object, int, int, bool, int) Params = 1
	GTASK_5 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x560 Vars = ()
		EVENT_7 Op = 0x5cd Vars = (int)
		EVENT_10 Op = 0x5df Vars = (object)
		EVENT_41 Op = 0x5ea Vars = (object)

Events:
EVENT_16 Op = 0x736 Vars = (object, string)
EVENT_41 Op = 0x743 Vars = (object)
EVENT_22 Op = 0x749 Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x7c1

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x7a3

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x7a6

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x7ac

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x22: Pop(0); Push((bool) Stack[-21] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(string)
0x25: Stack[-1] = "fdie"
0x26: Call 0x78

0x27: Pop(1)
0x28: GOTO 0x77

0x29: @@ GetPosition(Stack[-10])
0x2a: Pop(0)
0x2b: @ GetPosition(Stack[-9])
0x2c: Pop(0)
0x2d: @ GetDirection(Stack[-8])
0x2e: Pop(0)
0x2f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x30: Push(CvectorIndex(Stack[-7], 0))
0x31: Push(CvectorIndex(Stack[-9], 0))
0x32: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33: Push(CvectorIndex(Stack[-8], 2))
0x34: Push(CvectorIndex(Stack[-10], 2))
0x35: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Push((int) 0)
0x38: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-6] = "fdie"
0x3b: GOTO 0x3d

0x3c: Stack[-6] = "bdie"
0x3d: @ RemoveRTEnvelope()
0x3e: Pop(0)
0x3f: @ SetDeathState()
0x40: Pop(0)
0x41: @ Stop()
0x42: Pop(0)
0x43: @ StopAsync()
0x44: Pop(0)
0x45: Stack[-5] = Stack[-21]
0x46: Push("GetScriptProperty")
0x47: Push((int) 2)
0x48: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x49: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4a: Push("Owner")
0x4b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c: Pop(1)
0x4d: Push(Stack[-4])
0x4e: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4f: Push("Owner")
0x50: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x51: Pop(1)
0x52: Pop(0); Push((bool) Stack[-5] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-5] = Stack[-21]
0x55: Push("@GetEyesHeight")
0x56: Push((int) 1)
0x57: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x58: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x59: @@ GetEyesHeight(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c: Push(CvectorIndex(Stack[-1], 1))
0x5d: Stack[-1] = Stack[-3]
0x5e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5f: Push("head")
0x60: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Stack[-3] = (bool) 1
0x63: GOTO 0x65

0x64: Stack[-3] = (bool) 0
0x65: Push("all")
0x66: @ PlayAnimation(Stack[-1], Stack[-7])
0x67: Pop(1)
0x68: @ WaitForAnimEnd()
0x69: Pop(0)
0x6a: Push(Stack[-3])
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: @ StopAsync()
0x6d: Pop(0)
0x6e: Push("head")
0x6f: @ UnlookAsync(Stack[-1])
0x70: Pop(1)
0x71: Push("all")
0x72: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x73: Pop(1)
0x74: @ RemoveEnvelope()
0x75: Pop(0)
0x76: Stack[-5] = 0
0x77: Return(); Pop(20)

0x78: PushEmpty()
0x79: @ RemoveRTEnvelope()
0x7a: Pop(0)
0x7b: @ SetDeathState()
0x7c: Pop(0)
0x7d: @ Stop()
0x7e: Pop(0)
0x7f: @ StopAsync()
0x80: Pop(0)
0x81: @ StopSecondaryAnimation()
0x82: Pop(0)
0x83: Push("all")
0x84: @ PlayAnimation(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: @ WaitForAnimEnd()
0x87: Pop(0)
0x88: Push("all")
0x89: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: @ RemoveEnvelope()
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: Return(); Pop(0)

0x94: Push((bool) 1)
0x95: @ SensePlayerOnly(Stack[-1])
0x96: Pop(1)
0x97: PushEmpty()
0x98: Call 0x7ad

0x99: Pop(0)
0x9a: PushEmpty()
0x9b: Call 0xa3

0x9c: Pop(0)
0x9d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9e: PushEmpty()
0x9f: Call 0x178

0xa0: Pop(0)
0xa1: GOTO 0x9d

0xa2: Return(); Pop(0)

0xa3: PushEmpty(bool)
0xa4: Call 0x6e8

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call 0x7ac

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(int, int)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-5]
0xaf: Call 0x7a3

0xb0: Stack[-3] = Stack[-2]
0xb1: Pop(2)
0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call 0x137

0xba: Pop(0)
0xbb: PushEmpty(object)
0xbc: Stack[-1] = Stack[-4]
0xbd: Call 0x7a6

0xbe: Pop(1)
0xbf: Return(); Pop(2)

0xc0: PushEmpty(int, int)
0xc1: PushEmpty(int, object)
0xc2: Stack[-1] = Stack[-5]
0xc3: Call 0x77a

0xc4: Stack[-3] = Stack[-2]
0xc5: Pop(2)
0xc6: Push((int) 0)
0xc7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc9: Push((int) 1)
0xca: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcc: PushEmpty()
0xcd: Call 0x137

0xce: Pop(0)
0xcf: PushEmpty(object)
0xd0: Stack[-1] = Stack[-4]
0xd1: Call 0x784

0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: PushEmpty(int, int)
0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[-7]
0xd7: Stack[-1] = Stack[-6]
0xd8: Call 0x7be

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x78c

0xde: Stack[-3] = Stack[-2]
0xdf: Pop(2)
0xe0: Push((int) 0)
0xe1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe3: Push((int) 1)
0xe4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe6: PushEmpty()
0xe7: Call 0x137

0xe8: Pop(0)
0xe9: PushEmpty(object)
0xea: Stack[-1] = Stack[-5]
0xeb: Call 0x793

0xec: Pop(1)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int)
0xef: PushEmpty(int, object)
0xf0: Stack[-1] = Stack[-5]
0xf1: Call 0x799

0xf2: Stack[-3] = Stack[-2]
0xf3: Pop(2)
0xf4: Push((int) 0)
0xf5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf7: Push((int) 1)
0xf8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfa: PushEmpty()
0xfb: Call 0x137

0xfc: Pop(0)
0xfd: PushEmpty(object)
0xfe: Stack[-1] = Stack[-4]
0xff: Call 0x79c

0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty(int, int)
0x103: PushEmpty(int, string, object)
0x104: Stack[-2] = Stack[-6]
0x105: Stack[-1] = Stack[-7]
0x106: Call 0x79e

0x107: Stack[-4] = Stack[-3]
0x108: Pop(3)
0x109: Push((int) 0)
0x10a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10c: Push((int) 1)
0x10d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10f: PushEmpty()
0x110: Call 0x137

0x111: Pop(0)
0x112: PushEmpty(string, object)
0x113: Stack[-2] = Stack[-5]
0x114: Stack[-1] = Stack[-6]
0x115: Call 0x7a1

0x116: Pop(2)
0x117: Return(); Pop(2)

0x118: PushEmpty()
0x119: PushEmpty(object)
0x11a: Stack[-1] = Stack[-2]
0x11b: Call 0x150

0x11c: Pop(1)
0x11d: Return(); Pop(0)

0x11e: PushEmpty()
0x11f: PushEmpty(object)
0x120: Stack[-1] = Stack[-2]
0x121: Call 0x150

0x122: Pop(1)
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: Push((int) 110)
0x126: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: Return(); Pop(0)

0x129: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x12a: Push((int) 110)
0x12b: @ KillTimer(Stack[-1])
0x12c: Pop(1)
0x12d: @ ResetAAS()
0x12e: Pop(0)
0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: Call 0x137

0x132: Pop(0)
0x133: PushEmpty()
0x134: Call 0x7ac

0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: Push((int) 110)
0x138: @ KillTimer(Stack[-1])
0x139: Pop(1)
0x13a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13b: PushEmpty()
0x13c: Call 0x1b8

0x13d: Pop(0)
0x13e: Return(); Pop(0)

0x13f: Push((int) 110)
0x140: @ KillTimer(Stack[-1])
0x141: Pop(1)
0x142: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x143: PushEmpty()
0x144: Call 0x1bf

0x145: Pop(0)
0x146: Return(); Pop(0)

0x147: PushEmpty()
0x148: PushEmpty()
0x149: Call 0x137

0x14a: Pop(0)
0x14b: PushEmpty(object)
0x14c: Stack[-1] = Stack[-2]
0x14d: Call 0x743

0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, int, bool, int)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-7]
0x153: Call 0x682

0x154: Pop(1)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Return(); Pop(4)

0x158: Push( Stack[2 + Tasks[-1].StackPointer] )
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Return(); Pop(4)

0x15b: @ IsPlayerActor(Stack[-5], Stack[-2])
0x15c: Pop(0)
0x15d: Pop(0); Push((bool) Stack[-2] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(4)

0x160: PushEmpty(int, object)
0x161: Stack[-1] = Stack[-7]
0x162: Call 0x769

0x163: Stack[-3] = Stack[-2]
0x164: Pop(2)
0x165: Push((int) 0)
0x166: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: Push((int) 1)
0x169: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: PushEmpty()
0x16c: Call 0x13f

0x16d: Pop(0)
0x16e: PushEmpty(object)
0x16f: Stack[-1] = Stack[-6]
0x170: Call 0x772

0x171: Pop(1)
0x172: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x173: Push((int) 110)
0x174: Push((float)10.0)
0x175: @ SetTimer(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: Return(); Pop(4)

0x178: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x179: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x17a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x17b: Push((float)0.5)
0x17c: @ rand(Stack[-8], Stack[-1])
0x17d: Pop(1)
0x17e: @ Sleep(Stack[-7])
0x17f: Pop(0)
0x180: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x182: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x184: @ GetPosition(Stack[-5])
0x185: Pop(0)
0x186: @ GetCameraFarDistance(Stack[-4])
0x187: Pop(0)
0x188: Push((float)2.5)
0x189: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x18a: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x18b: Pop(0)
0x18c: Push(Stack[-3])
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: GOTO 0x193

0x18f: Push((int) 1)
0x190: @ Sleep(Stack[-1])
0x191: Pop(1)
0x192: GOTO 0x184

0x193: GOTO 0x195

0x194: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x195: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x196: Pop(0)
0x197: Pop(0); Push(( Stack[-2] != 0 )
0x198: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x199: @ RotatePath(Stack[-2], Stack[-1])
0x19a: Pop(0)
0x19b: Push(Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19d: PushEmpty(bool)
0x19e: Call 0x1c6

0x19f: Pop(0)
0x1a0: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1a1: Pop(1)
0x1a2: Stack[-2] = 0
0x1a3: Push(Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a5: PushEmpty()
0x1a6: Push(-0, 0); TaskCall(2)
0x1a7: Call 0x23b

0x1a8: Pop(-0, 0); TaskReturn
0x1a9: Pop(0)
0x1aa: GOTO 0x1ae

0x1ab: Push((int) 1)
0x1ac: @ Sleep(Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[-2] = 0
0x1af: GOTO 0x180

0x1b0: Return(); Pop(14)

0x1b1: PushEmpty()
0x1b2: @ RequestClearPath(Stack[-1])
0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: @ Stop()
0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ba: @ Stop()
0x1bb: Pop(0)
0x1bc: @ StopGroup0()
0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c1: @ Stop()
0x1c2: Pop(0)
0x1c3: @ StopGroup0()
0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: Stack[-1] = (bool) 0
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty(int, int)
0x1c9: PushEmpty(int, object)
0x1ca: Stack[-1] = Stack[-5]
0x1cb: Call 0x7a3

0x1cc: Stack[-3] = Stack[-2]
0x1cd: Pop(2)
0x1ce: Push((int) 0)
0x1cf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call 0x280

0x1d6: Pop(0)
0x1d7: PushEmpty(object)
0x1d8: Stack[-1] = Stack[-4]
0x1d9: Call 0x7a6

0x1da: Pop(1)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: PushEmpty(int, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call 0x77a

0x1e0: Stack[-3] = Stack[-2]
0x1e1: Pop(2)
0x1e2: Push((int) 0)
0x1e3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e5: Push((int) 1)
0x1e6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: PushEmpty()
0x1e9: Call 0x280

0x1ea: Pop(0)
0x1eb: PushEmpty(object)
0x1ec: Stack[-1] = Stack[-4]
0x1ed: Call 0x784

0x1ee: Pop(1)
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(int, int)
0x1f1: PushEmpty(bool, object, object)
0x1f2: Stack[-2] = Stack[-7]
0x1f3: Stack[-1] = Stack[-6]
0x1f4: Call 0x7be

0x1f5: Pop(2)
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call 0x78c

0x1fa: Stack[-3] = Stack[-2]
0x1fb: Pop(2)
0x1fc: Push((int) 0)
0x1fd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1ff: Push((int) 1)
0x200: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x202: PushEmpty()
0x203: Call 0x280

0x204: Pop(0)
0x205: PushEmpty(object)
0x206: Stack[-1] = Stack[-5]
0x207: Call 0x793

0x208: Pop(1)
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-5]
0x20d: Call 0x799

0x20e: Stack[-3] = Stack[-2]
0x20f: Pop(2)
0x210: Push((int) 0)
0x211: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x213: Push((int) 1)
0x214: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: PushEmpty()
0x217: Call 0x280

0x218: Pop(0)
0x219: PushEmpty(object)
0x21a: Stack[-1] = Stack[-4]
0x21b: Call 0x79c

0x21c: Pop(1)
0x21d: Return(); Pop(2)

0x21e: PushEmpty(int, int)
0x21f: PushEmpty(int, string, object)
0x220: Stack[-2] = Stack[-6]
0x221: Stack[-1] = Stack[-7]
0x222: Call 0x79e

0x223: Stack[-4] = Stack[-3]
0x224: Pop(3)
0x225: Push((int) 0)
0x226: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x228: Push((int) 1)
0x229: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22b: PushEmpty()
0x22c: Call 0x280

0x22d: Pop(0)
0x22e: PushEmpty(string, object)
0x22f: Stack[-2] = Stack[-5]
0x230: Stack[-1] = Stack[-6]
0x231: Call 0x7a1

0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Call 0x280

0x236: Pop(0)
0x237: PushEmpty()
0x238: Call 0x7ac

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Call 0x6e8

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(14)

0x244: PushEmpty(int)
0x245: Call 0x758

0x246: Stack[-8] = Stack[-1]
0x247: Pop(1)
0x248: Stack[-6] = (int) 0
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call 0x6e8

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x254: Push((int) 3)
0x255: @ irand(Stack[-6], Stack[-1])
0x256: Pop(1)
0x257: Push((int) 0)
0x258: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x25a: Push(Stack[-7])
0x25b: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x25c: @ irand(Stack[-4], Stack[-7])
0x25d: Pop(0)
0x25e: Push("all")
0x25f: PushEmpty(string, int)
0x260: Stack[-1] = Stack[-7]
0x261: Call 0x751

0x262: Pop(1)
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: @ WaitForAnimEnd(Stack[-3])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-3] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x27f

0x26a: GOTO 0x27c

0x26b: Push((int) 1)
0x26c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26e: Push((int) 4)
0x26f: @ rand(Stack[-3], Stack[-1])
0x270: Pop(1)
0x271: Push((int) 1)
0x272: Pop(1); Push(Stack[-3] + Stack[-1]);
0x273: @ Sleep(Stack[-1], Stack[-2])
0x274: Pop(1)
0x275: Pop(0); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27f

0x278: GOTO 0x27c

0x279: Push(Stack[-6])
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x27f

0x27c: Push((int) 1)
0x27d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27e: GOTO 0x249

0x27f: Return(); Pop(14)

0x280: @ StopAnimation()
0x281: Pop(0)
0x282: @ StopGroup0()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x286: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x287: PushEmpty()
0x288: Call 0x2b8

0x289: Pop(0)
0x28a: @ GetDirection(Stack[-3])
0x28b: Pop(0)
0x28c: PushEmpty(cvector, object)
0x28d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28e: Call 0x606

0x28f: Stack[-4] = Stack[-2]
0x290: Pop(2)
0x291: PushEmpty(float, cvector, cvector)
0x292: Stack[-2] = Stack[-6]
0x293: Stack[-1] = Stack[-5]
0x294: Call 0x71d

0x295: Pop(2)
0x296: Push((int) 0)
0x297: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x299: PushEmpty(object)
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call 0x6dd

0x29c: Pop(1)
0x29d: Stack[-1] = (bool) 1
0x29e: GOTO 0x2a2

0x29f: Push((float)1.5)
0x2a0: @ Sleep(Stack[-1], Stack[-2])
0x2a1: Pop(1)
0x2a2: Push(Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a4: PushEmpty(object)
0x2a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a6: Call 0x6dd

0x2a7: Pop(1)
0x2a8: Push((int) 111)
0x2a9: Push((float)0.5)
0x2aa: @ SetTimer(Stack[-2], Stack[-1])
0x2ab: Pop(2)
0x2ac: Push((float)5.0)
0x2ad: @ Sleep(Stack[-1])
0x2ae: Pop(1)
0x2af: Push((int) 111)
0x2b0: @ KillTimer(Stack[-1])
0x2b1: Pop(1)
0x2b2: @ StopAsync()
0x2b3: Pop(0)
0x2b4: Push("head")
0x2b5: @ UnlookAsync(Stack[-1])
0x2b6: Pop(1)
0x2b7: Return(); Pop(6)

0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call 0x6ed

0x2bb: Pop(1)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(int, int)
0x2be: PushEmpty(int, object)
0x2bf: Stack[-1] = Stack[-5]
0x2c0: Call 0x7a3

0x2c1: Stack[-3] = Stack[-2]
0x2c2: Pop(2)
0x2c3: Push((int) 0)
0x2c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2c6: Push((int) 1)
0x2c7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c9: PushEmpty()
0x2ca: Call 0x329

0x2cb: Pop(0)
0x2cc: PushEmpty(object)
0x2cd: Stack[-1] = Stack[-4]
0x2ce: Call 0x7a6

0x2cf: Pop(1)
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(int, int)
0x2d2: PushEmpty(int, object)
0x2d3: Stack[-1] = Stack[-5]
0x2d4: Call 0x77a

0x2d5: Stack[-3] = Stack[-2]
0x2d6: Pop(2)
0x2d7: Push((int) 0)
0x2d8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2da: Push((int) 1)
0x2db: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: PushEmpty()
0x2de: Call 0x329

0x2df: Pop(0)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call 0x784

0x2e3: Pop(1)
0x2e4: Return(); Pop(2)

0x2e5: PushEmpty(int, int)
0x2e6: PushEmpty(bool, object, object)
0x2e7: Stack[-2] = Stack[-7]
0x2e8: Stack[-1] = Stack[-6]
0x2e9: Call 0x7be

0x2ea: Pop(2)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ec: PushEmpty(int, object)
0x2ed: Stack[-1] = Stack[-6]
0x2ee: Call 0x78c

0x2ef: Stack[-3] = Stack[-2]
0x2f0: Pop(2)
0x2f1: Push((int) 0)
0x2f2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f4: Push((int) 1)
0x2f5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f7: PushEmpty()
0x2f8: Call 0x329

0x2f9: Pop(0)
0x2fa: PushEmpty(object)
0x2fb: Stack[-1] = Stack[-5]
0x2fc: Call 0x793

0x2fd: Pop(1)
0x2fe: Return(); Pop(2)

0x2ff: PushEmpty(int, int)
0x300: PushEmpty(int, object)
0x301: Stack[-1] = Stack[-5]
0x302: Call 0x799

0x303: Stack[-3] = Stack[-2]
0x304: Pop(2)
0x305: Push((int) 0)
0x306: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x308: Push((int) 1)
0x309: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: PushEmpty()
0x30c: Call 0x329

0x30d: Pop(0)
0x30e: PushEmpty(object)
0x30f: Stack[-1] = Stack[-4]
0x310: Call 0x79c

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, string, object)
0x315: Stack[-2] = Stack[-6]
0x316: Stack[-1] = Stack[-7]
0x317: Call 0x79e

0x318: Stack[-4] = Stack[-3]
0x319: Pop(3)
0x31a: Push((int) 0)
0x31b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x31d: Push((int) 1)
0x31e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x320: PushEmpty()
0x321: Call 0x329

0x322: Pop(0)
0x323: PushEmpty(string, object)
0x324: Stack[-2] = Stack[-5]
0x325: Stack[-1] = Stack[-6]
0x326: Call 0x7a1

0x327: Pop(2)
0x328: Return(); Pop(2)

0x329: @ StopGroup0()
0x32a: Pop(0)
0x32b: @ StopAsync()
0x32c: Pop(0)
0x32d: Push("head")
0x32e: @ UnlookAsync(Stack[-1])
0x32f: Pop(1)
0x330: Push((int) 111)
0x331: @ KillTimer(Stack[-1])
0x332: Pop(1)
0x333: Return(); Pop(0)

0x334: PushEmpty()
0x335: PushEmpty()
0x336: Call 0x329

0x337: Pop(0)
0x338: PushEmpty(object)
0x339: Stack[-1] = Stack[-2]
0x33a: Call 0x743

0x33b: Pop(1)
0x33c: Return(); Pop(0)

0x33d: PushEmpty(cvector, cvector, cvector, cvector)
0x33e: Push((int) 111)
0x33f: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Return(); Pop(4)

0x342: PushEmpty(bool, object)
0x343: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x344: Call 0x682

0x345: Pop(1)
0x346: Pop(1); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x348: PushEmpty()
0x349: Call 0x329

0x34a: Pop(0)
0x34b: Return(); Pop(4)

0x34c: @ GetDirection(Stack[-2])
0x34d: Pop(0)
0x34e: PushEmpty(cvector, object)
0x34f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x350: Call 0x606

0x351: Stack[-3] = Stack[-2]
0x352: Pop(2)
0x353: PushEmpty(float, cvector, cvector)
0x354: Stack[-2] = Stack[-5]
0x355: Stack[-1] = Stack[-4]
0x356: Call 0x71d

0x357: Pop(2)
0x358: Push((float)0.5)
0x359: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35b: PushEmpty(object)
0x35c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35d: Call 0x6dd

0x35e: Pop(1)
0x35f: Return(); Pop(4)

0x360: PushEmpty()
0x361: Call 0x329

0x362: Pop(0)
0x363: PushEmpty()
0x364: Call 0x7ac

0x365: Pop(0)
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: PushEmpty(object, bool, float)
0x369: Stack[-3] = Stack[-4]
0x36a: Stack[-2] = (bool) 1
0x36b: Stack[-1] = (float) 180.0
0x36c: Call 0x375

0x36d: Pop(3)
0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: Stack[-3] = (float) 0.03
0x371: Return(); Pop(0)

0x372: PushEmpty()
0x373: Stack[-3] = (int) 0
0x374: Return(); Pop(0)

0x375: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x376: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x377: Push("all")
0x378: Push("attack_begin")
0x379: Push((int) 1)
0x37a: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x37b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37c: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x37d: Pop(2)
0x37e: Pop(0); Push((bool) Stack[-10] == 0)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: GOTO 0x384

0x381: Push((int) 1)
0x382: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x383: GOTO 0x377

0x384: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x385: Push("attack")
0x386: Push((int) 1)
0x387: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x388: Pop(2); Push(Stack[-2] + Stack[-1]);
0x389: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x38a: Pop(1)
0x38b: Pop(0); Push((bool) Stack[-9] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x391

0x38e: Push((int) 1)
0x38f: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x390: GOTO 0x385

0x391: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x392: Push("@GetAttackDistance")
0x393: Push((int) 1)
0x394: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x395: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x396: @@ GetAttackDistance(Stack[-8])
0x397: Pop(0)
0x398: Push((int) 50)
0x399: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x39a: GOTO 0x39c

0x39b: Stack[-8] = Stack[-21]
0x39c: Push((int) 150)
0x39d: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[-8] = (int) 150
0x3a0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3a1: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x3a2: @ IsPlayerActor(Stack[-0], Stack[-5])
0x3a3: Pop(0)
0x3a4: Push(Stack[-22])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-4] = (bool) 0
0x3a7: GOTO 0x3a9

0x3a8: Stack[-4] = (bool) 1
0x3a9: PushEmpty(bool)
0x3aa: Stack[-1] = (bool) 0
0x3ab: PushEmpty(bool, object)
0x3ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ad: Call 0x682

0x3ae: Pop(1)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b0: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Stack[-1] = (bool) 1
0x3b3: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x3b4: @@ GetPFPosition(Stack[-7])
0x3b5: Pop(0)
0x3b6: @ GetPFPosition(Stack[-6])
0x3b7: Pop(0)
0x3b8: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3b9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ba: Push((float)400.0)
0x3bb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3bc: Push((float)400.0)
0x3bd: Pop(1); Push(Stack[-1] + Stack[-10]);
0x3be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3bf: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c1: PushEmpty(bool, object, float, float, bool, bool)
0x3c2: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3c3: Stack[-4] = Stack[-14]
0x3c4: Stack[-3] = (float) 3000.0
0x3c5: Stack[-2] = (bool) 1
0x3c6: Stack[-1] = (bool) 0
0x3c7: Push(-6, 2); TaskCall(5)
0x3c8: Call 0x567

0x3c9: Pop(-6, 2); TaskReturn
0x3ca: Pop(5)
0x3cb: Pop(1); Push((bool) Stack[-1] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x431

0x3ce: Stack[-4] = (bool) 0
0x3cf: GOTO 0x430

0x3d0: Pop(0); Push(Stack[-21] * Stack[-21]);
0x3d1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x3d3: Pop(0); Push((bool) Stack[-4] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d5: PushEmpty(object)
0x3d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d7: Call 0x6dd

0x3d8: Pop(1)
0x3d9: Push("all")
0x3da: Push("attack_on")
0x3db: @ PlayAnimation(Stack[-2], Stack[-1])
0x3dc: Pop(2)
0x3dd: @ WaitForAnimEnd()
0x3de: Pop(0)
0x3df: @ StopAsync()
0x3e0: Pop(0)
0x3e1: Stack[-4] = (bool) 1
0x3e2: @ rand(Stack[-1])
0x3e3: Pop(0)
0x3e4: PushEmpty(bool)
0x3e5: Stack[-1] = (bool) 1
0x3e6: Push((float)0.6)
0x3e7: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e9: PushEmpty(bool)
0x3ea: Call 0x52d

0x3eb: Pop(0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: Stack[-1] = (bool) 0
0x3ee: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3ef: @ Face(Stack[-0])
0x3f0: Pop(0)
0x3f1: Push("all")
0x3f2: Push("attack_stay")
0x3f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: PushEmpty(bool, float)
0x3f6: Stack[-1] = Stack[-23]
0x3f7: Call 0x4d1

0x3f8: Pop(2)
0x3f9: @ StopAsync()
0x3fa: Pop(0)
0x3fb: GOTO 0x427

0x3fc: @ Face(Stack[-0])
0x3fd: Pop(0)
0x3fe: Push("all")
0x3ff: Push("fjump")
0x400: @ PlayAnimation(Stack[-2], Stack[-1])
0x401: Pop(2)
0x402: @ WaitForAnimEnd()
0x403: Pop(0)
0x404: Push(CVector(0.0, 0.0, 0.0))
0x405: @ SetSpeed(Stack[-1])
0x406: Pop(1)
0x407: @ Stop()
0x408: Pop(0)
0x409: @ StopAsync()
0x40a: Pop(0)
0x40b: PushEmpty(bool)
0x40c: Call 0x52d

0x40d: Pop(0)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x410: PushEmpty(bool, object)
0x411: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x412: Call 0x682

0x413: Pop(1)
0x414: Pop(1); Push((bool) Stack[-1] == 0)
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: GOTO 0x431

0x417: @@ GetPFPosition(Stack[-7])
0x418: Pop(0)
0x419: @ GetPFPosition(Stack[-6])
0x41a: Pop(0)
0x41b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x41c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x41d: Pop(0); Push(Stack[-21] * Stack[-21]);
0x41e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x420: PushEmpty(bool, float)
0x421: Stack[-1] = Stack[-23]
0x422: Call 0x469

0x423: Pop(1)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: GOTO 0x431

0x427: GOTO 0x430

0x428: PushEmpty(bool, float)
0x429: Stack[-1] = Stack[-23]
0x42a: Call 0x469

0x42b: Pop(1)
0x42c: Pop(1); Push((bool) Stack[-1] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: GOTO 0x431

0x42f: Stack[-4] = (bool) 1
0x430: GOTO 0x3a9

0x431: @ WaitForAnimEnd()
0x432: Pop(0)
0x433: Push( Stack[3 + Tasks[-1].StackPointer] )
0x434: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x435: Return(); Pop(20)

0x436: Push("all")
0x437: Push("attack_off")
0x438: @ PlayAnimation(Stack[-2], Stack[-1])
0x439: Pop(2)
0x43a: @ WaitForAnimEnd()
0x43b: Pop(0)
0x43c: Push(Stack[-5])
0x43d: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43e: Push((float)2.0)
0x43f: @ Sleep(Stack[-1])
0x440: Pop(1)
0x441: Return(); Pop(20)

0x442: PushEmpty(object, float, float, object, float, float)
0x443: Push((float)0.9)
0x444: Pop(1); Push(Stack[-9] * Stack[-1]);
0x445: @ GetVictim(Stack[-1], Stack[-4])
0x446: Pop(1)
0x447: @ ReportAttack(Stack[-0])
0x448: Pop(0)
0x449: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x44a: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x44b: PushEmpty(float, object, int)
0x44c: Stack[-2] = Stack[-6]
0x44d: Stack[-1] = Stack[-10]
0x44e: Call 0x36f

0x44f: Stack[-5] = Stack[-3]
0x450: Pop(3)
0x451: PushEmpty(float, object, float, int)
0x452: Stack[-3] = Stack[-7]
0x453: Stack[-2] = Stack[-6]
0x454: PushEmpty(int, object, int)
0x455: Stack[-2] = Stack[-10]
0x456: Stack[-1] = Stack[-14]
0x457: Call 0x372

0x458: Stack[-4] = Stack[-3]
0x459: Pop(3)
0x45a: Call 0x619

0x45b: Stack[-5] = Stack[-4]
0x45c: Pop(4)
0x45d: PushEmpty(int)
0x45e: Call 0x558

0x45f: Pop(0)
0x460: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x461: Pop(1)
0x462: PushEmpty(object, float)
0x463: Stack[-2] = Stack[-5]
0x464: Stack[-1] = Stack[-3]
0x465: Call 0x55a

0x466: Pop(2)
0x467: Return(); Pop(6)

0x468: Stack[-3] = 0
0x469: PushEmpty(int, bool, int, bool)
0x46a: @ irand(Stack[-2], Stack[-1])
0x46b: Pop(0)
0x46c: Push((int) 1)
0x46d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x46e: @ Face(Stack[-0])
0x46f: Pop(0)
0x470: Push((bool) 1)
0x471: @ SetAttackState(Stack[-1])
0x472: Pop(1)
0x473: Push("all")
0x474: Push("attack_begin")
0x475: Pop(1); Push(Stack[-1] + Stack[-4]);
0x476: @ PlayAnimation(Stack[-2], Stack[-1])
0x477: Pop(2)
0x478: @ WaitForAnimEnd()
0x479: Pop(0)
0x47a: PushEmpty()
0x47b: Call 0x538

0x47c: Pop(0)
0x47d: PushEmpty(bool, object)
0x47e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47f: Call 0x682

0x480: Pop(1)
0x481: Pop(1); Push((bool) Stack[-1] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x483: @ StopAsync()
0x484: Pop(0)
0x485: Stack[-6] = (bool) 0
0x486: Return(); Pop(4)

0x487: PushEmpty(float, int)
0x488: Stack[-2] = Stack[-7]
0x489: Stack[-1] = Stack[-4]
0x48a: Call 0x442

0x48b: Pop(2)
0x48c: Push("all")
0x48d: Push("attack_middle")
0x48e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x48f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: Push(Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x493: Push("all")
0x494: Push("attack_middle")
0x495: Pop(1); Push(Stack[-1] + Stack[-4]);
0x496: @ PlayAnimation(Stack[-2], Stack[-1])
0x497: Pop(2)
0x498: @ WaitForAnimEnd()
0x499: Pop(0)
0x49a: PushEmpty(bool, object)
0x49b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49c: Call 0x682

0x49d: Pop(1)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a0: @ StopAsync()
0x4a1: Pop(0)
0x4a2: Stack[-6] = (bool) 0
0x4a3: Return(); Pop(4)

0x4a4: PushEmpty(float, int)
0x4a5: Stack[-2] = Stack[-7]
0x4a6: Stack[-1] = Stack[-4]
0x4a7: Call 0x442

0x4a8: Pop(2)
0x4a9: Push((bool) 0)
0x4aa: @ SetAttackState(Stack[-1])
0x4ab: Pop(1)
0x4ac: Push("all")
0x4ad: Push("attack_end")
0x4ae: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4af: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: PushEmpty(bool, float)
0x4b2: Stack[-1] = (float) 0.75
0x4b3: Call 0x4b9

0x4b4: Pop(2)
0x4b5: @ StopAsync()
0x4b6: Pop(0)
0x4b7: Stack[-6] = (bool) 1
0x4b8: Return(); Pop(4)

0x4b9: PushEmpty(float, bool, float, bool)
0x4ba: @ rand(Stack[-2])
0x4bb: Pop(0)
0x4bc: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4be: @ IsAnimationPlaying(Stack[-1])
0x4bf: Pop(0)
0x4c0: Pop(0); Push((bool) Stack[-1] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: GOTO 0x4cc

0x4c3: PushEmpty(bool)
0x4c4: Call 0x4f9

0x4c5: Pop(0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: Stack[-6] = (bool) 1
0x4c8: Return(); Pop(4)

0x4c9: @ sync()
0x4ca: Pop(0)
0x4cb: GOTO 0x4be

0x4cc: GOTO 0x4cf

0x4cd: @ WaitForAnimEnd()
0x4ce: Pop(0)
0x4cf: Stack[-6] = (bool) 0
0x4d0: Return(); Pop(4)

0x4d1: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x4d2: @ IsAnimationPlaying(Stack[-5])
0x4d3: Pop(0)
0x4d4: Pop(0); Push((bool) Stack[-5] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4f7

0x4d7: PushEmpty(bool)
0x4d8: Call 0x4f9

0x4d9: Pop(0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-12] = (bool) 1
0x4dc: Return(); Pop(10)

0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4df: Call 0x682

0x4e0: Pop(1)
0x4e1: Pop(1); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-12] = (bool) 0
0x4e4: Return(); Pop(10)

0x4e5: @@ GetPFPosition(Stack[-4])
0x4e6: Pop(0)
0x4e7: @ GetPFPosition(Stack[-3])
0x4e8: Pop(0)
0x4e9: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x4ea: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4eb: Pop(0); Push(Stack[-11] * Stack[-11]);
0x4ec: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ee: PushEmpty(bool, float)
0x4ef: Stack[-1] = Stack[-13]
0x4f0: Call 0x469

0x4f1: Pop(2)
0x4f2: Stack[-12] = (bool) 1
0x4f3: Return(); Pop(10)

0x4f4: @ sync()
0x4f5: Pop(0)
0x4f6: GOTO 0x4d2

0x4f7: Stack[-12] = (bool) 0
0x4f8: Return(); Pop(10)

0x4f9: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x4fa: PushEmpty(bool, object)
0x4fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fc: Call 0x682

0x4fd: Pop(1)
0x4fe: Pop(1); Push((bool) Stack[-1] == 0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-11] = (bool) 0
0x501: Return(); Pop(10)

0x502: PushEmpty(bool)
0x503: Call 0x52d

0x504: Pop(0)
0x505: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x506: @@ GetPFPosition(Stack[-5])
0x507: Pop(0)
0x508: @ GetPFPosition(Stack[-4])
0x509: Pop(0)
0x50a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x50b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x50c: @@ GetAttackDistance(Stack[-1])
0x50d: Pop(0)
0x50e: Push((int) 50)
0x50f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x510: Pop(0); Push(Stack[-1] * Stack[-1]);
0x511: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x513: PushEmpty()
0x514: Call 0x51a

0x515: Pop(0)
0x516: Stack[-11] = (bool) 1
0x517: Return(); Pop(10)

0x518: Stack[-11] = (bool) 0
0x519: Return(); Pop(10)

0x51a: PushEmpty(cvector, cvector, cvector, cvector)
0x51b: @ Face(Stack[-0])
0x51c: Pop(0)
0x51d: Push("all")
0x51e: Push("bjump")
0x51f: @ PlayAnimation(Stack[-2], Stack[-1])
0x520: Pop(2)
0x521: @@ GetPFPosition(Stack[-2])
0x522: Pop(0)
0x523: @ GetPFPosition(Stack[-1])
0x524: Pop(0)
0x525: @ WaitForAnimEnd()
0x526: Pop(0)
0x527: @ StopAsync()
0x528: Pop(0)
0x529: Push(CVector(0.0, 0.0, 0.0))
0x52a: @ SetSpeed(Stack[-1])
0x52b: Pop(1)
0x52c: Return(); Pop(4)

0x52d: PushEmpty(bool, bool)
0x52e: Push("IsAttacking")
0x52f: Push((int) 1)
0x530: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x531: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x532: @@ IsAttacking(Stack[-1])
0x533: Pop(0)
0x534: Stack[-3] = Stack[-1]
0x535: Return(); Pop(2)

0x536: Stack[-3] = (bool) 0
0x537: Return(); Pop(2)

0x538: PushEmpty(float, int, float, int)
0x539: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Return(); Pop(4)

0x53c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x53d: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x53e: Push((int) -1)
0x53f: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x540: Push((int) 0)
0x541: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x543: Return(); Pop(4)

0x544: @ rand(Stack[-2])
0x545: Pop(0)
0x546: PushEmpty(float)
0x547: Call 0x55e

0x548: Pop(0)
0x549: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x54b: @ irand(Stack[-1], Stack[-2])
0x54c: Pop(0)
0x54d: Push((int) 1)
0x54e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x54f: Push("attack")
0x550: Pop(1); Push(Stack[-1] + Stack[-2]);
0x551: @ Speak(Stack[-1])
0x552: Pop(1)
0x553: PushEmpty(int)
0x554: Call 0x55c

0x555: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x556: Pop(1)
0x557: Return(); Pop(4)

0x558: Stack[-1] = (int) 0
0x559: Return(); Pop(0)

0x55a: PushEmpty()
0x55b: Return(); Pop(0)

0x55c: Stack[-1] = (int) 1
0x55d: Return(); Pop(0)

0x55e: Stack[-1] = (float) 0.5
0x55f: Return(); Pop(0)

0x560: PushEmpty()
0x561: Call 0x5e3

0x562: Pop(0)
0x563: PushEmpty()
0x564: Call 0x7ac

0x565: Pop(0)
0x566: Return(); Pop(0)

0x567: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x568: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x569: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x56a: Stack[-7] = Stack[-17]
0x56b: PushEmpty(bool, object)
0x56c: Stack[-1] = Stack[-23]
0x56d: Call 0x5f3

0x56e: Pop(1)
0x56f: Pop(1); Push((bool) Stack[-1] == 0)
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Stack[-22] = (bool) 0
0x572: Return(); Pop(16)

0x573: @@ GetPosition(Stack[-5])
0x574: Pop(0)
0x575: @ GetPosition(Stack[-4])
0x576: Pop(0)
0x577: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x578: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 0
0x57b: Push((int) 0)
0x57c: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x57f: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x581: Stack[-1] = (bool) 1
0x582: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x583: @ Stop()
0x584: Pop(0)
0x585: Stack[-22] = (bool) 0
0x586: Return(); Pop(16)

0x587: Pop(0); Push(Stack[-20] * Stack[-20]);
0x588: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x58a: @@ GetPFPosition(Stack[-5])
0x58b: Pop(0)
0x58c: @ FindPathTo(Stack[-1], Stack[-5])
0x58d: Pop(0)
0x58e: Pop(0); Push(( Stack[-1] != 0 )
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-6] = Stack[-1]
0x591: Stack[-1] = 0
0x592: Pop(0); Push(( Stack[-6] != 0 )
0x593: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x594: Push(Stack[-7])
0x595: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x596: Stack[-7] = (bool) 0
0x597: @ RotatePath(Stack[-6], Stack[-8])
0x598: Pop(0)
0x599: Pop(0); Push((bool) Stack[-8] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: GOTO 0x5cb

0x59c: Push((int) 0)
0x59d: Push((float)0.3)
0x59e: @ SetTimer(Stack[-2], Stack[-1])
0x59f: Pop(2)
0x5a0: PushEmpty(string)
0x5a1: Call 0x5fa

0x5a2: Pop(0)
0x5a3: PushEmpty(string)
0x5a4: Call 0x5fc

0x5a5: Pop(0)
0x5a6: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: Pop(0); Push((bool) Stack[-8] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5aa: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5ab: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ac: Stack[-6] = 0
0x5ad: GOTO 0x5cb

0x5ae: GOTO 0x5b0

0x5af: GOTO 0x5ca

0x5b0: GOTO 0x5b2

0x5b1: Stack[-6] = 0
0x5b2: GOTO 0x5c3

0x5b3: Push((int) 0)
0x5b4: @ KillTimer(Stack[-1])
0x5b5: Pop(1)
0x5b6: Push((float)0.5)
0x5b7: @ Sleep(Stack[-1], Stack[-9])
0x5b8: Pop(1)
0x5b9: Pop(0); Push((bool) Stack[-8] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5bc: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bd: Stack[-6] = 0
0x5be: GOTO 0x5cb

0x5bf: Push((int) 0)
0x5c0: Push((float)0.3)
0x5c1: @ SetTimer(Stack[-2], Stack[-1])
0x5c2: Pop(2)
0x5c3: Stack[-1] = 0
0x5c4: GOTO 0x5c9

0x5c5: Push((int) 0)
0x5c6: @ KillTimer(Stack[-1])
0x5c7: Pop(1)
0x5c8: GOTO 0x5cb

0x5c9: Stack[-6] = 0
0x5ca: GOTO 0x56b

0x5cb: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5cc: Return(); Pop(16)

0x5cd: PushEmpty()
0x5ce: Push((int) 0)
0x5cf: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d1: Return(); Pop(0)

0x5d2: PushEmpty(bool, object)
0x5d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Call 0x5f3

0x5d5: Pop(1)
0x5d6: Pop(1); Push((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5d9: Push((int) 0)
0x5da: @ KillTimer(Stack[-1])
0x5db: Pop(1)
0x5dc: @ Stop()
0x5dd: Pop(0)
0x5de: Return(); Pop(0)

0x5df: PushEmpty()
0x5e0: @ RequestClearPath(Stack[-1])
0x5e1: Pop(0)
0x5e2: Return(); Pop(0)

0x5e3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5e4: Push((int) 0)
0x5e5: @ KillTimer(Stack[-1])
0x5e6: Pop(1)
0x5e7: @ Stop()
0x5e8: Pop(0)
0x5e9: Return(); Pop(0)

0x5ea: PushEmpty()
0x5eb: PushEmpty()
0x5ec: Call 0x5e3

0x5ed: Pop(0)
0x5ee: PushEmpty(object)
0x5ef: Stack[-1] = Stack[-2]
0x5f0: Call 0x743

0x5f1: Pop(1)
0x5f2: Return(); Pop(0)

0x5f3: PushEmpty()
0x5f4: PushEmpty(bool, object)
0x5f5: Stack[-1] = Stack[-3]
0x5f6: Call 0x682

0x5f7: Stack[-4] = Stack[-2]
0x5f8: Pop(2)
0x5f9: Return(); Pop(0)

0x5fa: Stack[-1] = "walk"
0x5fb: Return(); Pop(0)

0x5fc: Stack[-1] = "run"
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: Push((int) 1)
0x600: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-2] = "fire"
0x603: Return(); Pop(0)

0x604: Stack[-2] = "phys"
0x605: Return(); Pop(0)

0x606: PushEmpty(cvector, cvector, cvector, cvector)
0x607: @ GetPosition(Stack[-2])
0x608: Pop(0)
0x609: @@ GetPosition(Stack[-1])
0x60a: Pop(0)
0x60b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x60c: Return(); Pop(4)

0x60d: PushEmpty(bool, bool)
0x60e: Push("HasProperty")
0x60f: Push((int) 2)
0x610: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x611: Pop(1); Push((bool) Stack[-1] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x613: Stack[-5] = (bool) 0
0x614: Return(); Pop(2)

0x615: @@ HasProperty(Stack[-3], Stack[-1])
0x616: Pop(0)
0x617: Stack[-5] = Stack[-1]
0x618: Return(); Pop(2)

0x619: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x61a: PushEmpty(bool, object, string)
0x61b: Stack[-2] = Stack[-18]
0x61c: Stack[-1] = "health"
0x61d: Call 0x60d

0x61e: Pop(2)
0x61f: Pop(1); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-16] = (float) 0.0
0x622: Return(); Pop(12)

0x623: PushEmpty(bool, object, string)
0x624: Stack[-2] = Stack[-18]
0x625: Stack[-1] = "armor"
0x626: Call 0x60d

0x627: Pop(2)
0x628: Pop(1); Push((bool) Stack[-1] == 0)
0x629: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62a: Stack[-6] = (int) 0
0x62b: GOTO 0x62f

0x62c: Push("armor")
0x62d: @@ GetProperty(Stack[-1], Stack[-7])
0x62e: Pop(1)
0x62f: Push("armor_")
0x630: PushEmpty(string, int)
0x631: Stack[-1] = Stack[-16]
0x632: Call 0x5fe

0x633: Pop(1)
0x634: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x635: PushEmpty(bool, object, string)
0x636: Stack[-2] = Stack[-18]
0x637: Stack[-1] = Stack[-8]
0x638: Call 0x60d

0x639: Pop(2)
0x63a: Pop(1); Push((bool) Stack[-1] == 0)
0x63b: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63c: Stack[-4] = (int) 0
0x63d: GOTO 0x640

0x63e: @@ GetProperty(Stack[-5], Stack[-4])
0x63f: Pop(0)
0x640: PushEmpty(float, float, float)
0x641: Pop(0); Push(Stack[-9] + Stack[-7]);
0x642: Push((float)100.0)
0x643: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x644: Stack[-1] = (int) 1
0x645: Call 0x6f8

0x646: Stack[-6] = Stack[-3]
0x647: Pop(3)
0x648: Push("health")
0x649: @@ GetProperty(Stack[-1], Stack[-3])
0x64a: Pop(1)
0x64b: Push((int) 1)
0x64c: Pop(1); Push(Stack[-1] - Stack[-4]);
0x64d: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x64e: Push("health")
0x64f: PushEmpty(float, float, float, float)
0x650: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x651: Stack[-2] = (int) 0
0x652: Stack[-1] = (int) 1
0x653: Call 0x6ff

0x654: Pop(3)
0x655: @@ SetProperty(Stack[-2], Stack[-1])
0x656: Pop(2)
0x657: Stack[-16] = Stack[-1]
0x658: Return(); Pop(12)

0x659: PushEmpty(bool, bool)
0x65a: @@ IsDead(Stack[-1])
0x65b: Pop(0)
0x65c: Stack[-4] = Stack[-1]
0x65d: Return(); Pop(2)

0x65e: PushEmpty(object, object, object, object)
0x65f: Pop(0); Push((bool) Stack[-5] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: Stack[-6] = (bool) 0
0x662: Return(); Pop(4)

0x663: PushEmpty(bool)
0x664: Stack[-1] = (bool) 0
0x665: Push("IsDead")
0x666: Push((int) 1)
0x667: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x668: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x669: PushEmpty(bool, object)
0x66a: Stack[-1] = Stack[-8]
0x66b: Call 0x659

0x66c: Pop(1)
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Stack[-1] = (bool) 1
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-6] = (bool) 0
0x671: Return(); Pop(4)

0x672: @ GetScene(Stack[-2])
0x673: Pop(0)
0x674: Pop(0); Push((bool) Stack[-2] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-6] = (bool) 0
0x677: Return(); Pop(4)

0x678: @@ GetScene(Stack[-1])
0x679: Pop(0)
0x67a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67c: Stack[-6] = (bool) 0
0x67d: Return(); Pop(4)

0x67e: Stack[-6] = (bool) 1
0x67f: Return(); Pop(4)

0x680: Stack[-1] = 0
0x681: Stack[-2] = 0
0x682: PushEmpty(int, int)
0x683: PushEmpty(bool, object)
0x684: Stack[-1] = Stack[-5]
0x685: Call 0x65e

0x686: Pop(1)
0x687: Pop(1); Push((bool) Stack[-1] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-4] = (bool) 0
0x68a: Return(); Pop(2)

0x68b: PushEmpty(bool, object, string)
0x68c: Stack[-2] = Stack[-6]
0x68d: Stack[-1] = "noaccess"
0x68e: Call 0x60d

0x68f: Pop(2)
0x690: Pop(1); Push((bool) Stack[-1] == 0)
0x691: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x692: Stack[-4] = (bool) 1
0x693: Return(); Pop(2)

0x694: Push("noaccess")
0x695: @@ GetProperty(Stack[-1], Stack[-2])
0x696: Pop(1)
0x697: Push((int) 0)
0x698: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x699: Return(); Pop(2)

0x69a: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x69b: PushEmpty(bool)
0x69c: Stack[-1] = (bool) 0
0x69d: Push((int) 4)
0x69e: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push((int) 5)
0x6a1: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: Stack[-1] = (bool) 1
0x6a4: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6a5: @ GetScene(Stack[-10])
0x6a6: Pop(0)
0x6a7: @ GetPosition(Stack[-8])
0x6a8: Pop(0)
0x6a9: @ GetEyesHeight(Stack[-7])
0x6aa: Pop(0)
0x6ab: Push(CvectorIndex(Stack[-8], 1))
0x6ac: Push((int) 2)
0x6ad: Pop(1); Push(Stack[-9] / Stack[-1]);
0x6ae: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6af: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6b0: Push("scripted")
0x6b1: Push(CVector(0.0, 0.0, 1.0))
0x6b2: Push("blood.xml")
0x6b3: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Stack[-9] = 0
0x6b6: Stack[-10] = 0
0x6b7: Pop(0); Push((bool) Stack[-23] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b9: Return(); Pop(20)

0x6ba: @ GetSecondaryAnimationType(Stack[-6])
0x6bb: Pop(0)
0x6bc: Push((int) 0)
0x6bd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: Return(); Pop(20)

0x6c0: @@ GetPosition(Stack[-5])
0x6c1: Pop(0)
0x6c2: @ GetPosition(Stack[-4])
0x6c3: Pop(0)
0x6c4: @ GetDirection(Stack[-3])
0x6c5: Pop(0)
0x6c6: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6c7: Push(CvectorIndex(Stack[-2], 0))
0x6c8: Push(CvectorIndex(Stack[-4], 0))
0x6c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ca: Push(CvectorIndex(Stack[-3], 2))
0x6cb: Push(CvectorIndex(Stack[-5], 2))
0x6cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ce: Push((int) 0)
0x6cf: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: Stack[-1] = "fhit"
0x6d2: GOTO 0x6d4

0x6d3: Stack[-1] = "bhit"
0x6d4: Push("hit_react")
0x6d5: Push("1")
0x6d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6d7: Push("2")
0x6d8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6d9: Push((int) -10)
0x6da: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(4)
0x6dc: Return(); Pop(20)

0x6dd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6de: @@ GetPosition(Stack[-3])
0x6df: Pop(0)
0x6e0: @ GetPosition(Stack[-2])
0x6e1: Pop(0)
0x6e2: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6e3: Push(CvectorIndex(Stack[-1], 0))
0x6e4: Push(CvectorIndex(Stack[-2], 2))
0x6e5: @ RotateAsync(Stack[-2], Stack[-1])
0x6e6: Pop(2)
0x6e7: Return(); Pop(6)

0x6e8: PushEmpty(bool, bool)
0x6e9: @ IsLoaded(Stack[-1])
0x6ea: Pop(0)
0x6eb: Stack[-3] = Stack[-1]
0x6ec: Return(); Pop(2)

0x6ed: PushEmpty(float, cvector, float, cvector)
0x6ee: @@ GetEyesHeight(Stack[-2])
0x6ef: Pop(0)
0x6f0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6f1: Push(CvectorIndex(Stack[-1], 1))
0x6f2: Stack[-1] = Stack[-3]
0x6f3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6f4: Push("head")
0x6f5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6f6: Pop(1)
0x6f7: Return(); Pop(4)

0x6f8: PushEmpty()
0x6f9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fb: Stack[-3] = Stack[-2]
0x6fc: GOTO 0x6fe

0x6fd: Stack[-3] = Stack[-1]
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty()
0x700: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x701: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x702: Stack[-4] = Stack[-2]
0x703: Return(); Pop(0)

0x704: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x706: Stack[-4] = Stack[-1]
0x707: Return(); Pop(0)

0x708: Stack[-4] = Stack[-3]
0x709: Return(); Pop(0)

0x70a: PushEmpty()
0x70b: Push(CvectorIndex(Stack[-2], 0))
0x70c: Push(CvectorIndex(Stack[-2], 0))
0x70d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x70e: Push(CvectorIndex(Stack[-3], 2))
0x70f: Push(CvectorIndex(Stack[-3], 2))
0x710: Pop(2); Push(Stack[-2] * Stack[-1]);
0x711: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x712: Return(); Pop(0)

0x713: PushEmpty()
0x714: Push(CvectorIndex(Stack[-1], 0))
0x715: Push(CvectorIndex(Stack[-2], 0))
0x716: Pop(2); Push(Stack[-2] * Stack[-1]);
0x717: Push(CvectorIndex(Stack[-2], 2))
0x718: Push(CvectorIndex(Stack[-3], 2))
0x719: Pop(2); Push(Stack[-2] * Stack[-1]);
0x71a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x71b: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x71c: Return(); Pop(0)

0x71d: PushEmpty()
0x71e: PushEmpty(float, cvector, cvector)
0x71f: Stack[-2] = Stack[-5]
0x720: Stack[-1] = Stack[-4]
0x721: Call 0x70a

0x722: Pop(2)
0x723: PushEmpty(float, cvector)
0x724: Stack[-1] = Stack[-5]
0x725: Call 0x713

0x726: Pop(1)
0x727: PushEmpty(float, cvector)
0x728: Stack[-1] = Stack[-5]
0x729: Call 0x713

0x72a: Pop(1)
0x72b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x72c: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x72d: Return(); Pop(0)

0x72e: PushEmpty()
0x72f: PushEmpty(object)
0x730: Stack[-1] = Stack[-2]
0x731: Push(-1, 0); TaskCall(0)
0x732: Call 0x0

0x733: Pop(-1, 0); TaskReturn
0x734: Pop(1)
0x735: Return(); Pop(0)

0x736: PushEmpty(float, float)
0x737: Push("health")
0x738: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73a: Push("health")
0x73b: @ GetProperty(Stack[-1], Stack[-2])
0x73c: Pop(1)
0x73d: Push((int) 0)
0x73e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x740: @ SignalDeath(Stack[-4])
0x741: Pop(0)
0x742: Return(); Pop(2)

0x743: PushEmpty()
0x744: PushEmpty(object)
0x745: Stack[-1] = Stack[-2]
0x746: Call 0x72e

0x747: Pop(1)
0x748: Return(); Pop(0)

0x749: PushEmpty()
0x74a: PushEmpty(object, int, float)
0x74b: Stack[-3] = Stack[-7]
0x74c: Stack[-2] = Stack[-6]
0x74d: Stack[-1] = Stack[-5]
0x74e: Call 0x69a

0x74f: Pop(3)
0x750: Return(); Pop(0)

0x751: PushEmpty(string, string)
0x752: Stack[-1] = "idle"
0x753: Push(Stack[-3])
0x754: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x755: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x756: Stack[-4] = Stack[-1]
0x757: Return(); Pop(2)

0x758: PushEmpty(int, bool, int, bool)
0x759: Stack[-2] = (int) 0
0x75a: Push("all")
0x75b: PushEmpty(string, int)
0x75c: Stack[-1] = Stack[-5]
0x75d: Call 0x751

0x75e: Pop(1)
0x75f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(2)
0x761: Pop(0); Push((bool) Stack[-1] == 0)
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: GOTO 0x767

0x764: Push((int) 1)
0x765: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x766: GOTO 0x75a

0x767: Stack[-5] = Stack[-2]
0x768: Return(); Pop(4)

0x769: PushEmpty()
0x76a: PushEmpty(bool)
0x76b: Call 0x7bc

0x76c: Pop(0)
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-2] = (int) 2
0x76f: GOTO 0x771

0x770: Stack[-2] = (int) 0
0x771: Return(); Pop(0)

0x772: PushEmpty()
0x773: PushEmpty(object)
0x774: Stack[-1] = Stack[-2]
0x775: Push(-1, 1); TaskCall(3)
0x776: Call 0x285

0x777: Pop(-1, 1); TaskReturn
0x778: Pop(1)
0x779: Return(); Pop(0)

0x77a: PushEmpty()
0x77b: PushEmpty(bool, object)
0x77c: Stack[-1] = Stack[-3]
0x77d: Call 0x682

0x77e: Pop(1)
0x77f: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x780: Stack[-2] = (int) 2
0x781: GOTO 0x783

0x782: Stack[-2] = (int) 0
0x783: Return(); Pop(0)

0x784: PushEmpty()
0x785: PushEmpty(object)
0x786: Stack[-1] = Stack[-2]
0x787: Push(-1, 5); TaskCall(4)
0x788: Call 0x367

0x789: Pop(-1, 5); TaskReturn
0x78a: Pop(1)
0x78b: Return(); Pop(0)

0x78c: PushEmpty()
0x78d: PushEmpty(int, object)
0x78e: Stack[-1] = Stack[-3]
0x78f: Call 0x77a

0x790: Stack[-4] = Stack[-2]
0x791: Pop(2)
0x792: Return(); Pop(0)

0x793: PushEmpty()
0x794: PushEmpty(object)
0x795: Stack[-1] = Stack[-2]
0x796: Call 0x784

0x797: Pop(1)
0x798: Return(); Pop(0)

0x799: PushEmpty()
0x79a: Stack[-2] = (int) 0
0x79b: Return(); Pop(0)

0x79c: PushEmpty()
0x79d: Return(); Pop(0)

0x79e: PushEmpty()
0x79f: Stack[-3] = (int) 0
0x7a0: Return(); Pop(0)

0x7a1: PushEmpty()
0x7a2: Return(); Pop(0)

0x7a3: PushEmpty()
0x7a4: Stack[-2] = (int) 2
0x7a5: Return(); Pop(0)

0x7a6: PushEmpty()
0x7a7: PushEmpty(object)
0x7a8: Stack[-1] = Stack[-2]
0x7a9: Call 0x7b1

0x7aa: Pop(1)
0x7ab: Return(); Pop(0)

0x7ac: Return(); Pop(0)

0x7ad: Push(GlobalVars[0])
0x7ae: Stack[-1] = (bool) 0
0x7af: GlobalVars[0] = Stack[-1]; Pop(1)
0x7b0: Return(); Pop(0)

0x7b1: PushEmpty(bool, bool)
0x7b2: Push(GlobalVars[0])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b4: @ IsOverrideActive(Stack[-1])
0x7b5: Pop(0)
0x7b6: Pop(0); Push((bool) Stack[-1] == 0)
0x7b7: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b8: @ WorkWithCorpse(Stack[-3])
0x7b9: Pop(0)
0x7ba: Return(); Pop(2)

0x7bb: Return(); Pop(2)

0x7bc: Stack[-1] = (bool) 0
0x7bd: Return(); Pop(0)

0x7be: PushEmpty()
0x7bf: Stack[-3] = (bool) 0
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty()
0x7c2: Push(GlobalVars[0])
0x7c3: Stack[-1] = (bool) 1
0x7c4: GlobalVars[0] = Stack[-1]; Pop(1)
0x7c5: Push((int) 50)
0x7c6: Push((int) 40)
0x7c7: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x7c8: Pop(2)
0x7c9: Return(); Pop(0)

