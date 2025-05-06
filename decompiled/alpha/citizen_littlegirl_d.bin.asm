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
	attack_on
	attack_stay
	attack_off
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
	flower
	needle
	class
	rat

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
	ClearSubContainer (1 args)
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
		EVENT_6 Op = 0x3c3 Vars = ()
		EVENT_7 Op = 0x428 Vars = (int)
		EVENT_41 Op = 0x463 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4da Vars = (int)
		EVENT_41 Op = 0x515 Vars = (object)

Events:
EVENT_16 Op = 0x65a Vars = (object, string)
EVENT_41 Op = 0x667 Vars = (object)
EVENT_22 Op = 0x66d Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x764

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x6c6

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x6c9

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x6cf

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
0x98: Call 0x71f

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
0xa4: Call 0x627

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call 0x6cf

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(int, int)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-5]
0xaf: Call 0x6c6

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
0xbd: Call 0x6c9

0xbe: Pop(1)
0xbf: Return(); Pop(2)

0xc0: PushEmpty(int, int)
0xc1: PushEmpty(int, object)
0xc2: Stack[-1] = Stack[-5]
0xc3: Call 0x698

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
0xd1: Call 0x6a2

0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: PushEmpty(int, int)
0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[-7]
0xd7: Stack[-1] = Stack[-6]
0xd8: Call 0x73c

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x6aa

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
0xeb: Call 0x6b4

0xec: Pop(1)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int)
0xef: PushEmpty(int, object)
0xf0: Stack[-1] = Stack[-5]
0xf1: Call 0x6bc

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
0xff: Call 0x6bf

0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty(int, int)
0x103: PushEmpty(int, string, object)
0x104: Stack[-2] = Stack[-6]
0x105: Stack[-1] = Stack[-7]
0x106: Call 0x6c1

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
0x115: Call 0x6c4

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
0x134: Call 0x6cf

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
0x14d: Call 0x667

0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, int, bool, int)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-7]
0x153: Call 0x5cc

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
0x162: Call 0x68d

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
0x170: Call 0x690

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
0x1cb: Call 0x6c6

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
0x1d9: Call 0x6c9

0x1da: Pop(1)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: PushEmpty(int, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call 0x698

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
0x1ed: Call 0x6a2

0x1ee: Pop(1)
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(int, int)
0x1f1: PushEmpty(bool, object, object)
0x1f2: Stack[-2] = Stack[-7]
0x1f3: Stack[-1] = Stack[-6]
0x1f4: Call 0x73c

0x1f5: Pop(2)
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call 0x6aa

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
0x207: Call 0x6b4

0x208: Pop(1)
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-5]
0x20d: Call 0x6bc

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
0x21b: Call 0x6bf

0x21c: Pop(1)
0x21d: Return(); Pop(2)

0x21e: PushEmpty(int, int)
0x21f: PushEmpty(int, string, object)
0x220: Stack[-2] = Stack[-6]
0x221: Stack[-1] = Stack[-7]
0x222: Call 0x6c1

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
0x231: Call 0x6c4

0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Call 0x280

0x236: Pop(0)
0x237: PushEmpty()
0x238: Call 0x6cf

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Call 0x627

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(14)

0x244: PushEmpty(int)
0x245: Call 0x67c

0x246: Stack[-8] = Stack[-1]
0x247: Pop(1)
0x248: Stack[-6] = (int) 0
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call 0x627

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
0x261: Call 0x675

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
0x288: Call 0x732

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
0x293: Call 0x737

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
0x2a1: Call 0x73a

0x2a2: Pop(1)
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty()
0x2a5: Call 0x2dc

0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call 0x6cf

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
0x2c5: Call 0x53a

0x2c6: Pop(1)
0x2c7: Push((float)90000.0)
0x2c8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: PushEmpty(float, object, float)
0x2cb: Stack[-2] = Stack[-6]
0x2cc: Stack[-1] = (float) 0.2
0x2cd: Call 0x564

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
0x2e7: Call 0x667

0x2e8: Pop(1)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(int, int)
0x2eb: PushEmpty(int, object)
0x2ec: Stack[-1] = Stack[-5]
0x2ed: Call 0x737

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
0x2fb: Call 0x73a

0x2fc: Pop(1)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty()
0x2ff: Call 0x38e

0x300: Pop(0)
0x301: PushEmpty()
0x302: Call 0x6cf

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
0x39b: Call 0x667

0x39c: Pop(1)
0x39d: Return(); Pop(0)

0x39e: PushEmpty()
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[-3]
0x3a1: Call 0x5cc

