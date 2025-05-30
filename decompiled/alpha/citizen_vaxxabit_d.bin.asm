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
	dattack_begin
	dattack_end
	zwalk
	GetPFPosition
	run
	Can't retreat, distance: 
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	disease
	armor_disease
	immunity
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
	health
	idle
	GenerateMoney: iMin > iMax
	Money
	lemon
	rusk
	hook
	syringe
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	flower
	class
	rat
	dog

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
	Face (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	IsLoaded (1 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	HasAnimation (3 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)
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
	GTASK_3  Params = 1
		EVENT_17 Op = 0x290 Vars = (object)
		EVENT_6 Op = 0x2a4 Vars = ()
		EVENT_41 Op = 0x2e1 Vars = (object)
	GTASK_4 Vars = (bool, object) Params = 2
		EVENT_17 Op = 0x2ea Vars = (object)
		EVENT_6 Op = 0x2fe Vars = ()
		EVENT_7 Op = 0x378 Vars = (int)
		EVENT_10 Op = 0x38a Vars = (object)
		EVENT_41 Op = 0x395 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x3a7 Vars = ()
		EVENT_7 Op = 0x40c Vars = (int)
		EVENT_41 Op = 0x447 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4be Vars = (int)
		EVENT_41 Op = 0x4f9 Vars = (object)

Events:
EVENT_16 Op = 0x63e Vars = (object, string)
EVENT_41 Op = 0x64b Vars = (object)
EVENT_22 Op = 0x651 Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x7d1

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x6aa

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x6ad

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x6b3

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
0x98: Call 0x786

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
0xa4: Call 0x60b

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call 0x6b3

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(int, int)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-5]
0xaf: Call 0x6aa

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
0xbd: Call 0x6ad

0xbe: Pop(1)
0xbf: Return(); Pop(2)

0xc0: PushEmpty(int, int)
0xc1: PushEmpty(int, object)
0xc2: Stack[-1] = Stack[-5]
0xc3: Call 0x67c

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
0xd1: Call 0x686

0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: PushEmpty(int, int)
0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[-7]
0xd7: Stack[-1] = Stack[-6]
0xd8: Call 0x7a3

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x68e

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
0xeb: Call 0x698

0xec: Pop(1)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int)
0xef: PushEmpty(int, object)
0xf0: Stack[-1] = Stack[-5]
0xf1: Call 0x6a0

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
0xff: Call 0x6a3

0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty(int, int)
0x103: PushEmpty(int, string, object)
0x104: Stack[-2] = Stack[-6]
0x105: Stack[-1] = Stack[-7]
0x106: Call 0x6a5

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
0x115: Call 0x6a8

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
0x134: Call 0x6b3

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
0x14d: Call 0x64b

0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, int, bool, int)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-7]
0x153: Call 0x5b0

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
0x162: Call 0x671

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
0x170: Call 0x674

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
0x1cb: Call 0x6aa

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
0x1d9: Call 0x6ad

0x1da: Pop(1)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: PushEmpty(int, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call 0x67c

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
0x1ed: Call 0x686

0x1ee: Pop(1)
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(int, int)
0x1f1: PushEmpty(bool, object, object)
0x1f2: Stack[-2] = Stack[-7]
0x1f3: Stack[-1] = Stack[-6]
0x1f4: Call 0x7a3

0x1f5: Pop(2)
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call 0x68e

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
0x207: Call 0x698

0x208: Pop(1)
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-5]
0x20d: Call 0x6a0

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
0x21b: Call 0x6a3

0x21c: Pop(1)
0x21d: Return(); Pop(2)

0x21e: PushEmpty(int, int)
0x21f: PushEmpty(int, string, object)
0x220: Stack[-2] = Stack[-6]
0x221: Stack[-1] = Stack[-7]
0x222: Call 0x6a5

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
0x231: Call 0x6a8

0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Call 0x280

0x236: Pop(0)
0x237: PushEmpty()
0x238: Call 0x6b3

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Call 0x60b

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(14)

0x244: PushEmpty(int)
0x245: Call 0x660

0x246: Stack[-8] = Stack[-1]
0x247: Pop(1)
0x248: Stack[-6] = (int) 0
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call 0x60b

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
0x261: Call 0x659

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

0x285: PushEmpty()
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[-3]
0x288: Call 0x799

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28b: PushEmpty(object)
0x28c: Stack[-1] = Stack[-2]
0x28d: Call 0x2ab

0x28e: Pop(1)
0x28f: Return(); Pop(0)

0x290: PushEmpty(int, int)
0x291: PushEmpty(int, object)
0x292: Stack[-1] = Stack[-5]
0x293: Call 0x79e

0x294: Stack[-3] = Stack[-2]
0x295: Pop(2)
0x296: Push((int) 0)
0x297: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x299: Push((int) 1)
0x29a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: PushEmpty()
0x29d: Call 0x2dc

0x29e: Pop(0)
0x29f: PushEmpty(object)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Call 0x7a1

0x2a2: Pop(1)
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty()
0x2a5: Call 0x2dc

0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call 0x6b3

0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(bool, bool)
0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[-5]
0x2ae: Push(-2, 2); TaskCall(4)
0x2af: Call 0x305

0x2b0: Pop(-2, 2); TaskReturn
0x2b1: Pop(1)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2b3: @ Face(Stack[-3])
0x2b4: Pop(0)
0x2b5: @ WaitForAnimEnd(Stack[-1])
0x2b6: Pop(0)
0x2b7: Pop(0); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2db

0x2ba: Push("all")
0x2bb: Push("dattack_begin")
0x2bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: @ WaitForAnimEnd(Stack[-1])
0x2bf: Pop(0)
0x2c0: Pop(0); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2db

0x2c3: PushEmpty(float, object)
0x2c4: Stack[-1] = Stack[-5]
0x2c5: Call 0x51e

