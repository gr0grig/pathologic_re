GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	heal
	quest_k1_01
	cure_worker
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
	FindActor (2 args)
	Trigger (2 args)
	SignalDeath (1 args)

RunOp = 0x1a
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_0 Op = 0x18 Vars = (object)
		EVENT_41 Op = 0x67 Vars = (object)
		EVENT_6 Op = 0x8a Vars = ()
		EVENT_16 Op = 0x9d Vars = (object, string)

Events:
EVENT_16 Op = 0x161 Vars = (object, string)
EVENT_43 Op = 0x16e Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x178 Vars = (string)
EVENT_6 Op = 0x189 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x10d

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
0x12: Stack[-2] = "quest_k1_01"
0x13: Stack[-1] = "cure_worker"
0x14: Call2 0x155

0x15: Pop(3)
0x16: Return(); Pop(0)

0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: Return(); Pop(0)

0x1a: PushEmpty(bool, bool)
0x1b: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1c: @ RemoveEnvelope()
0x1d: Pop(0)
0x1e: Push((int) 50)
0x1f: Push((int) 40)
0x20: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x21: Pop(2)
0x22: PushEmpty(bool)
0x23: Call2 0x10d

0x24: Pop(0)
0x25: Pop(1); Push((bool) Stack[-1] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: PushEmpty()
0x28: Push(-0, 0); TaskCall(0)
0x29: Call2 0x0

0x2a: Pop(-0, 0); TaskReturn
0x2b: Pop(0)
0x2c: Push("agony")
0x2d: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0x2e: Pop(1)
0x2f: PushEmpty(bool)
0x30: Stack[-1] = (bool) 0
0x31: Push(Stack[-2])
0x32: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x33: PushEmpty(bool, float)
0x34: Stack[-1] = (float) 0.33333
0x35: Call2 0x123

0x36: Pop(1)
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-1] = (bool) 1
0x39: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3a: Push("agony")
0x3b: Push(CVector(0.0, 40.0, 0.0))
0x3c: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: Push("all")
0x3f: Push("agony")
0x40: @ PlayAnimation(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: @ WaitForAnimEnd(Stack[-1])
0x43: Pop(0)
0x44: Push((int) 0)
0x45: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x47: Push(Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x49: Push("sleep")
0x4a: Push(CVector(0.0, 40.0, 0.0))
0x4b: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: Push("all")
0x4e: Push("agony_sleep")
0x4f: @ PlayAnimation(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: @ WaitForAnimEnd()
0x52: Pop(0)
0x53: Push("all")
0x54: Push("agony_sleep")
0x55: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x56: Pop(2)
0x57: @ SetDeathState()
0x58: Pop(0)
0x59: PushEmpty()
0x5a: Call2 0x17

0x5b: Pop(0)
0x5c: GOTO 0x63

0x5d: GOTO 0x62

0x5e: Push((int) 0)
0x5f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: GOTO 0x63

0x62: GOTO 0x2c

0x63: @ Hold()
0x64: Pop(0)
0x65: GOTO 0x63

0x66: Return(); Pop(2)

0x67: PushEmpty(bool, bool, bool, bool)
0x68: Push( Stack[0 + Tasks[-1].StackPointer] )
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Return(); Pop(4)

0x6b: @ IsPlayerActor(Stack[-5], Stack[-2])
0x6c: Pop(0)
0x6d: Push(Stack[-2])
0x6e: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x6f: @ IsDead(Stack[-1])
0x70: Pop(0)
0x71: Pop(0); Push((bool) Stack[-1] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x73: @ SetDeathState()
0x74: Pop(0)
0x75: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x76: PushEmpty(bool, object, float)
0x77: Stack[-2] = Stack[-8]
0x78: Stack[-1] = (float) -0.3
0x79: Call2 0x128

0x7a: Pop(3)
0x7b: Push("death")
0x7c: Push(CVector(0.0, 40.0, 0.0))
0x7d: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: Push("all")
0x80: Push("agony_die")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push("all")
0x86: Push("agony_die")
0x87: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: Return(); Pop(4)

0x8a: PushEmpty()
0x8b: Call2 0x189

0x8c: Pop(0)
0x8d: PushEmpty()
0x8e: Call2 0xae

0x8f: Pop(0)
0x90: Push( Stack[0 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: PushEmpty(object)
0x93: Call2 0x112

0x94: Pop(0)
0x95: @ RemoveActor(Stack[-1])
0x96: Pop(1)
0x97: PushEmpty()
0x98: Push(-0, 0); TaskCall(0)
0x99: Call2 0x0

0x9a: Pop(-0, 0); TaskReturn
0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: PushEmpty(float, float)
0x9e: Push("agony")
0x9f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa1: Push("agony")
0xa2: @ GetProperty(Stack[-1], Stack[-2])
0xa3: Pop(1)
0xa4: Push((float)0.001)
0xa5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[0 + Tasks[-1].StackPointer] = (int)1
0xa8: PushEmpty(object, string)
0xa9: Stack[-2] = Stack[-6]
0xaa: Stack[-1] = Stack[-5]
0xab: Call2 0x161

0xac: Pop(2)
0xad: Return(); Pop(2)

0xae: @ StopAnimation()
0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: PushEmpty(bool, bool)
0xb2: Push("HasProperty")
0xb3: Push((int) 2)
0xb4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb5: Pop(1); Push((bool) Stack[-1] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb7: Stack[-5] = (bool) 0
0xb8: Return(); Pop(2)

0xb9: @@ HasProperty(Stack[-3], Stack[-1])
0xba: Pop(0)
0xbb: Stack[-5] = Stack[-1]
0xbc: Return(); Pop(2)

0xbd: PushEmpty(float, float)
0xbe: PushEmpty(bool, object, string)
0xbf: Stack[-2] = Stack[-10]
0xc0: Stack[-1] = Stack[-9]
0xc1: Call2 0xb1

0xc2: Pop(2)
0xc3: Pop(1); Push((bool) Stack[-1] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-8] = (bool) 0
0xc6: Return(); Pop(2)

0xc7: @@ GetProperty(Stack[-6], Stack[-1])
0xc8: Pop(0)
0xc9: PushEmpty(float, float, float, float)
0xca: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xcb: Stack[-2] = Stack[-8]
0xcc: Stack[-1] = Stack[-7]
0xcd: Call2 0x118

0xce: Pop(3)
0xcf: @@ SetProperty(Stack[-7], Stack[-1])
0xd0: Pop(1)
0xd1: Stack[-8] = (bool) 1
0xd2: Return(); Pop(2)

0xd3: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xd4: Pop(0); Push((bool) Stack[-15] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(14)

0xd7: @ IsDead(Stack[-7])
0xd8: Pop(0)
0xd9: Push(Stack[-7])
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Return(); Pop(14)

0xdc: @ GetSecondaryAnimationType(Stack[-6])
0xdd: Pop(0)
0xde: Push((int) 0)
0xdf: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe1: Return(); Pop(14)

0xe2: @@ GetPosition(Stack[-5])
0xe3: Pop(0)
0xe4: @ GetPosition(Stack[-4])
0xe5: Pop(0)
0xe6: @ GetDirection(Stack[-3])
0xe7: Pop(0)
0xe8: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe9: Push(CvectorIndex(Stack[-2], 0))
0xea: Push(CvectorIndex(Stack[-4], 0))
0xeb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xec: Push(CvectorIndex(Stack[-3], 2))
0xed: Push(CvectorIndex(Stack[-5], 2))
0xee: Pop(2); Push(Stack[-2] * Stack[-1]);
0xef: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf0: Push((int) 0)
0xf1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf3: Stack[-1] = "fhit"
0xf4: GOTO 0xf6

0xf5: Stack[-1] = "bhit"
0xf6: Push("hit_react")
0xf7: Push("1")
0xf8: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf9: Push("2")
0xfa: Pop(1); Push(Stack[-4] + Stack[-1]);
0xfb: Push((int) -10)
0xfc: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(4)
0xfe: Return(); Pop(14)

0xff: PushEmpty(object, object, object, object)
0x100: @ GetScene(Stack[-2])
0x101: Pop(0)
0x102: Push("scripted")
0x103: Push("blood_dir.xml")
0x104: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x105: Pop(2)
0x106: PushEmpty(object)
0x107: Stack[-1] = Stack[-10]
0x108: Call2 0xd3

0x109: Pop(1)
0x10a: Return(); Pop(4)

0x10b: Stack[-1] = 0
0x10c: Stack[-2] = 0
0x10d: PushEmpty(bool, bool)
0x10e: @ IsLoaded(Stack[-1])
0x10f: Pop(0)
0x110: Stack[-3] = Stack[-1]
0x111: Return(); Pop(2)

0x112: PushEmpty(object, object)
0x113: @ self(Stack[-1])
0x114: Pop(0)
0x115: Stack[-3] = Stack[-1]
0x116: Return(); Pop(2)

0x117: Stack[-1] = 0
0x118: PushEmpty()
0x119: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x11a: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11b: Stack[-4] = Stack[-2]
0x11c: Return(); Pop(0)

0x11d: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-4] = Stack[-1]
0x120: Return(); Pop(0)

0x121: Stack[-4] = Stack[-3]
0x122: Return(); Pop(0)

0x123: PushEmpty(float, float)
0x124: @ rand(Stack[-1])
0x125: Pop(0)
0x126: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x127: Return(); Pop(2)

0x128: PushEmpty()
0x129: Pop(0); Push((bool) Stack[-2] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-3] = (bool) 0
0x12c: Return(); Pop(0)

0x12d: Push((int) 0)
0x12e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x130: Push((int) 8)
0x131: @ SendWorldWndMessage(Stack[-1])
0x132: Pop(1)
0x133: GOTO 0x13d

0x134: Push((int) 0)
0x135: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x137: Push((int) 9)
0x138: @ SendWorldWndMessage(Stack[-1])
0x139: Pop(1)
0x13a: GOTO 0x13d

0x13b: Stack[-3] = (bool) 0
0x13c: Return(); Pop(0)

0x13d: PushEmpty(float)
0x13e: Stack[-1] = Stack[-2]
0x13f: Call2 0x14b

0x140: Pop(1)
0x141: PushEmpty(bool, object, string, float, float, float)
0x142: Stack[-5] = Stack[-8]
0x143: Stack[-4] = "reputation"
0x144: Stack[-3] = Stack[-7]
0x145: Stack[-2] = (int) 0
0x146: Stack[-1] = (int) 1
0x147: Call2 0xbd

0x148: Pop(6)
0x149: Stack[-3] = (bool) 1
0x14a: Return(); Pop(0)

0x14b: PushEmpty(object, object)
0x14c: @ CreateFloatVector(Stack[-1])
0x14d: Pop(0)
0x14e: @@ add(Stack[-3])
0x14f: Pop(0)
0x150: Push((int) 16)
0x151: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x152: Pop(1)
0x153: Return(); Pop(2)

0x154: Stack[-1] = 0
0x155: PushEmpty(object, object)
0x156: @ FindActor(Stack[-1], Stack[-4])
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-5] = (bool) 0
0x15b: Return(); Pop(2)

0x15c: @ Trigger(Stack[-1], Stack[-3])
0x15d: Pop(0)
0x15e: Stack[-5] = (bool) 1
0x15f: Return(); Pop(2)

0x160: Stack[-1] = 0
0x161: PushEmpty(float, float)
0x162: Push("health")
0x163: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x165: Push("health")
0x166: @ GetProperty(Stack[-1], Stack[-2])
0x167: Pop(1)
0x168: Push((int) 0)
0x169: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16b: @ SignalDeath(Stack[-4])
0x16c: Pop(0)
0x16d: Return(); Pop(2)

0x16e: PushEmpty()
0x16f: PushEmpty(object, int, float, cvector, cvector)
0x170: Stack[-5] = Stack[-11]
0x171: Stack[-4] = Stack[-10]
0x172: Stack[-3] = Stack[-9]
0x173: Stack[-2] = Stack[-7]
0x174: Stack[-1] = Stack[-6]
0x175: Call2 0xff

0x176: Pop(5)
0x177: Return(); Pop(0)

0x178: PushEmpty(bool, bool)
0x179: Push("cleanup")
0x17a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x17c: Push(GlobalVars[0])
0x17d: Stack[-1] = (bool) 1
0x17e: GlobalVars[0] = Stack[-1]; Pop(1)
0x17f: @ IsLoaded(Stack[-1])
0x180: Pop(0)
0x181: Pop(0); Push((bool) Stack[-1] == 0)
0x182: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x183: PushEmpty(object)
0x184: Call2 0x112

0x185: Pop(0)
0x186: @ RemoveActor(Stack[-1])
0x187: Pop(1)
0x188: Return(); Pop(2)

0x189: Push(GlobalVars[0])
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: PushEmpty(object)
0x18c: Call2 0x112

0x18d: Pop(0)
0x18e: @ RemoveActor(Stack[-1])
0x18f: Pop(1)
0x190: Return(); Pop(0)