0x3a2: Stack[-4] = Stack[-2]
0x3a3: Pop(2)
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = "run"
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty()
0x3a8: @ Face(Stack[-1])
0x3a9: Pop(0)
0x3aa: Push("all")
0x3ab: Push("attack_on")
0x3ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: @ WaitForAnimEnd()
0x3af: Pop(0)
0x3b0: Push("all")
0x3b1: Push("attack_stay")
0x3b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b3: Pop(2)
0x3b4: @ WaitForAnimEnd()
0x3b5: Pop(0)
0x3b6: Push("all")
0x3b7: Push("attack_off")
0x3b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b9: Pop(2)
0x3ba: @ WaitForAnimEnd()
0x3bb: Pop(0)
0x3bc: @ StopAsync()
0x3bd: Pop(0)
0x3be: PushEmpty(object)
0x3bf: Stack[-1] = Stack[-2]
0x3c0: Call 0x3e8

0x3c1: Pop(1)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: Call 0x45c

0x3c5: Pop(0)
0x3c6: PushEmpty()
0x3c7: Call 0x6cf

0x3c8: Pop(0)
0x3c9: Return(); Pop(0)

0x3ca: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3cb: @ GetPosition(Stack[-6])
0x3cc: Pop(0)
0x3cd: @@ GetPosition(Stack[-5])
0x3ce: Pop(0)
0x3cf: @ GetDirection(Stack[-4])
0x3d0: Pop(0)
0x3d1: PushEmpty(cvector, cvector)
0x3d2: PushEmpty(cvector, cvector)
0x3d3: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3d4: Call 0x62c

0x3d5: Pop(1)
0x3d6: Push((float)0.75)
0x3d7: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d8: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d9: Call 0x62c

0x3da: Stack[-5] = Stack[-2]
0x3db: Pop(2)
0x3dc: Push((int) 32)
0x3dd: Push((float)7000.0)
0x3de: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: Push((int) 100)
0x3e1: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3e2: Push((int) 0)
0x3e3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: Stack[-1] = (int) 0
0x3e6: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3e7: Return(); Pop(12)

0x3e8: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3e9: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3ea: PushEmpty(cvector, float)
0x3eb: Stack[-1] = (float) 1.74533
0x3ec: Call 0x3ca

0x3ed: Stack[-7] = Stack[-2]
0x3ee: Pop(2)
0x3ef: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3f0: Push((float)10000.0)
0x3f1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f3: Push("Can't retreat, distance: ")
0x3f4: Pop(0); Push(Sqrt(Stack[-5]))
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: @ Trace(Stack[-1])
0x3f7: Pop(1)
0x3f8: Push((float)0.5)
0x3f9: @ Sleep(Stack[-1])
0x3fa: Pop(1)
0x3fb: Return(); Pop(10)

0x3fc: Push(CvectorIndex(Stack[-5], 0))
0x3fd: Push(CvectorIndex(Stack[-6], 2))
0x3fe: @ Rotate(Stack[-2], Stack[-1])
0x3ff: Pop(2)
0x400: PushEmpty(cvector)
0x401: Call 0x52e

