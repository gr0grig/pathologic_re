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
	attack_on
	attack_stay
	attack_off
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
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
	player
	reputation
	killme
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
	RotateAsync (2 args)
	IsLoaded (1 args)
	self (1 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	HasAnimation (3 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	FindActor (2 args)
	GetActiveScene (1 args)
	BroadcastMessage (3 args)
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
	GTASK_3 Vars = (object) Params = 1
		EVENT_0 Op = 0x2bd Vars = (object)
		EVENT_17 Op = 0x2d1 Vars = (object)
		EVENT_30 Op = 0x2e5 Vars = (object, object)
		EVENT_40 Op = 0x2ff Vars = (object)
		EVENT_42 Op = 0x313 Vars = (object, string)
		EVENT_41 Op = 0x334 Vars = (object)
		EVENT_7 Op = 0x33d Vars = (int)
		EVENT_6 Op = 0x360 Vars = ()
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x383 Vars = ()
		EVENT_7 Op = 0x3e8 Vars = (int)
		EVENT_41 Op = 0x423 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x49a Vars = (int)
		EVENT_41 Op = 0x4d5 Vars = (object)

Events:
EVENT_16 Op = 0x5fa Vars = (object, string)
EVENT_41 Op = 0x607 Vars = (object)
EVENT_22 Op = 0x60d Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x7c0

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x66c

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x66f

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x675

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
0x98: Call 0x761

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
0xa4: Call 0x59d

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call 0x675

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(int, int)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-5]
0xaf: Call 0x66c

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
0xbd: Call 0x66f

0xbe: Pop(1)
0xbf: Return(); Pop(2)

0xc0: PushEmpty(int, int)
0xc1: PushEmpty(int, object)
0xc2: Stack[-1] = Stack[-5]
0xc3: Call 0x63e

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
0xd1: Call 0x648

0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: PushEmpty(int, int)
0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[-7]
0xd7: Stack[-1] = Stack[-6]
0xd8: Call 0x781

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x650

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
0xeb: Call 0x65a

0xec: Pop(1)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int)
0xef: PushEmpty(int, object)
0xf0: Stack[-1] = Stack[-5]
0xf1: Call 0x662

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
0xff: Call 0x665

0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty(int, int)
0x103: PushEmpty(int, string, object)
0x104: Stack[-2] = Stack[-6]
0x105: Stack[-1] = Stack[-7]
0x106: Call 0x667

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
0x115: Call 0x66a

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
0x134: Call 0x675

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
0x14d: Call 0x607

0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, int, bool, int)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-7]
0x153: Call 0x537

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
0x162: Call 0x62d

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
0x170: Call 0x636

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
0x1cb: Call 0x66c

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
0x1d9: Call 0x66f

0x1da: Pop(1)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: PushEmpty(int, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call 0x63e

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
0x1ed: Call 0x648

0x1ee: Pop(1)
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(int, int)
0x1f1: PushEmpty(bool, object, object)
0x1f2: Stack[-2] = Stack[-7]
0x1f3: Stack[-1] = Stack[-6]
0x1f4: Call 0x781

0x1f5: Pop(2)
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call 0x650

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
0x207: Call 0x65a

0x208: Pop(1)
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-5]
0x20d: Call 0x662

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
0x21b: Call 0x665

0x21c: Pop(1)
0x21d: Return(); Pop(2)

0x21e: PushEmpty(int, int)
0x21f: PushEmpty(int, string, object)
0x220: Stack[-2] = Stack[-6]
0x221: Stack[-1] = Stack[-7]
0x222: Call 0x667

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
0x231: Call 0x66a

0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Call 0x280

0x236: Pop(0)
0x237: PushEmpty()
0x238: Call 0x675

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Call 0x59d

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(14)

0x244: PushEmpty(int)
0x245: Call 0x61c

0x246: Stack[-8] = Stack[-1]
0x247: Pop(1)
0x248: Stack[-6] = (int) 0
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call 0x59d

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
0x261: Call 0x615

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
0x28e: Call 0x4f3

0x28f: Stack[-4] = Stack[-2]
0x290: Pop(2)
0x291: PushEmpty(float, cvector, cvector)
0x292: Stack[-2] = Stack[-6]
0x293: Stack[-1] = Stack[-5]
0x294: Call 0x5d8

0x295: Pop(2)
0x296: Push((int) 0)
0x297: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x299: PushEmpty(object)
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call 0x592

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
0x2a6: Call 0x592

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
0x2ba: Call 0x5a2

0x2bb: Pop(1)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(int, int)
0x2be: PushEmpty(int, object)
0x2bf: Stack[-1] = Stack[-5]
0x2c0: Call 0x66c

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
0x2ce: Call 0x66f

0x2cf: Pop(1)
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(int, int)
0x2d2: PushEmpty(int, object)
0x2d3: Stack[-1] = Stack[-5]
0x2d4: Call 0x63e

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
0x2e2: Call 0x648

0x2e3: Pop(1)
0x2e4: Return(); Pop(2)

0x2e5: PushEmpty(int, int)
0x2e6: PushEmpty(bool, object, object)
0x2e7: Stack[-2] = Stack[-7]
0x2e8: Stack[-1] = Stack[-6]
0x2e9: Call 0x781

0x2ea: Pop(2)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ec: PushEmpty(int, object)
0x2ed: Stack[-1] = Stack[-6]
0x2ee: Call 0x650

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
0x2fc: Call 0x65a

