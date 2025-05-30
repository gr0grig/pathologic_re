GlobalVarCount = 0

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
	rifle_ammo
	rusk
	bandage
	tourniquet
	health

Import:
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
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
	GetBrightness (1 args)
	IsInWalkMode (1 args)
	SwitchToRun (0 args)
	SwitchToWalk (0 args)
	KillTimer (1 args)
	rand (2 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	irand (2 args)
	AddActorByType (6 args)
	AddItem (3 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (4 args)

RunOp = 0xa5
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x20 Vars = (object)
		EVENT_22 Op = 0x9f Vars = (object, int, float, float)
		EVENT_16 Op = 0xa1 Vars = (object, string)
		EVENT_41 Op = 0xa3 Vars = (object)
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_7 Op = 0xb4 Vars = (int)
		EVENT_41 Op = 0xce Vars = (object)
		EVENT_17 Op = 0xd7 Vars = (object)
		EVENT_1 Op = 0xe7 Vars = (object)
		EVENT_3 Op = 0xf5 Vars = (object)
		EVENT_10 Op = 0x143 Vars = (object)
		EVENT_28 Op = 0x147 Vars = ()
	GTASK_2  Params = 0
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x1bf Vars = (int)
		EVENT_41 Op = 0x1fa Vars = (object)

Events:
EVENT_22 Op = 0x3db Vars = (object, int, float, float)
EVENT_43 Op = 0x3e3 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x3ed Vars = (object, string)
EVENT_41 Op = 0x3fa Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0x21f

0x4: Pop(1)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: PushEmpty()
0x7: Call2 0x3aa

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x392

0xb: Pop(0)
0xc: PushEmpty(object)
0xd: Stack[-1] = Stack[-2]
0xe: Call2 0x11

0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: EventDisable(0)
0x13: PushEmpty(object)
0x14: Stack[-1] = Stack[-2]
0x15: Call2 0x2a

0x16: Pop(1)
0x17: Push((int) 50)
0x18: Push((int) 40)
0x19: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: EventEnable(0)
0x1c: @ Hold()
0x1d: Pop(0)
0x1e: GOTO 0x1c

0x1f: Return(); Pop(0)

0x20: PushEmpty(bool, bool)
0x21: @ IsOverrideActive(Stack[-1])
0x22: Pop(0)
0x23: Pop(0); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x355

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2b: Pop(0); Push((bool) Stack[-21] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2d: PushEmpty(string)
0x2e: Stack[-1] = "fdie"
0x2f: Call2 0x85

0x30: Pop(1)
0x31: GOTO 0x84

0x32: @@ GetPosition(Stack[-10])
0x33: Pop(0)
0x34: @ GetPosition(Stack[-9])
0x35: Pop(0)
0x36: @ GetDirection(Stack[-8])
0x37: Pop(0)
0x38: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x39: Push(CvectorIndex(Stack[-7], 0))
0x3a: Push(CvectorIndex(Stack[-9], 0))
0x3b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c: Push(CvectorIndex(Stack[-8], 2))
0x3d: Push(CvectorIndex(Stack[-10], 2))
0x3e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push((int) 0)
0x41: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x43: Stack[-6] = "fdie"
0x44: GOTO 0x46

0x45: Stack[-6] = "bdie"
0x46: @ RemoveRTEnvelope()
0x47: Pop(0)
0x48: @ SetDeathState()
0x49: Pop(0)
0x4a: @ Stop()
0x4b: Pop(0)
0x4c: @ StopAsync()
0x4d: Pop(0)
0x4e: Stack[-5] = Stack[-21]
0x4f: Push("GetScriptProperty")
0x50: Push((int) 2)
0x51: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x52: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x53: Push("Owner")
0x54: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x55: Pop(1)
0x56: Push(Stack[-4])
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: Push("Owner")
0x59: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-5] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-5] = Stack[-21]
0x5e: Push("@GetEyesHeight")
0x5f: Push((int) 1)
0x60: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x61: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x62: @@ GetEyesHeight(Stack[-2])
0x63: Pop(0)
0x64: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x65: Push(CvectorIndex(Stack[-1], 1))
0x66: Stack[-1] = Stack[-3]
0x67: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x68: Push("head")
0x69: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6a: Pop(1)
0x6b: Stack[-3] = (bool) 1
0x6c: GOTO 0x6e

0x6d: Stack[-3] = (bool) 0
0x6e: PushEmpty(string)
0x6f: Stack[-1] = Stack[-7]
0x70: Call2 0x309

0x71: Pop(1)
0x72: Push("all")
0x73: @ PlayAnimation(Stack[-1], Stack[-7])
0x74: Pop(1)
0x75: @ WaitForAnimEnd()
0x76: Pop(0)
0x77: Push(Stack[-3])
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: @ StopAsync()
0x7a: Pop(0)
0x7b: Push("head")
0x7c: @ UnlookAsync(Stack[-1])
0x7d: Pop(1)
0x7e: Push("all")
0x7f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x80: Pop(1)
0x81: @ RemoveEnvelope()
0x82: Pop(0)
0x83: Stack[-5] = 0
0x84: Return(); Pop(20)

0x85: PushEmpty()
0x86: @ RemoveRTEnvelope()
0x87: Pop(0)
0x88: @ SetDeathState()
0x89: Pop(0)
0x8a: @ Stop()
0x8b: Pop(0)
0x8c: @ StopAsync()
0x8d: Pop(0)
0x8e: @ StopSecondaryAnimation()
0x8f: Pop(0)
0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[-2]
0x92: Call2 0x309

0x93: Pop(1)
0x94: Push("all")
0x95: @ PlayAnimation(Stack[-1], Stack[-2])
0x96: Pop(1)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push("all")
0x9a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: @ RemoveEnvelope()
0x9d: Pop(0)
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: Return(); Pop(0)

0xa5: Push((int) 110)
0xa6: Push((float)0.3)
0xa7: @ SetTimer(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: PushEmpty()
0xaa: Call2 0x103

0xab: Pop(0)
0xac: GOTO 0xa5

0xad: Return(); Pop(0)

0xae: PushEmpty(float, float)
0xaf: @ GetBrightness(Stack[-1])
0xb0: Pop(0)
0xb1: Push((float)0.5)
0xb2: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0xb3: Return(); Pop(2)

0xb4: PushEmpty(bool, bool)
0xb5: Push((int) 110)
0xb6: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(2)

0xb9: @ IsInWalkMode(Stack[-1])
0xba: Pop(0)
0xbb: Push(Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbd: PushEmpty(bool)
0xbe: Call2 0xae

0xbf: Pop(0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc1: @ SwitchToRun()
0xc2: Pop(0)
0xc3: GOTO 0xc6

0xc4: @ SwitchToWalk()
0xc5: Pop(0)
0xc6: Return(); Pop(2)

0xc7: PushEmpty()
0xc8: Call2 0x14a

0xc9: Pop(0)
0xca: Push((int) 110)
0xcb: @ KillTimer(Stack[-1])
0xcc: Pop(1)
0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: PushEmpty()
0xd0: Call2 0xc7

0xd1: Pop(0)
0xd2: PushEmpty(object)
0xd3: Stack[-1] = Stack[-2]
0xd4: Call2 0x3fa

0xd5: Pop(1)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[-3]
0xda: Call2 0x259

0xdb: Pop(1)
0xdc: Pop(1); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Call2 0xc7

0xe1: Pop(0)
0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[-2]
0xe4: Call2 0x40c

0xe5: Pop(1)
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[-3]
0xea: Call2 0x41a

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xed: PushEmpty()
0xee: Call2 0xc7

0xef: Pop(0)
0xf0: PushEmpty(object)
0xf1: Stack[-1] = Stack[-2]
0xf2: Call2 0x427

0xf3: Pop(1)
0xf4: Return(); Pop(0)

0xf5: PushEmpty()
0xf6: PushEmpty(bool, object)
0xf7: Stack[-1] = Stack[-3]
0xf8: Call2 0x42f

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfb: PushEmpty()
0xfc: Call2 0xc7

0xfd: Pop(0)
0xfe: PushEmpty(object)
0xff: Stack[-1] = Stack[-2]
0x100: Call2 0x43c

0x101: Pop(1)
0x102: Return(); Pop(0)

0x103: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x105: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x106: Push((float)0.5)
0x107: @ rand(Stack[-7], Stack[-1])
0x108: Pop(1)
0x109: @ Sleep(Stack[-6])
0x10a: Pop(0)
0x10b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x10d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10f: @ GetPosition(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(float)
0x112: Call2 0x13e

0x113: Pop(0)
0x114: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x115: Pop(1)
0x116: Push(Stack[-3])
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: GOTO 0x11d

0x119: Push((int) 1)
0x11a: @ Sleep(Stack[-1])
0x11b: Pop(1)
0x11c: GOTO 0x10f

0x11d: GOTO 0x11f

0x11e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x11f: PushEmpty(object, cvector)
0x120: Stack[-1] = Stack[-7]
0x121: Call2 0x151

0x122: Stack[-4] = Stack[-2]
0x123: Pop(2)
0x124: Pop(0); Push(( Stack[-2] != 0 )
0x125: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x126: @ RotatePath(Stack[-2], Stack[-1])
0x127: Pop(0)
0x128: Push(Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x12a: PushEmpty(bool)
0x12b: Call2 0xae

0x12c: Pop(0)
0x12d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x12e: Pop(1)
0x12f: Stack[-2] = 0
0x130: Push(Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty()
0x133: Push(-0, 0); TaskCall(2)
0x134: Call2 0x157

0x135: Pop(-0, 0); TaskReturn
0x136: Pop(0)
0x137: GOTO 0x13b

0x138: Push((int) 1)
0x139: @ Sleep(Stack[-1])
0x13a: Pop(1)
0x13b: Stack[-2] = 0
0x13c: GOTO 0x10b

0x13d: Return(); Pop(12)

0x13e: PushEmpty(float, float)
0x13f: @ GetCameraFarDistance(Stack[-1])
0x140: Pop(0)
0x141: Stack[-3] = Stack[-1]
0x142: Return(); Pop(2)

0x143: PushEmpty()
0x144: @ RequestClearPath(Stack[-1])
0x145: Pop(0)
0x146: Return(); Pop(0)

0x147: @ Stop()
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x14b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14c: @ Stop()
0x14d: Pop(0)
0x14e: @ StopGroup0()
0x14f: Pop(0)
0x150: Return(); Pop(0)

0x151: PushEmpty(object, object)
0x152: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x153: Pop(0)
0x154: Stack[-4] = Stack[-1]
0x155: Return(); Pop(2)

0x156: Stack[-1] = 0
0x157: Return(); Pop(0)

0x158: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x159: @ GetPosition(Stack[-6])
0x15a: Pop(0)
0x15b: @@ GetPosition(Stack[-5])
0x15c: Pop(0)
0x15d: @ GetDirection(Stack[-4])
0x15e: Pop(0)
0x15f: PushEmpty(cvector, cvector)
0x160: PushEmpty(cvector, cvector)
0x161: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x162: Call2 0x338

0x163: Pop(1)
0x164: Push((float)0.75)
0x165: Pop(1); Push(Stack[-8] * Stack[-1]);
0x166: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x167: Call2 0x338

0x168: Stack[-5] = Stack[-2]
0x169: Pop(2)
0x16a: Push((int) 32)
0x16b: Push((float)7000.0)
0x16c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: Push((int) 100)
0x16f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x170: Push((int) 0)
0x171: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (int) 0
0x174: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x175: Return(); Pop(12)

0x176: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x177: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x178: PushEmpty(cvector, float)
0x179: Stack[-1] = (float) 1.74533
0x17a: Call2 0x158

0x17b: Stack[-7] = Stack[-2]
0x17c: Pop(2)
0x17d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x17e: Push((float)2500.0)
0x17f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x181: PushEmpty(cvector, float)
0x182: Stack[-1] = (float) 2.61799
0x183: Call2 0x158

0x184: Stack[-7] = Stack[-2]
0x185: Pop(2)
0x186: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x187: Push((float)2500.0)
0x188: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18a: Push("Can't retreat, distance: ")
0x18b: Pop(0); Push(Sqrt(Stack[-5]))
0x18c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18d: @ Trace(Stack[-1])
0x18e: Pop(1)
0x18f: Push((float)0.5)
0x190: @ Sleep(Stack[-1])
0x191: Pop(1)
0x192: Return(); Pop(10)

0x193: Push(CvectorIndex(Stack[-5], 0))
0x194: Push(CvectorIndex(Stack[-6], 2))
0x195: @ Rotate(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: PushEmpty(cvector)
0x198: Call2 0x213

0x199: Pop(0)
0x19a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x19b: Push((int) 120)
0x19c: Push((float)0.5)
0x19d: @ SetTimer(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a0: Push((int) 1)
0x1a1: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x1a2: Pop(1)
0x1a3: Push(Stack[-3])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a5: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: GOTO 0x1be

0x1a8: GOTO 0x1bc

0x1a9: PushEmpty(cvector, float)
0x1aa: Stack[-1] = (float) 2.61799
0x1ab: Call2 0x158

0x1ac: Stack[-4] = Stack[-2]
0x1ad: Pop(2)
0x1ae: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1af: Push((float)2500.0)
0x1b0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b2: PushEmpty(cvector)
0x1b3: Call2 0x213

0x1b4: Pop(0)
0x1b5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x1b6: Push((int) 120)
0x1b7: Push((float)0.5)
0x1b8: @ SetTimer(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: GOTO 0x1bc

0x1bb: GOTO 0x1be

0x1bc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x1be: Return(); Pop(10)

0x1bf: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x1c0: Push((int) 120)
0x1c1: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(8)

0x1c4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c6: @ Stop()
0x1c7: Pop(0)
0x1c8: Push((int) 1)
0x1c9: @ KillTimer(Stack[-1])
0x1ca: Pop(1)
0x1cb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1cc: GOTO 0x1f2

0x1cd: @ GetDirection(Stack[-4])
0x1ce: Pop(0)
0x1cf: Push((float)7000.0)
0x1d0: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x1d1: Pop(1)
0x1d2: PushEmpty(cvector, float)
0x1d3: Stack[-1] = (float) 1.74533
0x1d4: Call2 0x158

0x1d5: Stack[-4] = Stack[-2]
0x1d6: Pop(2)
0x1d7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 0
0x1da: Push((float)2500.0)
0x1db: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dd: PushEmpty(bool)
0x1de: Stack[-1] = (bool) 1
0x1df: Pop(0); Push(Stack[-5] * Stack[-5]);
0x1e0: Push((float)2.25)
0x1e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e2: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e4: PushEmpty(bool)
0x1e5: Call2 0x203

0x1e6: Pop(0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Stack[-1] = (bool) 0
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 1
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ec: @ Stop()
0x1ed: Pop(0)
0x1ee: PushEmpty(cvector)
0x1ef: Call2 0x213

0x1f0: Pop(0)
0x1f1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x1f2: Return(); Pop(8)

0x1f3: @ Stop()
0x1f4: Pop(0)
0x1f5: Push((int) 120)
0x1f6: @ KillTimer(Stack[-1])
0x1f7: Pop(1)
0x1f8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: PushEmpty()
0x1fc: Call2 0x1f3

0x1fd: Pop(0)
0x1fe: PushEmpty(object)
0x1ff: Stack[-1] = Stack[-2]
0x200: Call2 0x3fa

0x201: Pop(1)
0x202: Return(); Pop(0)

0x203: PushEmpty(cvector, cvector, cvector, cvector)
0x204: @ GetDirection(Stack[-2])
0x205: Pop(0)
0x206: PushEmpty(cvector, object)
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0x218

0x209: Stack[-3] = Stack[-2]
0x20a: Pop(2)
0x20b: PushEmpty(float, cvector, cvector)
0x20c: Stack[-2] = Stack[-5]
0x20d: Stack[-1] = Stack[-4]
0x20e: Call2 0x347

0x20f: Pop(2)
0x210: Push((float)-0.34202)
0x211: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x212: Return(); Pop(4)

0x213: PushEmpty(cvector, cvector)
0x214: @ GetPosition(Stack[-1])
0x215: Pop(0)
0x216: Stack[-3] = Stack[-1]
0x217: Return(); Pop(2)

0x218: PushEmpty(cvector, cvector, cvector, cvector)
0x219: @ GetPosition(Stack[-2])
0x21a: Pop(0)
0x21b: @@ GetPosition(Stack[-1])
0x21c: Pop(0)
0x21d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x21e: Return(); Pop(4)

0x21f: PushEmpty(bool, bool)
0x220: @ IsPlayerActor(Stack[-3], Stack[-1])
0x221: Pop(0)
0x222: Stack[-4] = Stack[-1]
0x223: Return(); Pop(2)

0x224: PushEmpty(bool, bool)
0x225: Push("HasProperty")
0x226: Push((int) 2)
0x227: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x228: Pop(1); Push((bool) Stack[-1] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22a: Stack[-5] = (bool) 0
0x22b: Return(); Pop(2)

0x22c: @@ HasProperty(Stack[-3], Stack[-1])
0x22d: Pop(0)
0x22e: Stack[-5] = Stack[-1]
0x22f: Return(); Pop(2)

0x230: PushEmpty(bool, bool)
0x231: @@ IsDead(Stack[-1])
0x232: Pop(0)
0x233: Stack[-4] = Stack[-1]
0x234: Return(); Pop(2)

0x235: PushEmpty(object, object, object, object)
0x236: Pop(0); Push((bool) Stack[-5] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: Stack[-6] = (bool) 0
0x239: Return(); Pop(4)

0x23a: PushEmpty(bool)
0x23b: Stack[-1] = (bool) 0
0x23c: Push("IsDead")
0x23d: Push((int) 1)
0x23e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x23f: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x240: PushEmpty(bool, object)
0x241: Stack[-1] = Stack[-8]
0x242: Call2 0x230

0x243: Pop(1)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: Stack[-6] = (bool) 0
0x248: Return(); Pop(4)

0x249: @ GetScene(Stack[-2])
0x24a: Pop(0)
0x24b: Pop(0); Push((bool) Stack[-2] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-6] = (bool) 0
0x24e: Return(); Pop(4)

0x24f: @@ GetScene(Stack[-1])
0x250: Pop(0)
0x251: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: Stack[-6] = (bool) 0
0x254: Return(); Pop(4)

0x255: Stack[-6] = (bool) 1
0x256: Return(); Pop(4)

0x257: Stack[-1] = 0
0x258: Stack[-2] = 0
0x259: PushEmpty(int, int)
0x25a: PushEmpty(bool, object)
0x25b: Stack[-1] = Stack[-5]
0x25c: Call2 0x235

0x25d: Pop(1)
0x25e: Pop(1); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-4] = (bool) 0
0x261: Return(); Pop(2)

0x262: PushEmpty(bool, object, string)
0x263: Stack[-2] = Stack[-6]
0x264: Stack[-1] = "noaccess"
0x265: Call2 0x224

0x266: Pop(2)
0x267: Pop(1); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-4] = (bool) 1
0x26a: Return(); Pop(2)

0x26b: Push("noaccess")
0x26c: @@ GetProperty(Stack[-1], Stack[-2])
0x26d: Pop(1)
0x26e: Push((int) 0)
0x26f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x270: Return(); Pop(2)

0x271: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x272: Pop(0); Push((bool) Stack[-15] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Return(); Pop(14)

0x275: @ IsDead(Stack[-7])
0x276: Pop(0)
0x277: Push(Stack[-7])
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Return(); Pop(14)

0x27a: @ GetSecondaryAnimationType(Stack[-6])
0x27b: Pop(0)
0x27c: Push((int) 0)
0x27d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: Return(); Pop(14)

0x280: @@ GetPosition(Stack[-5])
0x281: Pop(0)
0x282: @ GetPosition(Stack[-4])
0x283: Pop(0)
0x284: @ GetDirection(Stack[-3])
0x285: Pop(0)
0x286: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x287: Push(CvectorIndex(Stack[-2], 0))
0x288: Push(CvectorIndex(Stack[-4], 0))
0x289: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28a: Push(CvectorIndex(Stack[-3], 2))
0x28b: Push(CvectorIndex(Stack[-5], 2))
0x28c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28e: Push((int) 0)
0x28f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-1] = "fhit"
0x292: GOTO 0x294

0x293: Stack[-1] = "bhit"
0x294: Push("hit_react")
0x295: Push("1")
0x296: Pop(1); Push(Stack[-3] + Stack[-1]);
0x297: Push("2")
0x298: Pop(1); Push(Stack[-4] + Stack[-1]);
0x299: Push((int) -10)
0x29a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(4)
0x29c: Return(); Pop(14)

0x29d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x29e: PushEmpty(bool)
0x29f: Stack[-1] = (bool) 0
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 0
0x2a2: Push(Stack[-23])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a4: Push((int) 4)
0x2a5: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (bool) 1
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a9: Push((int) 5)
0x2aa: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-1] = (bool) 1
0x2ad: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2ae: PushEmpty(cvector, cvector)
0x2af: PushEmpty(cvector, object)
0x2b0: Stack[-1] = Stack[-25]
0x2b1: Call2 0x218

0x2b2: Stack[-3] = Stack[-2]
0x2b3: Pop(2)
0x2b4: Call2 0x338

0x2b5: Stack[-11] = Stack[-2]
0x2b6: Pop(2)
0x2b7: @ CreateVectorVector(Stack[-8])
0x2b8: Pop(0)
0x2b9: Stack[-7] = (int) 1
0x2ba: Push("hit")
0x2bb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2bc: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x2bd: Pop(1)
0x2be: Pop(0); Push((bool) Stack[-6] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2ca

0x2c1: Pop(0); Push(Stack[-4] | Stack[-9]);
0x2c2: Push((float)0.70711)
0x2c3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: @@ add(Stack[-5])
0x2c6: Pop(0)
0x2c7: Push((int) 1)
0x2c8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x2c9: GOTO 0x2ba

0x2ca: @@ size(Stack[-3])
0x2cb: Pop(0)
0x2cc: Push(Stack[-3])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2ce: @ irand(Stack[-2], Stack[-3])
0x2cf: Pop(0)
0x2d0: @@ get(Stack[-1], Stack[-2])
0x2d1: Pop(0)
0x2d2: PushEmpty(object, int, float, cvector, cvector)
0x2d3: Stack[-5] = Stack[-26]
0x2d4: Stack[-4] = Stack[-25]
0x2d5: Stack[-3] = Stack[-24]
0x2d6: Stack[-2] = Stack[-6]
0x2d7: Stack[-1] = -Stack[-14]; Pop(0);
0x2d8: Call2 0x2e1

0x2d9: Pop(5)
0x2da: Return(); Pop(18)

0x2db: Stack[-8] = 0
0x2dc: PushEmpty(object)
0x2dd: Stack[-1] = Stack[-22]
0x2de: Call2 0x271

0x2df: Pop(1)
0x2e0: Return(); Pop(18)

0x2e1: PushEmpty(object, object, object, object)
0x2e2: @ GetScene(Stack[-2])
0x2e3: Pop(0)
0x2e4: Push("scripted")
0x2e5: Push("blood_dir.xml")
0x2e6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x2e7: Pop(2)
0x2e8: PushEmpty(object)
0x2e9: Stack[-1] = Stack[-10]
0x2ea: Call2 0x271

0x2eb: Pop(1)
0x2ec: Return(); Pop(4)

0x2ed: Stack[-1] = 0
0x2ee: Stack[-2] = 0
0x2ef: PushEmpty(bool, bool)
0x2f0: PushEmpty(bool, int, int)
0x2f1: Stack[-2] = Stack[-7]
0x2f2: Stack[-1] = Stack[-6]
0x2f3: Call2 0x342

0x2f4: Pop(2)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f6: Push((int) 0)
0x2f7: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x2f8: Pop(1)
0x2f9: Return(); Pop(2)

0x2fa: PushEmpty(int, bool, int, bool)
0x2fb: PushEmpty(bool, int, int)
0x2fc: Stack[-2] = Stack[-10]
0x2fd: Stack[-1] = Stack[-9]
0x2fe: Call2 0x342

0x2ff: Pop(2)
0x300: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x301: @ irand(Stack[-2], Stack[-5])
0x302: Pop(0)
0x303: Push((int) 0)
0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[-4] + Stack[-1]);
0x306: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: Return(); Pop(4)

0x309: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x30a: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x30b: Pop(0)
0x30c: Pop(0); Push((bool) Stack[-8] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x30e: Stack[-7] = (int) 0
0x30f: Push((int) 1)
0x310: Pop(1); Push(Stack[-8] + Stack[-1]);
0x311: Pop(1); Push(Stack[-18] + Stack[-1]);
0x312: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x313: Pop(1)
0x314: Pop(0); Push((bool) Stack[-6] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: GOTO 0x31a

0x317: Push((int) 1)
0x318: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x319: GOTO 0x30f

0x31a: Pop(0); Push((bool) Stack[-7] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Return(); Pop(16)

0x31d: @ irand(Stack[-5], Stack[-7])
0x31e: Pop(0)
0x31f: Push((int) 1)
0x320: Pop(1); Push(Stack[-6] + Stack[-1]);
0x321: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x322: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x323: Pop(0)
0x324: Push(Stack[-4])
0x325: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x326: @ GetEyesHeight(Stack[-3])
0x327: Pop(0)
0x328: @ GetDirection(Stack[-2])
0x329: Pop(0)
0x32a: Push((int) 50)
0x32b: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x32c: Push(CvectorIndex(Stack[-1], 1))
0x32d: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x32e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x32f: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x330: Pop(0)
0x331: Return(); Pop(16)

0x332: PushEmpty(object, object)
0x333: @ self(Stack[-1])
0x334: Pop(0)
0x335: Stack[-3] = Stack[-1]
0x336: Return(); Pop(2)

0x337: Stack[-1] = 0
0x338: PushEmpty(float, float)
0x339: Pop(0); Push(Stack[-3] | Stack[-3]);
0x33a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x33b: Push((float)0.0)
0x33c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x33f: Return(); Pop(2)

0x340: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x341: Return(); Pop(2)

0x342: PushEmpty(int, int)
0x343: @ irand(Stack[-1], Stack[-3])
0x344: Pop(0)
0x345: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x346: Return(); Pop(2)

0x347: PushEmpty()
0x348: Pop(0); Push(Stack[-2] | Stack[-1]);
0x349: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x34c: Pop(1); Push(Sqrt(Stack[-1]))
0x34d: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x34e: Return(); Pop(0)

0x34f: PushEmpty(int, int)
0x350: Push("branch")
0x351: @ GetVariable(Stack[-1], Stack[-2])
0x352: Pop(1)
0x353: Stack[-3] = Stack[-1]
0x354: Return(); Pop(2)

0x355: PushEmpty()
0x356: PushEmpty(int)
0x357: Call2 0x34f

0x358: Pop(0)
0x359: Push((int) 1)
0x35a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: @ WorkWithCorpse(Stack[-1])
0x35d: Pop(0)
0x35e: GOTO 0x361

0x35f: @ Barter(Stack[-1])
0x360: Pop(0)
0x361: Return(); Pop(0)

0x362: PushEmpty(int, bool, int, bool)
0x363: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x364: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x365: Push("GenerateMoney: iMin > iMax")
0x366: @ Trace(Stack[-1])
0x367: Pop(1)
0x368: Return(); Pop(4)

0x369: Stack[-2] = (int) 0
0x36a: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x36b: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36c: Pop(0); Push(Stack[-5] - Stack[-6]);
0x36d: @ irand(Stack[-3], Stack[-1])
0x36e: Pop(1)
0x36f: GOTO 0x374

0x370: Push((int) 0)
0x371: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: Return(); Pop(4)

0x374: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x375: Push((int) 0)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: Return(); Pop(4)

0x379: PushEmpty(int, string)
0x37a: Stack[-1] = "Money"
0x37b: Call2 0x3ce

0x37c: Pop(1)
0x37d: Push((int) 0)
0x37e: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x37f: Pop(2)
0x380: Return(); Pop(4)

0x381: PushEmpty(object, int, bool, object, int, bool)
0x382: @ CreateInvItem(Stack[-3])
0x383: Pop(0)
0x384: @@ SetItemName(Stack[-7])
0x385: Pop(0)
0x386: Push("Organ")
0x387: Push((int) 1)
0x388: @@ SetProperty(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: @@ GetItemID(Stack[-2])
0x38b: Pop(0)
0x38c: Push((int) 0)
0x38d: Push((int) 1)
0x38e: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: Return(); Pop(6)

0x391: Stack[-3] = 0
0x392: PushEmpty(int)
0x393: Call2 0x34f

0x394: Pop(0)
0x395: Push((int) 1)
0x396: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Return(); Pop(0)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "liver"
0x39b: Call2 0x381

0x39c: Pop(1)
0x39d: PushEmpty(string)
0x39e: Stack[-1] = "kidney"
0x39f: Call2 0x381

0x3a0: Pop(1)
0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "heart"
0x3a3: Call2 0x381

0x3a4: Pop(1)
0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = "blood"
0x3a7: Call2 0x381

0x3a8: Pop(1)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty(int, bool, int, bool)
0x3ab: Push((int) 0)
0x3ac: @ ClearSubContainer(Stack[-1])
0x3ad: Pop(1)
0x3ae: PushEmpty(int, int)
0x3af: Stack[-2] = (int) 500
0x3b0: Stack[-1] = (int) 1000
0x3b1: Call2 0x362

0x3b2: Pop(2)
0x3b3: PushEmpty(string, int, int, int)
0x3b4: Stack[-4] = "rifle_ammo"
0x3b5: Stack[-3] = (int) 1
0x3b6: Stack[-2] = (int) 3
0x3b7: Stack[-1] = (int) 3
0x3b8: Call2 0x2fa

0x3b9: Pop(4)
0x3ba: PushEmpty(string, int, int, int)
0x3bb: Stack[-4] = "rusk"
0x3bc: Stack[-3] = (int) 1
0x3bd: Stack[-2] = (int) 3
0x3be: Stack[-1] = (int) 2
0x3bf: Call2 0x2fa

0x3c0: Pop(4)
0x3c1: PushEmpty(string, int, int)
0x3c2: Stack[-3] = "bandage"
0x3c3: Stack[-2] = (int) 1
0x3c4: Stack[-1] = (int) 6
0x3c5: Call2 0x2ef

0x3c6: Pop(3)
0x3c7: PushEmpty(string, int, int)
0x3c8: Stack[-3] = "tourniquet"
0x3c9: Stack[-2] = (int) 1
0x3ca: Stack[-1] = (int) 6
0x3cb: Call2 0x2ef

0x3cc: Pop(3)
0x3cd: Return(); Pop(4)

0x3ce: PushEmpty(int, int)
0x3cf: @ GetInvItemByName(Stack[-1], Stack[-3])
0x3d0: Pop(0)
0x3d1: Stack[-4] = Stack[-1]
0x3d2: Return(); Pop(2)

0x3d3: PushEmpty()
0x3d4: PushEmpty(object)
0x3d5: Stack[-1] = Stack[-2]
0x3d6: Push(-1, 0); TaskCall(0)
0x3d7: Call2 0x0

0x3d8: Pop(-1, 0); TaskReturn
0x3d9: Pop(1)
0x3da: Return(); Pop(0)

0x3db: PushEmpty()
0x3dc: PushEmpty(object, int, float)
0x3dd: Stack[-3] = Stack[-7]
0x3de: Stack[-2] = Stack[-6]
0x3df: Stack[-1] = Stack[-5]
0x3e0: Call2 0x29d

0x3e1: Pop(3)
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty()
0x3e4: PushEmpty(object, int, float, cvector, cvector)
0x3e5: Stack[-5] = Stack[-11]
0x3e6: Stack[-4] = Stack[-10]
0x3e7: Stack[-3] = Stack[-9]
0x3e8: Stack[-2] = Stack[-7]
0x3e9: Stack[-1] = Stack[-6]
0x3ea: Call2 0x2e1

0x3eb: Pop(5)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty(float, float)
0x3ee: Push("health")
0x3ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f1: Push("health")
0x3f2: @ GetProperty(Stack[-1], Stack[-2])
0x3f3: Pop(1)
0x3f4: Push((int) 0)
0x3f5: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: @ SignalDeath(Stack[-4])
0x3f8: Pop(0)
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty()
0x3fb: PushEmpty(bool, object)
0x3fc: Stack[-1] = Stack[-3]
0x3fd: Call2 0x21f

0x3fe: Pop(1)
0x3ff: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x400: PushEmpty(object)
0x401: Call2 0x332

0x402: Pop(0)
0x403: Push((float)0.05)
0x404: Push((bool) 1)
0x405: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: PushEmpty(object)
0x408: Stack[-1] = Stack[-2]
0x409: Call2 0x414

0x40a: Pop(1)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(object)
0x40e: Stack[-1] = Stack[-2]
0x40f: Push(-1, 3); TaskCall(3)
0x410: Call2 0x176

0x411: Pop(-1, 3); TaskReturn
0x412: Pop(1)
0x413: Return(); Pop(0)

0x414: PushEmpty()
0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[-2]
0x417: Call2 0x3d3

0x418: Pop(1)
0x419: Return(); Pop(0)

0x41a: PushEmpty(bool, bool)
0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[-5]
0x41d: Call2 0x259

0x41e: Pop(1)
0x41f: Pop(1); Push((bool) Stack[-1] == 0)
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-4] = (bool) 0
0x422: Return(); Pop(2)

0x423: @ IsPlayerActor(Stack[-3], Stack[-1])
0x424: Pop(0)
0x425: Stack[-4] = Stack[-1]
0x426: Return(); Pop(2)

0x427: PushEmpty()
0x428: PushEmpty(object)
0x429: Stack[-1] = Stack[-2]
0x42a: Push(-1, 3); TaskCall(3)
0x42b: Call2 0x176

0x42c: Pop(-1, 3); TaskReturn
0x42d: Pop(1)
0x42e: Return(); Pop(0)

0x42f: PushEmpty(bool, bool)
0x430: PushEmpty(bool, object)
0x431: Stack[-1] = Stack[-5]
0x432: Call2 0x259

0x433: Pop(1)
0x434: Pop(1); Push((bool) Stack[-1] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-4] = (bool) 0
0x437: Return(); Pop(2)

0x438: @ IsPlayerActor(Stack[-3], Stack[-1])
0x439: Pop(0)
0x43a: Stack[-4] = Stack[-1]
0x43b: Return(); Pop(2)

0x43c: PushEmpty()
0x43d: PushEmpty(object)
0x43e: Stack[-1] = Stack[-2]
0x43f: Push(-1, 3); TaskCall(3)
0x440: Call2 0x176

0x441: Pop(-1, 3); TaskReturn
0x442: Pop(1)
0x443: Return(); Pop(0)