0x402: Pop(0)
0x403: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x404: Push((int) 120)
0x405: Push((float)0.5)
0x406: @ SetTimer(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x409: Push((int) 1)
0x40a: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x40b: Pop(1)
0x40c: Push(Stack[-3])
0x40d: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x40e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: GOTO 0x427

0x411: GOTO 0x425

0x412: PushEmpty(cvector, float)
0x413: Stack[-1] = (float) 2.61799
0x414: Call 0x3ca

0x415: Stack[-4] = Stack[-2]
0x416: Pop(2)
0x417: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x418: Push((float)10000.0)
0x419: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41b: PushEmpty(cvector)
0x41c: Call 0x52e

0x41d: Pop(0)
0x41e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x41f: Push((int) 120)
0x420: Push((float)0.5)
0x421: @ SetTimer(Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: GOTO 0x425

0x424: GOTO 0x427

0x425: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x427: Return(); Pop(10)

0x428: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x429: Push((int) 120)
0x42a: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: Return(); Pop(8)

0x42d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x42f: @ Stop()
0x430: Pop(0)
0x431: Push((int) 1)
0x432: @ KillTimer(Stack[-1])
0x433: Pop(1)
0x434: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x435: GOTO 0x45b

0x436: @ GetDirection(Stack[-4])
0x437: Pop(0)
0x438: Push((float)7000.0)
0x439: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x43a: Pop(1)
0x43b: PushEmpty(cvector, float)
0x43c: Stack[-1] = (float) 1.74533
0x43d: Call 0x3ca

0x43e: Stack[-4] = Stack[-2]
0x43f: Pop(2)
0x440: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x441: PushEmpty(bool)
0x442: Stack[-1] = (bool) 0
0x443: Push((float)10000.0)
0x444: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x446: PushEmpty(bool)
0x447: Stack[-1] = (bool) 1
0x448: Pop(0); Push(Stack[-5] * Stack[-5]);
0x449: Push((float)2.25)
0x44a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x44b: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44d: PushEmpty(bool)
0x44e: Call 0x46c

0x44f: Pop(0)
0x450: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x451: Stack[-1] = (bool) 0
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Stack[-1] = (bool) 1
0x454: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x455: @ Stop()
0x456: Pop(0)
0x457: PushEmpty(cvector)
0x458: Call 0x52e

0x459: Pop(0)
0x45a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x45b: Return(); Pop(8)

0x45c: @ Stop()
0x45d: Pop(0)
0x45e: Push((int) 120)
0x45f: @ KillTimer(Stack[-1])
0x460: Pop(1)
0x461: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: PushEmpty()
0x465: Call 0x45c

0x466: Pop(0)
0x467: PushEmpty(object)
0x468: Stack[-1] = Stack[-2]
0x469: Call 0x667

0x46a: Pop(1)
0x46b: Return(); Pop(0)

0x46c: PushEmpty(cvector, cvector, cvector, cvector)
0x46d: @ GetDirection(Stack[-2])
0x46e: Pop(0)
0x46f: PushEmpty(cvector, object)
0x470: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x471: Call 0x533

0x472: Stack[-3] = Stack[-2]
0x473: Pop(2)
0x474: PushEmpty(float, cvector, cvector)
0x475: Stack[-2] = Stack[-5]
0x476: Stack[-1] = Stack[-4]
0x477: Call 0x641

0x478: Pop(2)
0x479: Push((float)-0.34202)
0x47a: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x47b: Return(); Pop(4)

0x47c: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x47d: @ GetPosition(Stack[-6])
0x47e: Pop(0)
0x47f: @@ GetPosition(Stack[-5])
0x480: Pop(0)
0x481: @ GetDirection(Stack[-4])
0x482: Pop(0)
0x483: PushEmpty(cvector, cvector)
0x484: PushEmpty(cvector, cvector)
0x485: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x486: Call 0x62c

0x487: Pop(1)
0x488: Push((float)0.75)
0x489: Pop(1); Push(Stack[-8] * Stack[-1]);
0x48a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x48b: Call 0x62c

0x48c: Stack[-5] = Stack[-2]
0x48d: Pop(2)
0x48e: Push((int) 32)
0x48f: Push((float)7000.0)
0x490: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x491: Pop(2)
0x492: Push((int) 100)
0x493: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x494: Push((int) 0)
0x495: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x497: Stack[-1] = (int) 0
0x498: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x499: Return(); Pop(12)

0x49a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x49b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x49c: PushEmpty(cvector, float)
0x49d: Stack[-1] = (float) 1.74533
0x49e: Call 0x47c

0x49f: Stack[-7] = Stack[-2]
0x4a0: Pop(2)
0x4a1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4a2: Push((float)10000.0)
0x4a3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a5: Push("Can't retreat, distance: ")
0x4a6: Pop(0); Push(Sqrt(Stack[-5]))
0x4a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a8: @ Trace(Stack[-1])
0x4a9: Pop(1)
0x4aa: Push((float)0.5)
0x4ab: @ Sleep(Stack[-1])
0x4ac: Pop(1)
0x4ad: Return(); Pop(10)

0x4ae: Push(CvectorIndex(Stack[-5], 0))
0x4af: Push(CvectorIndex(Stack[-6], 2))
0x4b0: @ Rotate(Stack[-2], Stack[-1])
0x4b1: Pop(2)
0x4b2: PushEmpty(cvector)
0x4b3: Call 0x52e

0x4b4: Pop(0)
0x4b5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4b6: Push((int) 120)
0x4b7: Push((float)0.5)
0x4b8: @ SetTimer(Stack[-2], Stack[-1])
0x4b9: Pop(2)
0x4ba: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4bb: Push((int) 1)
0x4bc: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4bd: Pop(1)
0x4be: Push(Stack[-3])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c2: GOTO 0x4d9

0x4c3: GOTO 0x4d7

0x4c4: PushEmpty(cvector, float)
0x4c5: Stack[-1] = (float) 2.61799
0x4c6: Call 0x47c

0x4c7: Stack[-4] = Stack[-2]
0x4c8: Pop(2)
0x4c9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4ca: Push((float)10000.0)
0x4cb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4cd: PushEmpty(cvector)
0x4ce: Call 0x52e

0x4cf: Pop(0)
0x4d0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4d1: Push((int) 120)
0x4d2: Push((float)0.5)
0x4d3: @ SetTimer(Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: GOTO 0x4d7

0x4d6: GOTO 0x4d9

0x4d7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4d9: Return(); Pop(10)

0x4da: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4db: Push((int) 120)
0x4dc: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4de: Return(); Pop(8)

0x4df: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e1: @ Stop()
0x4e2: Pop(0)
0x4e3: Push((int) 1)
0x4e4: @ KillTimer(Stack[-1])
0x4e5: Pop(1)
0x4e6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4e7: GOTO 0x50d

0x4e8: @ GetDirection(Stack[-4])
0x4e9: Pop(0)
0x4ea: Push((float)7000.0)
0x4eb: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4ec: Pop(1)
0x4ed: PushEmpty(cvector, float)
0x4ee: Stack[-1] = (float) 1.74533
0x4ef: Call 0x47c

0x4f0: Stack[-4] = Stack[-2]
0x4f1: Pop(2)
0x4f2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4f3: PushEmpty(bool)
0x4f4: Stack[-1] = (bool) 0
0x4f5: Push((float)10000.0)
0x4f6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4f8: PushEmpty(bool)
0x4f9: Stack[-1] = (bool) 1
0x4fa: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4fb: Push((float)2.25)
0x4fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4fd: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4ff: PushEmpty(bool)
0x500: Call 0x51e

0x501: Pop(0)
0x502: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x503: Stack[-1] = (bool) 0
0x504: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x505: Stack[-1] = (bool) 1
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: @ Stop()
0x508: Pop(0)
0x509: PushEmpty(cvector)
0x50a: Call 0x52e

0x50b: Pop(0)
0x50c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x50d: Return(); Pop(8)

0x50e: @ Stop()
0x50f: Pop(0)
0x510: Push((int) 120)
0x511: @ KillTimer(Stack[-1])
0x512: Pop(1)
0x513: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x514: Return(); Pop(0)

0x515: PushEmpty()
0x516: PushEmpty()
0x517: Call 0x50e

0x518: Pop(0)
0x519: PushEmpty(object)
0x51a: Stack[-1] = Stack[-2]
0x51b: Call 0x667

0x51c: Pop(1)
0x51d: Return(); Pop(0)

0x51e: PushEmpty(cvector, cvector, cvector, cvector)
0x51f: @ GetDirection(Stack[-2])
0x520: Pop(0)
0x521: PushEmpty(cvector, object)
0x522: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x523: Call 0x533

0x524: Stack[-3] = Stack[-2]
0x525: Pop(2)
0x526: PushEmpty(float, cvector, cvector)
0x527: Stack[-2] = Stack[-5]
0x528: Stack[-1] = Stack[-4]
0x529: Call 0x641

0x52a: Pop(2)
0x52b: Push((float)-0.34202)
0x52c: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x52d: Return(); Pop(4)

0x52e: PushEmpty(cvector, cvector)
0x52f: @ GetPosition(Stack[-1])
0x530: Pop(0)
0x531: Stack[-3] = Stack[-1]
0x532: Return(); Pop(2)

0x533: PushEmpty(cvector, cvector, cvector, cvector)
0x534: @ GetPosition(Stack[-2])
0x535: Pop(0)
0x536: @@ GetPosition(Stack[-1])
0x537: Pop(0)
0x538: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x539: Return(); Pop(4)

0x53a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x53b: @ GetPosition(Stack[-3])
0x53c: Pop(0)
0x53d: @@ GetPosition(Stack[-2])
0x53e: Pop(0)
0x53f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x540: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x541: Return(); Pop(6)

0x542: PushEmpty(bool, bool)
0x543: Push("HasProperty")
0x544: Push((int) 2)
0x545: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x546: Pop(1); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-5] = (bool) 0
0x549: Return(); Pop(2)

0x54a: @@ HasProperty(Stack[-3], Stack[-1])
0x54b: Pop(0)
0x54c: Stack[-5] = Stack[-1]
0x54d: Return(); Pop(2)

0x54e: PushEmpty(float, float)
0x54f: PushEmpty(bool, object, string)
0x550: Stack[-2] = Stack[-10]
0x551: Stack[-1] = Stack[-9]
0x552: Call 0x542

0x553: Pop(2)
0x554: Pop(1); Push((bool) Stack[-1] == 0)
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-8] = (bool) 0
0x557: Return(); Pop(2)

0x558: @@ GetProperty(Stack[-6], Stack[-1])
0x559: Pop(0)
0x55a: PushEmpty(float, float, float, float)
0x55b: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x55c: Stack[-2] = Stack[-8]
0x55d: Stack[-1] = Stack[-7]
0x55e: Call 0x636

0x55f: Pop(3)
0x560: @@ SetProperty(Stack[-7], Stack[-1])
0x561: Pop(1)
0x562: Stack[-8] = (bool) 1
0x563: Return(); Pop(2)

0x564: PushEmpty(int, float, float, int, float, float)
0x565: PushEmpty(bool, object, string)
0x566: Stack[-2] = Stack[-11]
0x567: Stack[-1] = "disease"
0x568: Call 0x542

0x569: Pop(2)
0x56a: Pop(1); Push((bool) Stack[-1] == 0)
0x56b: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56c: Stack[-9] = (int) 0
0x56d: Return(); Pop(6)

0x56e: PushEmpty(bool, object, string)
0x56f: Stack[-2] = Stack[-11]
0x570: Stack[-1] = "armor_disease"
0x571: Call 0x542

0x572: Pop(2)
0x573: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x574: Push("armor_disease")
0x575: @@ GetProperty(Stack[-1], Stack[-4])
0x576: Pop(1)
0x577: Push((int) 100)
0x578: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57a: Push((int) 1)
0x57b: Push((float)100.0)
0x57c: Pop(1); Push(Stack[-5] / Stack[-1]);
0x57d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x57e: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x57f: GOTO 0x582

0x580: Stack[-9] = (int) 0
0x581: Return(); Pop(6)

0x582: PushEmpty(bool, object, string)
0x583: Stack[-2] = Stack[-11]
0x584: Stack[-1] = "immunity"
0x585: Call 0x542

0x586: Pop(2)
0x587: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x588: Push("immunity")
0x589: @@ GetProperty(Stack[-1], Stack[-2])
0x58a: Pop(1)
0x58b: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x58c: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58d: Push("immunity")
0x58e: Push((int) 0)
0x58f: @@ SetProperty(Stack[-2], Stack[-1])
0x590: Pop(2)
0x591: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0x592: GOTO 0x599

0x593: Push("immunity")
0x594: Pop(0); Push(Stack[-2] - Stack[-8]);
0x595: @@ SetProperty(Stack[-2], Stack[-1])
0x596: Pop(2)
0x597: Stack[-9] = Stack[-7]
0x598: Return(); Pop(6)

0x599: PushEmpty(bool, object, string, float, float, float)
0x59a: Stack[-5] = Stack[-14]
0x59b: Stack[-4] = "disease"
0x59c: Stack[-3] = Stack[-8]
0x59d: Stack[-2] = (int) 0
0x59e: Stack[-1] = (int) 1
0x59f: Call 0x54e

0x5a0: Pop(6)
0x5a1: Stack[-9] = Stack[-7]
0x5a2: Return(); Pop(6)

0x5a3: PushEmpty(bool, bool)
0x5a4: @@ IsDead(Stack[-1])
0x5a5: Pop(0)
0x5a6: Stack[-4] = Stack[-1]
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty(object, object, object, object)
0x5a9: Pop(0); Push((bool) Stack[-5] == 0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-6] = (bool) 0
0x5ac: Return(); Pop(4)

0x5ad: PushEmpty(bool)
0x5ae: Stack[-1] = (bool) 0
0x5af: Push("IsDead")
0x5b0: Push((int) 1)
0x5b1: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b3: PushEmpty(bool, object)
0x5b4: Stack[-1] = Stack[-8]
0x5b5: Call 0x5a3

0x5b6: Pop(1)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b8: Stack[-1] = (bool) 1
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: Stack[-6] = (bool) 0
0x5bb: Return(); Pop(4)

0x5bc: @ GetScene(Stack[-2])
0x5bd: Pop(0)
0x5be: Pop(0); Push((bool) Stack[-2] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[-6] = (bool) 0
0x5c1: Return(); Pop(4)

0x5c2: @@ GetScene(Stack[-1])
0x5c3: Pop(0)
0x5c4: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: Stack[-6] = (bool) 0
0x5c7: Return(); Pop(4)

0x5c8: Stack[-6] = (bool) 1
0x5c9: Return(); Pop(4)

0x5ca: Stack[-1] = 0
0x5cb: Stack[-2] = 0
0x5cc: PushEmpty(int, int)
0x5cd: PushEmpty(bool, object)
0x5ce: Stack[-1] = Stack[-5]
0x5cf: Call 0x5a8

0x5d0: Pop(1)
0x5d1: Pop(1); Push((bool) Stack[-1] == 0)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-4] = (bool) 0
0x5d4: Return(); Pop(2)

0x5d5: PushEmpty(bool, object, string)
0x5d6: Stack[-2] = Stack[-6]
0x5d7: Stack[-1] = "noaccess"
0x5d8: Call 0x542

0x5d9: Pop(2)
0x5da: Pop(1); Push((bool) Stack[-1] == 0)
0x5db: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dc: Stack[-4] = (bool) 1
0x5dd: Return(); Pop(2)

0x5de: Push("noaccess")
0x5df: @@ GetProperty(Stack[-1], Stack[-2])
0x5e0: Pop(1)
0x5e1: Push((int) 0)
0x5e2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5e3: Return(); Pop(2)

0x5e4: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x5e5: PushEmpty(bool)
0x5e6: Stack[-1] = (bool) 0
0x5e7: Push((int) 4)
0x5e8: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ea: Push((int) 5)
0x5eb: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ed: Stack[-1] = (bool) 1
0x5ee: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ef: @ GetScene(Stack[-10])
0x5f0: Pop(0)
0x5f1: @ GetPosition(Stack[-8])
0x5f2: Pop(0)
0x5f3: @ GetEyesHeight(Stack[-7])
0x5f4: Pop(0)
0x5f5: Push(CvectorIndex(Stack[-8], 1))
0x5f6: Push((int) 2)
0x5f7: Pop(1); Push(Stack[-9] / Stack[-1]);
0x5f8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5f9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5fa: Push("scripted")
0x5fb: Push(CVector(0.0, 0.0, 1.0))
0x5fc: Push("blood.xml")
0x5fd: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: Stack[-9] = 0
0x600: Stack[-10] = 0
0x601: Pop(0); Push((bool) Stack[-23] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: Return(); Pop(20)

0x604: @ GetSecondaryAnimationType(Stack[-6])
0x605: Pop(0)
0x606: Push((int) 0)
0x607: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x609: Return(); Pop(20)

0x60a: @@ GetPosition(Stack[-5])
0x60b: Pop(0)
0x60c: @ GetPosition(Stack[-4])
0x60d: Pop(0)
0x60e: @ GetDirection(Stack[-3])
0x60f: Pop(0)
0x610: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x611: Push(CvectorIndex(Stack[-2], 0))
0x612: Push(CvectorIndex(Stack[-4], 0))
0x613: Pop(2); Push(Stack[-2] * Stack[-1]);
0x614: Push(CvectorIndex(Stack[-3], 2))
0x615: Push(CvectorIndex(Stack[-5], 2))
0x616: Pop(2); Push(Stack[-2] * Stack[-1]);
0x617: Pop(2); Push(Stack[-2] + Stack[-1]);
0x618: Push((int) 0)
0x619: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-1] = "fhit"
0x61c: GOTO 0x61e

0x61d: Stack[-1] = "bhit"
0x61e: Push("hit_react")
0x61f: Push("1")
0x620: Pop(1); Push(Stack[-3] + Stack[-1]);
0x621: Push("2")
0x622: Pop(1); Push(Stack[-4] + Stack[-1]);
0x623: Push((int) -10)
0x624: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x625: Pop(4)
0x626: Return(); Pop(20)

0x627: PushEmpty(bool, bool)
0x628: @ IsLoaded(Stack[-1])
0x629: Pop(0)
0x62a: Stack[-3] = Stack[-1]
0x62b: Return(); Pop(2)

0x62c: PushEmpty(float, float)
0x62d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x62e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x62f: Push((float)0.0)
0x630: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x633: Return(); Pop(2)

0x634: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x635: Return(); Pop(2)

0x636: PushEmpty()
0x637: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-4] = Stack[-2]
0x63a: Return(); Pop(0)

