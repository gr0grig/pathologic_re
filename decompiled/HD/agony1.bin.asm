GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	agony
	all
	sleep
	agony_sleep
	agony.xml
	death
	agony_die
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetPosition
	fhit
	bhit
	hit_react
	1
	2
	scripted
	blood_dir.xml
	reputation
	add
	health
	cleanup
	GenerateMoney: iMin > iMax
	Money
	bottle_water
	lockpick

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SetProperty (2 args)
	RemoveEnvelope (0 args)
	SetRTEnvelope (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	WaitForAnimEnd (0 args)
	LockAnimationEnd (2 args)
	SetDeathState (0 args)
	IsDead (1 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetProperty (2 args)
	ShowWindow (4 args)
	IsPlayerActor (2 args)
	RemoveActor (1 args)
	StopAnimation (0 args)
	GetSecondaryAnimationType (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FadeSecondaryAnimation (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	AddItem (3 args)
	irand (2 args)
	AddItem (4 args)
	self (1 args)
	rand (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	SignalDeath (1 args)
	Trace (1 args)
	GetInvItemByName (2 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_0 Op = 0x66 Vars = (object)
		EVENT_41 Op = 0x91 Vars = (object)
		EVENT_6 Op = 0xb4 Vars = ()
		EVENT_16 Op = 0xc7 Vars = (object, string)

Events:
EVENT_16 Op = 0x1a7 Vars = (object, string)
EVENT_43 Op = 0x1b4 Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x1be Vars = (string)
EVENT_6 Op = 0x1cf Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x137

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: Push("agony")
0xe: Push((float)0.5)
0xf: @ SetProperty(Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: PushEmpty()
0x12: Call2 0x19

0x13: Pop(0)
0x14: Return(); Pop(0)

0x15: PushEmpty()
0x16: Call2 0x1f6

0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: PushEmpty(bool, bool)
0x1a: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1b: @ RemoveEnvelope()
0x1c: Pop(0)
0x1d: Push((int) 50)
0x1e: Push((int) 40)
0x1f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x20: Pop(2)
0x21: PushEmpty(bool)
0x22: Call2 0x137

0x23: Pop(0)
0x24: Pop(1); Push((bool) Stack[-1] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: PushEmpty()
0x27: Push(-0, 0); TaskCall(0)
0x28: Call2 0x0

0x29: Pop(-0, 0); TaskReturn
0x2a: Pop(0)
0x2b: Push("agony")
0x2c: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(bool)
0x2f: Stack[-1] = (bool) 0
0x30: Push(Stack[-2])
0x31: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x32: PushEmpty(bool, float)
0x33: Stack[-1] = (float) 0.33333
0x34: Call2 0x167

0x35: Pop(1)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: Stack[-1] = (bool) 1
0x38: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x39: Push("agony")
0x3a: Push(CVector(0.0, 40.0, 0.0))
0x3b: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: Push("all")
0x3e: Push("agony")
0x3f: @ PlayAnimation(Stack[-2], Stack[-1])
0x40: Pop(2)
0x41: @ WaitForAnimEnd(Stack[-1])
0x42: Pop(0)
0x43: Push((int) 0)
0x44: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x46: Push(Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x48: Push("sleep")
0x49: Push(CVector(0.0, 40.0, 0.0))
0x4a: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: Push("all")
0x4d: Push("agony_sleep")
0x4e: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f: Pop(2)
0x50: @ WaitForAnimEnd()
0x51: Pop(0)
0x52: Push("all")
0x53: Push("agony_sleep")
0x54: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x55: Pop(2)
0x56: @ SetDeathState()
0x57: Pop(0)
0x58: PushEmpty()
0x59: Call2 0x15

0x5a: Pop(0)
0x5b: GOTO 0x62

0x5c: GOTO 0x61

0x5d: Push((int) 0)
0x5e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: GOTO 0x62

0x61: GOTO 0x2b

0x62: @ Hold()
0x63: Pop(0)
0x64: GOTO 0x62

0x65: Return(); Pop(2)

0x66: PushEmpty(bool, bool, float, bool, float, bool, bool, float, bool, float)
0x67: @ IsDead(Stack[-5])
0x68: Pop(0)
0x69: Push(Stack[-5])
0x6a: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6b: @ IsOverrideActive(Stack[-4])
0x6c: Pop(0)
0x6d: Pop(0); Push((bool) Stack[-4] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6f: @ Barter(Stack[-11])
0x70: Pop(0)
0x71: GOTO 0x90

0x72: Push("agony")
0x73: @ GetProperty(Stack[-1], Stack[-4])
0x74: Pop(1)
0x75: Push((int) 0)
0x76: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: Return(); Pop(10)

0x79: @ IsOverrideActive(Stack[-2])
0x7a: Pop(0)
0x7b: Pop(0); Push((bool) Stack[-2] == 0)
0x7c: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7d: Push("agony.xml")
0x7e: Push((bool) 1)
0x7f: Push((bool) 0)
0x80: PushEmpty(object)
0x81: Call2 0x156

0x82: Pop(0)
0x83: @ ShowWindow(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(4)
0x85: Push("agony")
0x86: @ GetProperty(Stack[-1], Stack[-2])
0x87: Pop(1)
0x88: Push((float)0.001)
0x89: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: PushEmpty(bool, object, float)
0x8c: Stack[-2] = Stack[-14]
0x8d: Stack[-1] = (float) 0.2
0x8e: Call2 0x171

0x8f: Pop(3)
0x90: Return(); Pop(10)

0x91: PushEmpty(bool, bool, bool, bool)
0x92: Push( Stack[0 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(4)

0x95: @ IsPlayerActor(Stack[-5], Stack[-2])
0x96: Pop(0)
0x97: Push(Stack[-2])
0x98: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x99: @ IsDead(Stack[-1])
0x9a: Pop(0)
0x9b: Pop(0); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x9d: @ SetDeathState()
0x9e: Pop(0)
0x9f: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0xa0: PushEmpty(bool, object, float)
0xa1: Stack[-2] = Stack[-8]
0xa2: Stack[-1] = (float) -0.3
0xa3: Call2 0x171

0xa4: Pop(3)
0xa5: Push("death")
0xa6: Push(CVector(0.0, 40.0, 0.0))
0xa7: @ PlayGlobalSound(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: Push("all")
0xaa: Push("agony_die")
0xab: @ PlayAnimation(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: @ WaitForAnimEnd()
0xae: Pop(0)
0xaf: Push("all")
0xb0: Push("agony_die")
0xb1: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: Return(); Pop(4)

0xb4: PushEmpty()
0xb5: Call2 0x1cf

0xb6: Pop(0)
0xb7: PushEmpty()
0xb8: Call2 0xd8

0xb9: Pop(0)
0xba: Push( Stack[0 + Tasks[-1].StackPointer] )
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object)
0xbd: Call2 0x156

0xbe: Pop(0)
0xbf: @ RemoveActor(Stack[-1])
0xc0: Pop(1)
0xc1: PushEmpty()
0xc2: Push(-0, 0); TaskCall(0)
0xc3: Call2 0x0

0xc4: Pop(-0, 0); TaskReturn
0xc5: Pop(0)
0xc6: Return(); Pop(0)

0xc7: PushEmpty(float, float)
0xc8: Push("agony")
0xc9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcb: Push("agony")
0xcc: @ GetProperty(Stack[-1], Stack[-2])
0xcd: Pop(1)
0xce: Push((float)0.001)
0xcf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Stack[0 + Tasks[-1].StackPointer] = (int)1
0xd2: PushEmpty(object, string)
0xd3: Stack[-2] = Stack[-6]
0xd4: Stack[-1] = Stack[-5]
0xd5: Call2 0x1a7

0xd6: Pop(2)
0xd7: Return(); Pop(2)

0xd8: @ StopAnimation()
0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: PushEmpty(bool, bool)
0xdc: Push("HasProperty")
0xdd: Push((int) 2)
0xde: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xdf: Pop(1); Push((bool) Stack[-1] == 0)
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: Stack[-5] = (bool) 0
0xe2: Return(); Pop(2)

0xe3: @@ HasProperty(Stack[-3], Stack[-1])
0xe4: Pop(0)
0xe5: Stack[-5] = Stack[-1]
0xe6: Return(); Pop(2)

0xe7: PushEmpty(float, float)
0xe8: PushEmpty(bool, object, string)
0xe9: Stack[-2] = Stack[-10]
0xea: Stack[-1] = Stack[-9]
0xeb: Call2 0xdb

0xec: Pop(2)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-8] = (bool) 0
0xf0: Return(); Pop(2)

0xf1: @@ GetProperty(Stack[-6], Stack[-1])
0xf2: Pop(0)
0xf3: PushEmpty(float, float, float, float)
0xf4: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xf5: Stack[-2] = Stack[-8]
0xf6: Stack[-1] = Stack[-7]
0xf7: Call2 0x15c

0xf8: Pop(3)
0xf9: @@ SetProperty(Stack[-7], Stack[-1])
0xfa: Pop(1)
0xfb: Stack[-8] = (bool) 1
0xfc: Return(); Pop(2)

0xfd: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xfe: Pop(0); Push((bool) Stack[-15] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Return(); Pop(14)

0x101: @ IsDead(Stack[-7])
0x102: Pop(0)
0x103: Push(Stack[-7])
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: Return(); Pop(14)

0x106: @ GetSecondaryAnimationType(Stack[-6])
0x107: Pop(0)
0x108: Push((int) 0)
0x109: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Return(); Pop(14)

0x10c: @@ GetPosition(Stack[-5])
0x10d: Pop(0)
0x10e: @ GetPosition(Stack[-4])
0x10f: Pop(0)
0x110: @ GetDirection(Stack[-3])
0x111: Pop(0)
0x112: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x113: Push(CvectorIndex(Stack[-2], 0))
0x114: Push(CvectorIndex(Stack[-4], 0))
0x115: Pop(2); Push(Stack[-2] * Stack[-1]);
0x116: Push(CvectorIndex(Stack[-3], 2))
0x117: Push(CvectorIndex(Stack[-5], 2))
0x118: Pop(2); Push(Stack[-2] * Stack[-1]);
0x119: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11a: Push((int) 0)
0x11b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11d: Stack[-1] = "fhit"
0x11e: GOTO 0x120

0x11f: Stack[-1] = "bhit"
0x120: Push("hit_react")
0x121: Push("1")
0x122: Pop(1); Push(Stack[-3] + Stack[-1]);
0x123: Push("2")
0x124: Pop(1); Push(Stack[-4] + Stack[-1]);
0x125: Push((int) -10)
0x126: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(4)
0x128: Return(); Pop(14)

0x129: PushEmpty(object, object, object, object)
0x12a: @ GetScene(Stack[-2])
0x12b: Pop(0)
0x12c: Push("scripted")
0x12d: Push("blood_dir.xml")
0x12e: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x12f: Pop(2)
0x130: PushEmpty(object)
0x131: Stack[-1] = Stack[-10]
0x132: Call2 0xfd

0x133: Pop(1)
0x134: Return(); Pop(4)

0x135: Stack[-1] = 0
0x136: Stack[-2] = 0
0x137: PushEmpty(bool, bool)
0x138: @ IsLoaded(Stack[-1])
0x139: Pop(0)
0x13a: Stack[-3] = Stack[-1]
0x13b: Return(); Pop(2)

0x13c: PushEmpty(bool, bool)
0x13d: PushEmpty(bool, int, int)
0x13e: Stack[-2] = Stack[-7]
0x13f: Stack[-1] = Stack[-6]
0x140: Call2 0x16c

0x141: Pop(2)
0x142: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x143: Push((int) 0)
0x144: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x145: Pop(1)
0x146: Return(); Pop(2)

0x147: PushEmpty(int, bool, int, bool)
0x148: PushEmpty(bool, int, int)
0x149: Stack[-2] = Stack[-10]
0x14a: Stack[-1] = Stack[-9]
0x14b: Call2 0x16c

0x14c: Pop(2)
0x14d: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14e: @ irand(Stack[-2], Stack[-5])
0x14f: Pop(0)
0x150: Push((int) 0)
0x151: Push((int) 1)
0x152: Pop(1); Push(Stack[-4] + Stack[-1]);
0x153: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x154: Pop(2)
0x155: Return(); Pop(4)

0x156: PushEmpty(object, object)
0x157: @ self(Stack[-1])
0x158: Pop(0)
0x159: Stack[-3] = Stack[-1]
0x15a: Return(); Pop(2)

0x15b: Stack[-1] = 0
0x15c: PushEmpty()
0x15d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x15e: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15f: Stack[-4] = Stack[-2]
0x160: Return(); Pop(0)

0x161: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x163: Stack[-4] = Stack[-1]
0x164: Return(); Pop(0)

0x165: Stack[-4] = Stack[-3]
0x166: Return(); Pop(0)

0x167: PushEmpty(float, float)
0x168: @ rand(Stack[-1])
0x169: Pop(0)
0x16a: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x16b: Return(); Pop(2)

0x16c: PushEmpty(int, int)
0x16d: @ irand(Stack[-1], Stack[-3])
0x16e: Pop(0)
0x16f: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x170: Return(); Pop(2)

0x171: PushEmpty()
0x172: Pop(0); Push((bool) Stack[-2] == 0)
0x173: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x174: Stack[-3] = (bool) 0
0x175: Return(); Pop(0)

0x176: Push((int) 0)
0x177: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x179: Push((int) 8)
0x17a: @ SendWorldWndMessage(Stack[-1])
0x17b: Pop(1)
0x17c: GOTO 0x186

0x17d: Push((int) 0)
0x17e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x180: Push((int) 9)
0x181: @ SendWorldWndMessage(Stack[-1])
0x182: Pop(1)
0x183: GOTO 0x186

0x184: Stack[-3] = (bool) 0
0x185: Return(); Pop(0)

0x186: PushEmpty(float)
0x187: Stack[-1] = Stack[-2]
0x188: Call2 0x194

0x189: Pop(1)
0x18a: PushEmpty(bool, object, string, float, float, float)
0x18b: Stack[-5] = Stack[-8]
0x18c: Stack[-4] = "reputation"
0x18d: Stack[-3] = Stack[-7]
0x18e: Stack[-2] = (int) 0
0x18f: Stack[-1] = (int) 1
0x190: Call2 0xe7

0x191: Pop(6)
0x192: Stack[-3] = (bool) 1
0x193: Return(); Pop(0)

0x194: PushEmpty(object, object)
0x195: @ CreateFloatVector(Stack[-1])
0x196: Pop(0)
0x197: @@ add(Stack[-3])
0x198: Pop(0)
0x199: Push((int) 16)
0x19a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x19b: Pop(1)
0x19c: Return(); Pop(2)

0x19d: Stack[-1] = 0
0x19e: PushEmpty(float, float)
0x19f: @ GetGameTime(Stack[-1])
0x1a0: Pop(0)
0x1a1: Push((int) 1)
0x1a2: PushEmpty(int)
0x1a3: Push((int) 24)
0x1a4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1a5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1a6: Return(); Pop(2)

0x1a7: PushEmpty(float, float)
0x1a8: Push("health")
0x1a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ab: Push("health")
0x1ac: @ GetProperty(Stack[-1], Stack[-2])
0x1ad: Pop(1)
0x1ae: Push((int) 0)
0x1af: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: @ SignalDeath(Stack[-4])
0x1b2: Pop(0)
0x1b3: Return(); Pop(2)

0x1b4: PushEmpty()
0x1b5: PushEmpty(object, int, float, cvector, cvector)
0x1b6: Stack[-5] = Stack[-11]
0x1b7: Stack[-4] = Stack[-10]
0x1b8: Stack[-3] = Stack[-9]
0x1b9: Stack[-2] = Stack[-7]
0x1ba: Stack[-1] = Stack[-6]
0x1bb: Call2 0x129

0x1bc: Pop(5)
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(bool, bool)
0x1bf: Push("cleanup")
0x1c0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c2: Push(GlobalVars[0])
0x1c3: Stack[-1] = (bool) 1
0x1c4: GlobalVars[0] = Stack[-1]; Pop(1)
0x1c5: @ IsLoaded(Stack[-1])
0x1c6: Pop(0)
0x1c7: Pop(0); Push((bool) Stack[-1] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(object)
0x1ca: Call2 0x156

0x1cb: Pop(0)
0x1cc: @ RemoveActor(Stack[-1])
0x1cd: Pop(1)
0x1ce: Return(); Pop(2)

0x1cf: Push(GlobalVars[0])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object)
0x1d2: Call2 0x156

0x1d3: Pop(0)
0x1d4: @ RemoveActor(Stack[-1])
0x1d5: Pop(1)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(int, bool, int, bool)
0x1d8: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1da: Push("GenerateMoney: iMin > iMax")
0x1db: @ Trace(Stack[-1])
0x1dc: Pop(1)
0x1dd: Return(); Pop(4)

0x1de: Stack[-2] = (int) 0
0x1df: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e1: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1e2: @ irand(Stack[-3], Stack[-1])
0x1e3: Pop(1)
0x1e4: GOTO 0x1e9

0x1e5: Push((int) 0)
0x1e6: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(4)

0x1e9: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x1ea: Push((int) 0)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Return(); Pop(4)

0x1ee: PushEmpty(int, string)
0x1ef: Stack[-1] = "Money"
0x1f0: Call2 0x210

0x1f1: Pop(1)
0x1f2: Push((int) 0)
0x1f3: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x1f4: Pop(2)
0x1f5: Return(); Pop(4)

0x1f6: PushEmpty(bool, bool)
0x1f7: PushEmpty(int, int)
0x1f8: Stack[-2] = (int) 0
0x1f9: Push((int) 10)
0x1fa: PushEmpty(int)
0x1fb: Call2 0x19e

0x1fc: Pop(0)
0x1fd: Push((int) 100)
0x1fe: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ff: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x200: Call2 0x1d7

0x201: Pop(2)
0x202: PushEmpty(string, int, int, int)
0x203: Stack[-4] = "bottle_water"
0x204: Stack[-3] = (int) 1
0x205: Stack[-2] = (int) 4
0x206: Stack[-1] = (int) 4
0x207: Call2 0x147

0x208: Pop(4)
0x209: PushEmpty(string, int, int)
0x20a: Stack[-3] = "lockpick"
0x20b: Stack[-2] = (int) 1
0x20c: Stack[-1] = (int) 6
0x20d: Call2 0x13c

0x20e: Pop(3)
0x20f: Return(); Pop(2)

0x210: PushEmpty(int, int)
0x211: @ GetInvItemByName(Stack[-1], Stack[-3])
0x212: Pop(0)
0x213: Stack[-4] = Stack[-1]
0x214: Return(); Pop(2)

