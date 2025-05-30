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
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	health

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
	GetBrightness (1 args)
	IsInWalkMode (1 args)
	SwitchToRun (0 args)
	SwitchToWalk (0 args)
	KillTimer (1 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
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
	irand (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0x93
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x18 Vars = (object)
		EVENT_22 Op = 0x8d Vars = (object, int, float, float)
		EVENT_16 Op = 0x8f Vars = (object, string)
		EVENT_41 Op = 0x91 Vars = (object)
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_7 Op = 0xa2 Vars = (int)
		EVENT_41 Op = 0xbc Vars = (object)
		EVENT_17 Op = 0xc5 Vars = (object)
		EVENT_1 Op = 0xd5 Vars = (object)
		EVENT_3 Op = 0xe3 Vars = (object)
		EVENT_10 Op = 0x12a Vars = (object)
		EVENT_28 Op = 0x12e Vars = ()
	GTASK_2  Params = 0
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x197 Vars = (int)
		EVENT_41 Op = 0x1d2 Vars = (object)

Events:
EVENT_22 Op = 0x2e9 Vars = (object, int, float, float)
EVENT_16 Op = 0x2f1 Vars = (object, string)
EVENT_41 Op = 0x2fe Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call 0x2b7

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

0x93: Push((int) 110)
0x94: Push((float)0.3)
0x95: @ SetTimer(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: PushEmpty()
0x98: Call 0xf1

0x99: Pop(0)
0x9a: GOTO 0x93

0x9b: Return(); Pop(0)

0x9c: PushEmpty(float, float)
0x9d: @ GetBrightness(Stack[-1])
0x9e: Pop(0)
0x9f: Push((float)0.5)
0xa0: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0xa1: Return(); Pop(2)

0xa2: PushEmpty(bool, bool)
0xa3: Push((int) 110)
0xa4: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(2)

0xa7: @ IsInWalkMode(Stack[-1])
0xa8: Pop(0)
0xa9: Push(Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xab: PushEmpty(bool)
0xac: Call 0x9c

0xad: Pop(0)
0xae: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xaf: @ SwitchToRun()
0xb0: Pop(0)
0xb1: GOTO 0xb4

0xb2: @ SwitchToWalk()
0xb3: Pop(0)
0xb4: Return(); Pop(2)

0xb5: PushEmpty()
0xb6: Call 0x131

0xb7: Pop(0)
0xb8: Push((int) 110)
0xb9: @ KillTimer(Stack[-1])
0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty()
0xbe: Call 0xb5

0xbf: Pop(0)
0xc0: PushEmpty(object)
0xc1: Stack[-1] = Stack[-2]
0xc2: Call 0x2fe

0xc3: Pop(1)
0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[-3]
0xc8: Call 0x22c

0xc9: Pop(1)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: Call 0xb5

0xcf: Pop(0)
0xd0: PushEmpty(object)
0xd1: Stack[-1] = Stack[-2]
0xd2: Call 0x304

0xd3: Pop(1)
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[-3]
0xd8: Call 0x312

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdb: PushEmpty()
0xdc: Call 0xb5

0xdd: Pop(0)
0xde: PushEmpty(object)
0xdf: Stack[-1] = Stack[-2]
0xe0: Call 0x31f

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[-3]
0xe6: Call 0x327

0xe7: Pop(1)
0xe8: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe9: PushEmpty()
0xea: Call 0xb5

0xeb: Pop(0)
0xec: PushEmpty(object)
0xed: Stack[-1] = Stack[-2]
0xee: Call 0x334

0xef: Pop(1)
0xf0: Return(); Pop(0)

0xf1: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0xf2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xf3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xf4: Push((float)0.5)
0xf5: @ rand(Stack[-8], Stack[-1])
0xf6: Pop(1)
0xf7: @ Sleep(Stack[-7])
0xf8: Pop(0)
0xf9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xfb: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xfc: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfd: @ GetPosition(Stack[-5])
0xfe: Pop(0)
0xff: @ GetCameraFarDistance(Stack[-4])
0x100: Pop(0)
0x101: Push((float)2.5)
0x102: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x103: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x104: Pop(0)
0x105: Push(Stack[-3])
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: GOTO 0x10c

0x108: Push((int) 1)
0x109: @ Sleep(Stack[-1])
0x10a: Pop(1)
0x10b: GOTO 0xfd

0x10c: GOTO 0x10e

0x10d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x10e: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x10f: Pop(0)
0x110: Pop(0); Push(( Stack[-2] != 0 )
0x111: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x112: @ RotatePath(Stack[-2], Stack[-1])
0x113: Pop(0)
0x114: Push(Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x116: PushEmpty(bool)
0x117: Call 0x9c

0x118: Pop(0)
0x119: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x11a: Pop(1)
0x11b: Stack[-2] = 0
0x11c: Push(Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11e: PushEmpty()
0x11f: Push(-0, 0); TaskCall(2)
0x120: Call 0x138

0x121: Pop(-0, 0); TaskReturn
0x122: Pop(0)
0x123: GOTO 0x127

0x124: Push((int) 1)
0x125: @ Sleep(Stack[-1])
0x126: Pop(1)
0x127: Stack[-2] = 0
0x128: GOTO 0xf9

0x129: Return(); Pop(14)

0x12a: PushEmpty()
0x12b: @ RequestClearPath(Stack[-1])
0x12c: Pop(0)
0x12d: Return(); Pop(0)

0x12e: @ Stop()
0x12f: Pop(0)
0x130: Return(); Pop(0)

0x131: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x132: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x133: @ Stop()
0x134: Pop(0)
0x135: @ StopGroup0()
0x136: Pop(0)
0x137: Return(); Pop(0)

0x138: Return(); Pop(0)

0x139: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x13a: @ GetPosition(Stack[-6])
0x13b: Pop(0)
0x13c: @@ GetPosition(Stack[-5])
0x13d: Pop(0)
0x13e: @ GetDirection(Stack[-4])
0x13f: Pop(0)
0x140: PushEmpty(cvector, cvector)
0x141: PushEmpty(cvector, cvector)
0x142: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x143: Call 0x287

0x144: Pop(1)
0x145: Push((float)0.75)
0x146: Pop(1); Push(Stack[-8] * Stack[-1]);
0x147: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x148: Call 0x287

0x149: Stack[-5] = Stack[-2]
0x14a: Pop(2)
0x14b: Push((int) 32)
0x14c: Push((float)7000.0)
0x14d: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x14e: Pop(2)
0x14f: Push((int) 100)
0x150: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x151: Push((int) 0)
0x152: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Stack[-1] = (int) 0
0x155: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x156: Return(); Pop(12)

0x157: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x158: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x159: PushEmpty(cvector, float)
0x15a: Stack[-1] = (float) 1.74533
0x15b: Call 0x139

0x15c: Stack[-7] = Stack[-2]
0x15d: Pop(2)
0x15e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x15f: Push((float)10000.0)
0x160: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x162: Push("Can't retreat, distance: ")
0x163: Pop(0); Push(Sqrt(Stack[-5]))
0x164: Pop(2); Push(Stack[-2] + Stack[-1]);
0x165: @ Trace(Stack[-1])
0x166: Pop(1)
0x167: Push((float)0.5)
0x168: @ Sleep(Stack[-1])
0x169: Pop(1)
0x16a: Return(); Pop(10)

0x16b: Push(CvectorIndex(Stack[-5], 0))
0x16c: Push(CvectorIndex(Stack[-6], 2))
0x16d: @ Rotate(Stack[-2], Stack[-1])
0x16e: Pop(2)
0x16f: PushEmpty(cvector)
0x170: Call 0x1eb

0x171: Pop(0)
0x172: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x173: Push((int) 120)
0x174: Push((float)0.5)
0x175: @ SetTimer(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x178: Push((int) 1)
0x179: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x17a: Pop(1)
0x17b: Push(Stack[-3])
0x17c: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x17d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17f: GOTO 0x196

0x180: GOTO 0x194

0x181: PushEmpty(cvector, float)
0x182: Stack[-1] = (float) 2.61799
0x183: Call 0x139

0x184: Stack[-4] = Stack[-2]
0x185: Pop(2)
0x186: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x187: Push((float)10000.0)
0x188: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18a: PushEmpty(cvector)
0x18b: Call 0x1eb

0x18c: Pop(0)
0x18d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x18e: Push((int) 120)
0x18f: Push((float)0.5)
0x190: @ SetTimer(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: GOTO 0x194

0x193: GOTO 0x196

0x194: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x195: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x196: Return(); Pop(10)

0x197: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x198: Push((int) 120)
0x199: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Return(); Pop(8)

0x19c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x19e: @ Stop()
0x19f: Pop(0)
0x1a0: Push((int) 1)
0x1a1: @ KillTimer(Stack[-1])
0x1a2: Pop(1)
0x1a3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1a4: GOTO 0x1ca

0x1a5: @ GetDirection(Stack[-4])
0x1a6: Pop(0)
0x1a7: Push((float)7000.0)
0x1a8: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x1a9: Pop(1)
0x1aa: PushEmpty(cvector, float)
0x1ab: Stack[-1] = (float) 1.74533
0x1ac: Call 0x139

0x1ad: Stack[-4] = Stack[-2]
0x1ae: Pop(2)
0x1af: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: Push((float)10000.0)
0x1b3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 1
0x1b7: Pop(0); Push(Stack[-5] * Stack[-5]);
0x1b8: Push((float)2.25)
0x1b9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ba: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call 0x1db

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 0
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Stack[-1] = (bool) 1
0x1c3: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c4: @ Stop()
0x1c5: Pop(0)
0x1c6: PushEmpty(cvector)
0x1c7: Call 0x1eb

0x1c8: Pop(0)
0x1c9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x1ca: Return(); Pop(8)

0x1cb: @ Stop()
0x1cc: Pop(0)
0x1cd: Push((int) 120)
0x1ce: @ KillTimer(Stack[-1])
0x1cf: Pop(1)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: PushEmpty()
0x1d4: Call 0x1cb

0x1d5: Pop(0)
0x1d6: PushEmpty(object)
0x1d7: Stack[-1] = Stack[-2]
0x1d8: Call 0x2fe

0x1d9: Pop(1)
0x1da: Return(); Pop(0)

0x1db: PushEmpty(cvector, cvector, cvector, cvector)
0x1dc: @ GetDirection(Stack[-2])
0x1dd: Pop(0)
0x1de: PushEmpty(cvector, object)
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call 0x1f0

0x1e1: Stack[-3] = Stack[-2]
0x1e2: Pop(2)
0x1e3: PushEmpty(float, cvector, cvector)
0x1e4: Stack[-2] = Stack[-5]
0x1e5: Stack[-1] = Stack[-4]
0x1e6: Call 0x291

0x1e7: Pop(2)
0x1e8: Push((float)-0.34202)
0x1e9: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x1ea: Return(); Pop(4)

0x1eb: PushEmpty(cvector, cvector)
0x1ec: @ GetPosition(Stack[-1])
0x1ed: Pop(0)
0x1ee: Stack[-3] = Stack[-1]
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(cvector, cvector, cvector, cvector)
0x1f1: @ GetPosition(Stack[-2])
0x1f2: Pop(0)
0x1f3: @@ GetPosition(Stack[-1])
0x1f4: Pop(0)
0x1f5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1f6: Return(); Pop(4)

0x1f7: PushEmpty(bool, bool)
0x1f8: Push("HasProperty")
0x1f9: Push((int) 2)
0x1fa: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-5] = (bool) 0
0x1fe: Return(); Pop(2)

0x1ff: @@ HasProperty(Stack[-3], Stack[-1])
0x200: Pop(0)
0x201: Stack[-5] = Stack[-1]
0x202: Return(); Pop(2)

0x203: PushEmpty(bool, bool)
0x204: @@ IsDead(Stack[-1])
0x205: Pop(0)
0x206: Stack[-4] = Stack[-1]
0x207: Return(); Pop(2)

0x208: PushEmpty(object, object, object, object)
0x209: Pop(0); Push((bool) Stack[-5] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-6] = (bool) 0
0x20c: Return(); Pop(4)

0x20d: PushEmpty(bool)
0x20e: Stack[-1] = (bool) 0
0x20f: Push("IsDead")
0x210: Push((int) 1)
0x211: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x212: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[-8]
0x215: Call 0x203

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 1
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-6] = (bool) 0
0x21b: Return(); Pop(4)

0x21c: @ GetScene(Stack[-2])
0x21d: Pop(0)
0x21e: Pop(0); Push((bool) Stack[-2] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-6] = (bool) 0
0x221: Return(); Pop(4)

0x222: @@ GetScene(Stack[-1])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-6] = (bool) 0
0x227: Return(); Pop(4)

0x228: Stack[-6] = (bool) 1
0x229: Return(); Pop(4)

0x22a: Stack[-1] = 0
0x22b: Stack[-2] = 0
0x22c: PushEmpty(int, int)
0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[-5]
0x22f: Call 0x208

0x230: Pop(1)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-4] = (bool) 0
0x234: Return(); Pop(2)

0x235: PushEmpty(bool, object, string)
0x236: Stack[-2] = Stack[-6]
0x237: Stack[-1] = "noaccess"
0x238: Call 0x1f7

0x239: Pop(2)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23c: Stack[-4] = (bool) 1
0x23d: Return(); Pop(2)

0x23e: Push("noaccess")
0x23f: @@ GetProperty(Stack[-1], Stack[-2])
0x240: Pop(1)
0x241: Push((int) 0)
0x242: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x243: Return(); Pop(2)

0x244: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x245: PushEmpty(bool)
0x246: Stack[-1] = (bool) 0
0x247: Push((int) 4)
0x248: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24a: Push((int) 5)
0x24b: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Stack[-1] = (bool) 1
0x24e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24f: @ GetScene(Stack[-10])
0x250: Pop(0)
0x251: @ GetPosition(Stack[-8])
0x252: Pop(0)
0x253: @ GetEyesHeight(Stack[-7])
0x254: Pop(0)
0x255: Push(CvectorIndex(Stack[-8], 1))
0x256: Push((int) 2)
0x257: Pop(1); Push(Stack[-9] / Stack[-1]);
0x258: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x259: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25a: Push("scripted")
0x25b: Push(CVector(0.0, 0.0, 1.0))
0x25c: Push("blood.xml")
0x25d: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x25e: Pop(3)
0x25f: Stack[-9] = 0
0x260: Stack[-10] = 0
0x261: Pop(0); Push((bool) Stack[-23] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Return(); Pop(20)

0x264: @ GetSecondaryAnimationType(Stack[-6])
0x265: Pop(0)
0x266: Push((int) 0)
0x267: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Return(); Pop(20)

0x26a: @@ GetPosition(Stack[-5])
0x26b: Pop(0)
0x26c: @ GetPosition(Stack[-4])
0x26d: Pop(0)
0x26e: @ GetDirection(Stack[-3])
0x26f: Pop(0)
0x270: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x271: Push(CvectorIndex(Stack[-2], 0))
0x272: Push(CvectorIndex(Stack[-4], 0))
0x273: Pop(2); Push(Stack[-2] * Stack[-1]);
0x274: Push(CvectorIndex(Stack[-3], 2))
0x275: Push(CvectorIndex(Stack[-5], 2))
0x276: Pop(2); Push(Stack[-2] * Stack[-1]);
0x277: Pop(2); Push(Stack[-2] + Stack[-1]);
0x278: Push((int) 0)
0x279: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: Stack[-1] = "fhit"
0x27c: GOTO 0x27e

0x27d: Stack[-1] = "bhit"
0x27e: Push("hit_react")
0x27f: Push("1")
0x280: Pop(1); Push(Stack[-3] + Stack[-1]);
0x281: Push("2")
0x282: Pop(1); Push(Stack[-4] + Stack[-1]);
0x283: Push((int) -10)
0x284: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(4)
0x286: Return(); Pop(20)

0x287: PushEmpty(float, float)
0x288: Pop(0); Push(Stack[-3] | Stack[-3]);
0x289: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x28a: Push((float)0.0)
0x28b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x28e: Return(); Pop(2)

0x28f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x290: Return(); Pop(2)

0x291: PushEmpty()
0x292: Pop(0); Push(Stack[-2] | Stack[-1]);
0x293: Pop(0); Push(Stack[-3] | Stack[-3]);
0x294: Pop(0); Push(Stack[-3] | Stack[-3]);
0x295: Pop(2); Push(Stack[-2] * Stack[-1]);
0x296: Pop(1); Push(Sqrt(Stack[-1]))
0x297: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x298: Return(); Pop(0)

0x299: PushEmpty(int, int, int, bool, int, int, int, bool)
0x29a: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29c: Push("GenerateMoney: iMin > iMax")
0x29d: @ Trace(Stack[-1])
0x29e: Pop(1)
0x29f: Return(); Pop(8)

0x2a0: Stack[-4] = (int) 0
0x2a1: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a3: Pop(0); Push(Stack[-9] - Stack[-10]);
0x2a4: @ irand(Stack[-4], Stack[-1])
0x2a5: Pop(1)
0x2a6: GOTO 0x2ab

0x2a7: Push((int) 0)
0x2a8: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Return(); Pop(8)

0x2ab: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x2ac: Push((int) 0)
0x2ad: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Return(); Pop(8)

0x2b0: Push("Money")
0x2b1: @ GetInvItemByName(Stack[-3], Stack[-1])
0x2b2: Pop(1)
0x2b3: Push((int) 0)
0x2b4: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x2b5: Pop(1)
0x2b6: Return(); Pop(8)

0x2b7: PushEmpty(int, bool, int, bool)
0x2b8: Push((int) 0)
0x2b9: @ ClearSubContainer(Stack[-1])
0x2ba: Pop(1)
0x2bb: PushEmpty(int, int)
0x2bc: Stack[-2] = (int) 500
0x2bd: Stack[-1] = (int) 1000
0x2be: Call 0x299

0x2bf: Pop(2)
0x2c0: Push((int) 4)
0x2c1: @ irand(Stack[-3], Stack[-1])
0x2c2: Pop(1)
0x2c3: Push((int) 0)
0x2c4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c6: PushEmpty(int, string)
0x2c7: Stack[-1] = "rifle_ammo"
0x2c8: Call 0x2dc

0x2c9: Pop(1)
0x2ca: Push((int) 0)
0x2cb: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x2cc: Pop(2)
0x2cd: Push((int) 3)
0x2ce: @ irand(Stack[-3], Stack[-1])
0x2cf: Pop(1)
0x2d0: Push((int) 0)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d3: PushEmpty(int, string)
0x2d4: Stack[-1] = "rusk"
0x2d5: Call 0x2dc

0x2d6: Pop(1)
0x2d7: Push((int) 0)
0x2d8: Push((int) 1)
0x2d9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Return(); Pop(4)

0x2dc: PushEmpty(int, int)
0x2dd: @ GetInvItemByName(Stack[-1], Stack[-3])
0x2de: Pop(0)
0x2df: Stack[-4] = Stack[-1]
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty()
0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[-2]
0x2e4: Push(-1, 0); TaskCall(0)
0x2e5: Call 0x0

0x2e6: Pop(-1, 0); TaskReturn
0x2e7: Pop(1)
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty()
0x2ea: PushEmpty(object, int, float)
0x2eb: Stack[-3] = Stack[-7]
0x2ec: Stack[-2] = Stack[-6]
0x2ed: Stack[-1] = Stack[-5]
0x2ee: Call 0x244

0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(float, float)
0x2f2: Push("health")
0x2f3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f5: Push("health")
0x2f6: @ GetProperty(Stack[-1], Stack[-2])
0x2f7: Pop(1)
0x2f8: Push((int) 0)
0x2f9: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: @ SignalDeath(Stack[-4])
0x2fc: Pop(0)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty()
0x2ff: PushEmpty(object)
0x300: Stack[-1] = Stack[-2]
0x301: Call 0x30c

0x302: Pop(1)
0x303: Return(); Pop(0)

0x304: PushEmpty()
0x305: PushEmpty(object)
0x306: Stack[-1] = Stack[-2]
0x307: Push(-1, 3); TaskCall(3)
0x308: Call 0x157

0x309: Pop(-1, 3); TaskReturn
0x30a: Pop(1)
0x30b: Return(); Pop(0)

0x30c: PushEmpty()
0x30d: PushEmpty(object)
0x30e: Stack[-1] = Stack[-2]
0x30f: Call 0x2e1

0x310: Pop(1)
0x311: Return(); Pop(0)

0x312: PushEmpty(bool, bool)
0x313: PushEmpty(bool, object)
0x314: Stack[-1] = Stack[-5]
0x315: Call 0x22c

0x316: Pop(1)
0x317: Pop(1); Push((bool) Stack[-1] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-4] = (bool) 0
0x31a: Return(); Pop(2)

0x31b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x31c: Pop(0)
0x31d: Stack[-4] = Stack[-1]
0x31e: Return(); Pop(2)

0x31f: PushEmpty()
0x320: PushEmpty(object)
0x321: Stack[-1] = Stack[-2]
0x322: Push(-1, 3); TaskCall(3)
0x323: Call 0x157

0x324: Pop(-1, 3); TaskReturn
0x325: Pop(1)
0x326: Return(); Pop(0)

0x327: PushEmpty(bool, bool)
0x328: PushEmpty(bool, object)
0x329: Stack[-1] = Stack[-5]
0x32a: Call 0x22c

0x32b: Pop(1)
0x32c: Pop(1); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32e: Stack[-4] = (bool) 0
0x32f: Return(); Pop(2)

0x330: @ IsPlayerActor(Stack[-3], Stack[-1])
0x331: Pop(0)
0x332: Stack[-4] = Stack[-1]
0x333: Return(); Pop(2)

0x334: PushEmpty()
0x335: PushEmpty(object)
0x336: Stack[-1] = Stack[-2]
0x337: Push(-1, 3); TaskCall(3)
0x338: Call 0x157

0x339: Pop(-1, 3); TaskReturn
0x33a: Pop(1)
0x33b: Return(); Pop(0)