0x63b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-4] = Stack[-1]
0x63e: Return(); Pop(0)

0x63f: Stack[-4] = Stack[-3]
0x640: Return(); Pop(0)

0x641: PushEmpty()
0x642: Pop(0); Push(Stack[-2] | Stack[-1]);
0x643: Pop(0); Push(Stack[-3] | Stack[-3]);
0x644: Pop(0); Push(Stack[-3] | Stack[-3]);
0x645: Pop(2); Push(Stack[-2] * Stack[-1]);
0x646: Pop(1); Push(Sqrt(Stack[-1]))
0x647: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x648: Return(); Pop(0)

0x649: PushEmpty(float, float)
0x64a: @ GetGameTime(Stack[-1])
0x64b: Pop(0)
0x64c: Push((int) 1)
0x64d: PushEmpty(int)
0x64e: Push((int) 24)
0x64f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x650: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x651: Return(); Pop(2)

0x652: PushEmpty()
0x653: PushEmpty(object)
0x654: Stack[-1] = Stack[-2]
0x655: Push(-1, 0); TaskCall(0)
0x656: Call 0x0

0x657: Pop(-1, 0); TaskReturn
0x658: Pop(1)
0x659: Return(); Pop(0)

0x65a: PushEmpty(float, float)
0x65b: Push("health")
0x65c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x65e: Push("health")
0x65f: @ GetProperty(Stack[-1], Stack[-2])
0x660: Pop(1)
0x661: Push((int) 0)
0x662: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x664: @ SignalDeath(Stack[-4])
0x665: Pop(0)
0x666: Return(); Pop(2)

