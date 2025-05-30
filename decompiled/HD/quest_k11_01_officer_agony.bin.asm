GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	heal
	quest_k11_01
	cure_officer
	agony
	all
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
	Sleep (1 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	SetDeathState (0 args)
	WaitForAnimEnd (0 args)
	LockAnimationEnd (2 args)
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

RunOp = 0x19
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_0 Op = 0x17 Vars = (object)
		EVENT_41 Op = 0x49 Vars = (object)
		EVENT_6 Op = 0x6c Vars = ()
		EVENT_16 Op = 0x7f Vars = (object, string)

Events:
EVENT_16 Op = 0x143 Vars = (object, string)
EVENT_43 Op = 0x150 Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x15a Vars = (string)
EVENT_6 Op = 0x16b Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xef

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
0xe: Push("heal")
0xf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: PushEmpty(bool, string, string)
0x12: Stack[-2] = "quest_k11_01"
0x13: Stack[-1] = "cure_officer"
0x14: Call2 0x137

0x15: Pop(3)
0x16: Return(); Pop(0)

0x17: PushEmpty()
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
0x22: Call2 0xef

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
0x34: Call2 0x105

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
0x41: Push((float)3.0)
0x42: @ Sleep(Stack[-1])
0x43: Pop(1)
0x44: GOTO 0x2b

0x45: @ Hold()
0x46: Pop(0)
0x47: GOTO 0x45

0x48: Return(); Pop(2)

0x49: PushEmpty(bool, bool, bool, bool)
0x4a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Return(); Pop(4)

0x4d: @ IsPlayerActor(Stack[-5], Stack[-2])
0x4e: Pop(0)
0x4f: Push(Stack[-2])
0x50: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x51: @ IsDead(Stack[-1])
0x52: Pop(0)
0x53: Pop(0); Push((bool) Stack[-1] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x55: @ SetDeathState()
0x56: Pop(0)
0x57: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x58: PushEmpty(bool, object, float)
0x59: Stack[-2] = Stack[-8]
0x5a: Stack[-1] = (float) -0.3
0x5b: Call2 0x10a

0x5c: Pop(3)
0x5d: Push("death")
0x5e: Push(CVector(0.0, 40.0, 0.0))
0x5f: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: Push("all")
0x62: Push("agony_die")
0x63: @ PlayAnimation(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: @ WaitForAnimEnd()
0x66: Pop(0)
0x67: Push("all")
0x68: Push("agony_die")
0x69: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x6a: Pop(2)
0x6b: Return(); Pop(4)

0x6c: PushEmpty()
0x6d: Call2 0x16b

0x6e: Pop(0)
0x6f: PushEmpty()
0x70: Call2 0x90

0x71: Pop(0)
0x72: Push( Stack[0 + Tasks[-1].StackPointer] )
0x73: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x74: PushEmpty(object)
0x75: Call2 0xf4

0x76: Pop(0)
0x77: @ RemoveActor(Stack[-1])
0x78: Pop(1)
0x79: PushEmpty()
0x7a: Push(-0, 0); TaskCall(0)
0x7b: Call2 0x0

0x7c: Pop(-0, 0); TaskReturn
0x7d: Pop(0)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(float, float)
0x80: Push("agony")
0x81: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x83: Push("agony")
0x84: @ GetProperty(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Push((float)0.001)
0x87: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x8a: PushEmpty(object, string)
0x8b: Stack[-2] = Stack[-6]
0x8c: Stack[-1] = Stack[-5]
0x8d: Call2 0x143

0x8e: Pop(2)
0x8f: Return(); Pop(2)

0x90: @ StopAnimation()
0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: PushEmpty(bool, bool)
0x94: Push("HasProperty")
0x95: Push((int) 2)
0x96: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x99: Stack[-5] = (bool) 0
0x9a: Return(); Pop(2)

0x9b: @@ HasProperty(Stack[-3], Stack[-1])
0x9c: Pop(0)
0x9d: Stack[-5] = Stack[-1]
0x9e: Return(); Pop(2)

0x9f: PushEmpty(float, float)
0xa0: PushEmpty(bool, object, string)
0xa1: Stack[-2] = Stack[-10]
0xa2: Stack[-1] = Stack[-9]
0xa3: Call2 0x93

0xa4: Pop(2)
0xa5: Pop(1); Push((bool) Stack[-1] == 0)
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-8] = (bool) 0
0xa8: Return(); Pop(2)

0xa9: @@ GetProperty(Stack[-6], Stack[-1])
0xaa: Pop(0)
0xab: PushEmpty(float, float, float, float)
0xac: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xad: Stack[-2] = Stack[-8]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0xfa

0xb0: Pop(3)
0xb1: @@ SetProperty(Stack[-7], Stack[-1])
0xb2: Pop(1)
0xb3: Stack[-8] = (bool) 1
0xb4: Return(); Pop(2)

0xb5: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xb6: Pop(0); Push((bool) Stack[-15] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(14)

0xb9: @ IsDead(Stack[-7])
0xba: Pop(0)
0xbb: Push(Stack[-7])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(14)

0xbe: @ GetSecondaryAnimationType(Stack[-6])
0xbf: Pop(0)
0xc0: Push((int) 0)
0xc1: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Return(); Pop(14)

0xc4: @@ GetPosition(Stack[-5])
0xc5: Pop(0)
0xc6: @ GetPosition(Stack[-4])
0xc7: Pop(0)
0xc8: @ GetDirection(Stack[-3])
0xc9: Pop(0)
0xca: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xcb: Push(CvectorIndex(Stack[-2], 0))
0xcc: Push(CvectorIndex(Stack[-4], 0))
0xcd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xce: Push(CvectorIndex(Stack[-3], 2))
0xcf: Push(CvectorIndex(Stack[-5], 2))
0xd0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd2: Push((int) 0)
0xd3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: Stack[-1] = "fhit"
0xd6: GOTO 0xd8

0xd7: Stack[-1] = "bhit"
0xd8: Push("hit_react")
0xd9: Push("1")
0xda: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdb: Push("2")
0xdc: Pop(1); Push(Stack[-4] + Stack[-1]);
0xdd: Push((int) -10)
0xde: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(4)
0xe0: Return(); Pop(14)

0xe1: PushEmpty(object, object, object, object)
0xe2: @ GetScene(Stack[-2])
0xe3: Pop(0)
0xe4: Push("scripted")
0xe5: Push("blood_dir.xml")
0xe6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xe7: Pop(2)
0xe8: PushEmpty(object)
0xe9: Stack[-1] = Stack[-10]
0xea: Call2 0xb5

0xeb: Pop(1)
0xec: Return(); Pop(4)

0xed: Stack[-1] = 0
0xee: Stack[-2] = 0
0xef: PushEmpty(bool, bool)
0xf0: @ IsLoaded(Stack[-1])
0xf1: Pop(0)
0xf2: Stack[-3] = Stack[-1]
0xf3: Return(); Pop(2)

0xf4: PushEmpty(object, object)
0xf5: @ self(Stack[-1])
0xf6: Pop(0)
0xf7: Stack[-3] = Stack[-1]
0xf8: Return(); Pop(2)

0xf9: Stack[-1] = 0
0xfa: PushEmpty()
0xfb: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xfc: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfd: Stack[-4] = Stack[-2]
0xfe: Return(); Pop(0)

0xff: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x101: Stack[-4] = Stack[-1]
0x102: Return(); Pop(0)

0x103: Stack[-4] = Stack[-3]
0x104: Return(); Pop(0)

0x105: PushEmpty(float, float)
0x106: @ rand(Stack[-1])
0x107: Pop(0)
0x108: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x109: Return(); Pop(2)

0x10a: PushEmpty()
0x10b: Pop(0); Push((bool) Stack[-2] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-3] = (bool) 0
0x10e: Return(); Pop(0)

0x10f: Push((int) 0)
0x110: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x112: Push((int) 8)
0x113: @ SendWorldWndMessage(Stack[-1])
0x114: Pop(1)
0x115: GOTO 0x11f

0x116: Push((int) 0)
0x117: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x119: Push((int) 9)
0x11a: @ SendWorldWndMessage(Stack[-1])
0x11b: Pop(1)
0x11c: GOTO 0x11f

0x11d: Stack[-3] = (bool) 0
0x11e: Return(); Pop(0)

0x11f: PushEmpty(float)
0x120: Stack[-1] = Stack[-2]
0x121: Call2 0x12d

0x122: Pop(1)
0x123: PushEmpty(bool, object, string, float, float, float)
0x124: Stack[-5] = Stack[-8]
0x125: Stack[-4] = "reputation"
0x126: Stack[-3] = Stack[-7]
0x127: Stack[-2] = (int) 0
0x128: Stack[-1] = (int) 1
0x129: Call2 0x9f

0x12a: Pop(6)
0x12b: Stack[-3] = (bool) 1
0x12c: Return(); Pop(0)

0x12d: PushEmpty(object, object)
0x12e: @ CreateFloatVector(Stack[-1])
0x12f: Pop(0)
0x130: @@ add(Stack[-3])
0x131: Pop(0)
0x132: Push((int) 16)
0x133: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x134: Pop(1)
0x135: Return(); Pop(2)

0x136: Stack[-1] = 0
0x137: PushEmpty(object, object)
0x138: @ FindActor(Stack[-1], Stack[-4])
0x139: Pop(0)
0x13a: Pop(0); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13c: Stack[-5] = (bool) 0
0x13d: Return(); Pop(2)

0x13e: @ Trigger(Stack[-1], Stack[-3])
0x13f: Pop(0)
0x140: Stack[-5] = (bool) 1
0x141: Return(); Pop(2)

0x142: Stack[-1] = 0
0x143: PushEmpty(float, float)
0x144: Push("health")
0x145: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x147: Push("health")
0x148: @ GetProperty(Stack[-1], Stack[-2])
0x149: Pop(1)
0x14a: Push((int) 0)
0x14b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14d: @ SignalDeath(Stack[-4])
0x14e: Pop(0)
0x14f: Return(); Pop(2)

0x150: PushEmpty()
0x151: PushEmpty(object, int, float, cvector, cvector)
0x152: Stack[-5] = Stack[-11]
0x153: Stack[-4] = Stack[-10]
0x154: Stack[-3] = Stack[-9]
0x155: Stack[-2] = Stack[-7]
0x156: Stack[-1] = Stack[-6]
0x157: Call2 0xe1

0x158: Pop(5)
0x159: Return(); Pop(0)

0x15a: PushEmpty(bool, bool)
0x15b: Push("cleanup")
0x15c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15e: Push(GlobalVars[0])
0x15f: Stack[-1] = (bool) 1
0x160: GlobalVars[0] = Stack[-1]; Pop(1)
0x161: @ IsLoaded(Stack[-1])
0x162: Pop(0)
0x163: Pop(0); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: PushEmpty(object)
0x166: Call2 0xf4

0x167: Pop(0)
0x168: @ RemoveActor(Stack[-1])
0x169: Pop(1)
0x16a: Return(); Pop(2)

0x16b: Push(GlobalVars[0])
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: PushEmpty(object)
0x16e: Call2 0xf4

0x16f: Pop(0)
0x170: @ RemoveActor(Stack[-1])
0x171: Pop(1)
0x172: Return(); Pop(0)

