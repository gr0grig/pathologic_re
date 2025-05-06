GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
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
	2
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
	SignalDeath (1 args)

RunOp = 0x10
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_0 Op = 0xd Vars = (object)
		EVENT_41 Op = 0x5d Vars = (object)
		EVENT_6 Op = 0x80 Vars = ()
		EVENT_16 Op = 0x93 Vars = (object, string)

Events:
EVENT_16 Op = 0x14b Vars = (object, string)
EVENT_43 Op = 0x158 Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x162 Vars = (string)
EVENT_6 Op = 0x173 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x103

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

0xf: Return(); Pop(0)

0x10: PushEmpty(bool, bool)
0x11: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x12: @ RemoveEnvelope()
0x13: Pop(0)
0x14: Push((int) 50)
0x15: Push((int) 40)
0x16: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x17: Pop(2)
0x18: PushEmpty(bool)
0x19: Call2 0x103

0x1a: Pop(0)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call2 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Push("agony")
0x23: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0x24: Pop(1)
0x25: PushEmpty(bool)
0x26: Stack[-1] = (bool) 0
0x27: Push(Stack[-2])
0x28: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x29: PushEmpty(bool, float)
0x2a: Stack[-1] = (float) 0.33333
0x2b: Call2 0x119

0x2c: Pop(1)
0x2d: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2e: Stack[-1] = (bool) 1
0x2f: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x30: Push("agony")
0x31: Push(CVector(0.0, 40.0, 0.0))
0x32: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x33: Pop(2)
0x34: Push("all")
0x35: Push("agony")
0x36: @ PlayAnimation(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: @ WaitForAnimEnd(Stack[-1])
0x39: Pop(0)
0x3a: Push((int) 0)
0x3b: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x3d: Push(Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x3f: Push("sleep")
0x40: Push(CVector(0.0, 40.0, 0.0))
0x41: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: Push("all")
0x44: Push("agony_sleep")
0x45: @ PlayAnimation(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: @ WaitForAnimEnd()
0x48: Pop(0)
0x49: Push("all")
0x4a: Push("agony_sleep")
0x4b: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: @ SetDeathState()
0x4e: Pop(0)
0x4f: PushEmpty()
0x50: Call2 0xf

0x51: Pop(0)
0x52: GOTO 0x59

0x53: GOTO 0x58

0x54: Push((int) 0)
0x55: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: GOTO 0x59

0x58: GOTO 0x22

0x59: @ Hold()
0x5a: Pop(0)
0x5b: GOTO 0x59

0x5c: Return(); Pop(2)

0x5d: PushEmpty(bool, bool, bool, bool)
0x5e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Return(); Pop(4)

0x61: @ IsPlayerActor(Stack[-5], Stack[-2])
0x62: Pop(0)
0x63: Push(Stack[-2])
0x64: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x65: @ IsDead(Stack[-1])
0x66: Pop(0)
0x67: Pop(0); Push((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x69: @ SetDeathState()
0x6a: Pop(0)
0x6b: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x6c: PushEmpty(bool, object, float)
0x6d: Stack[-2] = Stack[-8]
0x6e: Stack[-1] = (float) -0.3
0x6f: Call2 0x11e

0x70: Pop(3)
0x71: Push("death")
0x72: Push(CVector(0.0, 40.0, 0.0))
0x73: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: Push("all")
0x76: Push("agony_die")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push("all")
0x7c: Push("agony_die")
0x7d: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: Return(); Pop(4)

0x80: PushEmpty()
0x81: Call2 0x173

0x82: Pop(0)
0x83: PushEmpty()
0x84: Call2 0xa4

0x85: Pop(0)
0x86: Push( Stack[0 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: PushEmpty(object)
0x89: Call2 0x108

0x8a: Pop(0)
0x8b: @ RemoveActor(Stack[-1])
0x8c: Pop(1)
0x8d: PushEmpty()
0x8e: Push(-0, 0); TaskCall(0)
0x8f: Call2 0x0

0x90: Pop(-0, 0); TaskReturn
0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: PushEmpty(float, float)
0x94: Push("agony")
0x95: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x97: Push("agony")
0x98: @ GetProperty(Stack[-1], Stack[-2])
0x99: Pop(1)
0x9a: Push((float)0.001)
0x9b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x9e: PushEmpty(object, string)
0x9f: Stack[-2] = Stack[-6]
0xa0: Stack[-1] = Stack[-5]
0xa1: Call2 0x14b

0xa2: Pop(2)
0xa3: Return(); Pop(2)

0xa4: @ StopAnimation()
0xa5: Pop(0)
0xa6: Return(); Pop(0)

0xa7: PushEmpty(bool, bool)
0xa8: Push("HasProperty")
0xa9: Push((int) 2)
0xaa: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xad: Stack[-5] = (bool) 0
0xae: Return(); Pop(2)

0xaf: @@ HasProperty(Stack[-3], Stack[-1])
0xb0: Pop(0)
0xb1: Stack[-5] = Stack[-1]
0xb2: Return(); Pop(2)

0xb3: PushEmpty(float, float)
0xb4: PushEmpty(bool, object, string)
0xb5: Stack[-2] = Stack[-10]
0xb6: Stack[-1] = Stack[-9]
0xb7: Call2 0xa7

0xb8: Pop(2)
0xb9: Pop(1); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-8] = (bool) 0
0xbc: Return(); Pop(2)

0xbd: @@ GetProperty(Stack[-6], Stack[-1])
0xbe: Pop(0)
0xbf: PushEmpty(float, float, float, float)
0xc0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xc1: Stack[-2] = Stack[-8]
0xc2: Stack[-1] = Stack[-7]
0xc3: Call2 0x10e

0xc4: Pop(3)
0xc5: @@ SetProperty(Stack[-7], Stack[-1])
0xc6: Pop(1)
0xc7: Stack[-8] = (bool) 1
0xc8: Return(); Pop(2)

0xc9: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xca: Pop(0); Push((bool) Stack[-15] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(14)

0xcd: @ IsDead(Stack[-7])
0xce: Pop(0)
0xcf: Push(Stack[-7])
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(14)

0xd2: @ GetSecondaryAnimationType(Stack[-6])
0xd3: Pop(0)
0xd4: Push((int) 0)
0xd5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(14)

0xd8: @@ GetPosition(Stack[-5])
0xd9: Pop(0)
0xda: @ GetPosition(Stack[-4])
0xdb: Pop(0)
0xdc: @ GetDirection(Stack[-3])
0xdd: Pop(0)
0xde: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xdf: Push(CvectorIndex(Stack[-2], 0))
0xe0: Push(CvectorIndex(Stack[-4], 0))
0xe1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe2: Push(CvectorIndex(Stack[-3], 2))
0xe3: Push(CvectorIndex(Stack[-5], 2))
0xe4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe6: Push((int) 0)
0xe7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe9: Stack[-1] = "fhit"
0xea: GOTO 0xec

0xeb: Stack[-1] = "bhit"
0xec: Push("hit_react")
0xed: Push("1")
0xee: Pop(1); Push(Stack[-3] + Stack[-1]);
0xef: Push("2")
0xf0: Pop(1); Push(Stack[-4] + Stack[-1]);
0xf1: Push((int) -10)
0xf2: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(4)
0xf4: Return(); Pop(14)

0xf5: PushEmpty(object, object, object, object)
0xf6: @ GetScene(Stack[-2])
0xf7: Pop(0)
0xf8: Push("scripted")
0xf9: Push("blood_dir.xml")
0xfa: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xfb: Pop(2)
0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[-10]
0xfe: Call2 0xc9

0xff: Pop(1)
0x100: Return(); Pop(4)

0x101: Stack[-1] = 0
0x102: Stack[-2] = 0
0x103: PushEmpty(bool, bool)
0x104: @ IsLoaded(Stack[-1])
0x105: Pop(0)
0x106: Stack[-3] = Stack[-1]
0x107: Return(); Pop(2)

0x108: PushEmpty(object, object)
0x109: @ self(Stack[-1])
0x10a: Pop(0)
0x10b: Stack[-3] = Stack[-1]
0x10c: Return(); Pop(2)

0x10d: Stack[-1] = 0
0x10e: PushEmpty()
0x10f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: Stack[-4] = Stack[-2]
0x112: Return(); Pop(0)

0x113: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: Stack[-4] = Stack[-1]
0x116: Return(); Pop(0)

0x117: Stack[-4] = Stack[-3]
0x118: Return(); Pop(0)

0x119: PushEmpty(float, float)
0x11a: @ rand(Stack[-1])
0x11b: Pop(0)
0x11c: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x11d: Return(); Pop(2)

0x11e: PushEmpty()
0x11f: Pop(0); Push((bool) Stack[-2] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x121: Stack[-3] = (bool) 0
0x122: Return(); Pop(0)

0x123: Push((int) 0)
0x124: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x126: Push((int) 8)
0x127: @ SendWorldWndMessage(Stack[-1])
0x128: Pop(1)
0x129: GOTO 0x133

0x12a: Push((int) 0)
0x12b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12d: Push((int) 9)
0x12e: @ SendWorldWndMessage(Stack[-1])
0x12f: Pop(1)
0x130: GOTO 0x133

0x131: Stack[-3] = (bool) 0
0x132: Return(); Pop(0)

0x133: PushEmpty(float)
0x134: Stack[-1] = Stack[-2]
0x135: Call2 0x141

0x136: Pop(1)
0x137: PushEmpty(bool, object, string, float, float, float)
0x138: Stack[-5] = Stack[-8]
0x139: Stack[-4] = "reputation"
0x13a: Stack[-3] = Stack[-7]
0x13b: Stack[-2] = (int) 0
0x13c: Stack[-1] = (int) 1
0x13d: Call2 0xb3

0x13e: Pop(6)
0x13f: Stack[-3] = (bool) 1
0x140: Return(); Pop(0)

0x141: PushEmpty(object, object)
0x142: @ CreateFloatVector(Stack[-1])
0x143: Pop(0)
0x144: @@ add(Stack[-3])
0x145: Pop(0)
0x146: Push((int) 16)
0x147: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x148: Pop(1)
0x149: Return(); Pop(2)

0x14a: Stack[-1] = 0
0x14b: PushEmpty(float, float)
0x14c: Push("health")
0x14d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x14f: Push("health")
0x150: @ GetProperty(Stack[-1], Stack[-2])
0x151: Pop(1)
0x152: Push((int) 0)
0x153: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x155: @ SignalDeath(Stack[-4])
0x156: Pop(0)
0x157: Return(); Pop(2)

0x158: PushEmpty()
0x159: PushEmpty(object, int, float, cvector, cvector)
0x15a: Stack[-5] = Stack[-11]
0x15b: Stack[-4] = Stack[-10]
0x15c: Stack[-3] = Stack[-9]
0x15d: Stack[-2] = Stack[-7]
0x15e: Stack[-1] = Stack[-6]
0x15f: Call2 0xf5

0x160: Pop(5)
0x161: Return(); Pop(0)

0x162: PushEmpty(bool, bool)
0x163: Push("cleanup")
0x164: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x166: Push(GlobalVars[0])
0x167: Stack[-1] = (bool) 1
0x168: GlobalVars[0] = Stack[-1]; Pop(1)
0x169: @ IsLoaded(Stack[-1])
0x16a: Pop(0)
0x16b: Pop(0); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: PushEmpty(object)
0x16e: Call2 0x108

0x16f: Pop(0)
0x170: @ RemoveActor(Stack[-1])
0x171: Pop(1)
0x172: Return(); Pop(2)

0x173: Push(GlobalVars[0])
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: PushEmpty(object)
0x176: Call2 0x108

0x177: Pop(0)
0x178: @ RemoveActor(Stack[-1])
0x179: Pop(1)
0x17a: Return(); Pop(0)