0x667: PushEmpty()
0x668: PushEmpty(object)
0x669: Stack[-1] = Stack[-2]
0x66a: Call 0x652

0x66b: Pop(1)
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: PushEmpty(object, int, float)
0x66f: Stack[-3] = Stack[-7]
0x670: Stack[-2] = Stack[-6]
0x671: Stack[-1] = Stack[-5]
0x672: Call 0x5e4

0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: PushEmpty(string, string)
0x676: Stack[-1] = "idle"
0x677: Push(Stack[-3])
0x678: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x679: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x67a: Stack[-4] = Stack[-1]
0x67b: Return(); Pop(2)

0x67c: PushEmpty(int, bool, int, bool)
0x67d: Stack[-2] = (int) 0
0x67e: Push("all")
0x67f: PushEmpty(string, int)
0x680: Stack[-1] = Stack[-5]
0x681: Call 0x675

0x682: Pop(1)
0x683: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(2)
0x685: Pop(0); Push((bool) Stack[-1] == 0)
0x686: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x687: GOTO 0x68b

0x688: Push((int) 1)
0x689: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x68a: GOTO 0x67e

0x68b: Stack[-5] = Stack[-2]
0x68c: Return(); Pop(4)

0x68d: PushEmpty()
0x68e: Stack[-2] = (int) 2
0x68f: Return(); Pop(0)

