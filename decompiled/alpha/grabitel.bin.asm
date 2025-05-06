GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	aattack_begin1
	aattack_end1
	knife
	scripted
	grabitel_knife.xml
	SetScriptProperty
	StartDirection
	kill
	attack_off
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_middle
	attack_end
	bjump
	IsAttacking
	IsAttacking
	walk
	run
	hunt
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
	blood.xml
	fhit
	bhit
	hit_react
	2
	idle
	GenerateMoney: iMin > iMax
	Money
	bottle_weapon
	ognemet_ammo
	in
	class
	grabitel
	add

Import:
	SetRTEnvelope (2 args)
	Hold (0 args)
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
	SetTimer (2 args)
	KillTimer (1 args)
	IsInWalkMode (1 args)
	GetBrightness (1 args)
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
	Face (1 args)
	GetScene (1 args)
	GetGeometryLocator (3 args)
	AddActorByType (6 args)
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
	FindPathTo (2 args)
	FollowPath (5 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	self (1 args)
	CreateObjectSet (1 args)
	Trace (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	ResetAAS (0 args)
	CanSee (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x93
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x18 Vars = (object)
		EVENT_22 Op = 0x8d Vars = (object, int, float, float)
		EVENT_16 Op = 0x8f Vars = (object, string)
		EVENT_41 Op = 0x91 Vars = (object)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_41 Op = 0xa7 Vars = (object)
		EVENT_7 Op = 0xb0 Vars = (int)
		EVENT_1 Op = 0xd7 Vars = (object)
		EVENT_3 Op = 0xe5 Vars = (object)
		EVENT_17 Op = 0xf3 Vars = (object)
		EVENT_30 Op = 0xfc Vars = (object, object)
		EVENT_10 Op = 0x141 Vars = (object)
		EVENT_28 Op = 0x145 Vars = ()
	GTASK_2  Params = 0
		EVENT_1 Op = 0x158 Vars = (object)
		EVENT_3 Op = 0x166 Vars = (object)
		EVENT_17 Op = 0x174 Vars = (object)
		EVENT_30 Op = 0x17d Vars = (object, object)
	GTASK_3  Params = 1
		EVENT_41 Op = 0x1dc Vars = (object)
		EVENT_1 Op = 0x1e5 Vars = (object)
		EVENT_3 Op = 0x1f3 Vars = (object)
		EVENT_17 Op = 0x201 Vars = (object)
		EVENT_30 Op = 0x20a Vars = (object, object)
	GTASK_4  Params = 2
	GTASK_5 Vars = (bool) Params = 2
		EVENT_17 Op = 0x294 Vars = (object)
		EVENT_30 Op = 0x29a Vars = (object, object)
		EVENT_26 Op = 0x2a1 Vars = (string)
	GTASK_6 Vars = (object, int, int, bool, int) Params = 2
		EVENT_17 Op = 0x2dd Vars = (object)
		EVENT_30 Op = 0x2e3 Vars = (object, object)
		EVENT_26 Op = 0x2ea Vars = (string)
	GTASK_7 Vars = (bool, object) Params = 6
		EVENT_17 Op = 0x4dd Vars = (object)
		EVENT_30 Op = 0x4e3 Vars = (object, object)
		EVENT_26 Op = 0x4ea Vars = (string)
		EVENT_7 Op = 0x55b Vars = (int)
		EVENT_10 Op = 0x56d Vars = (object)
		EVENT_41 Op = 0x578 Vars = (object)
	GTASK_8 Vars = (bool, object, bool) Params = 1
		EVENT_41 Op = 0x5ca Vars = (object)
		EVENT_17 Op = 0x5d3 Vars = (object)
		EVENT_7 Op = 0x642 Vars = (int)
		EVENT_10 Op = 0x654 Vars = (object)

Events:
EVENT_22 Op = 0x8fe Vars = (object, int, float, float)
EVENT_16 Op = 0x906 Vars = (object, string)
EVENT_41 Op = 0x913 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call 0x804

0x3: Pop(0)
0x4: PushEmpty(object)
0x5: Stack[-1] = Stack[-2]
0x6: Call 0x9

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: EventDisable(0)
0xb: PushEmpty(object)
0xc: Stack[-1] = Stack[-2]
0xd: Call 0x20

0xe: Pop(1)
0xf: Push((int) 50)
0x10: Push((int) 40)
0x11: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: EventEnable(0)
0x14: @ Hold()
0x15: Pop(0)
0x16: GOTO 0x14

0x17: Return(); Pop(0)

0x18: PushEmpty(bool, bool)
0x19: @ IsOverrideActive(Stack[-1])
0x1a: Pop(0)
0x1b: Pop(0); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: @ WorkWithCorpse(Stack[-3])
0x1e: Pop(0)
0x1f: Return(); Pop(2)

0x20: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x21: Pop(0); Push((bool) Stack[-21] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: PushEmpty(string)
0x24: Stack[-1] = "fdie"
0x25: Call 0x77

0x26: Pop(1)
0x27: GOTO 0x76

0x28: @@ GetPosition(Stack[-10])
0x29: Pop(0)
0x2a: @ GetPosition(Stack[-9])
0x2b: Pop(0)
0x2c: @ GetDirection(Stack[-8])
0x2d: Pop(0)
0x2e: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2f: Push(CvectorIndex(Stack[-7], 0))
0x30: Push(CvectorIndex(Stack[-9], 0))
0x31: Pop(2); Push(Stack[-2] * Stack[-1]);
0x32: Push(CvectorIndex(Stack[-8], 2))
0x33: Push(CvectorIndex(Stack[-10], 2))
0x34: Pop(2); Push(Stack[-2] * Stack[-1]);
0x35: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36: Push((int) 0)
0x37: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-6] = "fdie"
0x3a: GOTO 0x3c

0x3b: Stack[-6] = "bdie"
0x3c: @ RemoveRTEnvelope()
0x3d: Pop(0)
0x3e: @ SetDeathState()
0x3f: Pop(0)
0x40: @ Stop()
0x41: Pop(0)
0x42: @ StopAsync()
0x43: Pop(0)
0x44: Stack[-5] = Stack[-21]
0x45: Push("GetScriptProperty")
0x46: Push((int) 2)
0x47: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x48: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x49: Push("Owner")
0x4a: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4b: Pop(1)
0x4c: Push(Stack[-4])
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: Push("Owner")
0x4f: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x50: Pop(1)
0x51: Pop(0); Push((bool) Stack[-5] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Stack[-5] = Stack[-21]
0x54: Push("@GetEyesHeight")
0x55: Push((int) 1)
0x56: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x57: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x58: @@ GetEyesHeight(Stack[-2])
0x59: Pop(0)
0x5a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5b: Push(CvectorIndex(Stack[-1], 1))
0x5c: Stack[-1] = Stack[-3]
0x5d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5e: Push("head")
0x5f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x60: Pop(1)
0x61: Stack[-3] = (bool) 1
0x62: GOTO 0x64

0x63: Stack[-3] = (bool) 0
0x64: Push("all")
0x65: @ PlayAnimation(Stack[-1], Stack[-7])
0x66: Pop(1)
0x67: @ WaitForAnimEnd()
0x68: Pop(0)
0x69: Push(Stack[-3])
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: @ StopAsync()
0x6c: Pop(0)
0x6d: Push("head")
0x6e: @ UnlookAsync(Stack[-1])
0x6f: Pop(1)
0x70: Push("all")
0x71: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x72: Pop(1)
0x73: @ RemoveEnvelope()
0x74: Pop(0)
0x75: Stack[-5] = 0
0x76: Return(); Pop(20)

0x77: PushEmpty()
0x78: @ RemoveRTEnvelope()
0x79: Pop(0)
0x7a: @ SetDeathState()
0x7b: Pop(0)
0x7c: @ Stop()
0x7d: Pop(0)
0x7e: @ StopAsync()
0x7f: Pop(0)
0x80: @ StopSecondaryAnimation()
0x81: Pop(0)
0x82: Push("all")
0x83: @ PlayAnimation(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push("all")
0x88: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x89: Pop(1)
0x8a: @ RemoveEnvelope()
0x8b: Pop(0)
0x8c: Return(); Pop(0)

0x8d: PushEmpty()
0x8e: Return(); Pop(0)

0x8f: PushEmpty()
0x90: Return(); Pop(0)

0x91: PushEmpty()
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Call 0x849

0x95: Pop(0)
0x96: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x97: Push((int) 130)
0x98: Push((float)0.3)
0x99: @ SetTimer(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: PushEmpty()
0x9c: Call 0x108

0x9d: Pop(0)
0x9e: GOTO 0x97

0x9f: Return(); Pop(0)

0xa0: PushEmpty()
0xa1: Call 0x148

0xa2: Pop(0)
0xa3: Push((int) 130)
0xa4: @ KillTimer(Stack[-1])
0xa5: Pop(1)
0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty()
0xa9: Call 0xa0

0xaa: Pop(0)
0xab: PushEmpty(object)
0xac: Stack[-1] = Stack[-2]
0xad: Call 0x913

0xae: Pop(1)
0xaf: Return(); Pop(0)

0xb0: PushEmpty(bool, float, bool, bool, float, bool)
0xb1: Push((int) 130)
0xb2: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(6)

0xb5: @ IsInWalkMode(Stack[-3])
0xb6: Pop(0)
0xb7: Push(Stack[-3])
0xb8: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xb9: @ GetBrightness(Stack[-2])
0xba: Pop(0)
0xbb: Push((float)0.2)
0xbc: Stack[-2] = Stack[-3] <= Stack[-1]; Pop(1);
0xbd: Pop(0); Push((bool) Stack[-1] != Stack[2 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xbf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc0: Push(Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0x14f

0xc4: Pop(0)
0xc5: Push((int) 130)
0xc6: @ KillTimer(Stack[-1])
0xc7: Pop(1)
0xc8: PushEmpty(bool)
0xc9: Push(-1, 0); TaskCall(3)
0xca: Call 0x1d3

0xcb: Pop(-1, 0); TaskReturn
0xcc: Pop(0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xce: PushEmpty()
0xcf: Call 0x148

0xd0: Pop(0)
0xd1: GOTO 0xd6

0xd2: Push((int) 130)
0xd3: Push((float)0.3)
0xd4: @ SetTimer(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: Return(); Pop(6)

0xd7: PushEmpty()
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[-3]
0xda: Call 0x888

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdd: PushEmpty()
0xde: Call 0xa0

0xdf: Pop(0)
0xe0: PushEmpty(object)
0xe1: Stack[-1] = Stack[-2]
0xe2: Call 0x88f

0xe3: Pop(1)
0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[-3]
0xe8: Call 0x870

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xeb: PushEmpty()
0xec: Call 0xa0

0xed: Pop(0)
0xee: PushEmpty(object)
0xef: Stack[-1] = Stack[-2]
0xf0: Call 0x877

0xf1: Pop(1)
0xf2: Return(); Pop(0)

0xf3: PushEmpty()
0xf4: PushEmpty()
0xf5: Call 0xa0

0xf6: Pop(0)
0xf7: PushEmpty(object)
0xf8: Stack[-1] = Stack[-2]
0xf9: Call 0x8ad

0xfa: Pop(1)
0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty(bool, object, object)
0xfe: Stack[-2] = Stack[-5]
0xff: Stack[-1] = Stack[-4]
0x100: Call 0x8c9

0x101: Pop(2)
0x102: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-3]
0x105: Call 0xf3

0x106: Pop(1)
0x107: Return(); Pop(0)

0x108: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x109: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x10a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x10b: Push((float)0.5)
0x10c: @ rand(Stack[-8], Stack[-1])
0x10d: Pop(1)
0x10e: @ Sleep(Stack[-7])
0x10f: Pop(0)
0x110: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x112: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x114: @ GetPosition(Stack[-5])
0x115: Pop(0)
0x116: @ GetCameraFarDistance(Stack[-4])
0x117: Pop(0)
0x118: Push((float)2.5)
0x119: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x11a: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x11b: Pop(0)
0x11c: Push(Stack[-3])
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: GOTO 0x123

0x11f: Push((int) 1)
0x120: @ Sleep(Stack[-1])
0x121: Pop(1)
0x122: GOTO 0x114

0x123: GOTO 0x125

0x124: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x125: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x126: Pop(0)
0x127: Pop(0); Push(( Stack[-2] != 0 )
0x128: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x129: @ RotatePath(Stack[-2], Stack[-1])
0x12a: Pop(0)
0x12b: Push(Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12d: PushEmpty(bool)
0x12e: Call 0x156

0x12f: Pop(0)
0x130: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x131: Pop(1)
0x132: Stack[-2] = 0
0x133: Push(Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: PushEmpty()
0x136: Push(-0, 0); TaskCall(2)
0x137: Call 0x189

0x138: Pop(-0, 0); TaskReturn
0x139: Pop(0)
0x13a: GOTO 0x13e

0x13b: Push((int) 1)
0x13c: @ Sleep(Stack[-1])
0x13d: Pop(1)
0x13e: Stack[-2] = 0
0x13f: GOTO 0x110

0x140: Return(); Pop(14)

0x141: PushEmpty()
0x142: @ RequestClearPath(Stack[-1])
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: @ Stop()
0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x149: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14a: @ Stop()
0x14b: Pop(0)
0x14c: @ StopGroup0()
0x14d: Pop(0)
0x14e: Return(); Pop(0)

0x14f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x150: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x151: @ Stop()
0x152: Pop(0)
0x153: @ StopGroup0()
0x154: Pop(0)
0x155: Return(); Pop(0)

0x156: Stack[-1] = (bool) 0
0x157: Return(); Pop(0)

0x158: PushEmpty()
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[-3]
0x15b: Call 0x888

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15e: PushEmpty()
0x15f: Call 0x1ce

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[-2]
0x163: Call 0x88f

0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty()
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[-3]
0x169: Call 0x870

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16c: PushEmpty()
0x16d: Call 0x1ce

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[-2]
0x171: Call 0x877

0x172: Pop(1)
0x173: Return(); Pop(0)

0x174: PushEmpty()
0x175: PushEmpty()
0x176: Call 0x1ce

0x177: Pop(0)
0x178: PushEmpty(object)
0x179: Stack[-1] = Stack[-2]
0x17a: Call 0x8ad

0x17b: Pop(1)
0x17c: Return(); Pop(0)

0x17d: PushEmpty()
0x17e: PushEmpty(bool, object, object)
0x17f: Stack[-2] = Stack[-5]
0x180: Stack[-1] = Stack[-4]
0x181: Call 0x8c9

0x182: Pop(2)
0x183: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-3]
0x186: Call 0x174

0x187: Pop(1)
0x188: Return(); Pop(0)

0x189: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18a: @ WaitForAnimEnd()
0x18b: Pop(0)
0x18c: PushEmpty(bool)
0x18d: Call 0x78c

0x18e: Pop(0)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Return(); Pop(14)

0x192: PushEmpty(int)
0x193: Call 0x7d5

0x194: Stack[-8] = Stack[-1]
0x195: Pop(1)
0x196: Stack[-6] = (int) 0
0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push((int) 5)
0x19a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: PushEmpty(bool)
0x19d: Call 0x78c

0x19e: Pop(0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1a2: Push((int) 3)
0x1a3: @ irand(Stack[-6], Stack[-1])
0x1a4: Pop(1)
0x1a5: Push((int) 0)
0x1a6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1a8: Push(Stack[-7])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1aa: @ irand(Stack[-4], Stack[-7])
0x1ab: Pop(0)
0x1ac: Push("all")
0x1ad: PushEmpty(string, int)
0x1ae: Stack[-1] = Stack[-7]
0x1af: Call 0x7ce

0x1b0: Pop(1)
0x1b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: @ WaitForAnimEnd(Stack[-3])
0x1b4: Pop(0)
0x1b5: Pop(0); Push((bool) Stack[-3] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: GOTO 0x1cd

0x1b8: GOTO 0x1ca

0x1b9: Push((int) 1)
0x1ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1bc: Push((int) 4)
0x1bd: @ rand(Stack[-3], Stack[-1])
0x1be: Pop(1)
0x1bf: Push((int) 1)
0x1c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c1: @ Sleep(Stack[-1], Stack[-2])
0x1c2: Pop(1)
0x1c3: Pop(0); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: GOTO 0x1cd

0x1c6: GOTO 0x1ca

0x1c7: Push(Stack[-6])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: GOTO 0x1cd

0x1ca: Push((int) 1)
0x1cb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1cc: GOTO 0x197

0x1cd: Return(); Pop(14)

0x1ce: @ StopAnimation()
0x1cf: Pop(0)
0x1d0: @ StopGroup0()
0x1d1: Pop(0)
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(bool, bool)
0x1d4: Push((int) 5)
0x1d5: @ Sleep(Stack[-1], Stack[-2])
0x1d6: Pop(1)
0x1d7: Stack[-3] = !Stack[-1]; Pop(0);
0x1d8: Return(); Pop(2)

0x1d9: @ StopGroup0()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: PushEmpty()
0x1dd: PushEmpty()
0x1de: Call 0x1d9

0x1df: Pop(0)
0x1e0: PushEmpty(object)
0x1e1: Stack[-1] = Stack[-2]
0x1e2: Call 0x913

0x1e3: Pop(1)
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty()
0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[-3]
0x1e8: Call 0x888

0x1e9: Pop(1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1eb: PushEmpty()
0x1ec: Call 0x1d9

0x1ed: Pop(0)
0x1ee: PushEmpty(object)
0x1ef: Stack[-1] = Stack[-2]
0x1f0: Call 0x88f

0x1f1: Pop(1)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[-3]
0x1f6: Call 0x870

0x1f7: Pop(1)
0x1f8: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f9: PushEmpty()
0x1fa: Call 0x1d9

0x1fb: Pop(0)
0x1fc: PushEmpty(object)
0x1fd: Stack[-1] = Stack[-2]
0x1fe: Call 0x877

0x1ff: Pop(1)
0x200: Return(); Pop(0)

0x201: PushEmpty()
0x202: PushEmpty()
0x203: Call 0x1d9

0x204: Pop(0)
0x205: PushEmpty(object)
0x206: Stack[-1] = Stack[-2]
0x207: Call 0x8ad

0x208: Pop(1)
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(bool, object, object)
0x20c: Stack[-2] = Stack[-5]
0x20d: Stack[-1] = Stack[-4]
0x20e: Call 0x8c9

0x20f: Pop(2)
0x210: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x211: PushEmpty(object)
0x212: Stack[-1] = Stack[-3]
0x213: Call 0x201

0x214: Pop(1)
0x215: Return(); Pop(0)

0x216: PushEmpty(float, float)
0x217: PushEmpty(float, object)
0x218: Stack[-1] = Stack[-5]
0x219: Call 0x66b

0x21a: Stack[-3] = Stack[-2]
0x21b: Pop(2)
0x21c: PushEmpty(bool, float, float, float)
0x21d: Stack[-3] = Stack[-5]
0x21e: Stack[-2] = (float) 250000.0
0x21f: Stack[-1] = (float) 3240000.0
0x220: Call 0x7c0

0x221: Pop(3)
0x222: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[-5]
0x225: Push(-2, 1); TaskCall(5)
0x226: Call 0x233

0x227: Pop(-2, 1); TaskReturn
0x228: Stack[-6] = Stack[-2]
0x229: Pop(2)
0x22a: Return(); Pop(2)

0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[-5]
0x22d: Push(-2, 5); TaskCall(6)
0x22e: Call 0x2a7

0x22f: Pop(-2, 5); TaskReturn
0x230: Stack[-6] = Stack[-2]
0x231: Pop(2)
0x232: Return(); Pop(2)

0x233: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x234: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x235: PushEmpty(bool, object)
0x236: Stack[-1] = Stack[-17]
0x237: Call 0x732

0x238: Pop(2)
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[-17]
0x23b: Call 0x6f8

0x23c: Pop(1)
0x23d: Pop(1); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-16] = (bool) 0
0x240: Return(); Pop(14)

0x241: @ Face(Stack[-15])
0x242: Pop(0)
0x243: Push("all")
0x244: Push("aattack_begin1")
0x245: @ PlayAnimation(Stack[-2], Stack[-1])
0x246: Pop(2)
0x247: @ WaitForAnimEnd()
0x248: Pop(0)
0x249: PushEmpty(bool, object)
0x24a: Stack[-1] = Stack[-17]
0x24b: Call 0x6f8

0x24c: Pop(1)
0x24d: Pop(1); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24f: @ StopAsync()
0x250: Pop(0)
0x251: Stack[-16] = (bool) 0
0x252: Return(); Pop(14)

0x253: Push("all")
0x254: Push("aattack_end1")
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: @ GetScene(Stack[-7])
0x258: Pop(0)
0x259: Push("knife")
0x25a: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x25b: Pop(1)
0x25c: Push("scripted")
0x25d: Push(CVector(0.0, 0.0, 1.0))
0x25e: Push("grabitel_knife.xml")
0x25f: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Push("Owner")
0x262: PushEmpty(object)
0x263: Call 0x791

0x264: Pop(0)
0x265: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: @@ GetPosition(Stack[-3])
0x268: Pop(0)
0x269: @@ GetEyesHeight(Stack[-2])
0x26a: Pop(0)
0x26b: Push(CvectorIndex(Stack[-3], 1))
0x26c: Push((int) 10)
0x26d: Pop(1); Push(Stack[-4] - Stack[-1]);
0x26e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x26f: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x270: PushEmpty(cvector, cvector, cvector, float)
0x271: Stack[-3] = Stack[-10]
0x272: Stack[-2] = Stack[-7]
0x273: Stack[-1] = (float) 2000.0
0x274: Call 0x833

0x275: Stack[-5] = Stack[-4]
0x276: Pop(4)
0x277: Push("StartDirection")
0x278: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x279: Pop(1)
0x27a: @ WaitForAnimEnd()
0x27b: Pop(0)
0x27c: @ StopAsync()
0x27d: Pop(0)
0x27e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-16] = (bool) 1
0x281: Return(); Pop(14)

0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[-17]
0x284: Call 0x6f8

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-16] = (bool) 0
0x289: Return(); Pop(14)

0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[-17]
0x28c: Push(-2, 5); TaskCall(6)
0x28d: Call 0x2a7

0x28e: Pop(-2, 5); TaskReturn
0x28f: Stack[-18] = Stack[-2]
0x290: Pop(2)
0x291: Return(); Pop(14)

0x292: Stack[-4] = 0
0x293: Stack[-7] = 0
0x294: PushEmpty()
0x295: PushEmpty(object)
0x296: Stack[-1] = Stack[-2]
0x297: Call 0x8a0

0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: PushEmpty()
0x29b: PushEmpty(bool, object, object)
0x29c: Stack[-2] = Stack[-5]
0x29d: Stack[-1] = Stack[-4]
0x29e: Call 0x8c9

0x29f: Pop(3)
0x2a0: Return(); Pop(0)

0x2a1: PushEmpty()
0x2a2: Push("kill")
0x2a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty()
0x2a8: Push(GlobalVars[1])
0x2a9: Stack[-1] = (bool) 0
0x2aa: GlobalVars[1] = Stack[-1]; Pop(1)
0x2ab: PushEmpty(object, bool, float)
0x2ac: Stack[-3] = Stack[-4]
0x2ad: Stack[-2] = (bool) 1
0x2ae: Stack[-1] = (float) 200.0
0x2af: Call 0x2f2

0x2b0: Pop(3)
0x2b1: PushEmpty(bool)
0x2b2: Stack[-1] = (bool) 0
0x2b3: Push(GlobalVars[1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: Stack[-1] = (bool) 1
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b9: Push("all")
0x2ba: Push("attack_off")
0x2bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: @ WaitForAnimEnd()
0x2be: Pop(0)
0x2bf: Push(GlobalVars[1])
0x2c0: Stack[-3] = Stack[-1]
0x2c1: Pop(1)
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: Stack[-3] = (float) 0.1
0x2c5: Return(); Pop(0)

0x2c6: PushEmpty()
0x2c7: Stack[-3] = (int) 1
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: PushEmpty(bool)
0x2cb: Stack[-1] = (bool) 0
0x2cc: Push((int) 0)
0x2cd: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[-5]
0x2d1: Call 0x6bf

0x2d2: Pop(1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Stack[-1] = (bool) 1
0x2d5: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d6: Push(GlobalVars[1])
0x2d7: Stack[-1] = (bool) 1
0x2d8: GlobalVars[1] = Stack[-1]; Pop(1)
0x2d9: PushEmpty()
0x2da: Call 0x436

0x2db: Pop(0)
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty()
0x2de: PushEmpty(object)
0x2df: Stack[-1] = Stack[-2]
0x2e0: Call 0x8a0

0x2e1: Pop(1)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: PushEmpty(bool, object, object)
0x2e5: Stack[-2] = Stack[-5]
0x2e6: Stack[-1] = Stack[-4]
0x2e7: Call 0x8c9

0x2e8: Pop(3)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: Push("kill")
0x2ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ee: Push(GlobalVars[1])
0x2ef: Stack[-1] = (bool) 1
0x2f0: GlobalVars[1] = Stack[-1]; Pop(1)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x2f3: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2f4: Push("all")
0x2f5: Push("attack_begin")
0x2f6: Push((int) 1)
0x2f7: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f9: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x2fa: Pop(2)
0x2fb: Pop(0); Push((bool) Stack[-10] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: GOTO 0x301

0x2fe: Push((int) 1)
0x2ff: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x300: GOTO 0x2f4

0x301: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x302: Push("attack")
0x303: Push((int) 1)
0x304: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x305: Pop(2); Push(Stack[-2] + Stack[-1]);
0x306: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x307: Pop(1)
0x308: Pop(0); Push((bool) Stack[-9] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: GOTO 0x30e

0x30b: Push((int) 1)
0x30c: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30d: GOTO 0x302

0x30e: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x30f: Push("@GetAttackDistance")
0x310: Push((int) 1)
0x311: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: @@ GetAttackDistance(Stack[-8])
0x314: Pop(0)
0x315: Push((int) 50)
0x316: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x317: GOTO 0x319

0x318: Stack[-8] = Stack[-21]
0x319: Push((int) 150)
0x31a: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Stack[-8] = (int) 150
0x31d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x31e: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x31f: @ IsPlayerActor(Stack[-0], Stack[-5])
0x320: Pop(0)
0x321: Push(Stack[-22])
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-4] = (bool) 0
0x324: GOTO 0x326

0x325: Stack[-4] = (bool) 1
0x326: PushEmpty(bool)
0x327: Stack[-1] = (bool) 0
0x328: PushEmpty(bool, object)
0x329: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32a: Call 0x6f8

0x32b: Pop(1)
0x32c: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: Stack[-1] = (bool) 1
0x330: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x331: @@ GetPFPosition(Stack[-7])
0x332: Pop(0)
0x333: @ GetPFPosition(Stack[-6])
0x334: Pop(0)
0x335: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x336: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x337: Push((float)300.0)
0x338: Pop(1); Push(Stack[-1] + Stack[-9]);
0x339: Push((float)300.0)
0x33a: Pop(1); Push(Stack[-1] + Stack[-10]);
0x33b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x33e: PushEmpty(bool, object, float, float, bool, bool)
0x33f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x340: Stack[-4] = Stack[-14]
0x341: Stack[-3] = (float) 3000.0
0x342: Stack[-2] = (bool) 1
0x343: Stack[-1] = (bool) 0
0x344: Push(-6, 2); TaskCall(7)
0x345: Call 0x4f5

0x346: Pop(-6, 2); TaskReturn
0x347: Pop(5)
0x348: Pop(1); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: GOTO 0x3ae

0x34b: Stack[-4] = (bool) 0
0x34c: GOTO 0x3ad

0x34d: Pop(0); Push(Stack[-21] * Stack[-21]);
0x34e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x350: Pop(0); Push((bool) Stack[-4] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x352: PushEmpty(object)
0x353: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x354: Call 0x781

0x355: Pop(1)
0x356: Push("all")
0x357: Push("attack_on")
0x358: @ PlayAnimation(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: @ WaitForAnimEnd()
0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Stack[-4] = (bool) 1
0x35f: @ rand(Stack[-1])
0x360: Pop(0)
0x361: PushEmpty(bool)
0x362: Stack[-1] = (bool) 1
0x363: Push((float)0.2)
0x364: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: PushEmpty(bool)
0x367: Call 0x4ac

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Stack[-1] = (bool) 0
0x36b: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x36c: @ Face(Stack[-0])
0x36d: Pop(0)
0x36e: Push("all")
0x36f: Push("attack_stay")
0x370: @ PlayAnimation(Stack[-2], Stack[-1])
0x371: Pop(2)
0x372: PushEmpty(bool, float)
0x373: Stack[-1] = Stack[-23]
0x374: Call 0x450

0x375: Pop(2)
0x376: @ StopAsync()
0x377: Pop(0)
0x378: GOTO 0x3a4

0x379: @ Face(Stack[-0])
0x37a: Pop(0)
0x37b: Push("all")
0x37c: Push("fjump")
0x37d: @ PlayAnimation(Stack[-2], Stack[-1])
0x37e: Pop(2)
0x37f: @ WaitForAnimEnd()
0x380: Pop(0)
0x381: Push(CVector(0.0, 0.0, 0.0))
0x382: @ SetSpeed(Stack[-1])
0x383: Pop(1)
0x384: @ Stop()
0x385: Pop(0)
0x386: @ StopAsync()
0x387: Pop(0)
0x388: PushEmpty(bool)
0x389: Call 0x4ac

0x38a: Pop(0)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38f: Call 0x6f8

0x390: Pop(1)
0x391: Pop(1); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x3ae

0x394: @@ GetPFPosition(Stack[-7])
0x395: Pop(0)
0x396: @ GetPFPosition(Stack[-6])
0x397: Pop(0)
0x398: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x399: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x39a: Pop(0); Push(Stack[-21] * Stack[-21]);
0x39b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39d: PushEmpty(bool, float)
0x39e: Stack[-1] = Stack[-23]
0x39f: Call 0x3e6

0x3a0: Pop(1)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3ae

0x3a4: GOTO 0x3ad

0x3a5: PushEmpty(bool, float)
0x3a6: Stack[-1] = Stack[-23]
0x3a7: Call 0x3e6

0x3a8: Pop(1)
0x3a9: Pop(1); Push((bool) Stack[-1] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: GOTO 0x3ae

0x3ac: Stack[-4] = (bool) 1
0x3ad: GOTO 0x326

0x3ae: @ WaitForAnimEnd()
0x3af: Pop(0)
0x3b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Return(); Pop(20)

0x3b3: Push("all")
0x3b4: Push("attack_off")
0x3b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: @ WaitForAnimEnd()
0x3b8: Pop(0)
0x3b9: Push(Stack[-5])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bb: Push((float)2.0)
0x3bc: @ Sleep(Stack[-1])
0x3bd: Pop(1)
0x3be: Return(); Pop(20)

0x3bf: PushEmpty(object, float, float, object, float, float)
0x3c0: Push((float)0.9)
0x3c1: Pop(1); Push(Stack[-9] * Stack[-1]);
0x3c2: @ GetVictim(Stack[-1], Stack[-4])
0x3c3: Pop(1)
0x3c4: @ ReportAttack(Stack[-0])
0x3c5: Pop(0)
0x3c6: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3c8: PushEmpty(float, object, int)
0x3c9: Stack[-2] = Stack[-6]
0x3ca: Stack[-1] = Stack[-10]
0x3cb: Call 0x2c3

0x3cc: Stack[-5] = Stack[-3]
0x3cd: Pop(3)
0x3ce: PushEmpty(float, object, float, int)
0x3cf: Stack[-3] = Stack[-7]
0x3d0: Stack[-2] = Stack[-6]
0x3d1: PushEmpty(int, object, int)
0x3d2: Stack[-2] = Stack[-10]
0x3d3: Stack[-1] = Stack[-14]
0x3d4: Call 0x2c6

0x3d5: Stack[-4] = Stack[-3]
0x3d6: Pop(3)
0x3d7: Call 0x67f

0x3d8: Stack[-5] = Stack[-4]
0x3d9: Pop(4)
0x3da: PushEmpty(int)
0x3db: Call 0x4d7

0x3dc: Pop(0)
0x3dd: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x3de: Pop(1)
0x3df: PushEmpty(object, float)
0x3e0: Stack[-2] = Stack[-5]
0x3e1: Stack[-1] = Stack[-3]
0x3e2: Call 0x2c9

0x3e3: Pop(2)
0x3e4: Return(); Pop(6)

0x3e5: Stack[-3] = 0
0x3e6: PushEmpty(int, bool, int, bool)
0x3e7: @ irand(Stack[-2], Stack[-1])
0x3e8: Pop(0)
0x3e9: Push((int) 1)
0x3ea: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3eb: @ Face(Stack[-0])
0x3ec: Pop(0)
0x3ed: Push((bool) 1)
0x3ee: @ SetAttackState(Stack[-1])
0x3ef: Pop(1)
0x3f0: Push("all")
0x3f1: Push("attack_begin")
0x3f2: Pop(1); Push(Stack[-1] + Stack[-4]);
0x3f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: @ WaitForAnimEnd()
0x3f6: Pop(0)
0x3f7: PushEmpty()
0x3f8: Call 0x4b7

0x3f9: Pop(0)
0x3fa: PushEmpty(bool, object)
0x3fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fc: Call 0x6f8

0x3fd: Pop(1)
0x3fe: Pop(1); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: @ StopAsync()
0x401: Pop(0)
0x402: Stack[-6] = (bool) 0
0x403: Return(); Pop(4)

0x404: PushEmpty(float, int)
0x405: Stack[-2] = Stack[-7]
0x406: Stack[-1] = Stack[-4]
0x407: Call 0x3bf

0x408: Pop(2)
0x409: Push("all")
0x40a: Push("attack_middle")
0x40b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x40c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x40d: Pop(2)
0x40e: Push(Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x410: Push("all")
0x411: Push("attack_middle")
0x412: Pop(1); Push(Stack[-1] + Stack[-4]);
0x413: @ PlayAnimation(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: @ WaitForAnimEnd()
0x416: Pop(0)
0x417: PushEmpty(bool, object)
0x418: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x419: Call 0x6f8

0x41a: Pop(1)
0x41b: Pop(1); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41d: @ StopAsync()
0x41e: Pop(0)
0x41f: Stack[-6] = (bool) 0
0x420: Return(); Pop(4)

0x421: PushEmpty(float, int)
0x422: Stack[-2] = Stack[-7]
0x423: Stack[-1] = Stack[-4]
0x424: Call 0x3bf

0x425: Pop(2)
0x426: Push((bool) 0)
0x427: @ SetAttackState(Stack[-1])
0x428: Pop(1)
0x429: Push("all")
0x42a: Push("attack_end")
0x42b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x42c: @ PlayAnimation(Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: PushEmpty(bool, float)
0x42f: Stack[-1] = (float) 0.75
0x430: Call 0x438

0x431: Pop(2)
0x432: @ StopAsync()
0x433: Pop(0)
0x434: Stack[-6] = (bool) 1
0x435: Return(); Pop(4)

0x436: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x437: Return(); Pop(0)

0x438: PushEmpty(float, bool, float, bool)
0x439: @ rand(Stack[-2])
0x43a: Pop(0)
0x43b: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x43c: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x43d: @ IsAnimationPlaying(Stack[-1])
0x43e: Pop(0)
0x43f: Pop(0); Push((bool) Stack[-1] == 0)
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x44b

0x442: PushEmpty(bool)
0x443: Call 0x478

0x444: Pop(0)
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-6] = (bool) 1
0x447: Return(); Pop(4)

0x448: @ sync()
0x449: Pop(0)
0x44a: GOTO 0x43d

0x44b: GOTO 0x44e

0x44c: @ WaitForAnimEnd()
0x44d: Pop(0)
0x44e: Stack[-6] = (bool) 0
0x44f: Return(); Pop(4)

0x450: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x451: @ IsAnimationPlaying(Stack[-5])
0x452: Pop(0)
0x453: Pop(0); Push((bool) Stack[-5] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: GOTO 0x476

0x456: PushEmpty(bool)
0x457: Call 0x478

0x458: Pop(0)
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-12] = (bool) 1
0x45b: Return(); Pop(10)

0x45c: PushEmpty(bool, object)
0x45d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45e: Call 0x6f8

0x45f: Pop(1)
0x460: Pop(1); Push((bool) Stack[-1] == 0)
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-12] = (bool) 0
0x463: Return(); Pop(10)

0x464: @@ GetPFPosition(Stack[-4])
0x465: Pop(0)
0x466: @ GetPFPosition(Stack[-3])
0x467: Pop(0)
0x468: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x469: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x46a: Pop(0); Push(Stack[-11] * Stack[-11]);
0x46b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46d: PushEmpty(bool, float)
0x46e: Stack[-1] = Stack[-13]
0x46f: Call 0x3e6

0x470: Pop(2)
0x471: Stack[-12] = (bool) 1
0x472: Return(); Pop(10)

0x473: @ sync()
0x474: Pop(0)
0x475: GOTO 0x451

0x476: Stack[-12] = (bool) 0
0x477: Return(); Pop(10)

0x478: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x479: PushEmpty(bool, object)
0x47a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47b: Call 0x6f8

0x47c: Pop(1)
0x47d: Pop(1); Push((bool) Stack[-1] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-11] = (bool) 0
0x480: Return(); Pop(10)

0x481: PushEmpty(bool)
0x482: Call 0x4ac

0x483: Pop(0)
0x484: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x485: @@ GetPFPosition(Stack[-5])
0x486: Pop(0)
0x487: @ GetPFPosition(Stack[-4])
0x488: Pop(0)
0x489: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x48a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x48b: @@ GetAttackDistance(Stack[-1])
0x48c: Pop(0)
0x48d: Push((int) 50)
0x48e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x48f: Pop(0); Push(Stack[-1] * Stack[-1]);
0x490: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x492: PushEmpty()
0x493: Call 0x499

0x494: Pop(0)
0x495: Stack[-11] = (bool) 1
0x496: Return(); Pop(10)

0x497: Stack[-11] = (bool) 0
0x498: Return(); Pop(10)

0x499: PushEmpty(cvector, cvector, cvector, cvector)
0x49a: @ Face(Stack[-0])
0x49b: Pop(0)
0x49c: Push("all")
0x49d: Push("bjump")
0x49e: @ PlayAnimation(Stack[-2], Stack[-1])
0x49f: Pop(2)
0x4a0: @@ GetPFPosition(Stack[-2])
0x4a1: Pop(0)
0x4a2: @ GetPFPosition(Stack[-1])
0x4a3: Pop(0)
0x4a4: @ WaitForAnimEnd()
0x4a5: Pop(0)
0x4a6: @ StopAsync()
0x4a7: Pop(0)
0x4a8: Push(CVector(0.0, 0.0, 0.0))
0x4a9: @ SetSpeed(Stack[-1])
0x4aa: Pop(1)
0x4ab: Return(); Pop(4)

0x4ac: PushEmpty(bool, bool)
0x4ad: Push("IsAttacking")
0x4ae: Push((int) 1)
0x4af: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b1: @@ IsAttacking(Stack[-1])
0x4b2: Pop(0)
0x4b3: Stack[-3] = Stack[-1]
0x4b4: Return(); Pop(2)

0x4b5: Stack[-3] = (bool) 0
0x4b6: Return(); Pop(2)

0x4b7: PushEmpty(float, int, float, int)
0x4b8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: Return(); Pop(4)

0x4bb: Push( Stack[4 + Tasks[-1].StackPointer] )
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4bd: Push((int) -1)
0x4be: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4bf: Push((int) 0)
0x4c0: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: Return(); Pop(4)

0x4c3: @ rand(Stack[-2])
0x4c4: Pop(0)
0x4c5: PushEmpty(float)
0x4c6: Call 0x4db

0x4c7: Pop(0)
0x4c8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4ca: @ irand(Stack[-1], Stack[-2])
0x4cb: Pop(0)
0x4cc: Push((int) 1)
0x4cd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4ce: Push("attack")
0x4cf: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4d0: @ Speak(Stack[-1])
0x4d1: Pop(1)
0x4d2: PushEmpty(int)
0x4d3: Call 0x4d9

0x4d4: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x4d5: Pop(1)
0x4d6: Return(); Pop(4)

0x4d7: Stack[-1] = (int) 0
0x4d8: Return(); Pop(0)

0x4d9: Stack[-1] = (int) 1
0x4da: Return(); Pop(0)

0x4db: Stack[-1] = (float) 0.5
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: PushEmpty(object)
0x4df: Stack[-1] = Stack[-2]
0x4e0: Call 0x8a0

0x4e1: Pop(1)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: PushEmpty(bool, object, object)
0x4e5: Stack[-2] = Stack[-5]
0x4e6: Stack[-1] = Stack[-4]
0x4e7: Call 0x8c9

0x4e8: Pop(3)
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty()
0x4eb: Push("kill")
0x4ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ee: Push(GlobalVars[1])
0x4ef: Stack[-1] = (bool) 1
0x4f0: GlobalVars[1] = Stack[-1]; Pop(1)
0x4f1: PushEmpty()
0x4f2: Call 0x571

0x4f3: Pop(0)
0x4f4: Return(); Pop(0)

0x4f5: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4f6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4f7: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4f8: Stack[-7] = Stack[-17]
0x4f9: PushEmpty(bool, object)
0x4fa: Stack[-1] = Stack[-23]
0x4fb: Call 0x581

0x4fc: Pop(1)
0x4fd: Pop(1); Push((bool) Stack[-1] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-22] = (bool) 0
0x500: Return(); Pop(16)

0x501: @@ GetPosition(Stack[-5])
0x502: Pop(0)
0x503: @ GetPosition(Stack[-4])
0x504: Pop(0)
0x505: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x506: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x507: PushEmpty(bool)
0x508: Stack[-1] = (bool) 0
0x509: Push((int) 0)
0x50a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x50d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: Stack[-1] = (bool) 1
0x510: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x511: @ Stop()
0x512: Pop(0)
0x513: Stack[-22] = (bool) 0
0x514: Return(); Pop(16)

0x515: Pop(0); Push(Stack[-20] * Stack[-20]);
0x516: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x518: @@ GetPFPosition(Stack[-5])
0x519: Pop(0)
0x51a: @ FindPathTo(Stack[-1], Stack[-5])
0x51b: Pop(0)
0x51c: Pop(0); Push(( Stack[-1] != 0 )
0x51d: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51e: Stack[-6] = Stack[-1]
0x51f: Stack[-1] = 0
0x520: Pop(0); Push(( Stack[-6] != 0 )
0x521: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x522: Push(Stack[-7])
0x523: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x524: Stack[-7] = (bool) 0
0x525: @ RotatePath(Stack[-6], Stack[-8])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-8] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x529: GOTO 0x559

0x52a: Push((int) 0)
0x52b: Push((float)0.3)
0x52c: @ SetTimer(Stack[-2], Stack[-1])
0x52d: Pop(2)
0x52e: PushEmpty(string)
0x52f: Call 0x588

0x530: Pop(0)
0x531: PushEmpty(string)
0x532: Call 0x58a

0x533: Pop(0)
0x534: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x535: Pop(2)
0x536: Pop(0); Push((bool) Stack[-8] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x538: Push( Stack[0 + Tasks[-1].StackPointer] )
0x539: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53a: Stack[-6] = 0
0x53b: GOTO 0x559

0x53c: GOTO 0x53e

0x53d: GOTO 0x558

0x53e: GOTO 0x540

0x53f: Stack[-6] = 0
0x540: GOTO 0x551

0x541: Push((int) 0)
0x542: @ KillTimer(Stack[-1])
0x543: Pop(1)
0x544: Push((float)0.5)
0x545: @ Sleep(Stack[-1], Stack[-9])
0x546: Pop(1)
0x547: Pop(0); Push((bool) Stack[-8] == 0)
0x548: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x549: Push( Stack[0 + Tasks[-1].StackPointer] )
0x54a: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54b: Stack[-6] = 0
0x54c: GOTO 0x559

0x54d: Push((int) 0)
0x54e: Push((float)0.3)
0x54f: @ SetTimer(Stack[-2], Stack[-1])
0x550: Pop(2)
0x551: Stack[-1] = 0
0x552: GOTO 0x557

0x553: Push((int) 0)
0x554: @ KillTimer(Stack[-1])
0x555: Pop(1)
0x556: GOTO 0x559

0x557: Stack[-6] = 0
0x558: GOTO 0x4f9

0x559: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x55a: Return(); Pop(16)

0x55b: PushEmpty()
0x55c: Push((int) 0)
0x55d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55f: Return(); Pop(0)

0x560: PushEmpty(bool, object)
0x561: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x562: Call 0x581

0x563: Pop(1)
0x564: Pop(1); Push((bool) Stack[-1] == 0)
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x567: Push((int) 0)
0x568: @ KillTimer(Stack[-1])
0x569: Pop(1)
0x56a: @ Stop()
0x56b: Pop(0)
0x56c: Return(); Pop(0)

0x56d: PushEmpty()
0x56e: @ RequestClearPath(Stack[-1])
0x56f: Pop(0)
0x570: Return(); Pop(0)

0x571: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x572: Push((int) 0)
0x573: @ KillTimer(Stack[-1])
0x574: Pop(1)
0x575: @ Stop()
0x576: Pop(0)
0x577: Return(); Pop(0)

0x578: PushEmpty()
0x579: PushEmpty()
0x57a: Call 0x571

0x57b: Pop(0)
0x57c: PushEmpty(object)
0x57d: Stack[-1] = Stack[-2]
0x57e: Call 0x913

0x57f: Pop(1)
0x580: Return(); Pop(0)

0x581: PushEmpty()
0x582: PushEmpty(bool, object)
0x583: Stack[-1] = Stack[-3]
0x584: Call 0x6f8

0x585: Stack[-4] = Stack[-2]
0x586: Pop(2)
0x587: Return(); Pop(0)

0x588: Stack[-1] = "walk"
0x589: Return(); Pop(0)

0x58a: Stack[-1] = "run"
0x58b: Return(); Pop(0)

0x58c: PushEmpty(bool, bool)
0x58d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x58e: Push((int) 2)
0x58f: @ Sleep(Stack[-1], Stack[-2])
0x590: Pop(1)
0x591: Pop(0); Push((bool) Stack[-1] == 0)
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: Return(); Pop(2)

0x594: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x595: PushEmpty(bool, object, float, float, bool, bool)
0x596: Stack[-5] = Stack[-9]
0x597: Stack[-4] = (int) 200
0x598: Stack[-3] = (int) 2000
0x599: Stack[-2] = (bool) 1
0x59a: Stack[-1] = (bool) 1
0x59b: Call 0x5dc

0x59c: Pop(5)
0x59d: Pop(1); Push((bool) Stack[-1] == 0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: Return(); Pop(2)

0x5a0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5a1: @ Face(Stack[-3])
0x5a2: Pop(0)
0x5a3: @ WaitForAnimEnd(Stack[-1])
0x5a4: Pop(0)
0x5a5: Pop(0); Push((bool) Stack[-1] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a7: @ StopAsync()
0x5a8: Pop(0)
0x5a9: Return(); Pop(2)

0x5aa: Push("all")
0x5ab: Push("hunt")
0x5ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ad: Pop(2)
0x5ae: @ WaitForAnimEnd(Stack[-1])
0x5af: Pop(0)
0x5b0: @ StopAsync()
0x5b1: Pop(0)
0x5b2: Pop(0); Push((bool) Stack[-1] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b4: Return(); Pop(2)

0x5b5: Return(); Pop(2)

0x5b6: PushEmpty()
0x5b7: PushEmpty(bool, object)
0x5b8: Stack[-1] = Stack[-3]
0x5b9: Call 0x710

0x5ba: Stack[-4] = Stack[-2]
0x5bb: Pop(2)
0x5bc: Return(); Pop(0)

0x5bd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5be: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bf: PushEmpty()
0x5c0: Call 0x658

0x5c1: Pop(0)
0x5c2: GOTO 0x5c9

0x5c3: @ StopGroup0()
0x5c4: Pop(0)
0x5c5: @ StopAnimation()
0x5c6: Pop(0)
0x5c7: @ StopAsync()
0x5c8: Pop(0)
0x5c9: Return(); Pop(0)

0x5ca: PushEmpty()
0x5cb: PushEmpty()
0x5cc: Call 0x5bd

0x5cd: Pop(0)
0x5ce: PushEmpty(object)
0x5cf: Stack[-1] = Stack[-2]
0x5d0: Call 0x913

0x5d1: Pop(1)
0x5d2: Return(); Pop(0)

0x5d3: PushEmpty()
0x5d4: PushEmpty()
0x5d5: Call 0x5bd

0x5d6: Pop(0)
0x5d7: PushEmpty(object)
0x5d8: Stack[-1] = Stack[-2]
0x5d9: Call 0x8ad

0x5da: Pop(1)
0x5db: Return(); Pop(0)

0x5dc: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x5dd: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5de: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x5df: Stack[-7] = Stack[-17]
0x5e0: PushEmpty(bool, object)
0x5e1: Stack[-1] = Stack[-23]
0x5e2: Call 0x5b6

0x5e3: Pop(1)
0x5e4: Pop(1); Push((bool) Stack[-1] == 0)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e6: Stack[-22] = (bool) 0
0x5e7: Return(); Pop(16)

0x5e8: @@ GetPosition(Stack[-5])
0x5e9: Pop(0)
0x5ea: @ GetPosition(Stack[-4])
0x5eb: Pop(0)
0x5ec: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5ed: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5ee: PushEmpty(bool)
0x5ef: Stack[-1] = (bool) 0
0x5f0: Push((int) 0)
0x5f1: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f3: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5f4: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f6: Stack[-1] = (bool) 1
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f8: @ Stop()
0x5f9: Pop(0)
0x5fa: Stack[-22] = (bool) 0
0x5fb: Return(); Pop(16)

0x5fc: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5fd: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x5ff: @@ GetPFPosition(Stack[-5])
0x600: Pop(0)
0x601: @ FindPathTo(Stack[-1], Stack[-5])
0x602: Pop(0)
0x603: Pop(0); Push(( Stack[-1] != 0 )
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-6] = Stack[-1]
0x606: Stack[-1] = 0
0x607: Pop(0); Push(( Stack[-6] != 0 )
0x608: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x609: Push(Stack[-7])
0x60a: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60b: Stack[-7] = (bool) 0
0x60c: @ RotatePath(Stack[-6], Stack[-8])
0x60d: Pop(0)
0x60e: Pop(0); Push((bool) Stack[-8] == 0)
0x60f: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x610: GOTO 0x640

0x611: Push((int) 0)
0x612: Push((float)0.3)
0x613: @ SetTimer(Stack[-2], Stack[-1])
0x614: Pop(2)
0x615: PushEmpty(string)
0x616: Call 0x65f

0x617: Pop(0)
0x618: PushEmpty(string)
0x619: Call 0x661

0x61a: Pop(0)
0x61b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x61c: Pop(2)
0x61d: Pop(0); Push((bool) Stack[-8] == 0)
0x61e: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x61f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x620: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x621: Stack[-6] = 0
0x622: GOTO 0x640

0x623: GOTO 0x625

0x624: GOTO 0x63f

0x625: GOTO 0x627

0x626: Stack[-6] = 0
0x627: GOTO 0x638

0x628: Push((int) 0)
0x629: @ KillTimer(Stack[-1])
0x62a: Pop(1)
0x62b: Push((float)0.5)
0x62c: @ Sleep(Stack[-1], Stack[-9])
0x62d: Pop(1)
0x62e: Pop(0); Push((bool) Stack[-8] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x630: Push( Stack[0 + Tasks[-1].StackPointer] )
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-6] = 0
0x633: GOTO 0x640

0x634: Push((int) 0)
0x635: Push((float)0.3)
0x636: @ SetTimer(Stack[-2], Stack[-1])
0x637: Pop(2)
0x638: Stack[-1] = 0
0x639: GOTO 0x63e

0x63a: Push((int) 0)
0x63b: @ KillTimer(Stack[-1])
0x63c: Pop(1)
0x63d: GOTO 0x640

0x63e: Stack[-6] = 0
0x63f: GOTO 0x5e0

0x640: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x641: Return(); Pop(16)

0x642: PushEmpty()
0x643: Push((int) 0)
0x644: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x646: Return(); Pop(0)

0x647: PushEmpty(bool, object)
0x648: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x649: Call 0x5b6

0x64a: Pop(1)
0x64b: Pop(1); Push((bool) Stack[-1] == 0)
0x64c: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x64e: Push((int) 0)
0x64f: @ KillTimer(Stack[-1])
0x650: Pop(1)
0x651: @ Stop()
0x652: Pop(0)
0x653: Return(); Pop(0)

0x654: PushEmpty()
0x655: @ RequestClearPath(Stack[-1])
0x656: Pop(0)
0x657: Return(); Pop(0)

0x658: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x659: Push((int) 0)
0x65a: @ KillTimer(Stack[-1])
0x65b: Pop(1)
0x65c: @ Stop()
0x65d: Pop(0)
0x65e: Return(); Pop(0)

0x65f: Stack[-1] = "walk"
0x660: Return(); Pop(0)

0x661: Stack[-1] = "run"
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: Push((int) 1)
0x665: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-2] = "fire"
0x668: Return(); Pop(0)

0x669: Stack[-2] = "phys"
0x66a: Return(); Pop(0)

0x66b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x66c: @ GetPosition(Stack[-3])
0x66d: Pop(0)
0x66e: @@ GetPosition(Stack[-2])
0x66f: Pop(0)
0x670: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x671: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x672: Return(); Pop(6)

0x673: PushEmpty(bool, bool)
0x674: Push("HasProperty")
0x675: Push((int) 2)
0x676: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x677: Pop(1); Push((bool) Stack[-1] == 0)
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-5] = (bool) 0
0x67a: Return(); Pop(2)

0x67b: @@ HasProperty(Stack[-3], Stack[-1])
0x67c: Pop(0)
0x67d: Stack[-5] = Stack[-1]
0x67e: Return(); Pop(2)

0x67f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x680: PushEmpty(bool, object, string)
0x681: Stack[-2] = Stack[-18]
0x682: Stack[-1] = "health"
0x683: Call 0x673

0x684: Pop(2)
0x685: Pop(1); Push((bool) Stack[-1] == 0)
0x686: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x687: Stack[-16] = (float) 0.0
0x688: Return(); Pop(12)

0x689: PushEmpty(bool, object, string)
0x68a: Stack[-2] = Stack[-18]
0x68b: Stack[-1] = "armor"
0x68c: Call 0x673

0x68d: Pop(2)
0x68e: Pop(1); Push((bool) Stack[-1] == 0)
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-6] = (int) 0
0x691: GOTO 0x695

0x692: Push("armor")
0x693: @@ GetProperty(Stack[-1], Stack[-7])
0x694: Pop(1)
0x695: Push("armor_")
0x696: PushEmpty(string, int)
0x697: Stack[-1] = Stack[-16]
0x698: Call 0x663

0x699: Pop(1)
0x69a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x69b: PushEmpty(bool, object, string)
0x69c: Stack[-2] = Stack[-18]
0x69d: Stack[-1] = Stack[-8]
0x69e: Call 0x673

0x69f: Pop(2)
0x6a0: Pop(1); Push((bool) Stack[-1] == 0)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a2: Stack[-4] = (int) 0
0x6a3: GOTO 0x6a6

0x6a4: @@ GetProperty(Stack[-5], Stack[-4])
0x6a5: Pop(0)
0x6a6: PushEmpty(float, float, float)
0x6a7: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6a8: Push((float)100.0)
0x6a9: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6aa: Stack[-1] = (int) 1
0x6ab: Call 0x797

0x6ac: Stack[-6] = Stack[-3]
0x6ad: Pop(3)
0x6ae: Push("health")
0x6af: @@ GetProperty(Stack[-1], Stack[-3])
0x6b0: Pop(1)
0x6b1: Push((int) 1)
0x6b2: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6b3: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6b4: Push("health")
0x6b5: PushEmpty(float, float, float, float)
0x6b6: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6b7: Stack[-2] = (int) 0
0x6b8: Stack[-1] = (int) 1
0x6b9: Call 0x7b5

0x6ba: Pop(3)
0x6bb: @@ SetProperty(Stack[-2], Stack[-1])
0x6bc: Pop(2)
0x6bd: Stack[-16] = Stack[-1]
0x6be: Return(); Pop(12)

0x6bf: PushEmpty(float, float)
0x6c0: PushEmpty(bool, object, string)
0x6c1: Stack[-2] = Stack[-6]
0x6c2: Stack[-1] = "health"
0x6c3: Call 0x673

0x6c4: Pop(2)
0x6c5: Pop(1); Push((bool) Stack[-1] == 0)
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c7: Stack[-4] = (bool) 0
0x6c8: Return(); Pop(2)

0x6c9: Push("health")
0x6ca: @@ GetProperty(Stack[-1], Stack[-2])
0x6cb: Pop(1)
0x6cc: Push((float)0.0)
0x6cd: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x6ce: Return(); Pop(2)

0x6cf: PushEmpty(bool, bool)
0x6d0: @@ IsDead(Stack[-1])
0x6d1: Pop(0)
0x6d2: Stack[-4] = Stack[-1]
0x6d3: Return(); Pop(2)

0x6d4: PushEmpty(object, object, object, object)
0x6d5: Pop(0); Push((bool) Stack[-5] == 0)
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d7: Stack[-6] = (bool) 0
0x6d8: Return(); Pop(4)

0x6d9: PushEmpty(bool)
0x6da: Stack[-1] = (bool) 0
0x6db: Push("IsDead")
0x6dc: Push((int) 1)
0x6dd: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6de: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6df: PushEmpty(bool, object)
0x6e0: Stack[-1] = Stack[-8]
0x6e1: Call 0x6cf

0x6e2: Pop(1)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: Stack[-1] = (bool) 1
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e6: Stack[-6] = (bool) 0
0x6e7: Return(); Pop(4)

0x6e8: @ GetScene(Stack[-2])
0x6e9: Pop(0)
0x6ea: Pop(0); Push((bool) Stack[-2] == 0)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ec: Stack[-6] = (bool) 0
0x6ed: Return(); Pop(4)

0x6ee: @@ GetScene(Stack[-1])
0x6ef: Pop(0)
0x6f0: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-6] = (bool) 0
0x6f3: Return(); Pop(4)

0x6f4: Stack[-6] = (bool) 1
0x6f5: Return(); Pop(4)

0x6f6: Stack[-1] = 0
0x6f7: Stack[-2] = 0
0x6f8: PushEmpty(int, int)
0x6f9: PushEmpty(bool, object)
0x6fa: Stack[-1] = Stack[-5]
0x6fb: Call 0x6d4

0x6fc: Pop(1)
0x6fd: Pop(1); Push((bool) Stack[-1] == 0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ff: Stack[-4] = (bool) 0
0x700: Return(); Pop(2)

0x701: PushEmpty(bool, object, string)
0x702: Stack[-2] = Stack[-6]
0x703: Stack[-1] = "noaccess"
0x704: Call 0x673

0x705: Pop(2)
0x706: Pop(1); Push((bool) Stack[-1] == 0)
0x707: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x708: Stack[-4] = (bool) 1
0x709: Return(); Pop(2)

0x70a: Push("noaccess")
0x70b: @@ GetProperty(Stack[-1], Stack[-2])
0x70c: Pop(1)
0x70d: Push((int) 0)
0x70e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x70f: Return(); Pop(2)

0x710: PushEmpty(object, object, int, object, object, int)
0x711: Pop(0); Push((bool) Stack[-7] == 0)
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-8] = (bool) 0
0x714: Return(); Pop(6)

0x715: @ GetScene(Stack[-3])
0x716: Pop(0)
0x717: Pop(0); Push((bool) Stack[-3] == 0)
0x718: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x719: Stack[-8] = (bool) 0
0x71a: Return(); Pop(6)

0x71b: @@ GetScene(Stack[-2])
0x71c: Pop(0)
0x71d: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-8] = (bool) 0
0x720: Return(); Pop(6)

0x721: PushEmpty(bool, object, string)
0x722: Stack[-2] = Stack[-10]
0x723: Stack[-1] = "noaccess"
0x724: Call 0x673

0x725: Pop(2)
0x726: Pop(1); Push((bool) Stack[-1] == 0)
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-8] = (bool) 1
0x729: Return(); Pop(6)

0x72a: Push("noaccess")
0x72b: @@ GetProperty(Stack[-1], Stack[-2])
0x72c: Pop(1)
0x72d: Push((int) 0)
0x72e: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x72f: Return(); Pop(6)

0x730: Stack[-2] = 0
0x731: Stack[-3] = 0
0x732: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x733: @@ GetPosition(Stack[-4])
0x734: Pop(0)
0x735: @ GetPosition(Stack[-3])
0x736: Pop(0)
0x737: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x738: Push(CvectorIndex(Stack[-2], 0))
0x739: Push(CvectorIndex(Stack[-3], 2))
0x73a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x73b: Pop(2)
0x73c: Stack[-10] = Stack[-1]
0x73d: Return(); Pop(8)

0x73e: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x73f: PushEmpty(bool)
0x740: Stack[-1] = (bool) 0
0x741: Push((int) 4)
0x742: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x743: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x744: Push((int) 5)
0x745: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x747: Stack[-1] = (bool) 1
0x748: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x749: @ GetScene(Stack[-10])
0x74a: Pop(0)
0x74b: @ GetPosition(Stack[-8])
0x74c: Pop(0)
0x74d: @ GetEyesHeight(Stack[-7])
0x74e: Pop(0)
0x74f: Push(CvectorIndex(Stack[-8], 1))
0x750: Push((int) 2)
0x751: Pop(1); Push(Stack[-9] / Stack[-1]);
0x752: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x753: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x754: Push("scripted")
0x755: Push(CVector(0.0, 0.0, 1.0))
0x756: Push("blood.xml")
0x757: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Stack[-9] = 0
0x75a: Stack[-10] = 0
0x75b: Pop(0); Push((bool) Stack[-23] == 0)
0x75c: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75d: Return(); Pop(20)

0x75e: @ GetSecondaryAnimationType(Stack[-6])
0x75f: Pop(0)
0x760: Push((int) 0)
0x761: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: Return(); Pop(20)

0x764: @@ GetPosition(Stack[-5])
0x765: Pop(0)
0x766: @ GetPosition(Stack[-4])
0x767: Pop(0)
0x768: @ GetDirection(Stack[-3])
0x769: Pop(0)
0x76a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x76b: Push(CvectorIndex(Stack[-2], 0))
0x76c: Push(CvectorIndex(Stack[-4], 0))
0x76d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x76e: Push(CvectorIndex(Stack[-3], 2))
0x76f: Push(CvectorIndex(Stack[-5], 2))
0x770: Pop(2); Push(Stack[-2] * Stack[-1]);
0x771: Pop(2); Push(Stack[-2] + Stack[-1]);
0x772: Push((int) 0)
0x773: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-1] = "fhit"
0x776: GOTO 0x778

0x777: Stack[-1] = "bhit"
0x778: Push("hit_react")
0x779: Push("1")
0x77a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x77b: Push("2")
0x77c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x77d: Push((int) -10)
0x77e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(4)
0x780: Return(); Pop(20)

0x781: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x782: @@ GetPosition(Stack[-3])
0x783: Pop(0)
0x784: @ GetPosition(Stack[-2])
0x785: Pop(0)
0x786: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x787: Push(CvectorIndex(Stack[-1], 0))
0x788: Push(CvectorIndex(Stack[-2], 2))
0x789: @ RotateAsync(Stack[-2], Stack[-1])
0x78a: Pop(2)
0x78b: Return(); Pop(6)

0x78c: PushEmpty(bool, bool)
0x78d: @ IsLoaded(Stack[-1])
0x78e: Pop(0)
0x78f: Stack[-3] = Stack[-1]
0x790: Return(); Pop(2)

0x791: PushEmpty(object, object)
0x792: @ self(Stack[-1])
0x793: Pop(0)
0x794: Stack[-3] = Stack[-1]
0x795: Return(); Pop(2)

0x796: Stack[-1] = 0
0x797: PushEmpty()
0x798: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79a: Stack[-3] = Stack[-2]
0x79b: GOTO 0x79d

0x79c: Stack[-3] = Stack[-1]
0x79d: Return(); Pop(0)

0x79e: PushEmpty(float, float, float, float)
0x79f: Pop(0); Push(Stack[-6] * Stack[-6]);
0x7a0: Push((int) 4)
0x7a1: Pop(1); Push(Stack[-1] * Stack[-9]);
0x7a2: Pop(1); Push(Stack[-1] * Stack[-7]);
0x7a3: Pop(2); Push(Stack[-2] - Stack[-1]);
0x7a4: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x7a5: Pop(0); Push(( -Stack[-6])
0x7a6: Pop(1); Push(Stack[-1] - Stack[-3]);
0x7a7: Push((int) 2)
0x7a8: Pop(1); Push(Stack[-1] * Stack[-9]);
0x7a9: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7aa: Push((int) 0)
0x7ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-8] = Stack[-1]
0x7ae: Return(); Pop(4)

0x7af: Pop(0); Push(( -Stack[-6])
0x7b0: Pop(1); Push(Stack[-1] + Stack[-3]);
0x7b1: Push((int) 2)
0x7b2: Pop(1); Push(Stack[-1] * Stack[-9]);
0x7b3: Stack[-10] = Stack[-2] / Stack[-1]; Pop(2);
0x7b4: Return(); Pop(4)

0x7b5: PushEmpty()
0x7b6: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b8: Stack[-4] = Stack[-2]
0x7b9: Return(); Pop(0)

0x7ba: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bc: Stack[-4] = Stack[-1]
0x7bd: Return(); Pop(0)

0x7be: Stack[-4] = Stack[-3]
0x7bf: Return(); Pop(0)

0x7c0: PushEmpty()
0x7c1: Stack[-4] = (bool) 0
0x7c2: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c4: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c6: Stack[-4] = (bool) 1
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty(object, object)
0x7c9: @ CreateObjectSet(Stack[-1])
0x7ca: Pop(0)
0x7cb: Stack[-3] = Stack[-1]
0x7cc: Return(); Pop(2)

0x7cd: Stack[-1] = 0
0x7ce: PushEmpty(string, string)
0x7cf: Stack[-1] = "idle"
0x7d0: Push(Stack[-3])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7d3: Stack[-4] = Stack[-1]
0x7d4: Return(); Pop(2)

0x7d5: PushEmpty(int, bool, int, bool)
0x7d6: Stack[-2] = (int) 0
0x7d7: Push("all")
0x7d8: PushEmpty(string, int)
0x7d9: Stack[-1] = Stack[-5]
0x7da: Call 0x7ce

0x7db: Pop(1)
0x7dc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7dd: Pop(2)
0x7de: Pop(0); Push((bool) Stack[-1] == 0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7e0: GOTO 0x7e4

0x7e1: Push((int) 1)
0x7e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7e3: GOTO 0x7d7

0x7e4: Stack[-5] = Stack[-2]
0x7e5: Return(); Pop(4)

0x7e6: PushEmpty(int, int, int, bool, int, int, int, bool)
0x7e7: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e9: Push("GenerateMoney: iMin > iMax")
0x7ea: @ Trace(Stack[-1])
0x7eb: Pop(1)
0x7ec: Return(); Pop(8)

0x7ed: Stack[-4] = (int) 0
0x7ee: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f0: Pop(0); Push(Stack[-9] - Stack[-10]);
0x7f1: @ irand(Stack[-4], Stack[-1])
0x7f2: Pop(1)
0x7f3: GOTO 0x7f8

0x7f4: Push((int) 0)
0x7f5: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f7: Return(); Pop(8)

0x7f8: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x7f9: Push((int) 0)
0x7fa: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fc: Return(); Pop(8)

0x7fd: Push("Money")
0x7fe: @ GetInvItemByName(Stack[-3], Stack[-1])
0x7ff: Pop(1)
0x800: Push((int) 0)
0x801: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x802: Pop(1)
0x803: Return(); Pop(8)

0x804: PushEmpty(int, bool, int, bool)
0x805: Push((int) 0)
0x806: @ ClearSubContainer(Stack[-1])
0x807: Pop(1)
0x808: PushEmpty(int, int)
0x809: Stack[-2] = (int) 600
0x80a: Stack[-1] = (int) 1500
0x80b: Call 0x7e6

0x80c: Pop(2)
0x80d: Push((int) 3)
0x80e: @ irand(Stack[-3], Stack[-1])
0x80f: Pop(1)
0x810: Push((int) 0)
0x811: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x813: PushEmpty(int, string)
0x814: Stack[-1] = "bottle_weapon"
0x815: Call 0x82e

0x816: Pop(1)
0x817: Push((int) 0)
0x818: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x819: Pop(2)
0x81a: Push((int) 3)
0x81b: @ irand(Stack[-3], Stack[-1])
0x81c: Pop(1)
0x81d: Push((int) 0)
0x81e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81f: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x820: Push((int) 100)
0x821: @ irand(Stack[-3], Stack[-1])
0x822: Pop(1)
0x823: Push((int) 0)
0x824: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x826: PushEmpty(int, string)
0x827: Stack[-1] = "ognemet_ammo"
0x828: Call 0x82e

0x829: Pop(1)
0x82a: Push((int) 0)
0x82b: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x82c: Pop(2)
0x82d: Return(); Pop(4)

0x82e: PushEmpty(int, int)
0x82f: @ GetInvItemByName(Stack[-1], Stack[-3])
0x830: Pop(0)
0x831: Stack[-4] = Stack[-1]
0x832: Return(); Pop(2)

0x833: PushEmpty(cvector, float, float, float, float, cvector, float, float, float, float)
0x834: Stack[-5] = Stack[-12] - Stack[-13]; Pop(0);
0x835: Stack[-4] = (int) 250000
0x836: Push(CvectorIndex(Stack[-5], 1))
0x837: Push((int) 1000)
0x838: Pop(2); Push(Stack[-2] * Stack[-1]);
0x839: Pop(0); Push(Stack[-12] * Stack[-12]);
0x83a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x83b: Stack[-2] = Stack[-5] | Stack[-5]; Pop(0);
0x83c: PushEmpty(float, float, float, float)
0x83d: Stack[-3] = Stack[-8]
0x83e: Stack[-2] = Stack[-7]
0x83f: Stack[-1] = Stack[-6]
0x840: Call 0x79e

0x841: Pop(3)
0x842: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x843: Push(CVector(0.0, 500.0, 0.0))
0x844: Pop(1); Push(Stack[-1] * Stack[-2]);
0x845: Pop(1); Push(Stack[-1] * Stack[-2]);
0x846: Pop(1); Push(Stack[-6] + Stack[-1]);
0x847: Stack[-15] = Stack[-1] / Stack[-2]; Pop(1);
0x848: Return(); Pop(10)

0x849: Push(GlobalVars[0])
0x84a: PushEmpty(object)
0x84b: Call 0x7c8

0x84c: Stack[-2] = Stack[-1]
0x84d: Pop(1)
0x84e: GlobalVars[0] = Stack[-1]; Pop(1)
0x84f: Return(); Pop(0)

0x850: PushEmpty(bool, string, bool, string)
0x851: PushEmpty(bool, object)
0x852: Stack[-1] = Stack[-7]
0x853: Call 0x6f8

0x854: Pop(1)
0x855: Pop(1); Push((bool) Stack[-1] == 0)
0x856: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x857: Stack[-6] = (bool) 0
0x858: Return(); Pop(4)

0x859: Push(GlobalVars[0])
0x85a: @@ in(Stack[-3], Stack[-6])
0x85b: Pop(1)
0x85c: Push(Stack[-2])
0x85d: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85e: Stack[-6] = (bool) 1
0x85f: Return(); Pop(4)

0x860: PushEmpty(bool, object, string)
0x861: Stack[-2] = Stack[-8]
0x862: Stack[-1] = "class"
0x863: Call 0x673

0x864: Pop(2)
0x865: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x866: Push("class")
0x867: @@ GetProperty(Stack[-1], Stack[-2])
0x868: Pop(1)
0x869: Push("grabitel")
0x86a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86c: Stack[-6] = (bool) 0
0x86d: Return(); Pop(4)

0x86e: Stack[-6] = (bool) 1
0x86f: Return(); Pop(4)

0x870: PushEmpty()
0x871: PushEmpty(bool, object)
0x872: Stack[-1] = Stack[-3]
0x873: Call 0x850

0x874: Stack[-4] = Stack[-2]
0x875: Pop(2)
0x876: Return(); Pop(0)

0x877: PushEmpty()
0x878: PushEmpty(bool, object)
0x879: Stack[-1] = Stack[-3]
0x87a: Push(-2, 0); TaskCall(4)
0x87b: Call 0x216

0x87c: Pop(-2, 0); TaskReturn
0x87d: Pop(1)
0x87e: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x87f: PushEmpty(object)
0x880: Stack[-1] = Stack[-2]
0x881: Push(-1, 3); TaskCall(8)
0x882: Call 0x58c

0x883: Pop(-1, 3); TaskReturn
0x884: Pop(1)
0x885: @ ResetAAS()
0x886: Pop(0)
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: PushEmpty(bool, object)
0x88a: Stack[-1] = Stack[-3]
0x88b: Call 0x850

0x88c: Stack[-4] = Stack[-2]
0x88d: Pop(2)
0x88e: Return(); Pop(0)

0x88f: PushEmpty()
0x890: PushEmpty(bool, object)
0x891: Stack[-1] = Stack[-3]
0x892: Push(-2, 0); TaskCall(4)
0x893: Call 0x216

0x894: Pop(-2, 0); TaskReturn
0x895: Pop(1)
0x896: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x897: PushEmpty(object)
0x898: Stack[-1] = Stack[-2]
0x899: Push(-1, 3); TaskCall(8)
0x89a: Call 0x58c

0x89b: Pop(-1, 3); TaskReturn
0x89c: Pop(1)
0x89d: @ ResetAAS()
0x89e: Pop(0)
0x89f: Return(); Pop(0)

0x8a0: PushEmpty(bool, bool)
0x8a1: Pop(0); Push((bool) Stack[-3] == 0)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x8a3: Return(); Pop(2)

0x8a4: Push(GlobalVars[0])
0x8a5: @@ in(Stack[-2], Stack[-4])
0x8a6: Pop(1)
0x8a7: Pop(0); Push((bool) Stack[-1] == 0)
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a9: Push(GlobalVars[0])
0x8aa: @@ add(Stack[-4])
0x8ab: Pop(1)
0x8ac: Return(); Pop(2)

0x8ad: PushEmpty()
0x8ae: PushEmpty(object)
0x8af: Stack[-1] = Stack[-2]
0x8b0: Call 0x8a0

0x8b1: Pop(1)
0x8b2: PushEmpty(bool, object)
0x8b3: Stack[-1] = Stack[-3]
0x8b4: Call 0x6f8

0x8b5: Pop(1)
0x8b6: Pop(1); Push((bool) Stack[-1] == 0)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b8: Return(); Pop(0)

0x8b9: PushEmpty(bool, object)
0x8ba: Stack[-1] = Stack[-3]
0x8bb: Push(-2, 0); TaskCall(4)
0x8bc: Call 0x216

0x8bd: Pop(-2, 0); TaskReturn
0x8be: Pop(1)
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c0: PushEmpty(object)
0x8c1: Stack[-1] = Stack[-2]
0x8c2: Push(-1, 3); TaskCall(8)
0x8c3: Call 0x58c

0x8c4: Pop(-1, 3); TaskReturn
0x8c5: Pop(1)
0x8c6: @ ResetAAS()
0x8c7: Pop(0)
0x8c8: Return(); Pop(0)

0x8c9: PushEmpty(string, bool, float, string, bool, float)
0x8ca: PushEmpty(bool, object, string)
0x8cb: Stack[-2] = Stack[-10]
0x8cc: Stack[-1] = "class"
0x8cd: Call 0x673

0x8ce: Pop(2)
0x8cf: Pop(1); Push((bool) Stack[-1] == 0)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d1: Stack[-9] = (bool) 0
0x8d2: Return(); Pop(6)

0x8d3: Push("class")
0x8d4: @@ GetProperty(Stack[-1], Stack[-4])
0x8d5: Pop(1)
0x8d6: Push("grabitel")
0x8d7: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d9: Stack[-9] = (bool) 0
0x8da: Return(); Pop(6)

0x8db: @ CanSee(Stack[-2], Stack[-8])
0x8dc: Pop(0)
0x8dd: PushEmpty(float, object)
0x8de: Stack[-1] = Stack[-10]
0x8df: Call 0x66b

0x8e0: Stack[-3] = Stack[-2]
0x8e1: Pop(2)
0x8e2: PushEmpty(bool)
0x8e3: Stack[-1] = (bool) 0
0x8e4: Push((float)1000000.0)
0x8e5: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8e7: PushEmpty(bool)
0x8e8: Stack[-1] = (bool) 1
0x8e9: Push(Stack[-4])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8eb: Push((float)250000.0)
0x8ec: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ee: Stack[-1] = (bool) 0
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8f0: Stack[-1] = (bool) 1
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f2: Stack[-9] = (bool) 1
0x8f3: Return(); Pop(6)

0x8f4: Stack[-9] = (bool) 0
0x8f5: Return(); Pop(6)

0x8f6: PushEmpty()
0x8f7: PushEmpty(object)
0x8f8: Stack[-1] = Stack[-2]
0x8f9: Push(-1, 0); TaskCall(0)
0x8fa: Call 0x0

0x8fb: Pop(-1, 0); TaskReturn
0x8fc: Pop(1)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty()
0x8ff: PushEmpty(object, int, float)
0x900: Stack[-3] = Stack[-7]
0x901: Stack[-2] = Stack[-6]
0x902: Stack[-1] = Stack[-5]
0x903: Call 0x73e

0x904: Pop(3)
0x905: Return(); Pop(0)

0x906: PushEmpty(float, float)
0x907: Push("health")
0x908: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90a: Push("health")
0x90b: @ GetProperty(Stack[-1], Stack[-2])
0x90c: Pop(1)
0x90d: Push((int) 0)
0x90e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x90f: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x910: @ SignalDeath(Stack[-4])
0x911: Pop(0)
0x912: Return(); Pop(2)

0x913: PushEmpty()
0x914: PushEmpty(object)
0x915: Stack[-1] = Stack[-2]
0x916: Call 0x8f6

0x917: Pop(1)
0x918: Return(); Pop(0)