0x2c6: Pop(1)
0x2c7: Push((float)90000.0)
0x2c8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: PushEmpty(float, object, float)
0x2cb: Stack[-2] = Stack[-6]
0x2cc: Stack[-1] = (float) 0.2
0x2cd: Call 0x548

0x2ce: Pop(3)
0x2cf: Push("all")
0x2d0: Push("dattack_end")
0x2d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: @ WaitForAnimEnd(Stack[-1])
0x2d4: Pop(0)
0x2d5: Pop(0); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: @ StopAsync()
0x2d9: Pop(0)
0x2da: GOTO 0x2ac

0x2db: Return(); Pop(2)

0x2dc: @ StopAsync()
0x2dd: Pop(0)
0x2de: @ StopAnimation()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty()
0x2e2: PushEmpty()
0x2e3: Call 0x2dc

0x2e4: Pop(0)
0x2e5: PushEmpty(object)
0x2e6: Stack[-1] = Stack[-2]
0x2e7: Call 0x64b

0x2e8: Pop(1)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(int, int)
0x2eb: PushEmpty(int, object)
0x2ec: Stack[-1] = Stack[-5]
0x2ed: Call 0x79e

0x2ee: Stack[-3] = Stack[-2]
0x2ef: Pop(2)
0x2f0: Push((int) 0)
0x2f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f3: Push((int) 1)
0x2f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f6: PushEmpty()
0x2f7: Call 0x38e

0x2f8: Pop(0)
0x2f9: PushEmpty(object)
0x2fa: Stack[-1] = Stack[-4]
0x2fb: Call 0x7a1

0x2fc: Pop(1)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty()
0x2ff: Call 0x38e

0x300: Pop(0)
0x301: PushEmpty()
0x302: Call 0x6b3

0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: PushEmpty(bool, object, float, float, bool, bool)
0x307: Stack[-5] = Stack[-7]
0x308: Stack[-4] = (int) 150
0x309: Stack[-3] = (int) 3000
0x30a: Stack[-2] = (bool) 0
0x30b: Stack[-1] = (bool) 1
0x30c: Call 0x312

0x30d: Stack[-8] = Stack[-6]
0x30e: Pop(6)
0x30f: Return(); Pop(0)

0x310: Stack[-1] = "zwalk"
0x311: Return(); Pop(0)

0x312: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x313: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x314: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x315: Stack[-7] = Stack[-17]
0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[-23]
0x318: Call 0x39e

0x319: Pop(1)
0x31a: Pop(1); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-22] = (bool) 0
0x31d: Return(); Pop(16)

0x31e: @@ GetPosition(Stack[-5])
0x31f: Pop(0)
0x320: @ GetPosition(Stack[-4])
0x321: Pop(0)
0x322: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x323: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x324: PushEmpty(bool)
0x325: Stack[-1] = (bool) 0
0x326: Push((int) 0)
0x327: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: Pop(0); Push(Stack[-20] * Stack[-20]);
0x32a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 1
0x32d: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32e: @ Stop()
0x32f: Pop(0)
0x330: Stack[-22] = (bool) 0
0x331: Return(); Pop(16)