0x690: PushEmpty()
0x691: PushEmpty(object)
0x692: Stack[-1] = Stack[-2]
0x693: Push(-1, 0); TaskCall(3)
0x694: Call 0x285

0x695: Pop(-1, 0); TaskReturn
0x696: Pop(1)
0x697: Return(); Pop(0)

0x698: PushEmpty()
0x699: PushEmpty(bool, object)
0x69a: Stack[-1] = Stack[-3]
0x69b: Call 0x5cc

0x69c: Pop(1)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-2] = (int) 2
0x69f: GOTO 0x6a1

0x6a0: Stack[-2] = (int) 0
0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: PushEmpty(object)
0x6a4: Stack[-1] = Stack[-2]
0x6a5: Push(-1, 3); TaskCall(5)
0x6a6: Call 0x3a7

0x6a7: Pop(-1, 3); TaskReturn
0x6a8: Pop(1)
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: PushEmpty(bool, object)
0x6ac: Stack[-1] = Stack[-3]
0x6ad: Call 0x5cc

0x6ae: Pop(1)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-2] = (int) 2
0x6b1: GOTO 0x6b3

0x6b2: Stack[-2] = (int) 0
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty()
0x6b5: PushEmpty(object)
0x6b6: Stack[-1] = Stack[-2]
0x6b7: Push(-1, 3); TaskCall(6)
0x6b8: Call 0x49a