0x2fd: Pop(1)
0x2fe: Return(); Pop(2)

0x2ff: PushEmpty(int, int)
0x300: PushEmpty(int, object)
0x301: Stack[-1] = Stack[-5]
0x302: Call 0x662

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
0x310: Call 0x665

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, string, object)
0x315: Stack[-2] = Stack[-6]
0x316: Stack[-1] = Stack[-7]
0x317: Call 0x667

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
0x326: Call 0x66a

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
0x33a: Call 0x607

0x33b: Pop(1)
0x33c: Return(); Pop(0)

0x33d: PushEmpty(cvector, cvector, cvector, cvector)
0x33e: Push((int) 111)
0x33f: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Return(); Pop(4)

0x342: PushEmpty(bool, object)
0x343: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x344: Call 0x537

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
0x350: Call 0x4f3

0x351: Stack[-3] = Stack[-2]
0x352: Pop(2)
0x353: PushEmpty(float, cvector, cvector)
0x354: Stack[-2] = Stack[-5]
0x355: Stack[-1] = Stack[-4]
0x356: Call 0x5d8

0x357: Pop(2)
0x358: Push((float)0.5)
0x359: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35b: PushEmpty(object)
0x35c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35d: Call 0x592

0x35e: Pop(1)
0x35f: Return(); Pop(4)

0x360: PushEmpty()
0x361: Call 0x329

0x362: Pop(0)
0x363: PushEmpty()
0x364: Call 0x675

