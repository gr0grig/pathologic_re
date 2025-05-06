GlobalVarCount = 6
	G_VAR_0 object Owner
	G_VAR_1 cvector StartVelocity
	G_VAR_2 float DamageAmount
	G_VAR_3 int DamageType
	G_VAR_4 object 
	G_VAR_5 object 

Strings:
	on collision
	Enable
	bottle
	fire_loop
	FadeIn
	Next
	Hit: 
	grenade
	grenadefire
	Can't find fire particle system
	AddSource
	Fade
	FadeOut
	smoke
	bullet
	phys
	GetPosition
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	add

Import:
	Trace (1 args)
	PlayGlobalSound (4 args)
	PlayLoopedGlobalSound (4 args)
	Intersect (4 args)
	ReportHit (5 args)
	SetPosition (1 args)
	FindGeometry (2 args)
	FindParticleSystem (2 args)
	Sleep (1 args)
	RemoveActor (1 args)
	CreateRigidBody (6 args)
	Attach (1 args)
	Hold (0 args)
	GetPosition (1 args)
	IsPlayerActor (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0xb0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_10 Op = 0x0 Vars = (object, object, cvector, cvector)
		EVENT_6 Op = 0xde Vars = ()


0x0: PushEmpty(object, object, bool, object, cvector, cvector, float, float, object, object, object, object, bool, object, cvector, cvector, float, float, object, object)
0x1: EventDisable(10)
0x2: Push("on collision")
0x3: @ Trace(Stack[-1])
0x4: Pop(1)
0x5: Push(GlobalVars[5])
0x6: Push((bool) 0)
0x7: @@ Enable(Stack[-1])
0x8: Pop(2)
0x9: Push("bottle")
0xa: Push(CVector(0.0, 0.0, 0.0))
0xb: Push((int) 1)
0xc: Push((int) 300)
0xd: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(4)
0xf: Push("fire_loop")
0x10: Push(CVector(0.0, 10.0, 0.0))
0x11: Push((int) 200)
0x12: @ PlayLoopedGlobalSound(Stack[-13], Stack[-3], Stack[-2], Stack[-1])
0x13: Pop(3)
0x14: Pop(0); Push(( Stack[-10] != 0 )
0x15: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x16: Push((float)1.0)
0x17: @@ FadeIn(Stack[-1])
0x18: Pop(1)
0x19: Push((float)300.0)
0x1a: @ Intersect(Stack[-23], Stack[-1], Stack[-9], Stack[-10])
0x1b: Pop(1)
0x1c: PushEmpty(cvector)
0x1d: Call2 0xf4

0x1e: Stack[-7] = Stack[-1]
0x1f: Pop(1)
0x20: @@ Next(Stack[-8], Stack[-7])
0x21: Pop(0)
0x22: Push(Stack[-8])
0x23: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x24: PushEmpty(cvector, object)
0x25: Stack[-1] = Stack[-9]
0x26: Call2 0xf9

0x27: Stack[-7] = Stack[-2]
0x28: Pop(2)
0x29: Push((float)1.0)
0x2a: PushEmpty(float, cvector, cvector)
0x2b: Stack[-2] = Stack[-9]
0x2c: Stack[-1] = Stack[-10]
0x2d: Call2 0x15e

0x2e: Pop(2)
0x2f: Push((float)300.0)
0x30: Pop(2); Push(Stack[-2] / Stack[-1]);
0x31: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x32: Push((float)0.4)
0x33: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x35: Stack[-4] = (float) 0.4
0x36: Push((float)0.8)
0x37: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[-4] = (int) 1
0x3a: Push(GlobalVars[2])
0x3b: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x3c: PushEmpty(float, object, float, int)
0x3d: Stack[-3] = Stack[-11]
0x3e: Stack[-2] = Stack[-8]
0x3f: Push(GlobalVars[3])
0x40: Stack[-2] = Stack[-1]
0x41: Pop(1)
0x42: Call2 0x10f

0x43: Stack[-7] = Stack[-4]
0x44: Pop(4)
0x45: Push(GlobalVars[0])
0x46: Pop(1); Push((bool) Stack[-1] != Stack[-8])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: Push(GlobalVars[0])
0x49: Push((int) 3)
0x4a: @ ReportHit(Stack[-9], Stack[-2], Stack[-1], Stack[-5], Stack[-6])
0x4b: Pop(2)
0x4c: Push("Hit: ")
0x4d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4e: @ Trace(Stack[-1])
0x4f: Pop(1)
0x50: GOTO 0x20

0x51: Stack[-9] = 0
0x52: @ SetPosition(Stack[-22])
0x53: Pop(0)
0x54: Push("grenade")
0x55: @ FindGeometry(Stack[-1], Stack[-3])
0x56: Pop(1)
0x57: Push((bool) 0)
0x58: @@ Enable(Stack[-1])
0x59: Pop(1)
0x5a: Push("grenadefire")
0x5b: @ FindParticleSystem(Stack[-1], Stack[-2])
0x5c: Pop(1)
0x5d: Pop(0); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5f: Push("Can't find fire particle system")
0x60: @ Trace(Stack[-1])
0x61: Pop(1)
0x62: Return(); Pop(20)

0x63: Push(CVector(0.0, 0.0, 0.0))
0x64: Push(CVector(0.0, 1.0, 0.0))
0x65: Push((int) 0)
0x66: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push(CVector(50.0, 0.0, 50.0))
0x69: Push(CVector(0.0, 1.0, 0.0))
0x6a: Push((int) 0)
0x6b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push(CVector(-50.0, 0.0, 50.0))
0x6e: Push(CVector(0.0, 1.0, 0.0))
0x6f: Push((int) 0)
0x70: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push(CVector(-50.0, 0.0, -50.0))
0x73: Push(CVector(0.0, 1.0, 0.0))
0x74: Push((int) 0)
0x75: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push(CVector(50.0, 0.0, -50.0))
0x78: Push(CVector(0.0, 1.0, 0.0))
0x79: Push((int) 0)
0x7a: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push(CVector(25.0, 0.0, 25.0))
0x7d: Push(CVector(0.0, 1.0, 0.0))
0x7e: Push((int) 0)
0x7f: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: Push(CVector(-25.0, 0.0, 25.0))
0x82: Push(CVector(0.0, 1.0, 0.0))
0x83: Push((int) 0)
0x84: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push(CVector(-25.0, 0.0, -25.0))
0x87: Push(CVector(0.0, 1.0, 0.0))
0x88: Push((int) 0)
0x89: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: Push(CVector(25.0, 0.0, -25.0))
0x8c: Push(CVector(0.0, 1.0, 0.0))
0x8d: Push((int) 0)
0x8e: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: @@ Enable()
0x91: Pop(0)
0x92: Push((bool) 0)
0x93: @@ Fade(Stack[-1])
0x94: Pop(1)
0x95: Push(GlobalVars[4])
0x96: @@ Fade()
0x97: Pop(1)
0x98: Push((float)10.0)
0x99: @ Sleep(Stack[-1])
0x9a: Pop(1)
0x9b: @@ Fade()
0x9c: Pop(0)
0x9d: Pop(0); Push(( Stack[-10] != 0 )
0x9e: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9f: Push((float)1.0)
0xa0: @@ FadeOut(Stack[-1])
0xa1: Pop(1)
0xa2: Push((float)2.0)
0xa3: @ Sleep(Stack[-1])
0xa4: Pop(1)
0xa5: PushEmpty(object)
0xa6: Call2 0x158

0xa7: Pop(0)
0xa8: @ RemoveActor(Stack[-1])
0xa9: Pop(1)
0xaa: Return(); Pop(20)

0xab: Stack[-1] = 0
0xac: Stack[-2] = 0
0xad: Stack[-7] = 0
0xae: Stack[-9] = 0
0xaf: Stack[-10] = 0
0xb0: PushEmpty(object, object, object, object, object, object)
0xb1: Push(CVector(0.0, 0.0, 0.0))
0xb2: Push((int) 10)
0xb3: Push(GlobalVars[1])
0xb4: Push(CVector(2.0, 2.0, 2.0))
0xb5: Push(GlobalVars[0])
0xb6: @ CreateRigidBody(Stack[-8], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(5)
0xb8: Push((bool) 1)
0xb9: @@ Enable(Stack[-1])
0xba: Pop(1)
0xbb: Push(GlobalVars[5])
0xbc: Stack[-1] = Stack[-4]
0xbd: GlobalVars[5] = Stack[-1]; Pop(1)
0xbe: Push("smoke")
0xbf: @ FindParticleSystem(Stack[-1], Stack[-3])
0xc0: Pop(1)
0xc1: Push(CVector(0.0, 0.0, 0.0))
0xc2: Push(CVector(0.0, 1.0, 0.0))
0xc3: Push((int) 0)
0xc4: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0xc5: Pop(3)
0xc6: Push((bool) 1)
0xc7: @@ Enable(Stack[-1])
0xc8: Pop(1)
0xc9: Push((bool) 0)
0xca: @@ Fade(Stack[-1])
0xcb: Pop(1)
0xcc: Push(GlobalVars[4])
0xcd: Stack[-1] = Stack[-3]
0xce: GlobalVars[4] = Stack[-1]; Pop(1)
0xcf: Push("grenade")
0xd0: @ FindGeometry(Stack[-1], Stack[-2])
0xd1: Pop(1)
0xd2: Push((bool) 1)
0xd3: @@ Enable(Stack[-1])
0xd4: Pop(1)
0xd5: @ Attach(Stack[-3])
0xd6: Pop(0)
0xd7: @ Hold()
0xd8: Pop(0)
0xd9: GOTO 0xd7

0xda: Return(); Pop(6)

0xdb: Stack[-1] = 0
0xdc: Stack[-2] = 0
0xdd: Stack[-3] = 0
0xde: PushEmpty(object)
0xdf: Call2 0x158

0xe0: Pop(0)
0xe1: @ RemoveActor(Stack[-1])
0xe2: Pop(1)
0xe3: @ Hold()
0xe4: Pop(0)
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: Push((int) 2)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: Stack[-2] = "fire"
0xeb: Return(); Pop(0)

0xec: GOTO 0xf2

0xed: Push((int) 1)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf0: Stack[-2] = "bullet"
0xf1: Return(); Pop(0)

0xf2: Stack[-2] = "phys"
0xf3: Return(); Pop(0)

0xf4: PushEmpty(cvector, cvector)
0xf5: @ GetPosition(Stack[-1])
0xf6: Pop(0)
0xf7: Stack[-3] = Stack[-1]
0xf8: Return(); Pop(2)

0xf9: PushEmpty(cvector, cvector)
0xfa: @@ GetPosition(Stack[-1])
0xfb: Pop(0)
0xfc: Stack[-4] = Stack[-1]
0xfd: Return(); Pop(2)

0xfe: PushEmpty(bool, bool)
0xff: @ IsPlayerActor(Stack[-3], Stack[-1])
0x100: Pop(0)
0x101: Stack[-4] = Stack[-1]
0x102: Return(); Pop(2)

0x103: PushEmpty(bool, bool)
0x104: Push("HasProperty")
0x105: Push((int) 2)
0x106: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x107: Pop(1); Push((bool) Stack[-1] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x109: Stack[-5] = (bool) 0
0x10a: Return(); Pop(2)

0x10b: @@ HasProperty(Stack[-3], Stack[-1])
0x10c: Pop(0)
0x10d: Stack[-5] = Stack[-1]
0x10e: Return(); Pop(2)

0x10f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x110: PushEmpty(bool, object, string)
0x111: Stack[-2] = Stack[-18]
0x112: Stack[-1] = "health"
0x113: Call2 0x103

0x114: Pop(2)
0x115: Pop(1); Push((bool) Stack[-1] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x117: Stack[-16] = (float) 0.0
0x118: Return(); Pop(12)

0x119: PushEmpty(bool, object, string)
0x11a: Stack[-2] = Stack[-18]
0x11b: Stack[-1] = "armor"
0x11c: Call2 0x103

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-6] = (int) 0
0x121: GOTO 0x125

0x122: Push("armor")
0x123: @@ GetProperty(Stack[-1], Stack[-7])
0x124: Pop(1)
0x125: Push("armor_")
0x126: PushEmpty(string, int)
0x127: Stack[-1] = Stack[-16]
0x128: Call2 0xe6

0x129: Pop(1)
0x12a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x12b: PushEmpty(bool, object, string)
0x12c: Stack[-2] = Stack[-18]
0x12d: Stack[-1] = Stack[-8]
0x12e: Call2 0x103

0x12f: Pop(2)
0x130: Pop(1); Push((bool) Stack[-1] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x132: Stack[-4] = (int) 0
0x133: GOTO 0x136

0x134: @@ GetProperty(Stack[-5], Stack[-4])
0x135: Pop(0)
0x136: PushEmpty(float, float, float)
0x137: Pop(0); Push(Stack[-9] + Stack[-7]);
0x138: Push((float)100.0)
0x139: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x13a: Stack[-1] = (int) 1
0x13b: Call2 0x163

0x13c: Stack[-6] = Stack[-3]
0x13d: Pop(3)
0x13e: Push("health")
0x13f: @@ GetProperty(Stack[-1], Stack[-3])
0x140: Pop(1)
0x141: Push((int) 1)
0x142: Pop(1); Push(Stack[-1] - Stack[-4]);
0x143: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x144: Push("health")
0x145: PushEmpty(float, float, float, float)
0x146: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x147: Stack[-2] = (int) 0
0x148: Stack[-1] = (int) 1
0x149: Call2 0x16a

0x14a: Pop(3)
0x14b: @@ SetProperty(Stack[-2], Stack[-1])
0x14c: Pop(2)
0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[-17]
0x14f: Call2 0xfe

0x150: Pop(1)
0x151: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x152: PushEmpty(float)
0x153: Stack[-1] = -Stack[-2]; Pop(0);
0x154: Call2 0x175

0x155: Pop(1)
0x156: Stack[-16] = Stack[-1]
0x157: Return(); Pop(12)

0x158: PushEmpty(object, object)
0x159: @ self(Stack[-1])
0x15a: Pop(0)
0x15b: Stack[-3] = Stack[-1]
0x15c: Return(); Pop(2)

0x15d: Stack[-1] = 0
0x15e: PushEmpty(cvector, cvector)
0x15f: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x160: Pop(0); Push(Stack[-1] | Stack[-1]);
0x161: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x162: Return(); Pop(2)

0x163: PushEmpty()
0x164: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x166: Stack[-3] = Stack[-2]
0x167: GOTO 0x169

0x168: Stack[-3] = Stack[-1]
0x169: Return(); Pop(0)

0x16a: PushEmpty()
0x16b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x16c: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16d: Stack[-4] = Stack[-2]
0x16e: Return(); Pop(0)

0x16f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x171: Stack[-4] = Stack[-1]
0x172: Return(); Pop(0)

0x173: Stack[-4] = Stack[-3]
0x174: Return(); Pop(0)

0x175: PushEmpty(object, object)
0x176: @ CreateFloatVector(Stack[-1])
0x177: Pop(0)
0x178: @@ add(Stack[-3])
0x179: Pop(0)
0x17a: Push((int) 15)
0x17b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x17c: Pop(1)
0x17d: Return(); Pop(2)

0x17e: Stack[-1] = 0