0x6b9: Pop(-1, 3); TaskReturn
0x6ba: Pop(1)
0x6bb: Return(); Pop(0)

0x6bc: PushEmpty()
0x6bd: Stack[-2] = (int) 0
0x6be: Return(); Pop(0)

0x6bf: PushEmpty()
0x6c0: Return(); Pop(0)

0x6c1: PushEmpty()
0x6c2: Stack[-3] = (int) 0
0x6c3: Return(); Pop(0)

0x6c4: PushEmpty()
0x6c5: Return(); Pop(0)

0x6c6: PushEmpty()
0x6c7: Stack[-2] = (int) 2
0x6c8: Return(); Pop(0)

0x6c9: PushEmpty()
0x6ca: PushEmpty(object)
0x6cb: Stack[-1] = Stack[-2]
0x6cc: Call 0x727

0x6cd: Pop(1)
0x6ce: Return(); Pop(0)

0x6cf: Return(); Pop(0)

0x6d0: PushEmpty(int, int, int, bool, int, int, int, bool)
0x6d1: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d3: Push("GenerateMoney: iMin > iMax")
0x6d4: @ Trace(Stack[-1])
0x6d5: Pop(1)
0x6d6: Return(); Pop(8)

0x6d7: Stack[-4] = (int) 0
0x6d8: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6da: Pop(0); Push(Stack[-9] - Stack[-10]);
0x6db: @ irand(Stack[-4], Stack[-1])
0x6dc: Pop(1)
0x6dd: GOTO 0x6e2

0x6de: Push((int) 0)
0x6df: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: Return(); Pop(8)

0x6e2: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x6e3: Push((int) 0)
0x6e4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6e6: Return(); Pop(8)

0x6e7: Push("Money")
0x6e8: @ GetInvItemByName(Stack[-3], Stack[-1])
0x6e9: Pop(1)
0x6ea: Push((int) 0)
0x6eb: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x6ec: Pop(1)
0x6ed: Return(); Pop(8)

