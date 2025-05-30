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
	fhit
	bhit
	hit_react
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	branch
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	SetProperty
	GetItemID
	liver
	kidney
	heart
	blood
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
	health
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	player
	class
	rat
	rat_big
	dog
	Received steal
	idle
	ToDie

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
	irand (2 args)
	ResetAAS (0 args)
	Sleep (1 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetGameTime (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	CanSee (2 args)
	IsOverrideActive (1 args)
	HasAnimation (3 args)
	StopAnimation (0 args)
	SetProperty (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x9c
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x96 Vars = (object, int, float, float)
		EVENT_16 Op = 0x98 Vars = (object, string)
		EVENT_41 Op = 0x9a Vars = (object)
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xc7 Vars = (object)
		EVENT_17 Op = 0xdb Vars = (object)
		EVENT_30 Op = 0xf3 Vars = (object, object, bool)
		EVENT_40 Op = 0x10f Vars = (object)
		EVENT_42 Op = 0x123 Vars = (object, string)
		EVENT_26 Op = 0x148 Vars = (string)
		EVENT_1 Op = 0x156 Vars = (object)
		EVENT_3 Op = 0x16c Vars = (object)
		EVENT_7 Op = 0x175 Vars = (int)
		EVENT_6 Op = 0x181 Vars = ()
		EVENT_41 Op = 0x195 Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_0 Op = 0x1f7 Vars = (object)
		EVENT_17 Op = 0x20b Vars = (object)
		EVENT_30 Op = 0x223 Vars = (object, object, bool)
		EVENT_40 Op = 0x23f Vars = (object)
		EVENT_42 Op = 0x253 Vars = (object, string)
		EVENT_26 Op = 0x278 Vars = (string)
		EVENT_41 Op = 0x291 Vars = (object)
		EVENT_7 Op = 0x29a Vars = (int)
		EVENT_6 Op = 0x2bd Vars = ()
		EVENT_1 Op = 0x2c4 Vars = (object)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x2ee Vars = ()
		EVENT_7 Op = 0x35c Vars = (int)
		EVENT_41 Op = 0x397 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x417 Vars = (int)
		EVENT_41 Op = 0x452 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x46b Vars = ()
		EVENT_7 Op = 0x4d9 Vars = (int)
		EVENT_41 Op = 0x514 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x52d Vars = ()
		EVENT_7 Op = 0x59b Vars = (int)
		EVENT_41 Op = 0x5d6 Vars = (object)

Events:
EVENT_16 Op = 0x873 Vars = (object, string)
EVENT_41 Op = 0x880 Vars = (object)
EVENT_22 Op = 0x886 Vars = (object, int, float, float)
EVENT_43 Op = 0x88e Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xa36

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0x98f

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0x992

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0x998

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x22: Pop(0); Push((bool) Stack[-21] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(string)
0x25: Stack[-1] = "fdie"
0x26: Call2 0x7c

0x27: Pop(1)
0x28: GOTO 0x7b

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
0x65: PushEmpty(string)
0x66: Stack[-1] = Stack[-7]
0x67: Call2 0x6ee

0x68: Pop(1)
0x69: Push("all")
0x6a: @ PlayAnimation(Stack[-1], Stack[-7])
0x6b: Pop(1)
0x6c: @ WaitForAnimEnd()
0x6d: Pop(0)
0x6e: Push(Stack[-3])
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: @ StopAsync()
0x71: Pop(0)
0x72: Push("head")
0x73: @ UnlookAsync(Stack[-1])
0x74: Pop(1)
0x75: Push("all")
0x76: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x77: Pop(1)
0x78: @ RemoveEnvelope()
0x79: Pop(0)
0x7a: Stack[-5] = 0
0x7b: Return(); Pop(20)

0x7c: PushEmpty()
0x7d: @ RemoveRTEnvelope()
0x7e: Pop(0)
0x7f: @ SetDeathState()
0x80: Pop(0)
0x81: @ Stop()
0x82: Pop(0)
0x83: @ StopAsync()
0x84: Pop(0)
0x85: @ StopSecondaryAnimation()
0x86: Pop(0)
0x87: PushEmpty(string)
0x88: Stack[-1] = Stack[-2]
0x89: Call2 0x6ee

0x8a: Pop(1)
0x8b: Push("all")
0x8c: @ PlayAnimation(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: Push("all")
0x91: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x92: Pop(1)
0x93: @ RemoveEnvelope()
0x94: Pop(0)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Return(); Pop(0)

0x9c: PushEmpty(int, int, int, int)
0x9d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x9e: Push((bool) 1)
0x9f: @ SensePlayerOnly(Stack[-1])
0xa0: Pop(1)
0xa1: PushEmpty()
0xa2: Call2 0x9f1

0xa3: Pop(0)
0xa4: PushEmpty()
0xa5: Call2 0xbe

0xa6: Pop(0)
0xa7: Push((int) 2)
0xa8: @ irand(Stack[-3], Stack[-1])
0xa9: Pop(1)
0xaa: Push((int) 0)
0xab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xad: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xae: PushEmpty()
0xaf: Call2 0xa06

0xb0: Pop(0)
0xb1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xb2: @ ResetAAS()
0xb3: Pop(0)
0xb4: GOTO 0xbc

0xb5: Push((int) 4)
0xb6: @ irand(Stack[-2], Stack[-1])
0xb7: Pop(1)
0xb8: Push((int) 1)
0xb9: Pop(1); Push(Stack[-2] + Stack[-1]);
0xba: @ Sleep(Stack[-1])
0xbb: Pop(1)
0xbc: GOTO 0xa7

0xbd: Return(); Pop(4)

0xbe: PushEmpty(bool)
0xbf: Call2 0x6de

0xc0: Pop(0)
0xc1: Pop(1); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x998

0xc5: Pop(0)
0xc6: Return(); Pop(0)

0xc7: PushEmpty(int, int)
0xc8: PushEmpty(int, object)
0xc9: Stack[-1] = Stack[-5]
0xca: Call2 0x98f

0xcb: Stack[-3] = Stack[-2]
0xcc: Pop(2)
0xcd: Push((int) 0)
0xce: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: Push((int) 1)
0xd1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: PushEmpty()
0xd4: Call2 0x188

0xd5: Pop(0)
0xd6: PushEmpty(object)
0xd7: Stack[-1] = Stack[-4]
0xd8: Call2 0x992

0xd9: Pop(1)
0xda: Return(); Pop(2)

0xdb: PushEmpty(int, int)
0xdc: PushEmpty(object)
0xdd: Stack[-1] = Stack[-4]
0xde: Call2 0x8ee

0xdf: Pop(1)
0xe0: PushEmpty(int, object)
0xe1: Stack[-1] = Stack[-5]
0xe2: Call2 0x929

0xe3: Stack[-3] = Stack[-2]
0xe4: Pop(2)
0xe5: Push((int) 0)
0xe6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: Push((int) 1)
0xe9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xeb: PushEmpty()
0xec: Call2 0x188

0xed: Pop(0)
0xee: PushEmpty(object)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x933

0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: PushEmpty(int, int)
0xf4: PushEmpty(bool, object, object, bool)
0xf5: Stack[-3] = Stack[-9]
0xf6: Stack[-2] = Stack[-8]
0xf7: Stack[-1] = Stack[-7]
0xf8: Call2 0xa26

0xf9: Pop(3)
0xfa: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfb: PushEmpty(int, object, bool)
0xfc: Stack[-2] = Stack[-8]
0xfd: Stack[-1] = Stack[-6]
0xfe: Call2 0x93b

0xff: Stack[-4] = Stack[-3]
0x100: Pop(3)
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x104: Push((int) 1)
0x105: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x188

0x109: Pop(0)
0x10a: PushEmpty(object)
0x10b: Stack[-1] = Stack[-6]
0x10c: Call2 0x945

0x10d: Pop(1)
0x10e: Return(); Pop(2)

0x10f: PushEmpty(int, int)
0x110: PushEmpty(int, object)
0x111: Stack[-1] = Stack[-5]
0x112: Call2 0x999

0x113: Stack[-3] = Stack[-2]
0x114: Pop(2)
0x115: Push((int) 0)
0x116: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x118: Push((int) 1)
0x119: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11b: PushEmpty()
0x11c: Call2 0x188

0x11d: Pop(0)
0x11e: PushEmpty(object)
0x11f: Stack[-1] = Stack[-4]
0x120: Call2 0x9a9

0x121: Pop(1)
0x122: Return(); Pop(2)

0x123: PushEmpty(int, int)
0x124: PushEmpty(bool, object, string)
0x125: Stack[-2] = Stack[-7]
0x126: Stack[-1] = Stack[-6]
0x127: Call2 0x898

0x128: Pop(2)
0x129: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12a: PushEmpty()
0x12b: Call2 0x188

0x12c: Pop(0)
0x12d: PushEmpty(object, string)
0x12e: Stack[-2] = Stack[-6]
0x12f: Stack[-1] = Stack[-5]
0x130: Call2 0x8b8

0x131: Pop(2)
0x132: GOTO 0x147

0x133: PushEmpty(int, string, object)
0x134: Stack[-2] = Stack[-6]
0x135: Stack[-1] = Stack[-7]
0x136: Call2 0x9af

0x137: Stack[-4] = Stack[-3]
0x138: Pop(3)
0x139: Push((int) 0)
0x13a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13c: Push((int) 1)
0x13d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: PushEmpty()
0x140: Call2 0x188

0x141: Pop(0)
0x142: PushEmpty(string, object)
0x143: Stack[-2] = Stack[-5]
0x144: Stack[-1] = Stack[-6]
0x145: Call2 0x9b2

0x146: Pop(2)
0x147: Return(); Pop(2)

0x148: PushEmpty()
0x149: PushEmpty(bool, string)
0x14a: Stack[-1] = Stack[-3]
0x14b: Call2 0x8fb

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14e: PushEmpty()
0x14f: Call2 0x188

0x150: Pop(0)
0x151: PushEmpty(string)
0x152: Stack[-1] = Stack[-2]
0x153: Call2 0x90b

0x154: Pop(1)
0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: Push( Stack[0 + Tasks[-1].StackPointer] )
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Return(); Pop(0)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Call2 0x8d1

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15f: PushEmpty()
0x160: Call2 0x188

0x161: Pop(0)
0x162: PushEmpty(object)
0x163: Stack[-1] = Stack[-2]
0x164: Call2 0x8e8

0x165: Pop(1)
0x166: GOTO 0x16b

0x167: PushEmpty(object)
0x168: Stack[-1] = Stack[-2]
0x169: Call2 0x19e

0x16a: Pop(1)
0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Return(); Pop(0)

0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[-2]
0x172: Call2 0x19e

0x173: Pop(1)
0x174: Return(); Pop(0)

0x175: PushEmpty()
0x176: Push((int) 110)
0x177: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Return(); Pop(0)

0x17a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x17b: Push((int) 110)
0x17c: @ KillTimer(Stack[-1])
0x17d: Pop(1)
0x17e: @ ResetAAS()
0x17f: Pop(0)
0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: Call2 0x188

0x183: Pop(0)
0x184: PushEmpty()
0x185: Call2 0x998

0x186: Pop(0)
0x187: Return(); Pop(0)

0x188: Push((int) 110)
0x189: @ KillTimer(Stack[-1])
0x18a: Pop(1)
0x18b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x18c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x18d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0xa21

0x190: Pop(0)
0x191: GOTO 0x194

0x192: @ Stop()
0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: PushEmpty()
0x197: Call2 0x188

0x198: Pop(0)
0x199: PushEmpty(object)
0x19a: Stack[-1] = Stack[-2]
0x19b: Call2 0x880

0x19c: Pop(1)
0x19d: Return(); Pop(0)

0x19e: PushEmpty(bool, int, bool, int)
0x19f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(4)

0x1a2: @ IsPlayerActor(Stack[-5], Stack[-2])
0x1a3: Pop(0)
0x1a4: Pop(0); Push((bool) Stack[-2] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: Return(); Pop(4)

0x1a7: PushEmpty(int, object)
0x1a8: Stack[-1] = Stack[-7]
0x1a9: Call2 0x918

0x1aa: Stack[-3] = Stack[-2]
0x1ab: Pop(2)
0x1ac: Push((int) 0)
0x1ad: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: Push((int) 1)
0x1b0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b2: PushEmpty()
0x1b3: Call2 0x188

0x1b4: Pop(0)
0x1b5: PushEmpty(object)
0x1b6: Stack[-1] = Stack[-6]
0x1b7: Call2 0x921

0x1b8: Pop(1)
0x1b9: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1ba: Push((int) 110)
0x1bb: Push((float)5.0)
0x1bc: @ SetTimer(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Return(); Pop(4)

0x1bf: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x1c1: PushEmpty()
0x1c2: Call2 0x1f2

0x1c3: Pop(0)
0x1c4: @ GetDirection(Stack[-3])
0x1c5: Pop(0)
0x1c6: PushEmpty(cvector, object)
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x5f4

0x1c9: Stack[-4] = Stack[-2]
0x1ca: Pop(2)
0x1cb: PushEmpty(float, cvector, cvector)
0x1cc: Stack[-2] = Stack[-6]
0x1cd: Stack[-1] = Stack[-5]
0x1ce: Call2 0x742

0x1cf: Pop(2)
0x1d0: Push((int) 0)
0x1d1: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d3: PushEmpty(object)
0x1d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d5: Call2 0x6d3

0x1d6: Pop(1)
0x1d7: Stack[-1] = (bool) 1
0x1d8: GOTO 0x1dc

0x1d9: Push((float)1.5)
0x1da: @ Sleep(Stack[-1], Stack[-2])
0x1db: Pop(1)
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1de: PushEmpty(object)
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x6d3

0x1e1: Pop(1)
0x1e2: Push((int) 111)
0x1e3: Push((float)0.5)
0x1e4: @ SetTimer(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Push((float)5.0)
0x1e7: @ Sleep(Stack[-1])
0x1e8: Pop(1)
0x1e9: Push((int) 111)
0x1ea: @ KillTimer(Stack[-1])
0x1eb: Pop(1)
0x1ec: @ StopAsync()
0x1ed: Pop(0)
0x1ee: Push("head")
0x1ef: @ UnlookAsync(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(6)

0x1f2: PushEmpty(object)
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x6e3

0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(int, int)
0x1f8: PushEmpty(int, object)
0x1f9: Stack[-1] = Stack[-5]
0x1fa: Call2 0x98f

0x1fb: Stack[-3] = Stack[-2]
0x1fc: Pop(2)
0x1fd: Push((int) 0)
0x1fe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x200: Push((int) 1)
0x201: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x203: PushEmpty()
0x204: Call2 0x286

0x205: Pop(0)
0x206: PushEmpty(object)
0x207: Stack[-1] = Stack[-4]
0x208: Call2 0x992

0x209: Pop(1)
0x20a: Return(); Pop(2)

0x20b: PushEmpty(int, int)
0x20c: PushEmpty(object)
0x20d: Stack[-1] = Stack[-4]
0x20e: Call2 0x8ee

0x20f: Pop(1)
0x210: PushEmpty(int, object)
0x211: Stack[-1] = Stack[-5]
0x212: Call2 0x929

0x213: Stack[-3] = Stack[-2]
0x214: Pop(2)
0x215: Push((int) 0)
0x216: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x218: Push((int) 1)
0x219: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: PushEmpty()
0x21c: Call2 0x286

0x21d: Pop(0)
0x21e: PushEmpty(object)
0x21f: Stack[-1] = Stack[-4]
0x220: Call2 0x933

0x221: Pop(1)
0x222: Return(); Pop(2)

0x223: PushEmpty(int, int)
0x224: PushEmpty(bool, object, object, bool)
0x225: Stack[-3] = Stack[-9]
0x226: Stack[-2] = Stack[-8]
0x227: Stack[-1] = Stack[-7]
0x228: Call2 0xa26

0x229: Pop(3)
0x22a: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22b: PushEmpty(int, object, bool)
0x22c: Stack[-2] = Stack[-8]
0x22d: Stack[-1] = Stack[-6]
0x22e: Call2 0x93b

0x22f: Stack[-4] = Stack[-3]
0x230: Pop(3)
0x231: Push((int) 0)
0x232: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x234: Push((int) 1)
0x235: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x237: PushEmpty()
0x238: Call2 0x286

0x239: Pop(0)
0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-6]
0x23c: Call2 0x945

0x23d: Pop(1)
0x23e: Return(); Pop(2)

0x23f: PushEmpty(int, int)
0x240: PushEmpty(int, object)
0x241: Stack[-1] = Stack[-5]
0x242: Call2 0x999

0x243: Stack[-3] = Stack[-2]
0x244: Pop(2)
0x245: Push((int) 0)
0x246: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x248: Push((int) 1)
0x249: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: PushEmpty()
0x24c: Call2 0x286

0x24d: Pop(0)
0x24e: PushEmpty(object)
0x24f: Stack[-1] = Stack[-4]
0x250: Call2 0x9a9

0x251: Pop(1)
0x252: Return(); Pop(2)

0x253: PushEmpty(int, int)
0x254: PushEmpty(bool, object, string)
0x255: Stack[-2] = Stack[-7]
0x256: Stack[-1] = Stack[-6]
0x257: Call2 0x898

0x258: Pop(2)
0x259: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25a: PushEmpty()
0x25b: Call2 0x286

0x25c: Pop(0)
0x25d: PushEmpty(object, string)
0x25e: Stack[-2] = Stack[-6]
0x25f: Stack[-1] = Stack[-5]
0x260: Call2 0x8b8

0x261: Pop(2)
0x262: GOTO 0x277

0x263: PushEmpty(int, string, object)
0x264: Stack[-2] = Stack[-6]
0x265: Stack[-1] = Stack[-7]
0x266: Call2 0x9af

0x267: Stack[-4] = Stack[-3]
0x268: Pop(3)
0x269: Push((int) 0)
0x26a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x26c: Push((int) 1)
0x26d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26f: PushEmpty()
0x270: Call2 0x286

0x271: Pop(0)
0x272: PushEmpty(string, object)
0x273: Stack[-2] = Stack[-5]
0x274: Stack[-1] = Stack[-6]
0x275: Call2 0x9b2

0x276: Pop(2)
0x277: Return(); Pop(2)

0x278: PushEmpty()
0x279: PushEmpty(bool, string)
0x27a: Stack[-1] = Stack[-3]
0x27b: Call2 0x8fb

0x27c: Pop(1)
0x27d: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27e: PushEmpty()
0x27f: Call2 0x286

0x280: Pop(0)
0x281: PushEmpty(string)
0x282: Stack[-1] = Stack[-2]
0x283: Call2 0x90b

0x284: Pop(1)
0x285: Return(); Pop(0)

0x286: @ StopGroup0()
0x287: Pop(0)
0x288: @ StopAsync()
0x289: Pop(0)
0x28a: Push("head")
0x28b: @ UnlookAsync(Stack[-1])
0x28c: Pop(1)
0x28d: Push((int) 111)
0x28e: @ KillTimer(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(0)

0x291: PushEmpty()
0x292: PushEmpty()
0x293: Call2 0x286

0x294: Pop(0)
0x295: PushEmpty(object)
0x296: Stack[-1] = Stack[-2]
0x297: Call2 0x880

0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector)
0x29b: Push((int) 111)
0x29c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: Return(); Pop(4)

0x29f: PushEmpty(bool, object)
0x2a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a1: Call2 0x63d

0x2a2: Pop(1)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a5: PushEmpty()
0x2a6: Call2 0x286

0x2a7: Pop(0)
0x2a8: Return(); Pop(4)

0x2a9: @ GetDirection(Stack[-2])
0x2aa: Pop(0)
0x2ab: PushEmpty(cvector, object)
0x2ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ad: Call2 0x5f4

0x2ae: Stack[-3] = Stack[-2]
0x2af: Pop(2)
0x2b0: PushEmpty(float, cvector, cvector)
0x2b1: Stack[-2] = Stack[-5]
0x2b2: Stack[-1] = Stack[-4]
0x2b3: Call2 0x742

0x2b4: Pop(2)
0x2b5: Push((float)0.5)
0x2b6: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call2 0x6d3

0x2bb: Pop(1)
0x2bc: Return(); Pop(4)

0x2bd: PushEmpty()
0x2be: Call2 0x286

0x2bf: Pop(0)
0x2c0: PushEmpty()
0x2c1: Call2 0x998

0x2c2: Pop(0)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty()
0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[-3]
0x2c7: Call2 0x8d1

0x2c8: Pop(1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ca: PushEmpty()
0x2cb: Call2 0x286

0x2cc: Pop(0)
0x2cd: PushEmpty(object)
0x2ce: Stack[-1] = Stack[-2]
0x2cf: Call2 0x8e8

0x2d0: Pop(1)
0x2d1: Return(); Pop(0)

0x2d2: PushEmpty()
0x2d3: @ Face(Stack[-1])
0x2d4: Pop(0)
0x2d5: Push("all")
0x2d6: Push("attack_on")
0x2d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: @ WaitForAnimEnd()
0x2da: Pop(0)
0x2db: Push("all")
0x2dc: Push("attack_stay")
0x2dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2de: Pop(2)
0x2df: @ WaitForAnimEnd()
0x2e0: Pop(0)
0x2e1: Push("all")
0x2e2: Push("attack_off")
0x2e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: @ WaitForAnimEnd()
0x2e6: Pop(0)
0x2e7: @ StopAsync()
0x2e8: Pop(0)
0x2e9: PushEmpty(object)
0x2ea: Stack[-1] = Stack[-2]
0x2eb: Call2 0x313

0x2ec: Pop(1)
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty()
0x2ef: Call2 0x390

0x2f0: Pop(0)
0x2f1: PushEmpty()
0x2f2: Call2 0x998

0x2f3: Pop(0)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2f6: @ GetPosition(Stack[-6])
0x2f7: Pop(0)
0x2f8: @@ GetPosition(Stack[-5])
0x2f9: Pop(0)
0x2fa: @ GetDirection(Stack[-4])
0x2fb: Pop(0)
0x2fc: PushEmpty(cvector, cvector)
0x2fd: PushEmpty(cvector, cvector)
0x2fe: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2ff: Call2 0x71d

0x300: Pop(1)
0x301: Push((float)0.75)
0x302: Pop(1); Push(Stack[-8] * Stack[-1]);
0x303: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x304: Call2 0x71d

0x305: Stack[-5] = Stack[-2]
0x306: Pop(2)
0x307: Push((int) 32)
0x308: Push((float)7000.0)
0x309: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: Push((int) 100)
0x30c: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x30d: Push((int) 0)
0x30e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Stack[-1] = (int) 0
0x311: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x312: Return(); Pop(12)

0x313: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x314: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x315: PushEmpty(cvector, float)
0x316: Stack[-1] = (float) 1.74533
0x317: Call2 0x2f5

0x318: Stack[-7] = Stack[-2]
0x319: Pop(2)
0x31a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x31b: Push((float)2500.0)
0x31c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x31e: PushEmpty(cvector, float)
0x31f: Stack[-1] = (float) 2.61799
0x320: Call2 0x2f5

0x321: Stack[-7] = Stack[-2]
0x322: Pop(2)
0x323: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x324: Push((float)2500.0)
0x325: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x327: Push("Can't retreat, distance: ")
0x328: Pop(0); Push(Sqrt(Stack[-5]))
0x329: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32a: @ Trace(Stack[-1])
0x32b: Pop(1)
0x32c: Push((float)0.5)
0x32d: @ Sleep(Stack[-1])
0x32e: Pop(1)
0x32f: Return(); Pop(10)

0x330: Push(CvectorIndex(Stack[-5], 0))
0x331: Push(CvectorIndex(Stack[-6], 2))
0x332: @ Rotate(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: PushEmpty(cvector)
0x335: Call2 0x5ef

0x336: Pop(0)
0x337: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x338: Push((int) 120)
0x339: Push((float)0.5)
0x33a: @ SetTimer(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x33d: Push((int) 1)
0x33e: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x33f: Pop(1)
0x340: Push(Stack[-3])
0x341: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x342: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: GOTO 0x35b

0x345: GOTO 0x359

0x346: PushEmpty(cvector, float)
0x347: Stack[-1] = (float) 2.61799
0x348: Call2 0x2f5

0x349: Stack[-4] = Stack[-2]
0x34a: Pop(2)
0x34b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x34c: Push((float)2500.0)
0x34d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x34f: PushEmpty(cvector)
0x350: Call2 0x5ef

0x351: Pop(0)
0x352: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x353: Push((int) 120)
0x354: Push((float)0.5)
0x355: @ SetTimer(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: GOTO 0x359

0x358: GOTO 0x35b

0x359: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x35b: Return(); Pop(10)

0x35c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x35d: Push((int) 120)
0x35e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x360: Return(); Pop(8)

0x361: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x363: @ Stop()
0x364: Pop(0)
0x365: Push((int) 1)
0x366: @ KillTimer(Stack[-1])
0x367: Pop(1)
0x368: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x369: GOTO 0x38f

0x36a: @ GetDirection(Stack[-4])
0x36b: Pop(0)
0x36c: Push((float)7000.0)
0x36d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x36e: Pop(1)
0x36f: PushEmpty(cvector, float)
0x370: Stack[-1] = (float) 1.74533
0x371: Call2 0x2f5

0x372: Stack[-4] = Stack[-2]
0x373: Pop(2)
0x374: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x375: PushEmpty(bool)
0x376: Stack[-1] = (bool) 0
0x377: Push((float)2500.0)
0x378: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x37a: PushEmpty(bool)
0x37b: Stack[-1] = (bool) 1
0x37c: Pop(0); Push(Stack[-5] * Stack[-5]);
0x37d: Push((float)2.25)
0x37e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x37f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x381: PushEmpty(bool)
0x382: Call2 0x3a0

0x383: Pop(0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Stack[-1] = (bool) 0
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: Stack[-1] = (bool) 1
0x388: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x389: @ Stop()
0x38a: Pop(0)
0x38b: PushEmpty(cvector)
0x38c: Call2 0x5ef

0x38d: Pop(0)
0x38e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x38f: Return(); Pop(8)

0x390: @ Stop()
0x391: Pop(0)
0x392: Push((int) 120)
0x393: @ KillTimer(Stack[-1])
0x394: Pop(1)
0x395: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x396: Return(); Pop(0)

0x397: PushEmpty()
0x398: PushEmpty()
0x399: Call2 0x390

0x39a: Pop(0)
0x39b: PushEmpty(object)
0x39c: Stack[-1] = Stack[-2]
0x39d: Call2 0x880

0x39e: Pop(1)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty(cvector, cvector, cvector, cvector)
0x3a1: @ GetDirection(Stack[-2])
0x3a2: Pop(0)
0x3a3: PushEmpty(cvector, object)
0x3a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a5: Call2 0x5f4

0x3a6: Stack[-3] = Stack[-2]
0x3a7: Pop(2)
0x3a8: PushEmpty(float, cvector, cvector)
0x3a9: Stack[-2] = Stack[-5]
0x3aa: Stack[-1] = Stack[-4]
0x3ab: Call2 0x727

0x3ac: Pop(2)
0x3ad: Push((float)-0.34202)
0x3ae: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x3af: Return(); Pop(4)

0x3b0: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3b1: @ GetPosition(Stack[-6])
0x3b2: Pop(0)
0x3b3: @@ GetPosition(Stack[-5])
0x3b4: Pop(0)
0x3b5: @ GetDirection(Stack[-4])
0x3b6: Pop(0)
0x3b7: PushEmpty(cvector, cvector)
0x3b8: PushEmpty(cvector, cvector)
0x3b9: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3ba: Call2 0x71d

0x3bb: Pop(1)
0x3bc: Push((float)0.75)
0x3bd: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3be: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3bf: Call2 0x71d

0x3c0: Stack[-5] = Stack[-2]
0x3c1: Pop(2)
0x3c2: Push((int) 32)
0x3c3: Push((float)7000.0)
0x3c4: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: Push((int) 100)
0x3c7: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3c8: Push((int) 0)
0x3c9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-1] = (int) 0
0x3cc: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3cd: Return(); Pop(12)

0x3ce: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3d0: PushEmpty(cvector, float)
0x3d1: Stack[-1] = (float) 1.74533
0x3d2: Call2 0x3b0

0x3d3: Stack[-7] = Stack[-2]
0x3d4: Pop(2)
0x3d5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3d6: Push((float)2500.0)
0x3d7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d9: PushEmpty(cvector, float)
0x3da: Stack[-1] = (float) 2.61799
0x3db: Call2 0x3b0

0x3dc: Stack[-7] = Stack[-2]
0x3dd: Pop(2)
0x3de: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3df: Push((float)2500.0)
0x3e0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e2: Push("Can't retreat, distance: ")
0x3e3: Pop(0); Push(Sqrt(Stack[-5]))
0x3e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e5: @ Trace(Stack[-1])
0x3e6: Pop(1)
0x3e7: Push((float)0.5)
0x3e8: @ Sleep(Stack[-1])
0x3e9: Pop(1)
0x3ea: Return(); Pop(10)

0x3eb: Push(CvectorIndex(Stack[-5], 0))
0x3ec: Push(CvectorIndex(Stack[-6], 2))
0x3ed: @ Rotate(Stack[-2], Stack[-1])
0x3ee: Pop(2)
0x3ef: PushEmpty(cvector)
0x3f0: Call2 0x5ef

0x3f1: Pop(0)
0x3f2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3f3: Push((int) 120)
0x3f4: Push((float)0.5)
0x3f5: @ SetTimer(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3f8: Push((int) 1)
0x3f9: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3fa: Pop(1)
0x3fb: Push(Stack[-3])
0x3fc: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x3fd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: GOTO 0x416

0x400: GOTO 0x414

0x401: PushEmpty(cvector, float)
0x402: Stack[-1] = (float) 2.61799
0x403: Call2 0x3b0

0x404: Stack[-4] = Stack[-2]
0x405: Pop(2)
0x406: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x407: Push((float)2500.0)
0x408: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40a: PushEmpty(cvector)
0x40b: Call2 0x5ef

0x40c: Pop(0)
0x40d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x40e: Push((int) 120)
0x40f: Push((float)0.5)
0x410: @ SetTimer(Stack[-2], Stack[-1])
0x411: Pop(2)
0x412: GOTO 0x414

0x413: GOTO 0x416

0x414: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x415: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x416: Return(); Pop(10)

0x417: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x418: Push((int) 120)
0x419: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: Return(); Pop(8)

0x41c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x41e: @ Stop()
0x41f: Pop(0)
0x420: Push((int) 1)
0x421: @ KillTimer(Stack[-1])
0x422: Pop(1)
0x423: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x424: GOTO 0x44a

0x425: @ GetDirection(Stack[-4])
0x426: Pop(0)
0x427: Push((float)7000.0)
0x428: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x429: Pop(1)
0x42a: PushEmpty(cvector, float)
0x42b: Stack[-1] = (float) 1.74533
0x42c: Call2 0x3b0

0x42d: Stack[-4] = Stack[-2]
0x42e: Pop(2)
0x42f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x430: PushEmpty(bool)
0x431: Stack[-1] = (bool) 0
0x432: Push((float)2500.0)
0x433: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x435: PushEmpty(bool)
0x436: Stack[-1] = (bool) 1
0x437: Pop(0); Push(Stack[-5] * Stack[-5]);
0x438: Push((float)2.25)
0x439: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43a: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43c: PushEmpty(bool)
0x43d: Call2 0x45b

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Stack[-1] = (bool) 0
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x444: @ Stop()
0x445: Pop(0)
0x446: PushEmpty(cvector)
0x447: Call2 0x5ef

0x448: Pop(0)
0x449: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x44a: Return(); Pop(8)

0x44b: @ Stop()
0x44c: Pop(0)
0x44d: Push((int) 120)
0x44e: @ KillTimer(Stack[-1])
0x44f: Pop(1)
0x450: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: PushEmpty()
0x454: Call2 0x44b

0x455: Pop(0)
0x456: PushEmpty(object)
0x457: Stack[-1] = Stack[-2]
0x458: Call2 0x880

0x459: Pop(1)
0x45a: Return(); Pop(0)

0x45b: PushEmpty(cvector, cvector, cvector, cvector)
0x45c: @ GetDirection(Stack[-2])
0x45d: Pop(0)
0x45e: PushEmpty(cvector, object)
0x45f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x460: Call2 0x5f4

0x461: Stack[-3] = Stack[-2]
0x462: Pop(2)
0x463: PushEmpty(float, cvector, cvector)
0x464: Stack[-2] = Stack[-5]
0x465: Stack[-1] = Stack[-4]
0x466: Call2 0x727

0x467: Pop(2)
0x468: Push((float)-0.34202)
0x469: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x46a: Return(); Pop(4)

0x46b: PushEmpty()
0x46c: Call2 0x50d

0x46d: Pop(0)
0x46e: PushEmpty()
0x46f: Call2 0x998

0x470: Pop(0)
0x471: Return(); Pop(0)

0x472: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x473: @ GetPosition(Stack[-6])
0x474: Pop(0)
0x475: @@ GetPosition(Stack[-5])
0x476: Pop(0)
0x477: @ GetDirection(Stack[-4])
0x478: Pop(0)
0x479: PushEmpty(cvector, cvector)
0x47a: PushEmpty(cvector, cvector)
0x47b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x47c: Call2 0x71d

0x47d: Pop(1)
0x47e: Push((float)0.75)
0x47f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x480: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x481: Call2 0x71d

0x482: Stack[-5] = Stack[-2]
0x483: Pop(2)
0x484: Push((int) 32)
0x485: Push((float)7000.0)
0x486: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x487: Pop(2)
0x488: Push((int) 100)
0x489: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x48a: Push((int) 0)
0x48b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Stack[-1] = (int) 0
0x48e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x48f: Return(); Pop(12)

0x490: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x491: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x492: PushEmpty(cvector, float)
0x493: Stack[-1] = (float) 1.74533
0x494: Call2 0x472

0x495: Stack[-7] = Stack[-2]
0x496: Pop(2)
0x497: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x498: Push((float)2500.0)
0x499: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x49b: PushEmpty(cvector, float)
0x49c: Stack[-1] = (float) 2.61799
0x49d: Call2 0x472

0x49e: Stack[-7] = Stack[-2]
0x49f: Pop(2)
0x4a0: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4a1: Push((float)2500.0)
0x4a2: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a4: Push("Can't retreat, distance: ")
0x4a5: Pop(0); Push(Sqrt(Stack[-5]))
0x4a6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a7: @ Trace(Stack[-1])
0x4a8: Pop(1)
0x4a9: Push((float)0.5)
0x4aa: @ Sleep(Stack[-1])
0x4ab: Pop(1)
0x4ac: Return(); Pop(10)

0x4ad: Push(CvectorIndex(Stack[-5], 0))
0x4ae: Push(CvectorIndex(Stack[-6], 2))
0x4af: @ Rotate(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: PushEmpty(cvector)
0x4b2: Call2 0x5ef

0x4b3: Pop(0)
0x4b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4b5: Push((int) 120)
0x4b6: Push((float)0.5)
0x4b7: @ SetTimer(Stack[-2], Stack[-1])
0x4b8: Pop(2)
0x4b9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4ba: Push((int) 1)
0x4bb: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4bc: Pop(1)
0x4bd: Push(Stack[-3])
0x4be: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4bf: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c1: GOTO 0x4d8

0x4c2: GOTO 0x4d6

0x4c3: PushEmpty(cvector, float)
0x4c4: Stack[-1] = (float) 2.61799
0x4c5: Call2 0x472

0x4c6: Stack[-4] = Stack[-2]
0x4c7: Pop(2)
0x4c8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4c9: Push((float)2500.0)
0x4ca: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4cc: PushEmpty(cvector)
0x4cd: Call2 0x5ef

0x4ce: Pop(0)
0x4cf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4d0: Push((int) 120)
0x4d1: Push((float)0.5)
0x4d2: @ SetTimer(Stack[-2], Stack[-1])
0x4d3: Pop(2)
0x4d4: GOTO 0x4d6

0x4d5: GOTO 0x4d8

0x4d6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4d8: Return(); Pop(10)

0x4d9: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4da: Push((int) 120)
0x4db: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Return(); Pop(8)

0x4de: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e0: @ Stop()
0x4e1: Pop(0)
0x4e2: Push((int) 1)
0x4e3: @ KillTimer(Stack[-1])
0x4e4: Pop(1)
0x4e5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4e6: GOTO 0x50c

0x4e7: @ GetDirection(Stack[-4])
0x4e8: Pop(0)
0x4e9: Push((float)7000.0)
0x4ea: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4eb: Pop(1)
0x4ec: PushEmpty(cvector, float)
0x4ed: Stack[-1] = (float) 1.74533
0x4ee: Call2 0x472

0x4ef: Stack[-4] = Stack[-2]
0x4f0: Pop(2)
0x4f1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4f2: PushEmpty(bool)
0x4f3: Stack[-1] = (bool) 0
0x4f4: Push((float)2500.0)
0x4f5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f7: PushEmpty(bool)
0x4f8: Stack[-1] = (bool) 1
0x4f9: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4fa: Push((float)2.25)
0x4fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4fc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fe: PushEmpty(bool)
0x4ff: Call2 0x51d

0x500: Pop(0)
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: Stack[-1] = (bool) 0
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Stack[-1] = (bool) 1
0x505: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x506: @ Stop()
0x507: Pop(0)
0x508: PushEmpty(cvector)
0x509: Call2 0x5ef

0x50a: Pop(0)
0x50b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x50c: Return(); Pop(8)

0x50d: @ Stop()
0x50e: Pop(0)
0x50f: Push((int) 120)
0x510: @ KillTimer(Stack[-1])
0x511: Pop(1)
0x512: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x513: Return(); Pop(0)

0x514: PushEmpty()
0x515: PushEmpty()
0x516: Call2 0x50d

0x517: Pop(0)
0x518: PushEmpty(object)
0x519: Stack[-1] = Stack[-2]
0x51a: Call2 0x880

0x51b: Pop(1)
0x51c: Return(); Pop(0)

0x51d: PushEmpty(cvector, cvector, cvector, cvector)
0x51e: @ GetDirection(Stack[-2])
0x51f: Pop(0)
0x520: PushEmpty(cvector, object)
0x521: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x522: Call2 0x5f4

0x523: Stack[-3] = Stack[-2]
0x524: Pop(2)
0x525: PushEmpty(float, cvector, cvector)
0x526: Stack[-2] = Stack[-5]
0x527: Stack[-1] = Stack[-4]
0x528: Call2 0x727

0x529: Pop(2)
0x52a: Push((float)-0.34202)
0x52b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x52c: Return(); Pop(4)

0x52d: PushEmpty()
0x52e: Call2 0x5cf

0x52f: Pop(0)
0x530: PushEmpty()
0x531: Call2 0x998

0x532: Pop(0)
0x533: Return(); Pop(0)

0x534: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x535: @ GetPosition(Stack[-6])
0x536: Pop(0)
0x537: @@ GetPosition(Stack[-5])
0x538: Pop(0)
0x539: @ GetDirection(Stack[-4])
0x53a: Pop(0)
0x53b: PushEmpty(cvector, cvector)
0x53c: PushEmpty(cvector, cvector)
0x53d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x53e: Call2 0x71d

0x53f: Pop(1)
0x540: Push((float)0.75)
0x541: Pop(1); Push(Stack[-8] * Stack[-1]);
0x542: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x543: Call2 0x71d

0x544: Stack[-5] = Stack[-2]
0x545: Pop(2)
0x546: Push((int) 32)
0x547: Push((float)7000.0)
0x548: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x549: Pop(2)
0x54a: Push((int) 100)
0x54b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x54c: Push((int) 0)
0x54d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: Stack[-1] = (int) 0
0x550: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x551: Return(); Pop(12)

0x552: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x553: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x554: PushEmpty(cvector, float)
0x555: Stack[-1] = (float) 1.74533
0x556: Call2 0x534

0x557: Stack[-7] = Stack[-2]
0x558: Pop(2)
0x559: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x55a: Push((float)2500.0)
0x55b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x55d: PushEmpty(cvector, float)
0x55e: Stack[-1] = (float) 2.61799
0x55f: Call2 0x534

0x560: Stack[-7] = Stack[-2]
0x561: Pop(2)
0x562: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x563: Push((float)2500.0)
0x564: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x566: Push("Can't retreat, distance: ")
0x567: Pop(0); Push(Sqrt(Stack[-5]))
0x568: Pop(2); Push(Stack[-2] + Stack[-1]);
0x569: @ Trace(Stack[-1])
0x56a: Pop(1)
0x56b: Push((float)0.5)
0x56c: @ Sleep(Stack[-1])
0x56d: Pop(1)
0x56e: Return(); Pop(10)

0x56f: Push(CvectorIndex(Stack[-5], 0))
0x570: Push(CvectorIndex(Stack[-6], 2))
0x571: @ Rotate(Stack[-2], Stack[-1])
0x572: Pop(2)
0x573: PushEmpty(cvector)
0x574: Call2 0x5ef

0x575: Pop(0)
0x576: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x577: Push((int) 120)
0x578: Push((float)0.5)
0x579: @ SetTimer(Stack[-2], Stack[-1])
0x57a: Pop(2)
0x57b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x57c: Push((int) 1)
0x57d: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x57e: Pop(1)
0x57f: Push(Stack[-3])
0x580: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x581: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x582: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x583: GOTO 0x59a

0x584: GOTO 0x598

0x585: PushEmpty(cvector, float)
0x586: Stack[-1] = (float) 2.61799
0x587: Call2 0x534

0x588: Stack[-4] = Stack[-2]
0x589: Pop(2)
0x58a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x58b: Push((float)2500.0)
0x58c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x58e: PushEmpty(cvector)
0x58f: Call2 0x5ef

0x590: Pop(0)
0x591: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x592: Push((int) 120)
0x593: Push((float)0.5)
0x594: @ SetTimer(Stack[-2], Stack[-1])
0x595: Pop(2)
0x596: GOTO 0x598

0x597: GOTO 0x59a

0x598: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x59a: Return(); Pop(10)

0x59b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x59c: Push((int) 120)
0x59d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: Return(); Pop(8)

0x5a0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a2: @ Stop()
0x5a3: Pop(0)
0x5a4: Push((int) 1)
0x5a5: @ KillTimer(Stack[-1])
0x5a6: Pop(1)
0x5a7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5a8: GOTO 0x5ce

0x5a9: @ GetDirection(Stack[-4])
0x5aa: Pop(0)
0x5ab: Push((float)7000.0)
0x5ac: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x5ad: Pop(1)
0x5ae: PushEmpty(cvector, float)
0x5af: Stack[-1] = (float) 1.74533
0x5b0: Call2 0x534

0x5b1: Stack[-4] = Stack[-2]
0x5b2: Pop(2)
0x5b3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5b4: PushEmpty(bool)
0x5b5: Stack[-1] = (bool) 0
0x5b6: Push((float)2500.0)
0x5b7: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5b9: PushEmpty(bool)
0x5ba: Stack[-1] = (bool) 1
0x5bb: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5bc: Push((float)2.25)
0x5bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5be: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c0: PushEmpty(bool)
0x5c1: Call2 0x5df

0x5c2: Pop(0)
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c4: Stack[-1] = (bool) 0
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c6: Stack[-1] = (bool) 1
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5c8: @ Stop()
0x5c9: Pop(0)
0x5ca: PushEmpty(cvector)
0x5cb: Call2 0x5ef

0x5cc: Pop(0)
0x5cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5ce: Return(); Pop(8)

0x5cf: @ Stop()
0x5d0: Pop(0)
0x5d1: Push((int) 120)
0x5d2: @ KillTimer(Stack[-1])
0x5d3: Pop(1)
0x5d4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5d5: Return(); Pop(0)

0x5d6: PushEmpty()
0x5d7: PushEmpty()
0x5d8: Call2 0x5cf

0x5d9: Pop(0)
0x5da: PushEmpty(object)
0x5db: Stack[-1] = Stack[-2]
0x5dc: Call2 0x880

0x5dd: Pop(1)
0x5de: Return(); Pop(0)

0x5df: PushEmpty(cvector, cvector, cvector, cvector)
0x5e0: @ GetDirection(Stack[-2])
0x5e1: Pop(0)
0x5e2: PushEmpty(cvector, object)
0x5e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e4: Call2 0x5f4

0x5e5: Stack[-3] = Stack[-2]
0x5e6: Pop(2)
0x5e7: PushEmpty(float, cvector, cvector)
0x5e8: Stack[-2] = Stack[-5]
0x5e9: Stack[-1] = Stack[-4]
0x5ea: Call2 0x727

0x5eb: Pop(2)
0x5ec: Push((float)-0.34202)
0x5ed: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5ee: Return(); Pop(4)

0x5ef: PushEmpty(cvector, cvector)
0x5f0: @ GetPosition(Stack[-1])
0x5f1: Pop(0)
0x5f2: Stack[-3] = Stack[-1]
0x5f3: Return(); Pop(2)

0x5f4: PushEmpty(cvector, cvector, cvector, cvector)
0x5f5: @ GetPosition(Stack[-2])
0x5f6: Pop(0)
0x5f7: @@ GetPosition(Stack[-1])
0x5f8: Pop(0)
0x5f9: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5fa: Return(); Pop(4)

0x5fb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5fc: @ GetPosition(Stack[-3])
0x5fd: Pop(0)
0x5fe: @@ GetPosition(Stack[-2])
0x5ff: Pop(0)
0x600: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x601: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x602: Return(); Pop(6)

0x603: PushEmpty(bool, bool)
0x604: @ IsPlayerActor(Stack[-3], Stack[-1])
0x605: Pop(0)
0x606: Stack[-4] = Stack[-1]
0x607: Return(); Pop(2)

0x608: PushEmpty(bool, bool)
0x609: Push("HasProperty")
0x60a: Push((int) 2)
0x60b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x60c: Pop(1); Push((bool) Stack[-1] == 0)
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: Stack[-5] = (bool) 0
0x60f: Return(); Pop(2)

0x610: @@ HasProperty(Stack[-3], Stack[-1])
0x611: Pop(0)
0x612: Stack[-5] = Stack[-1]
0x613: Return(); Pop(2)

0x614: PushEmpty(bool, bool)
0x615: @@ IsDead(Stack[-1])
0x616: Pop(0)
0x617: Stack[-4] = Stack[-1]
0x618: Return(); Pop(2)

0x619: PushEmpty(object, object, object, object)
0x61a: Pop(0); Push((bool) Stack[-5] == 0)
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-6] = (bool) 0
0x61d: Return(); Pop(4)

0x61e: PushEmpty(bool)
0x61f: Stack[-1] = (bool) 0
0x620: Push("IsDead")
0x621: Push((int) 1)
0x622: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x623: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x624: PushEmpty(bool, object)
0x625: Stack[-1] = Stack[-8]
0x626: Call2 0x614

0x627: Pop(1)
0x628: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x629: Stack[-1] = (bool) 1
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: Stack[-6] = (bool) 0
0x62c: Return(); Pop(4)

0x62d: @ GetScene(Stack[-2])
0x62e: Pop(0)
0x62f: Pop(0); Push((bool) Stack[-2] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x631: Stack[-6] = (bool) 0
0x632: Return(); Pop(4)

0x633: @@ GetScene(Stack[-1])
0x634: Pop(0)
0x635: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x637: Stack[-6] = (bool) 0
0x638: Return(); Pop(4)

0x639: Stack[-6] = (bool) 1
0x63a: Return(); Pop(4)

0x63b: Stack[-1] = 0
0x63c: Stack[-2] = 0
0x63d: PushEmpty(int, int)
0x63e: PushEmpty(bool, object)
0x63f: Stack[-1] = Stack[-5]
0x640: Call2 0x619

0x641: Pop(1)
0x642: Pop(1); Push((bool) Stack[-1] == 0)
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-4] = (bool) 0
0x645: Return(); Pop(2)

0x646: PushEmpty(bool, object, string)
0x647: Stack[-2] = Stack[-6]
0x648: Stack[-1] = "noaccess"
0x649: Call2 0x608

0x64a: Pop(2)
0x64b: Pop(1); Push((bool) Stack[-1] == 0)
0x64c: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64d: Stack[-4] = (bool) 1
0x64e: Return(); Pop(2)

0x64f: Push("noaccess")
0x650: @@ GetProperty(Stack[-1], Stack[-2])
0x651: Pop(1)
0x652: Push((int) 0)
0x653: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x654: Return(); Pop(2)

0x655: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x656: Pop(0); Push((bool) Stack[-15] == 0)
0x657: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x658: Return(); Pop(14)

0x659: @ IsDead(Stack[-7])
0x65a: Pop(0)
0x65b: Push(Stack[-7])
0x65c: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65d: Return(); Pop(14)

0x65e: @ GetSecondaryAnimationType(Stack[-6])
0x65f: Pop(0)
0x660: Push((int) 0)
0x661: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: Return(); Pop(14)

0x664: @@ GetPosition(Stack[-5])
0x665: Pop(0)
0x666: @ GetPosition(Stack[-4])
0x667: Pop(0)
0x668: @ GetDirection(Stack[-3])
0x669: Pop(0)
0x66a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x66b: Push(CvectorIndex(Stack[-2], 0))
0x66c: Push(CvectorIndex(Stack[-4], 0))
0x66d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66e: Push(CvectorIndex(Stack[-3], 2))
0x66f: Push(CvectorIndex(Stack[-5], 2))
0x670: Pop(2); Push(Stack[-2] * Stack[-1]);
0x671: Pop(2); Push(Stack[-2] + Stack[-1]);
0x672: Push((int) 0)
0x673: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x675: Stack[-1] = "fhit"
0x676: GOTO 0x678

0x677: Stack[-1] = "bhit"
0x678: Push("hit_react")
0x679: Push("1")
0x67a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x67b: Push("2")
0x67c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x67d: Push((int) -10)
0x67e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(4)
0x680: Return(); Pop(14)

0x681: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x682: PushEmpty(bool)
0x683: Stack[-1] = (bool) 0
0x684: PushEmpty(bool)
0x685: Stack[-1] = (bool) 0
0x686: Push(Stack[-23])
0x687: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x688: Push((int) 4)
0x689: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68b: Stack[-1] = (bool) 1
0x68c: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68d: Push((int) 5)
0x68e: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x690: Stack[-1] = (bool) 1
0x691: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x692: PushEmpty(cvector, cvector)
0x693: PushEmpty(cvector, object)
0x694: Stack[-1] = Stack[-25]
0x695: Call2 0x5f4

0x696: Stack[-3] = Stack[-2]
0x697: Pop(2)
0x698: Call2 0x71d

0x699: Stack[-11] = Stack[-2]
0x69a: Pop(2)
0x69b: @ CreateVectorVector(Stack[-8])
0x69c: Pop(0)
0x69d: Stack[-7] = (int) 1
0x69e: Push("hit")
0x69f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6a0: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6a1: Pop(1)
0x6a2: Pop(0); Push((bool) Stack[-6] == 0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: GOTO 0x6ae

0x6a5: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6a6: Push((float)0.70711)
0x6a7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: @@ add(Stack[-5])
0x6aa: Pop(0)
0x6ab: Push((int) 1)
0x6ac: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6ad: GOTO 0x69e

0x6ae: @@ size(Stack[-3])
0x6af: Pop(0)
0x6b0: Push(Stack[-3])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6b2: @ irand(Stack[-2], Stack[-3])
0x6b3: Pop(0)
0x6b4: @@ get(Stack[-1], Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(object, int, float, cvector, cvector)
0x6b7: Stack[-5] = Stack[-26]
0x6b8: Stack[-4] = Stack[-25]
0x6b9: Stack[-3] = Stack[-24]
0x6ba: Stack[-2] = Stack[-6]
0x6bb: Stack[-1] = -Stack[-14]; Pop(0);
0x6bc: Call2 0x6c5

0x6bd: Pop(5)
0x6be: Return(); Pop(18)

0x6bf: Stack[-8] = 0
0x6c0: PushEmpty(object)
0x6c1: Stack[-1] = Stack[-22]
0x6c2: Call2 0x655

0x6c3: Pop(1)
0x6c4: Return(); Pop(18)

0x6c5: PushEmpty(object, object, object, object)
0x6c6: @ GetScene(Stack[-2])
0x6c7: Pop(0)
0x6c8: Push("scripted")
0x6c9: Push("blood_dir.xml")
0x6ca: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6cb: Pop(2)
0x6cc: PushEmpty(object)
0x6cd: Stack[-1] = Stack[-10]
0x6ce: Call2 0x655

0x6cf: Pop(1)
0x6d0: Return(); Pop(4)

0x6d1: Stack[-1] = 0
0x6d2: Stack[-2] = 0
0x6d3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6d4: @@ GetPosition(Stack[-3])
0x6d5: Pop(0)
0x6d6: @ GetPosition(Stack[-2])
0x6d7: Pop(0)
0x6d8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6d9: Push(CvectorIndex(Stack[-1], 0))
0x6da: Push(CvectorIndex(Stack[-2], 2))
0x6db: @ RotateAsync(Stack[-2], Stack[-1])
0x6dc: Pop(2)
0x6dd: Return(); Pop(6)

0x6de: PushEmpty(bool, bool)
0x6df: @ IsLoaded(Stack[-1])
0x6e0: Pop(0)
0x6e1: Stack[-3] = Stack[-1]
0x6e2: Return(); Pop(2)

0x6e3: PushEmpty(float, cvector, float, cvector)
0x6e4: @@ GetEyesHeight(Stack[-2])
0x6e5: Pop(0)
0x6e6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6e7: Push(CvectorIndex(Stack[-1], 1))
0x6e8: Stack[-1] = Stack[-3]
0x6e9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6ea: Push("head")
0x6eb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6ec: Pop(1)
0x6ed: Return(); Pop(4)

0x6ee: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6ef: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6f0: Pop(0)
0x6f1: Pop(0); Push((bool) Stack[-8] == 0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6f3: Stack[-7] = (int) 0
0x6f4: Push((int) 1)
0x6f5: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6f6: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6f7: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6f8: Pop(1)
0x6f9: Pop(0); Push((bool) Stack[-6] == 0)
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: GOTO 0x6ff

0x6fc: Push((int) 1)
0x6fd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6fe: GOTO 0x6f4

0x6ff: Pop(0); Push((bool) Stack[-7] == 0)
0x700: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x701: Return(); Pop(16)

0x702: @ irand(Stack[-5], Stack[-7])
0x703: Pop(0)
0x704: Push((int) 1)
0x705: Pop(1); Push(Stack[-6] + Stack[-1]);
0x706: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x707: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x708: Pop(0)
0x709: Push(Stack[-4])
0x70a: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x70b: @ GetEyesHeight(Stack[-3])
0x70c: Pop(0)
0x70d: @ GetDirection(Stack[-2])
0x70e: Pop(0)
0x70f: Push((int) 50)
0x710: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x711: Push(CvectorIndex(Stack[-1], 1))
0x712: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x713: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x714: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x715: Pop(0)
0x716: Return(); Pop(16)

0x717: PushEmpty(object, object)
0x718: @ self(Stack[-1])
0x719: Pop(0)
0x71a: Stack[-3] = Stack[-1]
0x71b: Return(); Pop(2)

0x71c: Stack[-1] = 0
0x71d: PushEmpty(float, float)
0x71e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x71f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x720: Push((float)0.0)
0x721: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x723: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x724: Return(); Pop(2)

0x725: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x726: Return(); Pop(2)

0x727: PushEmpty()
0x728: Pop(0); Push(Stack[-2] | Stack[-1]);
0x729: Pop(0); Push(Stack[-3] | Stack[-3]);
0x72a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x72b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x72c: Pop(1); Push(Sqrt(Stack[-1]))
0x72d: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x72e: Return(); Pop(0)

0x72f: PushEmpty()
0x730: Push(CvectorIndex(Stack[-2], 0))
0x731: Push(CvectorIndex(Stack[-2], 0))
0x732: Pop(2); Push(Stack[-2] * Stack[-1]);
0x733: Push(CvectorIndex(Stack[-3], 2))
0x734: Push(CvectorIndex(Stack[-3], 2))
0x735: Pop(2); Push(Stack[-2] * Stack[-1]);
0x736: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x737: Return(); Pop(0)

0x738: PushEmpty()
0x739: Push(CvectorIndex(Stack[-1], 0))
0x73a: Push(CvectorIndex(Stack[-2], 0))
0x73b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x73c: Push(CvectorIndex(Stack[-2], 2))
0x73d: Push(CvectorIndex(Stack[-3], 2))
0x73e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x73f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x740: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x741: Return(); Pop(0)

0x742: PushEmpty()
0x743: PushEmpty(float, cvector, cvector)
0x744: Stack[-2] = Stack[-5]
0x745: Stack[-1] = Stack[-4]
0x746: Call2 0x72f

0x747: Pop(2)
0x748: PushEmpty(float, cvector)
0x749: Stack[-1] = Stack[-5]
0x74a: Call2 0x738

0x74b: Pop(1)
0x74c: PushEmpty(float, cvector)
0x74d: Stack[-1] = Stack[-5]
0x74e: Call2 0x738

0x74f: Pop(1)
0x750: Pop(2); Push(Stack[-2] * Stack[-1]);
0x751: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x752: Return(); Pop(0)

0x753: PushEmpty(float, float)
0x754: @ GetGameTime(Stack[-1])
0x755: Pop(0)
0x756: Push((int) 1)
0x757: PushEmpty(int)
0x758: Push((int) 24)
0x759: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x75a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x75b: Return(); Pop(2)

0x75c: PushEmpty(int, int)
0x75d: Push("branch")
0x75e: @ GetVariable(Stack[-1], Stack[-2])
0x75f: Pop(1)
0x760: Stack[-3] = Stack[-1]
0x761: Return(); Pop(2)

0x762: PushEmpty()
0x763: PushEmpty(int)
0x764: Call2 0x75c

0x765: Pop(0)
0x766: Push((int) 1)
0x767: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x769: @ WorkWithCorpse(Stack[-1])
0x76a: Pop(0)
0x76b: GOTO 0x76e

0x76c: @ Barter(Stack[-1])
0x76d: Pop(0)
0x76e: Return(); Pop(0)

0x76f: PushEmpty(int, bool, int, bool)
0x770: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x771: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x772: Push("GenerateMoney: iMin > iMax")
0x773: @ Trace(Stack[-1])
0x774: Pop(1)
0x775: Return(); Pop(4)

0x776: Stack[-2] = (int) 0
0x777: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x778: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x779: Pop(0); Push(Stack[-5] - Stack[-6]);
0x77a: @ irand(Stack[-3], Stack[-1])
0x77b: Pop(1)
0x77c: GOTO 0x781

0x77d: Push((int) 0)
0x77e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: Return(); Pop(4)

0x781: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x782: Push((int) 0)
0x783: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: Return(); Pop(4)

0x786: PushEmpty(int, string)
0x787: Stack[-1] = "Money"
0x788: Call2 0x866

0x789: Pop(1)
0x78a: Push((int) 0)
0x78b: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x78c: Pop(2)
0x78d: Return(); Pop(4)

0x78e: PushEmpty(object, int, bool, object, int, bool)
0x78f: @ CreateInvItem(Stack[-3])
0x790: Pop(0)
0x791: @@ SetItemName(Stack[-7])
0x792: Pop(0)
0x793: Push("Organ")
0x794: Push((int) 1)
0x795: @@ SetProperty(Stack[-2], Stack[-1])
0x796: Pop(2)
0x797: @@ GetItemID(Stack[-2])
0x798: Pop(0)
0x799: Push((int) 0)
0x79a: Push((int) 1)
0x79b: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x79c: Pop(2)
0x79d: Return(); Pop(6)

0x79e: Stack[-3] = 0
0x79f: PushEmpty(int)
0x7a0: Call2 0x75c

0x7a1: Pop(0)
0x7a2: Push((int) 1)
0x7a3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a5: Return(); Pop(0)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "liver"
0x7a8: Call2 0x78e

0x7a9: Pop(1)
0x7aa: PushEmpty(string)
0x7ab: Stack[-1] = "kidney"
0x7ac: Call2 0x78e

0x7ad: Pop(1)
0x7ae: PushEmpty(string)
0x7af: Stack[-1] = "heart"
0x7b0: Call2 0x78e

0x7b1: Pop(1)
0x7b2: PushEmpty(string)
0x7b3: Stack[-1] = "blood"
0x7b4: Call2 0x78e

0x7b5: Pop(1)
0x7b6: Return(); Pop(0)

0x7b7: PushEmpty(int, bool, int, bool)
0x7b8: Push(Stack[-5])
0x7b9: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x7ba: PushEmpty(int, int)
0x7bb: Stack[-2] = (int) 0
0x7bc: Push((int) 100)
0x7bd: PushEmpty(int)
0x7be: Call2 0x753

0x7bf: Pop(0)
0x7c0: Push((int) 100)
0x7c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7c2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x7c3: Call2 0x76f

0x7c4: Pop(2)
0x7c5: Push((int) 8)
0x7c6: @ irand(Stack[-3], Stack[-1])
0x7c7: Pop(1)
0x7c8: Push((int) 0)
0x7c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7cb: PushEmpty(int, string)
0x7cc: Stack[-1] = "lemon"
0x7cd: Call2 0x866

0x7ce: Pop(1)
0x7cf: Push((int) 0)
0x7d0: Push((int) 1)
0x7d1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: GOTO 0x80f

0x7d4: Push((int) 1)
0x7d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d7: PushEmpty(int, string)
0x7d8: Stack[-1] = "rusk"
0x7d9: Call2 0x866

0x7da: Pop(1)
0x7db: Push((int) 0)
0x7dc: Push((int) 1)
0x7dd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: GOTO 0x80f

0x7e0: Push((int) 2)
0x7e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e3: PushEmpty(int, string)
0x7e4: Stack[-1] = "hook"
0x7e5: Call2 0x866

0x7e6: Pop(1)
0x7e7: Push((int) 0)
0x7e8: Push((int) 1)
0x7e9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: GOTO 0x80f

0x7ec: Push((int) 4)
0x7ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7ef: PushEmpty(int, string)
0x7f0: Stack[-1] = "syringe"
0x7f1: Call2 0x866

0x7f2: Pop(1)
0x7f3: Push((int) 0)
0x7f4: Push((int) 1)
0x7f5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7f6: Pop(3)
0x7f7: GOTO 0x80f

0x7f8: Push((int) 5)
0x7f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7fb: PushEmpty(int, string)
0x7fc: Stack[-1] = "watch"
0x7fd: Call2 0x866

0x7fe: Pop(1)
0x7ff: Push((int) 0)
0x800: Push((int) 1)
0x801: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x802: Pop(3)
0x803: GOTO 0x80f

0x804: Push((int) 6)
0x805: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x806: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x807: PushEmpty(int, string)
0x808: Stack[-1] = "razor"
0x809: Call2 0x866

0x80a: Pop(1)
0x80b: Push((int) 0)
0x80c: Push((int) 1)
0x80d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: GOTO 0x865

0x810: PushEmpty(int, int)
0x811: Stack[-2] = (int) 0
0x812: Push((int) 50)
0x813: PushEmpty(int)
0x814: Call2 0x753

0x815: Pop(0)
0x816: Push((int) 50)
0x817: Pop(2); Push(Stack[-2] * Stack[-1]);
0x818: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x819: Call2 0x76f

0x81a: Pop(2)
0x81b: Push((int) 7)
0x81c: @ irand(Stack[-3], Stack[-1])
0x81d: Pop(1)
0x81e: Push((int) 0)
0x81f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x821: PushEmpty(int, string)
0x822: Stack[-1] = "beads"
0x823: Call2 0x866

0x824: Pop(1)
0x825: Push((int) 0)
0x826: Push((int) 1)
0x827: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: GOTO 0x865

0x82a: Push((int) 1)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x82d: PushEmpty(int, string)
0x82e: Stack[-1] = "bracelet"
0x82f: Call2 0x866

0x830: Pop(1)
0x831: Push((int) 0)
0x832: Push((int) 1)
0x833: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x834: Pop(3)
0x835: GOTO 0x865

0x836: Push((int) 2)
0x837: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x838: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x839: PushEmpty(int, string)
0x83a: Stack[-1] = "ear_ring"
0x83b: Call2 0x866

0x83c: Pop(1)
0x83d: Push((int) 0)
0x83e: Push((int) 1)
0x83f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x840: Pop(3)
0x841: GOTO 0x865

0x842: Push((int) 3)
0x843: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x845: PushEmpty(int, string)
0x846: Stack[-1] = "gold_ring"
0x847: Call2 0x866

0x848: Pop(1)
0x849: Push((int) 0)
0x84a: Push((int) 1)
0x84b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: GOTO 0x865

0x84e: Push((int) 4)
0x84f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x851: PushEmpty(int, string)
0x852: Stack[-1] = "silver_ring"
0x853: Call2 0x866

0x854: Pop(1)
0x855: Push((int) 0)
0x856: Push((int) 1)
0x857: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x858: Pop(3)
0x859: GOTO 0x865

0x85a: Push((int) 5)
0x85b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x85d: PushEmpty(int, string)
0x85e: Stack[-1] = "flower"
0x85f: Call2 0x866

0x860: Pop(1)
0x861: Push((int) 0)
0x862: Push((int) 1)
0x863: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: Return(); Pop(4)

0x866: PushEmpty(int, int)
0x867: @ GetInvItemByName(Stack[-1], Stack[-3])
0x868: Pop(0)
0x869: Stack[-4] = Stack[-1]
0x86a: Return(); Pop(2)

0x86b: PushEmpty()
0x86c: PushEmpty(object)
0x86d: Stack[-1] = Stack[-2]
0x86e: Push(-1, 0); TaskCall(0)
0x86f: Call2 0x0

0x870: Pop(-1, 0); TaskReturn
0x871: Pop(1)
0x872: Return(); Pop(0)

0x873: PushEmpty(float, float)
0x874: Push("health")
0x875: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x877: Push("health")
0x878: @ GetProperty(Stack[-1], Stack[-2])
0x879: Pop(1)
0x87a: Push((int) 0)
0x87b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87d: @ SignalDeath(Stack[-4])
0x87e: Pop(0)
0x87f: Return(); Pop(2)

0x880: PushEmpty()
0x881: PushEmpty(object)
0x882: Stack[-1] = Stack[-2]
0x883: Call2 0x86b

0x884: Pop(1)
0x885: Return(); Pop(0)

0x886: PushEmpty()
0x887: PushEmpty(object, int, float)
0x888: Stack[-3] = Stack[-7]
0x889: Stack[-2] = Stack[-6]
0x88a: Stack[-1] = Stack[-5]
0x88b: Call2 0x681

0x88c: Pop(3)
0x88d: Return(); Pop(0)

0x88e: PushEmpty()
0x88f: PushEmpty(object, int, float, cvector, cvector)
0x890: Stack[-5] = Stack[-11]
0x891: Stack[-4] = Stack[-10]
0x892: Stack[-3] = Stack[-9]
0x893: Stack[-2] = Stack[-7]
0x894: Stack[-1] = Stack[-6]
0x895: Call2 0x6c5

0x896: Pop(5)
0x897: Return(); Pop(0)

0x898: PushEmpty()
0x899: Push("unholster")
0x89a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89c: PushEmpty(bool, object)
0x89d: Stack[-1] = Stack[-4]
0x89e: Call2 0x9b4

0x89f: Stack[-5] = Stack[-2]
0x8a0: Pop(2)
0x8a1: Return(); Pop(0)

0x8a2: GOTO 0x8b6

0x8a3: Push("player_shot")
0x8a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a5: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8a6: PushEmpty(bool, object)
0x8a7: Stack[-1] = Stack[-4]
0x8a8: Call2 0x9c1

0x8a9: Stack[-5] = Stack[-2]
0x8aa: Pop(2)
0x8ab: Return(); Pop(0)

0x8ac: GOTO 0x8b6

0x8ad: Push("battle")
0x8ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b0: PushEmpty(bool, object)
0x8b1: Stack[-1] = Stack[-4]
0x8b2: Call2 0x9d8

0x8b3: Stack[-5] = Stack[-2]
0x8b4: Pop(2)
0x8b5: Return(); Pop(0)

0x8b6: Stack[-3] = (bool) 0
0x8b7: Return(); Pop(0)

0x8b8: PushEmpty()
0x8b9: Push("unholster")
0x8ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8bc: PushEmpty(object)
0x8bd: Stack[-1] = Stack[-3]
0x8be: Call2 0x9b9

0x8bf: Pop(1)
0x8c0: GOTO 0x8d0

0x8c1: Push("player_shot")
0x8c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c4: PushEmpty(object)
0x8c5: Stack[-1] = Stack[-3]
0x8c6: Call2 0x9d0

0x8c7: Pop(1)
0x8c8: GOTO 0x8d0

0x8c9: Push("battle")
0x8ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cc: PushEmpty(object)
0x8cd: Stack[-1] = Stack[-3]
0x8ce: Call2 0x9df

0x8cf: Pop(1)
0x8d0: Return(); Pop(0)

0x8d1: PushEmpty(bool, bool)
0x8d2: PushEmpty(bool)
0x8d3: Stack[-1] = (bool) 0
0x8d4: PushEmpty(bool, object)
0x8d5: Stack[-1] = Stack[-6]
0x8d6: Call2 0x9b4

0x8d7: Pop(1)
0x8d8: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d9: PushEmpty(bool, object)
0x8da: Stack[-1] = Stack[-6]
0x8db: Call2 0x603

0x8dc: Pop(1)
0x8dd: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8de: Stack[-1] = (bool) 1
0x8df: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8e0: @@ IsWeaponHolstered(Stack[-1])
0x8e1: Pop(0)
0x8e2: Pop(0); Push((bool) Stack[-1] == 0)
0x8e3: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8e4: Stack[-4] = (bool) 1
0x8e5: Return(); Pop(2)

0x8e6: Stack[-4] = (bool) 0
0x8e7: Return(); Pop(2)

0x8e8: PushEmpty()
0x8e9: PushEmpty(object)
0x8ea: Stack[-1] = Stack[-2]
0x8eb: Call2 0x9b9

0x8ec: Pop(1)
0x8ed: Return(); Pop(0)

0x8ee: PushEmpty()
0x8ef: PushEmpty(bool, object)
0x8f0: Stack[-1] = Stack[-3]
0x8f1: Call2 0x603

0x8f2: Pop(1)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f4: PushEmpty(object)
0x8f5: Call2 0x717

0x8f6: Pop(0)
0x8f7: Push((float)-0.05)
0x8f8: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(2)
0x8fa: Return(); Pop(0)

0x8fb: PushEmpty(object, object)
0x8fc: Push("heal")
0x8fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x8ff: Push("player")
0x900: @ FindActor(Stack[-2], Stack[-1])
0x901: Pop(1)
0x902: PushEmpty(bool, object)
0x903: Stack[-1] = Stack[-3]
0x904: Call2 0x9e5

0x905: Stack[-6] = Stack[-2]
0x906: Pop(2)
0x907: Return(); Pop(2)

0x908: Stack[-1] = 0
0x909: Stack[-4] = (bool) 0
0x90a: Return(); Pop(2)

0x90b: PushEmpty(object, object)
0x90c: Push("heal")
0x90d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x90f: Push("player")
0x910: @ FindActor(Stack[-2], Stack[-1])
0x911: Pop(1)
0x912: PushEmpty(object)
0x913: Stack[-1] = Stack[-2]
0x914: Call2 0x9e8

0x915: Pop(1)
0x916: Stack[-1] = 0
0x917: Return(); Pop(2)

0x918: PushEmpty()
0x919: PushEmpty(bool)
0x91a: Call2 0xa24

0x91b: Pop(0)
0x91c: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91d: Stack[-2] = (int) 2
0x91e: GOTO 0x920

0x91f: Stack[-2] = (int) 0
0x920: Return(); Pop(0)

0x921: PushEmpty()
0x922: PushEmpty(object)
0x923: Stack[-1] = Stack[-2]
0x924: Push(-1, 1); TaskCall(2)
0x925: Call2 0x1bf

0x926: Pop(-1, 1); TaskReturn
0x927: Pop(1)
0x928: Return(); Pop(0)

0x929: PushEmpty()
0x92a: PushEmpty(bool, object)
0x92b: Stack[-1] = Stack[-3]
0x92c: Call2 0x63d

0x92d: Pop(1)
0x92e: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92f: Stack[-2] = (int) 2
0x930: GOTO 0x932

0x931: Stack[-2] = (int) 0
0x932: Return(); Pop(0)

0x933: PushEmpty()
0x934: PushEmpty(object)
0x935: Stack[-1] = Stack[-2]
0x936: Push(-1, 3); TaskCall(3)
0x937: Call2 0x2d2

0x938: Pop(-1, 3); TaskReturn
0x939: Pop(1)
0x93a: Return(); Pop(0)

0x93b: PushEmpty()
0x93c: PushEmpty(bool, object)
0x93d: Stack[-1] = Stack[-4]
0x93e: Call2 0x63d

0x93f: Pop(1)
0x940: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x941: Stack[-3] = (int) 2
0x942: GOTO 0x944

0x943: Stack[-3] = (int) 0
0x944: Return(); Pop(0)

0x945: PushEmpty()
0x946: PushEmpty(object)
0x947: Stack[-1] = Stack[-2]
0x948: Push(-1, 3); TaskCall(4)
0x949: Call2 0x3ce

0x94a: Pop(-1, 3); TaskReturn
0x94b: Pop(1)
0x94c: Return(); Pop(0)

0x94d: PushEmpty(string, bool, string, bool)
0x94e: PushEmpty(bool, object, string)
0x94f: Stack[-2] = Stack[-9]
0x950: Stack[-1] = "class"
0x951: Call2 0x608

0x952: Pop(2)
0x953: Pop(1); Push((bool) Stack[-1] == 0)
0x954: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x955: Stack[-8] = (bool) 0
0x956: Return(); Pop(4)

0x957: Push("class")
0x958: @@ GetProperty(Stack[-1], Stack[-3])
0x959: Pop(1)
0x95a: Push("rat")
0x95b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95d: Stack[-8] = (bool) 0
0x95e: Return(); Pop(4)

0x95f: GOTO 0x96b

0x960: Push("rat_big")
0x961: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x962: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x963: Stack[-8] = (bool) 0
0x964: Return(); Pop(4)

0x965: GOTO 0x96b

0x966: Push("dog")
0x967: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x968: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x969: Stack[-8] = (bool) 0
0x96a: Return(); Pop(4)

0x96b: @ CanSee(Stack[-1], Stack[-7])
0x96c: Pop(0)
0x96d: PushEmpty(bool)
0x96e: Stack[-1] = (bool) 1
0x96f: Push(Stack[-2])
0x970: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x971: PushEmpty(float, object)
0x972: Stack[-1] = Stack[-10]
0x973: Call2 0x5fb

0x974: Pop(1)
0x975: Pop(0); Push(Stack[-7] * Stack[-7]);
0x976: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x977: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x978: Stack[-1] = (bool) 0
0x979: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97a: Stack[-8] = (bool) 1
0x97b: Return(); Pop(4)

0x97c: @ CanSee(Stack[-1], Stack[-6])
0x97d: Pop(0)
0x97e: PushEmpty(bool)
0x97f: Stack[-1] = (bool) 1
0x980: Push(Stack[-2])
0x981: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x982: PushEmpty(float, object)
0x983: Stack[-1] = Stack[-9]
0x984: Call2 0x5fb

0x985: Pop(1)
0x986: Pop(0); Push(Stack[-7] * Stack[-7]);
0x987: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x989: Stack[-1] = (bool) 0
0x98a: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x98b: Stack[-8] = (bool) 1
0x98c: Return(); Pop(4)

0x98d: Stack[-8] = (bool) 0
0x98e: Return(); Pop(4)

0x98f: PushEmpty()
0x990: Stack[-2] = (int) 2
0x991: Return(); Pop(0)

0x992: PushEmpty()
0x993: PushEmpty(object)
0x994: Stack[-1] = Stack[-2]
0x995: Call2 0x9f9

0x996: Pop(1)
0x997: Return(); Pop(0)

0x998: Return(); Pop(0)

0x999: PushEmpty(bool, bool)
0x99a: Push("Received steal")
0x99b: @ Trace(Stack[-1])
0x99c: Pop(1)
0x99d: @ CanSee(Stack[-1], Stack[-3])
0x99e: Pop(0)
0x99f: Push(Stack[-1])
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a1: PushEmpty(int, object)
0x9a2: Stack[-1] = Stack[-5]
0x9a3: Call2 0x929

0x9a4: Stack[-6] = Stack[-2]
0x9a5: Pop(2)
0x9a6: Return(); Pop(2)

0x9a7: Stack[-4] = (int) 0
0x9a8: Return(); Pop(2)

0x9a9: PushEmpty()
0x9aa: PushEmpty(object)
0x9ab: Stack[-1] = Stack[-2]
0x9ac: Call2 0x933

0x9ad: Pop(1)
0x9ae: Return(); Pop(0)

0x9af: PushEmpty()
0x9b0: Stack[-3] = (int) 0
0x9b1: Return(); Pop(0)

0x9b2: PushEmpty()
0x9b3: Return(); Pop(0)

0x9b4: PushEmpty(bool, bool)
0x9b5: @ CanSee(Stack[-1], Stack[-3])
0x9b6: Pop(0)
0x9b7: Stack[-4] = Stack[-1]
0x9b8: Return(); Pop(2)

0x9b9: PushEmpty()
0x9ba: PushEmpty(object)
0x9bb: Stack[-1] = Stack[-2]
0x9bc: Push(-1, 3); TaskCall(5)
0x9bd: Call2 0x490

0x9be: Pop(-1, 3); TaskReturn
0x9bf: Pop(1)
0x9c0: Return(); Pop(0)

0x9c1: PushEmpty(bool, bool)
0x9c2: @ CanSee(Stack[-1], Stack[-3])
0x9c3: Pop(0)
0x9c4: Stack[-4] = (bool) 1
0x9c5: Push(Stack[-1])
0x9c6: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9c7: PushEmpty(float, object)
0x9c8: Stack[-1] = Stack[-5]
0x9c9: Call2 0x5fb

0x9ca: Pop(1)
0x9cb: Push((int) 4000000)
0x9cc: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9ce: Stack[-4] = (bool) 0
0x9cf: Return(); Pop(2)

0x9d0: PushEmpty()
0x9d1: PushEmpty(object)
0x9d2: Stack[-1] = Stack[-2]
0x9d3: Push(-1, 3); TaskCall(6)
0x9d4: Call2 0x552

0x9d5: Pop(-1, 3); TaskReturn
0x9d6: Pop(1)
0x9d7: Return(); Pop(0)

0x9d8: PushEmpty()
0x9d9: PushEmpty(bool, object)
0x9da: Stack[-1] = Stack[-3]
0x9db: Call2 0x9c1

0x9dc: Stack[-4] = Stack[-2]
0x9dd: Pop(2)
0x9de: Return(); Pop(0)

0x9df: PushEmpty()
0x9e0: PushEmpty(object)
0x9e1: Stack[-1] = Stack[-2]
0x9e2: Call2 0x9d0

0x9e3: Pop(1)
0x9e4: Return(); Pop(0)

0x9e5: PushEmpty()
0x9e6: Stack[-2] = (bool) 0
0x9e7: Return(); Pop(0)

0x9e8: PushEmpty()
0x9e9: Return(); Pop(0)

0x9ea: PushEmpty(string, string)
0x9eb: Stack[-1] = "idle"
0x9ec: Push(Stack[-3])
0x9ed: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ee: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9ef: Stack[-4] = Stack[-1]
0x9f0: Return(); Pop(2)

0x9f1: Push(GlobalVars[0])
0x9f2: Stack[-1] = (bool) 0
0x9f3: GlobalVars[0] = Stack[-1]; Pop(1)
0x9f4: PushEmpty(bool)
0x9f5: Stack[-1] = (bool) 0
0x9f6: Call2 0x7b7

0x9f7: Pop(1)
0x9f8: Return(); Pop(0)

0x9f9: PushEmpty(bool, bool)
0x9fa: Push(GlobalVars[0])
0x9fb: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9fc: @ IsOverrideActive(Stack[-1])
0x9fd: Pop(0)
0x9fe: Pop(0); Push((bool) Stack[-1] == 0)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa00: PushEmpty(object)
0xa01: Stack[-1] = Stack[-4]
0xa02: Call2 0x762

0xa03: Pop(1)
0xa04: Return(); Pop(2)

0xa05: Return(); Pop(2)

0xa06: PushEmpty(int, bool, int, int, bool, int)
0xa07: Stack[-3] = (int) 0
0xa08: Push("all")
0xa09: PushEmpty(string, int)
0xa0a: Stack[-1] = Stack[-6]
0xa0b: Call2 0x9ea

0xa0c: Pop(1)
0xa0d: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0xa0e: Pop(2)
0xa0f: Pop(0); Push((bool) Stack[-2] == 0)
0xa10: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa11: GOTO 0xa15

0xa12: Push((int) 1)
0xa13: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xa14: GOTO 0xa08

0xa15: @ irand(Stack[-1], Stack[-3])
0xa16: Pop(0)
0xa17: Push("all")
0xa18: PushEmpty(string, int)
0xa19: Stack[-1] = Stack[-4]
0xa1a: Call2 0x9ea

0xa1b: Pop(1)
0xa1c: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1d: Pop(2)
0xa1e: @ WaitForAnimEnd()
0xa1f: Pop(0)
0xa20: Return(); Pop(6)

0xa21: @ StopAnimation()
0xa22: Pop(0)
0xa23: Return(); Pop(0)

0xa24: Stack[-1] = (bool) 1
0xa25: Return(); Pop(0)

0xa26: PushEmpty()
0xa27: PushEmpty(bool, object, object, float)
0xa28: Stack[-3] = Stack[-7]
0xa29: Stack[-2] = Stack[-6]
0xa2a: Stack[-1] = (float) 500.0
0xa2b: Call2 0x94d

0xa2c: Pop(3)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa2e: Push("ToDie")
0xa2f: Push((bool) 1)
0xa30: @ SetProperty(Stack[-2], Stack[-1])
0xa31: Pop(2)
0xa32: Stack[-4] = (bool) 1
0xa33: Return(); Pop(0)

0xa34: Stack[-4] = (bool) 0
0xa35: Return(); Pop(0)

0xa36: PushEmpty()
0xa37: PushEmpty(bool, object)
0xa38: Stack[-1] = Stack[-3]
0xa39: Call2 0x603

0xa3a: Pop(1)
0xa3b: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa3c: PushEmpty(object)
0xa3d: Call2 0x717

0xa3e: Pop(0)
0xa3f: Push((float)-0.1)
0xa40: Push((bool) 1)
0xa41: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa42: Pop(3)
0xa43: PushEmpty(bool)
0xa44: Stack[-1] = (bool) 0
0xa45: Call2 0x7b7

0xa46: Pop(1)
0xa47: PushEmpty()
0xa48: Call2 0x79f

0xa49: Pop(0)
0xa4a: Push(GlobalVars[0])
0xa4b: Stack[-1] = (bool) 1
0xa4c: GlobalVars[0] = Stack[-1]; Pop(1)
0xa4d: Push((int) 50)
0xa4e: Push((int) 40)
0xa4f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xa50: Pop(2)
0xa51: Return(); Pop(0)