0x365: Pop(0)
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: @ Face(Stack[-1])
0x369: Pop(0)
0x36a: Push("all")
0x36b: Push("attack_on")
0x36c: @ PlayAnimation(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: @ WaitForAnimEnd()
0x36f: Pop(0)
0x370: Push("all")
0x371: Push("attack_stay")
0x372: @ PlayAnimation(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: @ WaitForAnimEnd()
0x375: Pop(0)
0x376: Push("all")
0x377: Push("attack_off")
0x378: @ PlayAnimation(Stack[-2], Stack[-1])
0x379: Pop(2)
0x37a: @ WaitForAnimEnd()
0x37b: Pop(0)
0x37c: @ StopAsync()
0x37d: Pop(0)
0x37e: PushEmpty(object)
0x37f: Stack[-1] = Stack[-2]
0x380: Call 0x3a8

0x381: Pop(1)
0x382: Return(); Pop(0)

0x383: PushEmpty()
0x384: Call 0x41c

0x385: Pop(0)
0x386: PushEmpty()
0x387: Call 0x675

0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x38b: @ GetPosition(Stack[-6])
0x38c: Pop(0)
0x38d: @@ GetPosition(Stack[-5])
0x38e: Pop(0)
0x38f: @ GetDirection(Stack[-4])
0x390: Pop(0)
0x391: PushEmpty(cvector, cvector)
0x392: PushEmpty(cvector, cvector)
0x393: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x394: Call 0x5b3

0x395: Pop(1)
0x396: Push((float)0.75)
0x397: Pop(1); Push(Stack[-8] * Stack[-1]);
0x398: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x399: Call 0x5b3

0x39a: Stack[-5] = Stack[-2]
0x39b: Pop(2)
0x39c: Push((int) 32)
0x39d: Push((float)7000.0)
0x39e: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: Push((int) 100)
0x3a1: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3a2: Push((int) 0)
0x3a3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Stack[-1] = (int) 0
0x3a6: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3a7: Return(); Pop(12)

0x3a8: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3aa: PushEmpty(cvector, float)
0x3ab: Stack[-1] = (float) 1.74533
0x3ac: Call 0x38a

0x3ad: Stack[-7] = Stack[-2]
0x3ae: Pop(2)
0x3af: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3b0: Push((float)10000.0)
0x3b1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b3: Push("Can't retreat, distance: ")
0x3b4: Pop(0); Push(Sqrt(Stack[-5]))
0x3b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b6: @ Trace(Stack[-1])
0x3b7: Pop(1)
0x3b8: Push((float)0.5)
0x3b9: @ Sleep(Stack[-1])
0x3ba: Pop(1)
0x3bb: Return(); Pop(10)

0x3bc: Push(CvectorIndex(Stack[-5], 0))
0x3bd: Push(CvectorIndex(Stack[-6], 2))
0x3be: @ Rotate(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: PushEmpty(cvector)
0x3c1: Call 0x4ee

0x3c2: Pop(0)
0x3c3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3c4: Push((int) 120)
0x3c5: Push((float)0.5)
0x3c6: @ SetTimer(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3c9: Push((int) 1)
0x3ca: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3cb: Pop(1)
0x3cc: Push(Stack[-3])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3ce: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: GOTO 0x3e7

0x3d1: GOTO 0x3e5

0x3d2: PushEmpty(cvector, float)
0x3d3: Stack[-1] = (float) 2.61799
0x3d4: Call 0x38a

0x3d5: Stack[-4] = Stack[-2]
0x3d6: Pop(2)
0x3d7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3d8: Push((float)10000.0)
0x3d9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3db: PushEmpty(cvector)
0x3dc: Call 0x4ee

0x3dd: Pop(0)
0x3de: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3df: Push((int) 120)
0x3e0: Push((float)0.5)
0x3e1: @ SetTimer(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: GOTO 0x3e5

0x3e4: GOTO 0x3e7

0x3e5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3e7: Return(); Pop(10)

0x3e8: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3e9: Push((int) 120)
0x3ea: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Return(); Pop(8)

0x3ed: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3ef: @ Stop()
0x3f0: Pop(0)
0x3f1: Push((int) 1)
0x3f2: @ KillTimer(Stack[-1])
0x3f3: Pop(1)
0x3f4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3f5: GOTO 0x41b

0x3f6: @ GetDirection(Stack[-4])
0x3f7: Pop(0)
0x3f8: Push((float)7000.0)
0x3f9: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x3fa: Pop(1)
0x3fb: PushEmpty(cvector, float)
0x3fc: Stack[-1] = (float) 1.74533
0x3fd: Call 0x38a

0x3fe: Stack[-4] = Stack[-2]
0x3ff: Pop(2)
0x400: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x401: PushEmpty(bool)
0x402: Stack[-1] = (bool) 0
0x403: Push((float)10000.0)
0x404: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x406: PushEmpty(bool)
0x407: Stack[-1] = (bool) 1
0x408: Pop(0); Push(Stack[-5] * Stack[-5]);
0x409: Push((float)2.25)
0x40a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x40b: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40d: PushEmpty(bool)
0x40e: Call 0x42c

0x40f: Pop(0)
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Stack[-1] = (bool) 0
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: Stack[-1] = (bool) 1
0x414: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x415: @ Stop()
0x416: Pop(0)
0x417: PushEmpty(cvector)
0x418: Call 0x4ee

0x419: Pop(0)
0x41a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x41b: Return(); Pop(8)

0x41c: @ Stop()
0x41d: Pop(0)
0x41e: Push((int) 120)
0x41f: @ KillTimer(Stack[-1])
0x420: Pop(1)
0x421: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: PushEmpty()
0x425: Call 0x41c

0x426: Pop(0)
0x427: PushEmpty(object)
0x428: Stack[-1] = Stack[-2]
0x429: Call 0x607

0x42a: Pop(1)
0x42b: Return(); Pop(0)

0x42c: PushEmpty(cvector, cvector, cvector, cvector)
0x42d: @ GetDirection(Stack[-2])
0x42e: Pop(0)
0x42f: PushEmpty(cvector, object)
0x430: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x431: Call 0x4f3

0x432: Stack[-3] = Stack[-2]
0x433: Pop(2)
0x434: PushEmpty(float, cvector, cvector)
0x435: Stack[-2] = Stack[-5]
0x436: Stack[-1] = Stack[-4]
0x437: Call 0x5bd

0x438: Pop(2)
0x439: Push((float)-0.34202)
0x43a: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x43b: Return(); Pop(4)

0x43c: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x43d: @ GetPosition(Stack[-6])
0x43e: Pop(0)
0x43f: @@ GetPosition(Stack[-5])
0x440: Pop(0)
0x441: @ GetDirection(Stack[-4])
0x442: Pop(0)
0x443: PushEmpty(cvector, cvector)
0x444: PushEmpty(cvector, cvector)
0x445: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x446: Call 0x5b3

0x447: Pop(1)
0x448: Push((float)0.75)
0x449: Pop(1); Push(Stack[-8] * Stack[-1]);
0x44a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x44b: Call 0x5b3

0x44c: Stack[-5] = Stack[-2]
0x44d: Pop(2)
0x44e: Push((int) 32)
0x44f: Push((float)7000.0)
0x450: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x451: Pop(2)
0x452: Push((int) 100)
0x453: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x454: Push((int) 0)
0x455: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-1] = (int) 0
0x458: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x459: Return(); Pop(12)

0x45a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x45b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x45c: PushEmpty(cvector, float)
0x45d: Stack[-1] = (float) 1.74533
0x45e: Call 0x43c

0x45f: Stack[-7] = Stack[-2]
0x460: Pop(2)
0x461: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x462: Push((float)10000.0)
0x463: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x465: Push("Can't retreat, distance: ")
0x466: Pop(0); Push(Sqrt(Stack[-5]))
0x467: Pop(2); Push(Stack[-2] + Stack[-1]);
0x468: @ Trace(Stack[-1])
0x469: Pop(1)
0x46a: Push((float)0.5)
0x46b: @ Sleep(Stack[-1])
0x46c: Pop(1)
0x46d: Return(); Pop(10)

0x46e: Push(CvectorIndex(Stack[-5], 0))
0x46f: Push(CvectorIndex(Stack[-6], 2))
0x470: @ Rotate(Stack[-2], Stack[-1])
0x471: Pop(2)
0x472: PushEmpty(cvector)
0x473: Call 0x4ee

0x474: Pop(0)
0x475: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x476: Push((int) 120)
0x477: Push((float)0.5)
0x478: @ SetTimer(Stack[-2], Stack[-1])
0x479: Pop(2)
0x47a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x47b: Push((int) 1)
0x47c: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x47d: Pop(1)
0x47e: Push(Stack[-3])
0x47f: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x480: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: GOTO 0x499

0x483: GOTO 0x497

0x484: PushEmpty(cvector, float)
0x485: Stack[-1] = (float) 2.61799
0x486: Call 0x43c

0x487: Stack[-4] = Stack[-2]
0x488: Pop(2)
0x489: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x48a: Push((float)10000.0)
0x48b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x48d: PushEmpty(cvector)
0x48e: Call 0x4ee

0x48f: Pop(0)
0x490: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x491: Push((int) 120)
0x492: Push((float)0.5)
0x493: @ SetTimer(Stack[-2], Stack[-1])
0x494: Pop(2)
0x495: GOTO 0x497

0x496: GOTO 0x499

0x497: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x499: Return(); Pop(10)

0x49a: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x49b: Push((int) 120)
0x49c: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49e: Return(); Pop(8)

0x49f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a1: @ Stop()
0x4a2: Pop(0)
0x4a3: Push((int) 1)
0x4a4: @ KillTimer(Stack[-1])
0x4a5: Pop(1)
0x4a6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4a7: GOTO 0x4cd

0x4a8: @ GetDirection(Stack[-4])
0x4a9: Pop(0)
0x4aa: Push((float)7000.0)
0x4ab: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4ac: Pop(1)
0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 1.74533
0x4af: Call 0x43c

0x4b0: Stack[-4] = Stack[-2]
0x4b1: Pop(2)
0x4b2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4b3: PushEmpty(bool)
0x4b4: Stack[-1] = (bool) 0
0x4b5: Push((float)10000.0)
0x4b6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4b8: PushEmpty(bool)
0x4b9: Stack[-1] = (bool) 1
0x4ba: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4bb: Push((float)2.25)
0x4bc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4bd: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4bf: PushEmpty(bool)
0x4c0: Call 0x4de

0x4c1: Pop(0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: Stack[-1] = (bool) 0
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Stack[-1] = (bool) 1
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c7: @ Stop()
0x4c8: Pop(0)
0x4c9: PushEmpty(cvector)
0x4ca: Call 0x4ee

0x4cb: Pop(0)
0x4cc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4cd: Return(); Pop(8)

0x4ce: @ Stop()
0x4cf: Pop(0)
0x4d0: Push((int) 120)
0x4d1: @ KillTimer(Stack[-1])
0x4d2: Pop(1)
0x4d3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: PushEmpty()
0x4d7: Call 0x4ce

0x4d8: Pop(0)
0x4d9: PushEmpty(object)
0x4da: Stack[-1] = Stack[-2]
0x4db: Call 0x607

0x4dc: Pop(1)
0x4dd: Return(); Pop(0)

0x4de: PushEmpty(cvector, cvector, cvector, cvector)
0x4df: @ GetDirection(Stack[-2])
0x4e0: Pop(0)
0x4e1: PushEmpty(cvector, object)
0x4e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e3: Call 0x4f3

0x4e4: Stack[-3] = Stack[-2]
0x4e5: Pop(2)
0x4e6: PushEmpty(float, cvector, cvector)
0x4e7: Stack[-2] = Stack[-5]
0x4e8: Stack[-1] = Stack[-4]
0x4e9: Call 0x5bd

0x4ea: Pop(2)
0x4eb: Push((float)-0.34202)
0x4ec: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x4ed: Return(); Pop(4)

0x4ee: PushEmpty(cvector, cvector)
0x4ef: @ GetPosition(Stack[-1])
0x4f0: Pop(0)
0x4f1: Stack[-3] = Stack[-1]
0x4f2: Return(); Pop(2)

0x4f3: PushEmpty(cvector, cvector, cvector, cvector)
0x4f4: @ GetPosition(Stack[-2])
0x4f5: Pop(0)
0x4f6: @@ GetPosition(Stack[-1])
0x4f7: Pop(0)
0x4f8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4f9: Return(); Pop(4)

0x4fa: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4fb: @ GetPosition(Stack[-3])
0x4fc: Pop(0)
0x4fd: @@ GetPosition(Stack[-2])
0x4fe: Pop(0)
0x4ff: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x500: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x501: Return(); Pop(6)

0x502: PushEmpty(bool, bool)
0x503: Push("HasProperty")
0x504: Push((int) 2)
0x505: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x506: Pop(1); Push((bool) Stack[-1] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-5] = (bool) 0
0x509: Return(); Pop(2)

0x50a: @@ HasProperty(Stack[-3], Stack[-1])
0x50b: Pop(0)
0x50c: Stack[-5] = Stack[-1]
0x50d: Return(); Pop(2)

0x50e: PushEmpty(bool, bool)
0x50f: @@ IsDead(Stack[-1])
0x510: Pop(0)
0x511: Stack[-4] = Stack[-1]
0x512: Return(); Pop(2)

0x513: PushEmpty(object, object, object, object)
0x514: Pop(0); Push((bool) Stack[-5] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-6] = (bool) 0
0x517: Return(); Pop(4)

0x518: PushEmpty(bool)
0x519: Stack[-1] = (bool) 0
0x51a: Push("IsDead")
0x51b: Push((int) 1)
0x51c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x51d: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x51e: PushEmpty(bool, object)
0x51f: Stack[-1] = Stack[-8]
0x520: Call 0x50e

0x521: Pop(1)
0x522: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x523: Stack[-1] = (bool) 1
0x524: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x525: Stack[-6] = (bool) 0
0x526: Return(); Pop(4)

0x527: @ GetScene(Stack[-2])
0x528: Pop(0)
0x529: Pop(0); Push((bool) Stack[-2] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52b: Stack[-6] = (bool) 0
0x52c: Return(); Pop(4)

0x52d: @@ GetScene(Stack[-1])
0x52e: Pop(0)
0x52f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-6] = (bool) 0
0x532: Return(); Pop(4)

0x533: Stack[-6] = (bool) 1
0x534: Return(); Pop(4)

0x535: Stack[-1] = 0
0x536: Stack[-2] = 0
0x537: PushEmpty(int, int)
0x538: PushEmpty(bool, object)
0x539: Stack[-1] = Stack[-5]
0x53a: Call 0x513

0x53b: Pop(1)
0x53c: Pop(1); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53e: Stack[-4] = (bool) 0
0x53f: Return(); Pop(2)

0x540: PushEmpty(bool, object, string)
0x541: Stack[-2] = Stack[-6]
0x542: Stack[-1] = "noaccess"
0x543: Call 0x502

0x544: Pop(2)
0x545: Pop(1); Push((bool) Stack[-1] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-4] = (bool) 1
0x548: Return(); Pop(2)

0x549: Push("noaccess")
0x54a: @@ GetProperty(Stack[-1], Stack[-2])
0x54b: Pop(1)
0x54c: Push((int) 0)
0x54d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x54e: Return(); Pop(2)

0x54f: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x550: PushEmpty(bool)
0x551: Stack[-1] = (bool) 0
0x552: Push((int) 4)
0x553: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x555: Push((int) 5)
0x556: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x558: Stack[-1] = (bool) 1
0x559: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x55a: @ GetScene(Stack[-10])
0x55b: Pop(0)
0x55c: @ GetPosition(Stack[-8])
0x55d: Pop(0)
0x55e: @ GetEyesHeight(Stack[-7])
0x55f: Pop(0)
0x560: Push(CvectorIndex(Stack[-8], 1))
0x561: Push((int) 2)
0x562: Pop(1); Push(Stack[-9] / Stack[-1]);
0x563: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x564: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x565: Push("scripted")
0x566: Push(CVector(0.0, 0.0, 1.0))
0x567: Push("blood.xml")
0x568: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: Stack[-9] = 0
0x56b: Stack[-10] = 0
0x56c: Pop(0); Push((bool) Stack[-23] == 0)
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: Return(); Pop(20)

0x56f: @ GetSecondaryAnimationType(Stack[-6])
0x570: Pop(0)
0x571: Push((int) 0)
0x572: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x574: Return(); Pop(20)

0x575: @@ GetPosition(Stack[-5])
0x576: Pop(0)
0x577: @ GetPosition(Stack[-4])
0x578: Pop(0)
0x579: @ GetDirection(Stack[-3])
0x57a: Pop(0)
0x57b: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x57c: Push(CvectorIndex(Stack[-2], 0))
0x57d: Push(CvectorIndex(Stack[-4], 0))
0x57e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57f: Push(CvectorIndex(Stack[-3], 2))
0x580: Push(CvectorIndex(Stack[-5], 2))
0x581: Pop(2); Push(Stack[-2] * Stack[-1]);
0x582: Pop(2); Push(Stack[-2] + Stack[-1]);
0x583: Push((int) 0)
0x584: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-1] = "fhit"
0x587: GOTO 0x589

0x588: Stack[-1] = "bhit"
0x589: Push("hit_react")
0x58a: Push("1")
0x58b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x58c: Push("2")
0x58d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x58e: Push((int) -10)
0x58f: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(4)
0x591: Return(); Pop(20)

0x592: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x593: @@ GetPosition(Stack[-3])
0x594: Pop(0)
0x595: @ GetPosition(Stack[-2])
0x596: Pop(0)
0x597: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x598: Push(CvectorIndex(Stack[-1], 0))
0x599: Push(CvectorIndex(Stack[-2], 2))
0x59a: @ RotateAsync(Stack[-2], Stack[-1])
0x59b: Pop(2)
0x59c: Return(); Pop(6)

0x59d: PushEmpty(bool, bool)
0x59e: @ IsLoaded(Stack[-1])
0x59f: Pop(0)
0x5a0: Stack[-3] = Stack[-1]
0x5a1: Return(); Pop(2)

0x5a2: PushEmpty(float, cvector, float, cvector)
0x5a3: @@ GetEyesHeight(Stack[-2])
0x5a4: Pop(0)
0x5a5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5a6: Push(CvectorIndex(Stack[-1], 1))
0x5a7: Stack[-1] = Stack[-3]
0x5a8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5a9: Push("head")
0x5aa: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5ab: Pop(1)
0x5ac: Return(); Pop(4)

0x5ad: PushEmpty(object, object)
0x5ae: @ self(Stack[-1])
0x5af: Pop(0)
0x5b0: Stack[-3] = Stack[-1]
0x5b1: Return(); Pop(2)

0x5b2: Stack[-1] = 0
0x5b3: PushEmpty(float, float)
0x5b4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5b5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5b6: Push((float)0.0)
0x5b7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5ba: Return(); Pop(2)

0x5bb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5bc: Return(); Pop(2)

0x5bd: PushEmpty()
0x5be: Pop(0); Push(Stack[-2] | Stack[-1]);
0x5bf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5c0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5c2: Pop(1); Push(Sqrt(Stack[-1]))
0x5c3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x5c4: Return(); Pop(0)

0x5c5: PushEmpty()
0x5c6: Push(CvectorIndex(Stack[-2], 0))
0x5c7: Push(CvectorIndex(Stack[-2], 0))
0x5c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5c9: Push(CvectorIndex(Stack[-3], 2))
0x5ca: Push(CvectorIndex(Stack[-3], 2))
0x5cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5cc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty()
0x5cf: Push(CvectorIndex(Stack[-1], 0))
0x5d0: Push(CvectorIndex(Stack[-2], 0))
0x5d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d2: Push(CvectorIndex(Stack[-2], 2))
0x5d3: Push(CvectorIndex(Stack[-3], 2))
0x5d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d6: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: PushEmpty(float, cvector, cvector)
0x5da: Stack[-2] = Stack[-5]
0x5db: Stack[-1] = Stack[-4]
0x5dc: Call 0x5c5

0x5dd: Pop(2)
0x5de: PushEmpty(float, cvector)
0x5df: Stack[-1] = Stack[-5]
0x5e0: Call 0x5ce

0x5e1: Pop(1)
0x5e2: PushEmpty(float, cvector)
0x5e3: Stack[-1] = Stack[-5]
0x5e4: Call 0x5ce

0x5e5: Pop(1)
0x5e6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e7: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x5e8: Return(); Pop(0)

0x5e9: PushEmpty(float, float)
0x5ea: @ GetGameTime(Stack[-1])
0x5eb: Pop(0)
0x5ec: Push((int) 1)
0x5ed: PushEmpty(int)
0x5ee: Push((int) 24)
0x5ef: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5f0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5f1: Return(); Pop(2)

0x5f2: PushEmpty()
0x5f3: PushEmpty(object)
0x5f4: Stack[-1] = Stack[-2]
0x5f5: Push(-1, 0); TaskCall(0)
0x5f6: Call 0x0

0x5f7: Pop(-1, 0); TaskReturn
0x5f8: Pop(1)
0x5f9: Return(); Pop(0)

0x5fa: PushEmpty(float, float)
0x5fb: Push("health")
0x5fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5fe: Push("health")
0x5ff: @ GetProperty(Stack[-1], Stack[-2])
0x600: Pop(1)
0x601: Push((int) 0)
0x602: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: @ SignalDeath(Stack[-4])
0x605: Pop(0)
0x606: Return(); Pop(2)

0x607: PushEmpty()
0x608: PushEmpty(object)
0x609: Stack[-1] = Stack[-2]
0x60a: Call 0x5f2

0x60b: Pop(1)
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: PushEmpty(object, int, float)
0x60f: Stack[-3] = Stack[-7]
0x610: Stack[-2] = Stack[-6]
0x611: Stack[-1] = Stack[-5]
0x612: Call 0x54f

0x613: Pop(3)
0x614: Return(); Pop(0)

0x615: PushEmpty(string, string)
0x616: Stack[-1] = "idle"
0x617: Push(Stack[-3])
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x61a: Stack[-4] = Stack[-1]
0x61b: Return(); Pop(2)

0x61c: PushEmpty(int, bool, int, bool)
0x61d: Stack[-2] = (int) 0
0x61e: Push("all")
0x61f: PushEmpty(string, int)
0x620: Stack[-1] = Stack[-5]
0x621: Call 0x615

0x622: Pop(1)
0x623: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(2)
0x625: Pop(0); Push((bool) Stack[-1] == 0)
0x626: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x627: GOTO 0x62b

0x628: Push((int) 1)
0x629: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x62a: GOTO 0x61e

0x62b: Stack[-5] = Stack[-2]
0x62c: Return(); Pop(4)

0x62d: PushEmpty()
0x62e: PushEmpty(bool)
0x62f: Call 0x778

0x630: Pop(0)
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-2] = (int) 2
0x633: GOTO 0x635

0x634: Stack[-2] = (int) 0
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: PushEmpty(object)
0x638: Stack[-1] = Stack[-2]
0x639: Push(-1, 1); TaskCall(3)
0x63a: Call 0x285

0x63b: Pop(-1, 1); TaskReturn
0x63c: Pop(1)
0x63d: Return(); Pop(0)

0x63e: PushEmpty()
0x63f: PushEmpty(bool, object)
0x640: Stack[-1] = Stack[-3]
0x641: Call 0x537

0x642: Pop(1)
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-2] = (int) 2
0x645: GOTO 0x647

0x646: Stack[-2] = (int) 0
0x647: Return(); Pop(0)

0x648: PushEmpty()
0x649: PushEmpty(object)
0x64a: Stack[-1] = Stack[-2]
0x64b: Push(-1, 3); TaskCall(4)
0x64c: Call 0x367

0x64d: Pop(-1, 3); TaskReturn
0x64e: Pop(1)
0x64f: Return(); Pop(0)

0x650: PushEmpty()
0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[-3]
0x653: Call 0x537

0x654: Pop(1)
0x655: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x656: Stack[-2] = (int) 2
0x657: GOTO 0x659

0x658: Stack[-2] = (int) 0
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: PushEmpty(object)
0x65c: Stack[-1] = Stack[-2]
0x65d: Push(-1, 3); TaskCall(5)
0x65e: Call 0x45a

0x65f: Pop(-1, 3); TaskReturn
0x660: Pop(1)
0x661: Return(); Pop(0)

0x662: PushEmpty()
0x663: Stack[-2] = (int) 0
0x664: Return(); Pop(0)

0x665: PushEmpty()
0x666: Return(); Pop(0)

0x667: PushEmpty()
0x668: Stack[-3] = (int) 0
0x669: Return(); Pop(0)

0x66a: PushEmpty()
0x66b: Return(); Pop(0)

0x66c: PushEmpty()
0x66d: Stack[-2] = (int) 2
0x66e: Return(); Pop(0)

0x66f: PushEmpty()
0x670: PushEmpty(object)
0x671: Stack[-1] = Stack[-2]
0x672: Call 0x769

0x673: Pop(1)
0x674: Return(); Pop(0)

0x675: Return(); Pop(0)

0x676: PushEmpty(int, int, int, bool, int, int, int, bool)
0x677: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x678: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x679: Push("GenerateMoney: iMin > iMax")
0x67a: @ Trace(Stack[-1])
0x67b: Pop(1)
0x67c: Return(); Pop(8)

0x67d: Stack[-4] = (int) 0
0x67e: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x67f: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x680: Pop(0); Push(Stack[-9] - Stack[-10]);
0x681: @ irand(Stack[-4], Stack[-1])
0x682: Pop(1)
0x683: GOTO 0x688

0x684: Push((int) 0)
0x685: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x687: Return(); Pop(8)

0x688: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x689: Push((int) 0)
0x68a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68c: Return(); Pop(8)

0x68d: Push("Money")
0x68e: @ GetInvItemByName(Stack[-3], Stack[-1])
0x68f: Pop(1)
0x690: Push((int) 0)
0x691: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x692: Pop(1)
0x693: Return(); Pop(8)

0x694: PushEmpty(int, bool, int, bool)
0x695: Push(Stack[-5])
0x696: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x697: PushEmpty(int, int)
0x698: Stack[-2] = (int) 0
0x699: Push((int) 100)
0x69a: PushEmpty(int)
0x69b: Call 0x5e9

0x69c: Pop(0)
0x69d: Push((int) 100)
0x69e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6a0: Call 0x676

0x6a1: Pop(2)
0x6a2: Push((int) 9)
0x6a3: @ irand(Stack[-3], Stack[-1])
0x6a4: Pop(1)
0x6a5: Push((int) 0)
0x6a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6a8: PushEmpty(int, string)
0x6a9: Stack[-1] = "lemon"
0x6aa: Call 0x743

0x6ab: Pop(1)
0x6ac: Push((int) 0)
0x6ad: Push((int) 1)
0x6ae: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(3)
0x6b0: GOTO 0x6ec

0x6b1: Push((int) 1)
0x6b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b4: PushEmpty(int, string)
0x6b5: Stack[-1] = "rusk"
0x6b6: Call 0x743

0x6b7: Pop(1)
0x6b8: Push((int) 0)
0x6b9: Push((int) 1)
0x6ba: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: GOTO 0x6ec

0x6bd: Push((int) 2)
0x6be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c0: PushEmpty(int, string)
0x6c1: Stack[-1] = "hook"
0x6c2: Call 0x743

0x6c3: Pop(1)
0x6c4: Push((int) 0)
0x6c5: Push((int) 1)
0x6c6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: GOTO 0x6ec

0x6c9: Push((int) 4)
0x6ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6cc: PushEmpty(int, string)
0x6cd: Stack[-1] = "syringe"
0x6ce: Call 0x743

0x6cf: Pop(1)
0x6d0: Push((int) 0)
0x6d1: Push((int) 1)
0x6d2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6d3: Pop(3)
0x6d4: GOTO 0x6ec

0x6d5: Push((int) 5)
0x6d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6d8: PushEmpty(int, string)
0x6d9: Stack[-1] = "watch"
0x6da: Call 0x743

0x6db: Pop(1)
0x6dc: Push((int) 0)
0x6dd: Push((int) 1)
0x6de: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: GOTO 0x6ec

0x6e1: Push((int) 6)
0x6e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e4: PushEmpty(int, string)
0x6e5: Stack[-1] = "razor"
0x6e6: Call 0x743

0x6e7: Pop(1)
0x6e8: Push((int) 0)
0x6e9: Push((int) 1)
0x6ea: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6eb: Pop(3)
0x6ec: GOTO 0x742

0x6ed: PushEmpty(int, int)
0x6ee: Stack[-2] = (int) 0
0x6ef: Push((int) 50)
0x6f0: PushEmpty(int)
0x6f1: Call 0x5e9

0x6f2: Pop(0)
0x6f3: Push((int) 50)
0x6f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6f5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6f6: Call 0x676

0x6f7: Pop(2)
0x6f8: Push((int) 8)
0x6f9: @ irand(Stack[-3], Stack[-1])
0x6fa: Pop(1)
0x6fb: Push((int) 0)
0x6fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6fe: PushEmpty(int, string)
0x6ff: Stack[-1] = "beads"
0x700: Call 0x743

0x701: Pop(1)
0x702: Push((int) 0)
0x703: Push((int) 1)
0x704: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x705: Pop(3)
0x706: GOTO 0x742

0x707: Push((int) 1)
0x708: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x70a: PushEmpty(int, string)
0x70b: Stack[-1] = "bracelet"
0x70c: Call 0x743

0x70d: Pop(1)
0x70e: Push((int) 0)
0x70f: Push((int) 1)
0x710: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: GOTO 0x742

0x713: Push((int) 2)
0x714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x716: PushEmpty(int, string)
0x717: Stack[-1] = "ear_ring"
0x718: Call 0x743

0x719: Pop(1)
0x71a: Push((int) 0)
0x71b: Push((int) 1)
0x71c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: GOTO 0x742

0x71f: Push((int) 3)
0x720: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x722: PushEmpty(int, string)
0x723: Stack[-1] = "gold_ring"
0x724: Call 0x743

0x725: Pop(1)
0x726: Push((int) 0)
0x727: Push((int) 1)
0x728: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x729: Pop(3)
0x72a: GOTO 0x742

0x72b: Push((int) 4)
0x72c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72d: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x72e: PushEmpty(int, string)
0x72f: Stack[-1] = "silver_ring"
0x730: Call 0x743

0x731: Pop(1)
0x732: Push((int) 0)
0x733: Push((int) 1)
0x734: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x735: Pop(3)
0x736: GOTO 0x742

0x737: Push((int) 5)
0x738: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73a: PushEmpty(int, string)
0x73b: Stack[-1] = "flower"
0x73c: Call 0x743

0x73d: Pop(1)
0x73e: Push((int) 0)
0x73f: Push((int) 1)
0x740: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: Return(); Pop(4)

0x743: PushEmpty(int, int)
0x744: @ GetInvItemByName(Stack[-1], Stack[-3])
0x745: Pop(0)
0x746: Stack[-4] = Stack[-1]
0x747: Return(); Pop(2)

0x748: PushEmpty(object, float, object, float)
0x749: Push("player")
0x74a: @ FindActor(Stack[-3], Stack[-1])
0x74b: Pop(1)
0x74c: Pop(0); Push((bool) Stack[-2] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74e: Stack[-5] = (int) 0
0x74f: Return(); Pop(4)

0x750: Push("reputation")
0x751: @@ GetProperty(Stack[-1], Stack[-2])
0x752: Pop(1)
0x753: Stack[-5] = Stack[-1]
0x754: Return(); Pop(4)

0x755: Stack[-2] = 0
0x756: PushEmpty(object, object)
0x757: @ GetActiveScene(Stack[-1])
0x758: Pop(0)
0x759: Push("killme")
0x75a: PushEmpty(object)
0x75b: Call 0x5ad

0x75c: Pop(0)
0x75d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x75e: Pop(2)
0x75f: Return(); Pop(2)

0x760: Stack[-1] = 0
0x761: Push(GlobalVars[1])
0x762: Stack[-1] = (bool) 0
0x763: GlobalVars[1] = Stack[-1]; Pop(1)
0x764: PushEmpty(bool)
0x765: Stack[-1] = (bool) 0
0x766: Call 0x694

0x767: Pop(1)
0x768: Return(); Pop(0)

0x769: PushEmpty(bool, bool)
0x76a: Push(GlobalVars[1])
0x76b: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x76c: @ IsOverrideActive(Stack[-1])
0x76d: Pop(0)
0x76e: Pop(0); Push((bool) Stack[-1] == 0)
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: @ WorkWithCorpse(Stack[-3])
0x771: Pop(0)
0x772: Return(); Pop(2)

0x773: GOTO 0x777

0x774: PushEmpty()
0x775: Call 0x756

0x776: Pop(0)
0x777: Return(); Pop(2)

0x778: PushEmpty()
0x779: Call 0x756

0x77a: Pop(0)
0x77b: PushEmpty(float)
0x77c: Call 0x748

0x77d: Pop(0)
0x77e: Push((float)0.7)
0x77f: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x780: Return(); Pop(0)

0x781: PushEmpty(string, bool, string, bool)
0x782: PushEmpty(bool, object, string)
0x783: Stack[-2] = Stack[-8]
0x784: Stack[-1] = "class"
0x785: Call 0x502

0x786: Pop(2)
0x787: Pop(1); Push((bool) Stack[-1] == 0)
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: Stack[-7] = (bool) 0
0x78a: Return(); Pop(4)

0x78b: Push("class")
0x78c: @@ GetProperty(Stack[-1], Stack[-3])
0x78d: Pop(1)
0x78e: Push("rat")
0x78f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x791: Stack[-7] = (bool) 0
0x792: Return(); Pop(4)

0x793: GOTO 0x799

0x794: Push("dog")
0x795: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x797: Stack[-7] = (bool) 0
0x798: Return(); Pop(4)

0x799: @ CanSee(Stack[-1], Stack[-6])
0x79a: Pop(0)
0x79b: PushEmpty(bool)
0x79c: Stack[-1] = (bool) 1
0x79d: Push(Stack[-2])
0x79e: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x79f: PushEmpty(float, object)
0x7a0: Stack[-1] = Stack[-9]
0x7a1: Call 0x4fa

0x7a2: Pop(1)
0x7a3: Push((float)250000.0)
0x7a4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a6: Stack[-1] = (bool) 0
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a8: Push((float)-0.3)
0x7a9: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7aa: Pop(1)
0x7ab: Stack[-7] = (bool) 1
0x7ac: Return(); Pop(4)

0x7ad: @ CanSee(Stack[-1], Stack[-5])
0x7ae: Pop(0)
0x7af: PushEmpty(bool)
0x7b0: Stack[-1] = (bool) 1
0x7b1: Push(Stack[-2])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b3: PushEmpty(float, object)
0x7b4: Stack[-1] = Stack[-8]
0x7b5: Call 0x4fa

0x7b6: Pop(1)
0x7b7: Push((float)250000.0)
0x7b8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7ba: Stack[-1] = (bool) 0
0x7bb: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bc: Stack[-7] = (bool) 1
0x7bd: Return(); Pop(4)

0x7be: Stack[-7] = (bool) 0
0x7bf: Return(); Pop(4)

0x7c0: PushEmpty()
0x7c1: Push(GlobalVars[1])
0x7c2: Stack[-1] = (bool) 1
0x7c3: GlobalVars[1] = Stack[-1]; Pop(1)
0x7c4: Push((int) 50)
0x7c5: Push((int) 40)
0x7c6: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x7c7: Pop(2)
0x7c8: Return(); Pop(0)