0x6ee: PushEmpty(bool, int, bool, int)
0x6ef: Push((int) 0)
0x6f0: @ ClearSubContainer(Stack[-1])
0x6f1: Pop(1)
0x6f2: PushEmpty(int, int)
0x6f3: Stack[-2] = (int) 0
0x6f4: Push((int) 3)
0x6f5: PushEmpty(int)
0x6f6: Call 0x649

0x6f7: Pop(0)
0x6f8: Push((int) 5)
0x6f9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6fa: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6fb: Call 0x6d0

0x6fc: Pop(2)
0x6fd: Push((int) 4)
0x6fe: @ irand(Stack[-2], Stack[-1])
0x6ff: Pop(1)
0x700: Push((int) 0)
0x701: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x703: PushEmpty(int, string)
0x704: Stack[-1] = "flower"
0x705: Call 0x71a

0x706: Pop(1)
0x707: Push((int) 0)
0x708: Push((int) 1)
0x709: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x70a: Pop(3)
0x70b: Push((int) 5)
0x70c: @ irand(Stack[-2], Stack[-1])
0x70d: Pop(1)
0x70e: Push((int) 0)
0x70f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x711: PushEmpty(int, string)
0x712: Stack[-1] = "needle"
0x713: Call 0x71a

0x714: Pop(1)
0x715: Push((int) 0)
0x716: Push((int) 1)
0x717: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x718: Pop(3)
0x719: Return(); Pop(4)

0x71a: PushEmpty(int, int)
0x71b: @ GetInvItemByName(Stack[-1], Stack[-3])
0x71c: Pop(0)
0x71d: Stack[-4] = Stack[-1]
0x71e: Return(); Pop(2)

0x71f: Push(GlobalVars[0])
0x720: Stack[-1] = (bool) 0
0x721: GlobalVars[0] = Stack[-1]; Pop(1)
0x722: PushEmpty(bool)
0x723: Stack[-1] = (bool) 0
0x724: Call 0x6ee

0x725: Pop(1)
0x726: Return(); Pop(0)

0x727: PushEmpty(bool, bool)
0x728: Push(GlobalVars[0])
0x729: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72a: @ IsOverrideActive(Stack[-1])
0x72b: Pop(0)
0x72c: Pop(0); Push((bool) Stack[-1] == 0)
0x72d: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72e: @ WorkWithCorpse(Stack[-3])
0x72f: Pop(0)
0x730: Return(); Pop(2)

0x731: Return(); Pop(2)

0x732: PushEmpty(bool, bool)
0x733: @ IsPlayerActor(Stack[-3], Stack[-1])
0x734: Pop(0)
0x735: Stack[-4] = Stack[-1]
0x736: Return(); Pop(2)

0x737: PushEmpty()
0x738: Stack[-2] = (int) 0
0x739: Return(); Pop(0)

0x73a: PushEmpty()
0x73b: Return(); Pop(0)

0x73c: PushEmpty(string, bool, string, bool)
0x73d: PushEmpty(bool, object, string)
0x73e: Stack[-2] = Stack[-8]
0x73f: Stack[-1] = "class"
0x740: Call 0x542

0x741: Pop(2)
0x742: Pop(1); Push((bool) Stack[-1] == 0)
0x743: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x744: Stack[-7] = (bool) 0
0x745: Return(); Pop(4)

0x746: Push("class")
0x747: @@ GetProperty(Stack[-1], Stack[-3])
0x748: Pop(1)
0x749: Push("rat")
0x74a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-7] = (bool) 0
0x74d: Return(); Pop(4)

0x74e: @ CanSee(Stack[-1], Stack[-6])
0x74f: Pop(0)
0x750: PushEmpty(bool)
0x751: Stack[-1] = (bool) 1
0x752: Push(Stack[-2])
0x753: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x754: PushEmpty(float, object)
0x755: Stack[-1] = Stack[-9]
0x756: Call 0x53a

0x757: Pop(1)
0x758: Push((float)250000.0)
0x759: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Stack[-1] = (bool) 0
0x75c: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x75d: Push((float)-0.3)
0x75e: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x75f: Pop(1)
0x760: Stack[-7] = (bool) 1
0x761: Return(); Pop(4)

0x762: Stack[-7] = (bool) 0
0x763: Return(); Pop(4)

0x764: PushEmpty()
0x765: Push(GlobalVars[0])
0x766: Stack[-1] = (bool) 1
0x767: GlobalVars[0] = Stack[-1]; Pop(1)
0x768: Push((int) 50)
0x769: Push((int) 40)
0x76a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x76b: Pop(2)
0x76c: Return(); Pop(0)