0x332: Pop(0); Push(Stack[-20] * Stack[-20]);
0x333: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x335: @@ GetPFPosition(Stack[-5])
0x336: Pop(0)
0x337: @ FindPathTo(Stack[-1], Stack[-5])
0x338: Pop(0)
0x339: Pop(0); Push(( Stack[-1] != 0 )
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-6] = Stack[-1]
0x33c: Stack[-1] = 0
0x33d: Pop(0); Push(( Stack[-6] != 0 )
0x33e: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x33f: Push(Stack[-7])
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: Stack[-7] = (bool) 0
0x342: @ RotatePath(Stack[-6], Stack[-8])
0x343: Pop(0)
0x344: Pop(0); Push((bool) Stack[-8] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: GOTO 0x376

0x347: Push((int) 0)
0x348: Push((float)0.3)
0x349: @ SetTimer(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: PushEmpty(string)
0x34c: Call 0x310

0x34d: Pop(0)
0x34e: PushEmpty(string)
0x34f: Call 0x3a5

0x350: Pop(0)
0x351: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Pop(0); Push((bool) Stack[-8] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x355: Push( Stack[0 + Tasks[-1].StackPointer] )
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Stack[-6] = 0
0x358: GOTO 0x376

0x359: GOTO 0x35b

0x35a: GOTO 0x375

0x35b: GOTO 0x35d

0x35c: Stack[-6] = 0
0x35d: GOTO 0x36e

0x35e: Push((int) 0)
0x35f: @ KillTimer(Stack[-1])
0x360: Pop(1)
0x361: Push((float)0.5)
0x362: @ Sleep(Stack[-1], Stack[-9])
0x363: Pop(1)
0x364: Pop(0); Push((bool) Stack[-8] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x366: Push( Stack[0 + Tasks[-1].StackPointer] )
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-6] = 0
0x369: GOTO 0x376

0x36a: Push((int) 0)
0x36b: Push((float)0.3)
0x36c: @ SetTimer(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: Stack[-1] = 0
0x36f: GOTO 0x374

0x370: Push((int) 0)
0x371: @ KillTimer(Stack[-1])
0x372: Pop(1)
0x373: GOTO 0x376

0x374: Stack[-6] = 0
0x375: GOTO 0x316

0x376: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x377: Return(); Pop(16)

0x378: PushEmpty()
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37c: Return(); Pop(0)

0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37f: Call 0x39e

0x380: Pop(1)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x384: Push((int) 0)
0x385: @ KillTimer(Stack[-1])
0x386: Pop(1)
0x387: @ Stop()
0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: @ RequestClearPath(Stack[-1])
0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x38f: Push((int) 0)
0x390: @ KillTimer(Stack[-1])
0x391: Pop(1)
0x392: @ Stop()
0x393: Pop(0)
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: PushEmpty()
0x397: Call 0x38e

0x398: Pop(0)
0x399: PushEmpty(object)
0x39a: Stack[-1] = Stack[-2]
0x39b: Call 0x64b

0x39c: Pop(1)
0x39d: Return(); Pop(0)

0x39e: PushEmpty()
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[-3]
0x3a1: Call 0x5b0

0x3a2: Stack[-4] = Stack[-2]
0x3a3: Pop(2)
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = "run"
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty()
0x3a8: Call 0x440

0x3a9: Pop(0)
0x3aa: PushEmpty()
0x3ab: Call 0x6b3

0x3ac: Pop(0)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3af: @ GetPosition(Stack[-6])
0x3b0: Pop(0)
0x3b1: @@ GetPosition(Stack[-5])
0x3b2: Pop(0)
0x3b3: @ GetDirection(Stack[-4])
0x3b4: Pop(0)
0x3b5: PushEmpty(cvector, cvector)
0x3b6: PushEmpty(cvector, cvector)
0x3b7: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3b8: Call 0x610

0x3b9: Pop(1)
0x3ba: Push((float)0.75)
0x3bb: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3bc: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3bd: Call 0x610

0x3be: Stack[-5] = Stack[-2]
0x3bf: Pop(2)
0x3c0: Push((int) 32)
0x3c1: Push((float)7000.0)
0x3c2: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3c3: Pop(2)
0x3c4: Push((int) 100)
0x3c5: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3c6: Push((int) 0)
0x3c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: Stack[-1] = (int) 0
0x3ca: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3cb: Return(); Pop(12)

0x3cc: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3ce: PushEmpty(cvector, float)
0x3cf: Stack[-1] = (float) 1.74533
0x3d0: Call 0x3ae

0x3d1: Stack[-7] = Stack[-2]
0x3d2: Pop(2)
0x3d3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3d4: Push((float)10000.0)
0x3d5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d7: Push("Can't retreat, distance: ")
0x3d8: Pop(0); Push(Sqrt(Stack[-5]))
0x3d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3da: @ Trace(Stack[-1])
0x3db: Pop(1)
0x3dc: Push((float)0.5)
0x3dd: @ Sleep(Stack[-1])
0x3de: Pop(1)
0x3df: Return(); Pop(10)

0x3e0: Push(CvectorIndex(Stack[-5], 0))
0x3e1: Push(CvectorIndex(Stack[-6], 2))
0x3e2: @ Rotate(Stack[-2], Stack[-1])
0x3e3: Pop(2)
0x3e4: PushEmpty(cvector)
0x3e5: Call 0x512

0x3e6: Pop(0)
0x3e7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3e8: Push((int) 120)
0x3e9: Push((float)0.5)
0x3ea: @ SetTimer(Stack[-2], Stack[-1])
0x3eb: Pop(2)
0x3ec: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3ed: Push((int) 1)
0x3ee: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3ef: Pop(1)
0x3f0: Push(Stack[-3])
0x3f1: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3f2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: GOTO 0x40b

0x3f5: GOTO 0x409

0x3f6: PushEmpty(cvector, float)
0x3f7: Stack[-1] = (float) 2.61799
0x3f8: Call 0x3ae

0x3f9: Stack[-4] = Stack[-2]
0x3fa: Pop(2)
0x3fb: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3fc: Push((float)10000.0)
0x3fd: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3ff: PushEmpty(cvector)
0x400: Call 0x512

0x401: Pop(0)
0x402: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x403: Push((int) 120)
0x404: Push((float)0.5)
0x405: @ SetTimer(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: GOTO 0x409

0x408: GOTO 0x40b

0x409: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x40b: Return(); Pop(10)

0x40c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x40d: Push((int) 120)
0x40e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: Return(); Pop(8)

0x411: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x413: @ Stop()
0x414: Pop(0)
0x415: Push((int) 1)
0x416: @ KillTimer(Stack[-1])
0x417: Pop(1)
0x418: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x419: GOTO 0x43f

0x41a: @ GetDirection(Stack[-4])
0x41b: Pop(0)
0x41c: Push((float)7000.0)
0x41d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x41e: Pop(1)
0x41f: PushEmpty(cvector, float)
0x420: Stack[-1] = (float) 1.74533
0x421: Call 0x3ae

0x422: Stack[-4] = Stack[-2]
0x423: Pop(2)
0x424: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x425: PushEmpty(bool)
0x426: Stack[-1] = (bool) 0
0x427: Push((float)10000.0)
0x428: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x42a: PushEmpty(bool)
0x42b: Stack[-1] = (bool) 1
0x42c: Pop(0); Push(Stack[-5] * Stack[-5]);
0x42d: Push((float)2.25)
0x42e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: PushEmpty(bool)
0x432: Call 0x450

0x433: Pop(0)
0x434: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x435: Stack[-1] = (bool) 0
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: Stack[-1] = (bool) 1
0x438: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x439: @ Stop()
0x43a: Pop(0)
0x43b: PushEmpty(cvector)
0x43c: Call 0x512

0x43d: Pop(0)
0x43e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x43f: Return(); Pop(8)

0x440: @ Stop()
0x441: Pop(0)
0x442: Push((int) 120)
0x443: @ KillTimer(Stack[-1])
0x444: Pop(1)
0x445: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: PushEmpty()
0x449: Call 0x440

0x44a: Pop(0)
0x44b: PushEmpty(object)
0x44c: Stack[-1] = Stack[-2]
0x44d: Call 0x64b

0x44e: Pop(1)
0x44f: Return(); Pop(0)

0x450: PushEmpty(cvector, cvector, cvector, cvector)
0x451: @ GetDirection(Stack[-2])
0x452: Pop(0)
0x453: PushEmpty(cvector, object)
0x454: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x455: Call 0x517

0x456: Stack[-3] = Stack[-2]
0x457: Pop(2)
0x458: PushEmpty(float, cvector, cvector)
0x459: Stack[-2] = Stack[-5]
0x45a: Stack[-1] = Stack[-4]
0x45b: Call 0x625

0x45c: Pop(2)
0x45d: Push((float)-0.34202)
0x45e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x45f: Return(); Pop(4)

0x460: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x461: @ GetPosition(Stack[-6])
0x462: Pop(0)
0x463: @@ GetPosition(Stack[-5])
0x464: Pop(0)
0x465: @ GetDirection(Stack[-4])
0x466: Pop(0)
0x467: PushEmpty(cvector, cvector)
0x468: PushEmpty(cvector, cvector)
0x469: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x46a: Call 0x610

0x46b: Pop(1)
0x46c: Push((float)0.75)
0x46d: Pop(1); Push(Stack[-8] * Stack[-1]);
0x46e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x46f: Call 0x610

0x470: Stack[-5] = Stack[-2]
0x471: Pop(2)
0x472: Push((int) 32)
0x473: Push((float)7000.0)
0x474: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x475: Pop(2)
0x476: Push((int) 100)
0x477: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x478: Push((int) 0)
0x479: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Stack[-1] = (int) 0
0x47c: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x47d: Return(); Pop(12)

0x47e: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x47f: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x480: PushEmpty(cvector, float)
0x481: Stack[-1] = (float) 1.74533
0x482: Call 0x460

0x483: Stack[-7] = Stack[-2]
0x484: Pop(2)
0x485: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x486: Push((float)10000.0)
0x487: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x489: Push("Can't retreat, distance: ")
0x48a: Pop(0); Push(Sqrt(Stack[-5]))
0x48b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x48c: @ Trace(Stack[-1])
0x48d: Pop(1)
0x48e: Push((float)0.5)
0x48f: @ Sleep(Stack[-1])
0x490: Pop(1)
0x491: Return(); Pop(10)

0x492: Push(CvectorIndex(Stack[-5], 0))
0x493: Push(CvectorIndex(Stack[-6], 2))
0x494: @ Rotate(Stack[-2], Stack[-1])
0x495: Pop(2)
0x496: PushEmpty(cvector)
0x497: Call 0x512

0x498: Pop(0)
0x499: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x49a: Push((int) 120)
0x49b: Push((float)0.5)
0x49c: @ SetTimer(Stack[-2], Stack[-1])
0x49d: Pop(2)
0x49e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x49f: Push((int) 1)
0x4a0: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4a1: Pop(1)
0x4a2: Push(Stack[-3])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4a4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: GOTO 0x4bd

0x4a7: GOTO 0x4bb

0x4a8: PushEmpty(cvector, float)
0x4a9: Stack[-1] = (float) 2.61799
0x4aa: Call 0x460

0x4ab: Stack[-4] = Stack[-2]
0x4ac: Pop(2)
0x4ad: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4ae: Push((float)10000.0)
0x4af: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b1: PushEmpty(cvector)
0x4b2: Call 0x512

0x4b3: Pop(0)
0x4b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4b5: Push((int) 120)
0x4b6: Push((float)0.5)
0x4b7: @ SetTimer(Stack[-2], Stack[-1])
0x4b8: Pop(2)
0x4b9: GOTO 0x4bb

0x4ba: GOTO 0x4bd

0x4bb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x4bd: Return(); Pop(10)

0x4be: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4bf: Push((int) 120)
0x4c0: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: Return(); Pop(8)

0x4c3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c5: @ Stop()
0x4c6: Pop(0)
0x4c7: Push((int) 1)
0x4c8: @ KillTimer(Stack[-1])
0x4c9: Pop(1)
0x4ca: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4cb: GOTO 0x4f1

0x4cc: @ GetDirection(Stack[-4])
0x4cd: Pop(0)
0x4ce: Push((float)7000.0)
0x4cf: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4d0: Pop(1)
0x4d1: PushEmpty(cvector, float)
0x4d2: Stack[-1] = (float) 1.74533
0x4d3: Call 0x460

0x4d4: Stack[-4] = Stack[-2]
0x4d5: Pop(2)
0x4d6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 0
0x4d9: Push((float)10000.0)
0x4da: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4dc: PushEmpty(bool)
0x4dd: Stack[-1] = (bool) 1
0x4de: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4df: Push((float)2.25)
0x4e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e1: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(bool)
0x4e4: Call 0x502

0x4e5: Pop(0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[-1] = (bool) 0
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Stack[-1] = (bool) 1
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4eb: @ Stop()
0x4ec: Pop(0)
0x4ed: PushEmpty(cvector)
0x4ee: Call 0x512

0x4ef: Pop(0)
0x4f0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4f1: Return(); Pop(8)

0x4f2: @ Stop()
0x4f3: Pop(0)
0x4f4: Push((int) 120)
0x4f5: @ KillTimer(Stack[-1])
0x4f6: Pop(1)
0x4f7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f8: Return(); Pop(0)

0x4f9: PushEmpty()
0x4fa: PushEmpty()
0x4fb: Call 0x4f2

0x4fc: Pop(0)
0x4fd: PushEmpty(object)
0x4fe: Stack[-1] = Stack[-2]
0x4ff: Call 0x64b

0x500: Pop(1)
0x501: Return(); Pop(0)

0x502: PushEmpty(cvector, cvector, cvector, cvector)
0x503: @ GetDirection(Stack[-2])
0x504: Pop(0)
0x505: PushEmpty(cvector, object)
0x506: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x507: Call 0x517

0x508: Stack[-3] = Stack[-2]
0x509: Pop(2)
0x50a: PushEmpty(float, cvector, cvector)
0x50b: Stack[-2] = Stack[-5]
0x50c: Stack[-1] = Stack[-4]
0x50d: Call 0x625

0x50e: Pop(2)
0x50f: Push((float)-0.34202)
0x510: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x511: Return(); Pop(4)

0x512: PushEmpty(cvector, cvector)
0x513: @ GetPosition(Stack[-1])
0x514: Pop(0)
0x515: Stack[-3] = Stack[-1]
0x516: Return(); Pop(2)

0x517: PushEmpty(cvector, cvector, cvector, cvector)
0x518: @ GetPosition(Stack[-2])
0x519: Pop(0)
0x51a: @@ GetPosition(Stack[-1])
0x51b: Pop(0)
0x51c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x51d: Return(); Pop(4)

0x51e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x51f: @ GetPosition(Stack[-3])
0x520: Pop(0)
0x521: @@ GetPosition(Stack[-2])
0x522: Pop(0)
0x523: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x524: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x525: Return(); Pop(6)

0x526: PushEmpty(bool, bool)
0x527: Push("HasProperty")
0x528: Push((int) 2)
0x529: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x52a: Pop(1); Push((bool) Stack[-1] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52c: Stack[-5] = (bool) 0
0x52d: Return(); Pop(2)

0x52e: @@ HasProperty(Stack[-3], Stack[-1])
0x52f: Pop(0)
0x530: Stack[-5] = Stack[-1]
0x531: Return(); Pop(2)

0x532: PushEmpty(float, float)
0x533: PushEmpty(bool, object, string)
0x534: Stack[-2] = Stack[-10]
0x535: Stack[-1] = Stack[-9]
0x536: Call 0x526

0x537: Pop(2)
0x538: Pop(1); Push((bool) Stack[-1] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-8] = (bool) 0
0x53b: Return(); Pop(2)

0x53c: @@ GetProperty(Stack[-6], Stack[-1])
0x53d: Pop(0)
0x53e: PushEmpty(float, float, float, float)
0x53f: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x540: Stack[-2] = Stack[-8]
0x541: Stack[-1] = Stack[-7]
0x542: Call 0x61a

0x543: Pop(3)
0x544: @@ SetProperty(Stack[-7], Stack[-1])
0x545: Pop(1)
0x546: Stack[-8] = (bool) 1
0x547: Return(); Pop(2)

0x548: PushEmpty(int, float, float, int, float, float)
0x549: PushEmpty(bool, object, string)
0x54a: Stack[-2] = Stack[-11]
0x54b: Stack[-1] = "disease"
0x54c: Call 0x526

0x54d: Pop(2)
0x54e: Pop(1); Push((bool) Stack[-1] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-9] = (int) 0
0x551: Return(); Pop(6)

0x552: PushEmpty(bool, object, string)
0x553: Stack[-2] = Stack[-11]
0x554: Stack[-1] = "armor_disease"
0x555: Call 0x526

0x556: Pop(2)
0x557: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x558: Push("armor_disease")
0x559: @@ GetProperty(Stack[-1], Stack[-4])
0x55a: Pop(1)
0x55b: Push((int) 100)
0x55c: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55e: Push((int) 1)
0x55f: Push((float)100.0)
0x560: Pop(1); Push(Stack[-5] / Stack[-1]);
0x561: Pop(2); Push(Stack[-2] - Stack[-1]);
0x562: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x563: GOTO 0x566

0x564: Stack[-9] = (int) 0
0x565: Return(); Pop(6)

0x566: PushEmpty(bool, object, string)
0x567: Stack[-2] = Stack[-11]
0x568: Stack[-1] = "immunity"
0x569: Call 0x526

0x56a: Pop(2)
0x56b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x56c: Push("immunity")
0x56d: @@ GetProperty(Stack[-1], Stack[-2])
0x56e: Pop(1)
0x56f: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x570: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x571: Push("immunity")
0x572: Push((int) 0)
0x573: @@ SetProperty(Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0x576: GOTO 0x57d

0x577: Push("immunity")
0x578: Pop(0); Push(Stack[-2] - Stack[-8]);
0x579: @@ SetProperty(Stack[-2], Stack[-1])
0x57a: Pop(2)
0x57b: Stack[-9] = Stack[-7]
0x57c: Return(); Pop(6)

0x57d: PushEmpty(bool, object, string, float, float, float)
0x57e: Stack[-5] = Stack[-14]
0x57f: Stack[-4] = "disease"
0x580: Stack[-3] = Stack[-8]
0x581: Stack[-2] = (int) 0
0x582: Stack[-1] = (int) 1
0x583: Call 0x532

0x584: Pop(6)
0x585: Stack[-9] = Stack[-7]
0x586: Return(); Pop(6)

0x587: PushEmpty(bool, bool)
0x588: @@ IsDead(Stack[-1])
0x589: Pop(0)
0x58a: Stack[-4] = Stack[-1]
0x58b: Return(); Pop(2)

0x58c: PushEmpty(object, object, object, object)
0x58d: Pop(0); Push((bool) Stack[-5] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-6] = (bool) 0
0x590: Return(); Pop(4)

0x591: PushEmpty(bool)
0x592: Stack[-1] = (bool) 0
0x593: Push("IsDead")
0x594: Push((int) 1)
0x595: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x596: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x597: PushEmpty(bool, object)
0x598: Stack[-1] = Stack[-8]
0x599: Call 0x587

0x59a: Pop(1)
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: Stack[-1] = (bool) 1
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: Stack[-6] = (bool) 0
0x59f: Return(); Pop(4)

0x5a0: @ GetScene(Stack[-2])
0x5a1: Pop(0)
0x5a2: Pop(0); Push((bool) Stack[-2] == 0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-6] = (bool) 0
0x5a5: Return(); Pop(4)

0x5a6: @@ GetScene(Stack[-1])
0x5a7: Pop(0)
0x5a8: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-6] = (bool) 0
0x5ab: Return(); Pop(4)

0x5ac: Stack[-6] = (bool) 1
0x5ad: Return(); Pop(4)

0x5ae: Stack[-1] = 0
0x5af: Stack[-2] = 0
0x5b0: PushEmpty(int, int)
0x5b1: PushEmpty(bool, object)
0x5b2: Stack[-1] = Stack[-5]
0x5b3: Call 0x58c

0x5b4: Pop(1)
0x5b5: Pop(1); Push((bool) Stack[-1] == 0)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b7: Stack[-4] = (bool) 0
0x5b8: Return(); Pop(2)

0x5b9: PushEmpty(bool, object, string)
0x5ba: Stack[-2] = Stack[-6]
0x5bb: Stack[-1] = "noaccess"
0x5bc: Call 0x526

0x5bd: Pop(2)
0x5be: Pop(1); Push((bool) Stack[-1] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[-4] = (bool) 1
0x5c1: Return(); Pop(2)

0x5c2: Push("noaccess")
0x5c3: @@ GetProperty(Stack[-1], Stack[-2])
0x5c4: Pop(1)
0x5c5: Push((int) 0)
0x5c6: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5c7: Return(); Pop(2)

0x5c8: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x5c9: PushEmpty(bool)
0x5ca: Stack[-1] = (bool) 0
0x5cb: Push((int) 4)
0x5cc: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5ce: Push((int) 5)
0x5cf: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d1: Stack[-1] = (bool) 1
0x5d2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5d3: @ GetScene(Stack[-10])
0x5d4: Pop(0)
0x5d5: @ GetPosition(Stack[-8])
0x5d6: Pop(0)
0x5d7: @ GetEyesHeight(Stack[-7])
0x5d8: Pop(0)
0x5d9: Push(CvectorIndex(Stack[-8], 1))
0x5da: Push((int) 2)
0x5db: Pop(1); Push(Stack[-9] / Stack[-1]);
0x5dc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5dd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5de: Push("scripted")
0x5df: Push(CVector(0.0, 0.0, 1.0))
0x5e0: Push("blood.xml")
0x5e1: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5e2: Pop(3)
0x5e3: Stack[-9] = 0
0x5e4: Stack[-10] = 0
0x5e5: Pop(0); Push((bool) Stack[-23] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Return(); Pop(20)

0x5e8: @ GetSecondaryAnimationType(Stack[-6])
0x5e9: Pop(0)
0x5ea: Push((int) 0)
0x5eb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ed: Return(); Pop(20)

0x5ee: @@ GetPosition(Stack[-5])
0x5ef: Pop(0)
0x5f0: @ GetPosition(Stack[-4])
0x5f1: Pop(0)
0x5f2: @ GetDirection(Stack[-3])
0x5f3: Pop(0)
0x5f4: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5f5: Push(CvectorIndex(Stack[-2], 0))
0x5f6: Push(CvectorIndex(Stack[-4], 0))
0x5f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f8: Push(CvectorIndex(Stack[-3], 2))
0x5f9: Push(CvectorIndex(Stack[-5], 2))
0x5fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5fc: Push((int) 0)
0x5fd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ff: Stack[-1] = "fhit"
0x600: GOTO 0x602

0x601: Stack[-1] = "bhit"
0x602: Push("hit_react")
0x603: Push("1")
0x604: Pop(1); Push(Stack[-3] + Stack[-1]);
0x605: Push("2")
0x606: Pop(1); Push(Stack[-4] + Stack[-1]);
0x607: Push((int) -10)
0x608: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x609: Pop(4)
0x60a: Return(); Pop(20)

0x60b: PushEmpty(bool, bool)
0x60c: @ IsLoaded(Stack[-1])
0x60d: Pop(0)
0x60e: Stack[-3] = Stack[-1]
0x60f: Return(); Pop(2)

0x610: PushEmpty(float, float)
0x611: Pop(0); Push(Stack[-3] | Stack[-3]);
0x612: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x613: Push((float)0.0)
0x614: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x617: Return(); Pop(2)

0x618: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x619: Return(); Pop(2)

0x61a: PushEmpty()
0x61b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: Stack[-4] = Stack[-2]
0x61e: Return(); Pop(0)

0x61f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-4] = Stack[-1]
0x622: Return(); Pop(0)

0x623: Stack[-4] = Stack[-3]
0x624: Return(); Pop(0)

0x625: PushEmpty()
0x626: Pop(0); Push(Stack[-2] | Stack[-1]);
0x627: Pop(0); Push(Stack[-3] | Stack[-3]);
0x628: Pop(0); Push(Stack[-3] | Stack[-3]);
0x629: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62a: Pop(1); Push(Sqrt(Stack[-1]))
0x62b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x62c: Return(); Pop(0)

0x62d: PushEmpty(float, float)
0x62e: @ GetGameTime(Stack[-1])
0x62f: Pop(0)
0x630: Push((int) 1)
0x631: PushEmpty(int)
0x632: Push((int) 24)
0x633: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x634: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x635: Return(); Pop(2)

0x636: PushEmpty()
0x637: PushEmpty(object)
0x638: Stack[-1] = Stack[-2]
0x639: Push(-1, 0); TaskCall(0)
0x63a: Call 0x0

0x63b: Pop(-1, 0); TaskReturn
0x63c: Pop(1)
0x63d: Return(); Pop(0)

0x63e: PushEmpty(float, float)
0x63f: Push("health")
0x640: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x642: Push("health")
0x643: @ GetProperty(Stack[-1], Stack[-2])
0x644: Pop(1)
0x645: Push((int) 0)
0x646: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x647: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x648: @ SignalDeath(Stack[-4])
0x649: Pop(0)
0x64a: Return(); Pop(2)

0x64b: PushEmpty()
0x64c: PushEmpty(object)
0x64d: Stack[-1] = Stack[-2]
0x64e: Call 0x636

0x64f: Pop(1)
0x650: Return(); Pop(0)

0x651: PushEmpty()
0x652: PushEmpty(object, int, float)
0x653: Stack[-3] = Stack[-7]
0x654: Stack[-2] = Stack[-6]
0x655: Stack[-1] = Stack[-5]
0x656: Call 0x5c8

0x657: Pop(3)
0x658: Return(); Pop(0)

0x659: PushEmpty(string, string)
0x65a: Stack[-1] = "idle"
0x65b: Push(Stack[-3])
0x65c: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x65e: Stack[-4] = Stack[-1]
0x65f: Return(); Pop(2)

0x660: PushEmpty(int, bool, int, bool)
0x661: Stack[-2] = (int) 0
0x662: Push("all")
0x663: PushEmpty(string, int)
0x664: Stack[-1] = Stack[-5]
0x665: Call 0x659

0x666: Pop(1)
0x667: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(2)
0x669: Pop(0); Push((bool) Stack[-1] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66b: GOTO 0x66f

0x66c: Push((int) 1)
0x66d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x66e: GOTO 0x662

0x66f: Stack[-5] = Stack[-2]
0x670: Return(); Pop(4)

0x671: PushEmpty()
0x672: Stack[-2] = (int) 2
0x673: Return(); Pop(0)

0x674: PushEmpty()
0x675: PushEmpty(object)
0x676: Stack[-1] = Stack[-2]
0x677: Push(-1, 0); TaskCall(3)
0x678: Call 0x285

0x679: Pop(-1, 0); TaskReturn
0x67a: Pop(1)
0x67b: Return(); Pop(0)

0x67c: PushEmpty()
0x67d: PushEmpty(bool, object)
0x67e: Stack[-1] = Stack[-3]
0x67f: Call 0x5b0

0x680: Pop(1)
0x681: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x682: Stack[-2] = (int) 2
0x683: GOTO 0x685

0x684: Stack[-2] = (int) 0
0x685: Return(); Pop(0)

0x686: PushEmpty()
0x687: PushEmpty(object)
0x688: Stack[-1] = Stack[-2]
0x689: Push(-1, 3); TaskCall(5)
0x68a: Call 0x3cc

0x68b: Pop(-1, 3); TaskReturn
0x68c: Pop(1)
0x68d: Return(); Pop(0)

0x68e: PushEmpty()
0x68f: PushEmpty(bool, object)
0x690: Stack[-1] = Stack[-3]
0x691: Call 0x5b0

0x692: Pop(1)
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-2] = (int) 2
0x695: GOTO 0x697

0x696: Stack[-2] = (int) 0
0x697: Return(); Pop(0)

0x698: PushEmpty()
0x699: PushEmpty(object)
0x69a: Stack[-1] = Stack[-2]
0x69b: Push(-1, 3); TaskCall(6)
0x69c: Call 0x47e

0x69d: Pop(-1, 3); TaskReturn
0x69e: Pop(1)
0x69f: Return(); Pop(0)

0x6a0: PushEmpty()
0x6a1: Stack[-2] = (int) 0
0x6a2: Return(); Pop(0)

0x6a3: PushEmpty()
0x6a4: Return(); Pop(0)

0x6a5: PushEmpty()
0x6a6: Stack[-3] = (int) 0
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty()
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: Stack[-2] = (int) 2
0x6ac: Return(); Pop(0)

0x6ad: PushEmpty()
0x6ae: PushEmpty(object)
0x6af: Stack[-1] = Stack[-2]
0x6b0: Call 0x78e

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: Return(); Pop(0)

0x6b4: PushEmpty(int, int, int, bool, int, int, int, bool)
0x6b5: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b7: Push("GenerateMoney: iMin > iMax")
0x6b8: @ Trace(Stack[-1])
0x6b9: Pop(1)
0x6ba: Return(); Pop(8)

0x6bb: Stack[-4] = (int) 0
0x6bc: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6be: Pop(0); Push(Stack[-9] - Stack[-10]);
0x6bf: @ irand(Stack[-4], Stack[-1])
0x6c0: Pop(1)
0x6c1: GOTO 0x6c6

0x6c2: Push((int) 0)
0x6c3: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Return(); Pop(8)

0x6c6: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x6c7: Push((int) 0)
0x6c8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: Return(); Pop(8)

0x6cb: Push("Money")
0x6cc: @ GetInvItemByName(Stack[-3], Stack[-1])
0x6cd: Pop(1)
0x6ce: Push((int) 0)
0x6cf: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x6d0: Pop(1)
0x6d1: Return(); Pop(8)

0x6d2: PushEmpty(int, bool, int, bool)
0x6d3: Push(Stack[-5])
0x6d4: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x6d5: PushEmpty(int, int)
0x6d6: Stack[-2] = (int) 0
0x6d7: Push((int) 100)
0x6d8: PushEmpty(int)
0x6d9: Call 0x62d

0x6da: Pop(0)
0x6db: Push((int) 100)
0x6dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6dd: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6de: Call 0x6b4

0x6df: Pop(2)
0x6e0: Push((int) 9)
0x6e1: @ irand(Stack[-3], Stack[-1])
0x6e2: Pop(1)
0x6e3: Push((int) 0)
0x6e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e6: PushEmpty(int, string)
0x6e7: Stack[-1] = "lemon"
0x6e8: Call 0x781

0x6e9: Pop(1)
0x6ea: Push((int) 0)
0x6eb: Push((int) 1)
0x6ec: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: GOTO 0x72a

0x6ef: Push((int) 1)
0x6f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f2: PushEmpty(int, string)
0x6f3: Stack[-1] = "rusk"
0x6f4: Call 0x781

0x6f5: Pop(1)
0x6f6: Push((int) 0)
0x6f7: Push((int) 1)
0x6f8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: GOTO 0x72a

0x6fb: Push((int) 2)
0x6fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6fe: PushEmpty(int, string)
0x6ff: Stack[-1] = "hook"
0x700: Call 0x781

0x701: Pop(1)
0x702: Push((int) 0)
0x703: Push((int) 1)
0x704: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x705: Pop(3)
0x706: GOTO 0x72a

0x707: Push((int) 4)
0x708: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x70a: PushEmpty(int, string)
0x70b: Stack[-1] = "syringe"
0x70c: Call 0x781

0x70d: Pop(1)
0x70e: Push((int) 0)
0x70f: Push((int) 1)
0x710: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: GOTO 0x72a

0x713: Push((int) 5)
0x714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x716: PushEmpty(int, string)
0x717: Stack[-1] = "watch"
0x718: Call 0x781

0x719: Pop(1)
0x71a: Push((int) 0)
0x71b: Push((int) 1)
0x71c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: GOTO 0x72a

0x71f: Push((int) 6)
0x720: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x722: PushEmpty(int, string)
0x723: Stack[-1] = "razor"
0x724: Call 0x781

0x725: Pop(1)
0x726: Push((int) 0)
0x727: Push((int) 1)
0x728: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x729: Pop(3)
0x72a: GOTO 0x780

0x72b: PushEmpty(int, int)
0x72c: Stack[-2] = (int) 0
0x72d: Push((int) 50)
0x72e: PushEmpty(int)
0x72f: Call 0x62d

0x730: Pop(0)
0x731: Push((int) 50)
0x732: Pop(2); Push(Stack[-2] * Stack[-1]);
0x733: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x734: Call 0x6b4

0x735: Pop(2)
0x736: Push((int) 8)
0x737: @ irand(Stack[-3], Stack[-1])
0x738: Pop(1)
0x739: Push((int) 0)
0x73a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x73c: PushEmpty(int, string)
0x73d: Stack[-1] = "beads"
0x73e: Call 0x781

0x73f: Pop(1)
0x740: Push((int) 0)
0x741: Push((int) 1)
0x742: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: GOTO 0x780

0x745: Push((int) 1)
0x746: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x748: PushEmpty(int, string)
0x749: Stack[-1] = "bracelet"
0x74a: Call 0x781

0x74b: Pop(1)
0x74c: Push((int) 0)
0x74d: Push((int) 1)
0x74e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x74f: Pop(3)
0x750: GOTO 0x780

0x751: Push((int) 2)
0x752: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x754: PushEmpty(int, string)
0x755: Stack[-1] = "ear_ring"
0x756: Call 0x781

0x757: Pop(1)
0x758: Push((int) 0)
0x759: Push((int) 1)
0x75a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: GOTO 0x780

0x75d: Push((int) 3)
0x75e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x760: PushEmpty(int, string)
0x761: Stack[-1] = "gold_ring"
0x762: Call 0x781

0x763: Pop(1)
0x764: Push((int) 0)
0x765: Push((int) 1)
0x766: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: GOTO 0x780

0x769: Push((int) 4)
0x76a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x76c: PushEmpty(int, string)
0x76d: Stack[-1] = "silver_ring"
0x76e: Call 0x781

0x76f: Pop(1)
0x770: Push((int) 0)
0x771: Push((int) 1)
0x772: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: GOTO 0x780

0x775: Push((int) 5)
0x776: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x778: PushEmpty(int, string)
0x779: Stack[-1] = "flower"
0x77a: Call 0x781

0x77b: Pop(1)
0x77c: Push((int) 0)
0x77d: Push((int) 1)
0x77e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(4)

0x781: PushEmpty(int, int)
0x782: @ GetInvItemByName(Stack[-1], Stack[-3])
0x783: Pop(0)
0x784: Stack[-4] = Stack[-1]
0x785: Return(); Pop(2)

0x786: Push(GlobalVars[0])
0x787: Stack[-1] = (bool) 0
0x788: GlobalVars[0] = Stack[-1]; Pop(1)
0x789: PushEmpty(bool)
0x78a: Stack[-1] = (bool) 1
0x78b: Call 0x6d2

0x78c: Pop(1)
0x78d: Return(); Pop(0)

0x78e: PushEmpty(bool, bool)
0x78f: Push(GlobalVars[0])
0x790: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x791: @ IsOverrideActive(Stack[-1])
0x792: Pop(0)
0x793: Pop(0); Push((bool) Stack[-1] == 0)
0x794: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x795: @ WorkWithCorpse(Stack[-3])
0x796: Pop(0)
0x797: Return(); Pop(2)

0x798: Return(); Pop(2)

0x799: PushEmpty(bool, bool)
0x79a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x79b: Pop(0)
0x79c: Stack[-4] = Stack[-1]
0x79d: Return(); Pop(2)

0x79e: PushEmpty()
0x79f: Stack[-2] = (int) 0
0x7a0: Return(); Pop(0)

0x7a1: PushEmpty()
0x7a2: Return(); Pop(0)

0x7a3: PushEmpty(string, bool, string, bool)
0x7a4: PushEmpty(bool, object, string)
0x7a5: Stack[-2] = Stack[-8]
0x7a6: Stack[-1] = "class"
0x7a7: Call 0x526

0x7a8: Pop(2)
0x7a9: Pop(1); Push((bool) Stack[-1] == 0)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-7] = (bool) 0
0x7ac: Return(); Pop(4)

0x7ad: Push("class")
0x7ae: @@ GetProperty(Stack[-1], Stack[-3])
0x7af: Pop(1)
0x7b0: Push("rat")
0x7b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b3: Stack[-7] = (bool) 0
0x7b4: Return(); Pop(4)

0x7b5: GOTO 0x7bb

0x7b6: Push("dog")
0x7b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b9: Stack[-7] = (bool) 0
0x7ba: Return(); Pop(4)

0x7bb: @ CanSee(Stack[-1], Stack[-6])
0x7bc: Pop(0)
0x7bd: PushEmpty(bool)
0x7be: Stack[-1] = (bool) 1
0x7bf: Push(Stack[-2])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c1: PushEmpty(float, object)
0x7c2: Stack[-1] = Stack[-9]
0x7c3: Call 0x51e

0x7c4: Pop(1)
0x7c5: Push((float)250000.0)
0x7c6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c8: Stack[-1] = (bool) 0
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ca: Push((float)-0.3)
0x7cb: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7cc: Pop(1)
0x7cd: Stack[-7] = (bool) 1
0x7ce: Return(); Pop(4)

0x7cf: Stack[-7] = (bool) 0
0x7d0: Return(); Pop(4)

0x7d1: PushEmpty()
0x7d2: Push(GlobalVars[0])
0x7d3: Stack[-1] = (bool) 1
0x7d4: GlobalVars[0] = Stack[-1]; Pop(1)
0x7d5: Push((int) 50)
0x7d6: Push((int) 40)
0x7d7: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x7d8: Pop(2)
0x7d9: Return(); Pop(0)

