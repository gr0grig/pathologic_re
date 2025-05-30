GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	quest_b1_02
	agony_dead
	agony
	all
	sleep
	agony_sleep
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
	scripted
	blood_dir.xml
	reputation
	add
	health
	cleanup

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	RemoveEnvelope (0 args)
	SetRTEnvelope (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	WaitForAnimEnd (0 args)
	LockAnimationEnd (2 args)
	SetDeathState (0 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	RemoveActor (1 args)
	GetProperty (2 args)
	StopAnimation (0 args)
	GetSecondaryAnimationType (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FadeSecondaryAnimation (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	self (1 args)
	rand (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	FindActor (2 args)
	Trigger (2 args)
	SignalDeath (1 args)

RunOp = 0x1b
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_0 Op = 0xd Vars = (object)
		EVENT_41 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x8b Vars = ()
		EVENT_16 Op = 0x9e Vars = (object, string)

Events:
EVENT_16 Op = 0x162 Vars = (object, string)
EVENT_43 Op = 0x16f Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x179 Vars = (string)
EVENT_6 Op = 0x18a Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x10e

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: PushEmpty(bool, string, string)
0x11: Stack[-2] = "quest_b1_02"
0x12: Stack[-1] = "agony_dead"
0x13: Call2 0x156

0x14: Pop(3)
0x15: PushEmpty(object)
0x16: Stack[-1] = Stack[-2]
0x17: Call2 0x68

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: Return(); Pop(0)

0x1b: PushEmpty(bool, bool)
0x1c: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1d: @ RemoveEnvelope()
0x1e: Pop(0)
0x1f: Push((int) 50)
0x20: Push((int) 40)
0x21: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x22: Pop(2)
0x23: PushEmpty(bool)
0x24: Call2 0x10e

0x25: Pop(0)
0x26: Pop(1); Push((bool) Stack[-1] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x28: PushEmpty()
0x29: Push(-0, 0); TaskCall(0)
0x2a: Call2 0x0

0x2b: Pop(-0, 0); TaskReturn
0x2c: Pop(0)
0x2d: Push("agony")
0x2e: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(bool)
0x31: Stack[-1] = (bool) 0
0x32: Push(Stack[-2])
0x33: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x34: PushEmpty(bool, float)
0x35: Stack[-1] = (float) 0.33333
0x36: Call2 0x124

0x37: Pop(1)
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[-1] = (bool) 1
0x3a: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3b: Push("agony")
0x3c: Push(CVector(0.0, 40.0, 0.0))
0x3d: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x3e: Pop(2)
0x3f: Push("all")
0x40: Push("agony")
0x41: @ PlayAnimation(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: @ WaitForAnimEnd(Stack[-1])
0x44: Pop(0)
0x45: Push((int) 0)
0x46: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x48: Push(Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4a: Push("sleep")
0x4b: Push(CVector(0.0, 40.0, 0.0))
0x4c: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x4d: Pop(2)
0x4e: Push("all")
0x4f: Push("agony_sleep")
0x50: @ PlayAnimation(Stack[-2], Stack[-1])
0x51: Pop(2)
0x52: @ WaitForAnimEnd()
0x53: Pop(0)
0x54: Push("all")
0x55: Push("agony_sleep")
0x56: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x57: Pop(2)
0x58: @ SetDeathState()
0x59: Pop(0)
0x5a: PushEmpty()
0x5b: Call2 0x1a

0x5c: Pop(0)
0x5d: GOTO 0x64

0x5e: GOTO 0x63

0x5f: Push((int) 0)
0x60: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: GOTO 0x64

0x63: GOTO 0x2d

0x64: @ Hold()
0x65: Pop(0)
0x66: GOTO 0x64

0x67: Return(); Pop(2)

0x68: PushEmpty(bool, bool, bool, bool)
0x69: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6b: Return(); Pop(4)

0x6c: @ IsPlayerActor(Stack[-5], Stack[-2])
0x6d: Pop(0)
0x6e: Push(Stack[-2])
0x6f: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x70: @ IsDead(Stack[-1])
0x71: Pop(0)
0x72: Pop(0); Push((bool) Stack[-1] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x74: @ SetDeathState()
0x75: Pop(0)
0x76: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x77: PushEmpty(bool, object, float)
0x78: Stack[-2] = Stack[-8]
0x79: Stack[-1] = (float) -0.3
0x7a: Call2 0x129

0x7b: Pop(3)
0x7c: Push("death")
0x7d: Push(CVector(0.0, 40.0, 0.0))
0x7e: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: Push("all")
0x81: Push("agony_die")
0x82: @ PlayAnimation(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: @ WaitForAnimEnd()
0x85: Pop(0)
0x86: Push("all")
0x87: Push("agony_die")
0x88: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: Return(); Pop(4)

0x8b: PushEmpty()
0x8c: Call2 0x18a

0x8d: Pop(0)
0x8e: PushEmpty()
0x8f: Call2 0xaf

0x90: Pop(0)
0x91: Push( Stack[0 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: PushEmpty(object)
0x94: Call2 0x113

0x95: Pop(0)
0x96: @ RemoveActor(Stack[-1])
0x97: Pop(1)
0x98: PushEmpty()
0x99: Push(-0, 0); TaskCall(0)
0x9a: Call2 0x0

0x9b: Pop(-0, 0); TaskReturn
0x9c: Pop(0)
0x9d: Return(); Pop(0)

0x9e: PushEmpty(float, float)
0x9f: Push("agony")
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa2: Push("agony")
0xa3: @ GetProperty(Stack[-1], Stack[-2])
0xa4: Pop(1)
0xa5: Push((float)0.001)
0xa6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Stack[0 + Tasks[-1].StackPointer] = (int)1
0xa9: PushEmpty(object, string)
0xaa: Stack[-2] = Stack[-6]
0xab: Stack[-1] = Stack[-5]
0xac: Call2 0x162

0xad: Pop(2)
0xae: Return(); Pop(2)

0xaf: @ StopAnimation()
0xb0: Pop(0)
0xb1: Return(); Pop(0)

0xb2: PushEmpty(bool, bool)
0xb3: Push("HasProperty")
0xb4: Push((int) 2)
0xb5: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb6: Pop(1); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-5] = (bool) 0
0xb9: Return(); Pop(2)

0xba: @@ HasProperty(Stack[-3], Stack[-1])
0xbb: Pop(0)
0xbc: Stack[-5] = Stack[-1]
0xbd: Return(); Pop(2)

0xbe: PushEmpty(float, float)
0xbf: PushEmpty(bool, object, string)
0xc0: Stack[-2] = Stack[-10]
0xc1: Stack[-1] = Stack[-9]
0xc2: Call2 0xb2

0xc3: Pop(2)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc6: Stack[-8] = (bool) 0
0xc7: Return(); Pop(2)

0xc8: @@ GetProperty(Stack[-6], Stack[-1])
0xc9: Pop(0)
0xca: PushEmpty(float, float, float, float)
0xcb: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xcc: Stack[-2] = Stack[-8]
0xcd: Stack[-1] = Stack[-7]
0xce: Call2 0x119

0xcf: Pop(3)
0xd0: @@ SetProperty(Stack[-7], Stack[-1])
0xd1: Pop(1)
0xd2: Stack[-8] = (bool) 1
0xd3: Return(); Pop(2)

0xd4: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xd5: Pop(0); Push((bool) Stack[-15] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(14)

0xd8: @ IsDead(Stack[-7])
0xd9: Pop(0)
0xda: Push(Stack[-7])
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Return(); Pop(14)

0xdd: @ GetSecondaryAnimationType(Stack[-6])
0xde: Pop(0)
0xdf: Push((int) 0)
0xe0: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(14)

0xe3: @@ GetPosition(Stack[-5])
0xe4: Pop(0)
0xe5: @ GetPosition(Stack[-4])
0xe6: Pop(0)
0xe7: @ GetDirection(Stack[-3])
0xe8: Pop(0)
0xe9: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xea: Push(CvectorIndex(Stack[-2], 0))
0xeb: Push(CvectorIndex(Stack[-4], 0))
0xec: Pop(2); Push(Stack[-2] * Stack[-1]);
0xed: Push(CvectorIndex(Stack[-3], 2))
0xee: Push(CvectorIndex(Stack[-5], 2))
0xef: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf1: Push((int) 0)
0xf2: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-1] = "fhit"
0xf5: GOTO 0xf7

0xf6: Stack[-1] = "bhit"
0xf7: Push("hit_react")
0xf8: Push("1")
0xf9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xfa: Push("2")
0xfb: Pop(1); Push(Stack[-4] + Stack[-1]);
0xfc: Push((int) -10)
0xfd: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(4)
0xff: Return(); Pop(14)

0x100: PushEmpty(object, object, object, object)
0x101: @ GetScene(Stack[-2])
0x102: Pop(0)
0x103: Push("scripted")
0x104: Push("blood_dir.xml")
0x105: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x106: Pop(2)
0x107: PushEmpty(object)
0x108: Stack[-1] = Stack[-10]
0x109: Call2 0xd4

0x10a: Pop(1)
0x10b: Return(); Pop(4)

0x10c: Stack[-1] = 0
0x10d: Stack[-2] = 0
0x10e: PushEmpty(bool, bool)
0x10f: @ IsLoaded(Stack[-1])
0x110: Pop(0)
0x111: Stack[-3] = Stack[-1]
0x112: Return(); Pop(2)

0x113: PushEmpty(object, object)
0x114: @ self(Stack[-1])
0x115: Pop(0)
0x116: Stack[-3] = Stack[-1]
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty()
0x11a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: Stack[-4] = Stack[-2]
0x11d: Return(); Pop(0)

0x11e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-4] = Stack[-1]
0x121: Return(); Pop(0)

0x122: Stack[-4] = Stack[-3]
0x123: Return(); Pop(0)

0x124: PushEmpty(float, float)
0x125: @ rand(Stack[-1])
0x126: Pop(0)
0x127: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x128: Return(); Pop(2)

0x129: PushEmpty()
0x12a: Pop(0); Push((bool) Stack[-2] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12c: Stack[-3] = (bool) 0
0x12d: Return(); Pop(0)

0x12e: Push((int) 0)
0x12f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x131: Push((int) 8)
0x132: @ SendWorldWndMessage(Stack[-1])
0x133: Pop(1)
0x134: GOTO 0x13e

0x135: Push((int) 0)
0x136: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x138: Push((int) 9)
0x139: @ SendWorldWndMessage(Stack[-1])
0x13a: Pop(1)
0x13b: GOTO 0x13e

0x13c: Stack[-3] = (bool) 0
0x13d: Return(); Pop(0)

0x13e: PushEmpty(float)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0x14c

0x141: Pop(1)
0x142: PushEmpty(bool, object, string, float, float, float)
0x143: Stack[-5] = Stack[-8]
0x144: Stack[-4] = "reputation"
0x145: Stack[-3] = Stack[-7]
0x146: Stack[-2] = (int) 0
0x147: Stack[-1] = (int) 1
0x148: Call2 0xbe

0x149: Pop(6)
0x14a: Stack[-3] = (bool) 1
0x14b: Return(); Pop(0)

0x14c: PushEmpty(object, object)
0x14d: @ CreateFloatVector(Stack[-1])
0x14e: Pop(0)
0x14f: @@ add(Stack[-3])
0x150: Pop(0)
0x151: Push((int) 16)
0x152: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x153: Pop(1)
0x154: Return(); Pop(2)

0x155: Stack[-1] = 0
0x156: PushEmpty(object, object)
0x157: @ FindActor(Stack[-1], Stack[-4])
0x158: Pop(0)
0x159: Pop(0); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15b: Stack[-5] = (bool) 0
0x15c: Return(); Pop(2)

0x15d: @ Trigger(Stack[-1], Stack[-3])
0x15e: Pop(0)
0x15f: Stack[-5] = (bool) 1
0x160: Return(); Pop(2)

0x161: Stack[-1] = 0
0x162: PushEmpty(float, float)
0x163: Push("health")
0x164: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x166: Push("health")
0x167: @ GetProperty(Stack[-1], Stack[-2])
0x168: Pop(1)
0x169: Push((int) 0)
0x16a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16c: @ SignalDeath(Stack[-4])
0x16d: Pop(0)
0x16e: Return(); Pop(2)

0x16f: PushEmpty()
0x170: PushEmpty(object, int, float, cvector, cvector)
0x171: Stack[-5] = Stack[-11]
0x172: Stack[-4] = Stack[-10]
0x173: Stack[-3] = Stack[-9]
0x174: Stack[-2] = Stack[-7]
0x175: Stack[-1] = Stack[-6]
0x176: Call2 0x100

0x177: Pop(5)
0x178: Return(); Pop(0)

0x179: PushEmpty(bool, bool)
0x17a: Push("cleanup")
0x17b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17d: Push(GlobalVars[0])
0x17e: Stack[-1] = (bool) 1
0x17f: GlobalVars[0] = Stack[-1]; Pop(1)
0x180: @ IsLoaded(Stack[-1])
0x181: Pop(0)
0x182: Pop(0); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Call2 0x113

0x186: Pop(0)
0x187: @ RemoveActor(Stack[-1])
0x188: Pop(1)
0x189: Return(); Pop(2)

0x18a: Push(GlobalVars[0])
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(object)
0x18d: Call2 0x113

0x18e: Pop(0)
0x18f: @ RemoveActor(Stack[-1])
0x190: Pop(1)
0x191: Return(); Pop(0)

