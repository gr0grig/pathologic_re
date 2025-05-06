GlobalVarCount = 7
	G_VAR_0 object Owner
	G_VAR_1 cvector StartVelocity
	G_VAR_2 float DamageAmount
	G_VAR_3 int DamageType
	G_VAR_4 object 
	G_VAR_5 object 
	G_VAR_6 object 

Strings:
	Enable
	bottle
	fire_loop
	FadeIn
	Next
	grenade
	fire
	AddSource
	Fade
	FadeOut
	smoke
	phys
	GetPosition
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty

Import:
	PlayGlobalSound (4 args)
	PlayLoopedGlobalSound (4 args)
	GetScene (1 args)
	Intersect (4 args)
	ReportAttack (2 args)
	ReportHit (5 args)
	BroadcastPlayerDamage (3 args)
	SetPosition (1 args)
	FindGeometry (2 args)
	FindParticleSystem (2 args)
	Sleep (1 args)
	SetDeathStateAndRemove (0 args)
	CreateRigidBody (6 args)
	Attach (1 args)
	Hold (0 args)
	sync (0 args)
	GetPosition (1 args)

RunOp = 0xaa
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_10 Op = 0x0 Vars = (object, object, cvector, cvector)
		EVENT_6 Op = 0xd8 Vars = ()


0x0: PushEmpty(object, object, object, bool, object, cvector, cvector, float, float, object, object, object, object, object, bool, object, cvector, cvector, float, float, object, object)
0x1: EventDisable(10)
0x2: Push(GlobalVars[6])
0x3: Push((bool) 0)
0x4: @@ Enable(Stack[-1])
0x5: Pop(2)
0x6: Push("bottle")
0x7: Push(CVector(0.0, 0.0, 0.0))
0x8: Push((int) 1)
0x9: Push((int) 300)
0xa: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb: Pop(4)
0xc: Push("fire_loop")
0xd: Push(CVector(0.0, 10.0, 0.0))
0xe: Push((int) 200)
0xf: @ PlayLoopedGlobalSound(Stack[-14], Stack[-3], Stack[-2], Stack[-1])
0x10: Pop(3)
0x11: Pop(0); Push(( Stack[-11] != 0 )
0x12: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x13: Push((float)1.0)
0x14: @@ FadeIn(Stack[-1])
0x15: Pop(1)
0x16: @ GetScene(Stack[-10])
0x17: Pop(0)
0x18: Push((float)300.0)
0x19: @ Intersect(Stack[-25], Stack[-1], Stack[-9], Stack[-10])
0x1a: Pop(1)
0x1b: PushEmpty(cvector)
0x1c: Call 0xe5

0x1d: Stack[-7] = Stack[-1]
0x1e: Pop(1)
0x1f: @@ Next(Stack[-8], Stack[-7])
0x20: Pop(0)
0x21: Push(Stack[-8])
0x22: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x23: PushEmpty(cvector, object)
0x24: Stack[-1] = Stack[-9]
0x25: Call 0xea

0x26: Stack[-7] = Stack[-2]
0x27: Pop(2)
0x28: Push((float)1.0)
0x29: PushEmpty(float, cvector, cvector)
0x2a: Stack[-2] = Stack[-9]
0x2b: Stack[-1] = Stack[-10]
0x2c: Call 0x13b

0x2d: Pop(2)
0x2e: Push((float)300.0)
0x2f: Pop(2); Push(Stack[-2] / Stack[-1]);
0x30: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x31: Push((float)0.4)
0x32: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[-4] = (float) 0.4
0x35: Push((float)0.8)
0x36: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-4] = (int) 1
0x39: Push(GlobalVars[2])
0x3a: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x3b: PushEmpty(float, object, float, int)
0x3c: Stack[-3] = Stack[-11]
0x3d: Stack[-2] = Stack[-8]
0x3e: Push(GlobalVars[3])
0x3f: Stack[-2] = Stack[-1]
0x40: Pop(1)
0x41: Call 0xfb

0x42: Stack[-7] = Stack[-4]
0x43: Pop(4)
0x44: Push(GlobalVars[0])
0x45: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x47: Push(GlobalVars[0])
0x48: @ ReportAttack(Stack[-1], Stack[-8])
0x49: Pop(1)
0x4a: Push(GlobalVars[0])
0x4b: Push((int) 3)
0x4c: @ ReportHit(Stack[-9], Stack[-2], Stack[-1], Stack[-5], Stack[-6])
0x4d: Pop(2)
0x4e: Push(GlobalVars[0])
0x4f: @ BroadcastPlayerDamage(Stack[-8], Stack[-11], Stack[-1])
0x50: Pop(1)
0x51: GOTO 0x1f

0x52: Stack[-9] = 0
0x53: @ SetPosition(Stack[-24])
0x54: Pop(0)
0x55: Push("grenade")
0x56: @ FindGeometry(Stack[-1], Stack[-3])
0x57: Pop(1)
0x58: Push((bool) 0)
0x59: @@ Enable(Stack[-1])
0x5a: Pop(1)
0x5b: Push("fire")
0x5c: @ FindParticleSystem(Stack[-1], Stack[-2])
0x5d: Pop(1)
0x5e: Push(CVector(0.0, 0.0, 0.0))
0x5f: Push(CVector(0.0, 1.0, 0.0))
0x60: Push((int) 0)
0x61: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push(CVector(50.0, 0.0, 50.0))
0x64: Push(CVector(0.0, 1.0, 0.0))
0x65: Push((int) 0)
0x66: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push(CVector(-50.0, 0.0, 50.0))
0x69: Push(CVector(0.0, 1.0, 0.0))
0x6a: Push((int) 0)
0x6b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push(CVector(-50.0, 0.0, -50.0))
0x6e: Push(CVector(0.0, 1.0, 0.0))
0x6f: Push((int) 0)
0x70: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push(CVector(50.0, 0.0, -50.0))
0x73: Push(CVector(0.0, 1.0, 0.0))
0x74: Push((int) 0)
0x75: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push(CVector(25.0, 0.0, 25.0))
0x78: Push(CVector(0.0, 1.0, 0.0))
0x79: Push((int) 0)
0x7a: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push(CVector(-25.0, 0.0, 25.0))
0x7d: Push(CVector(0.0, 1.0, 0.0))
0x7e: Push((int) 0)
0x7f: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: Push(CVector(-25.0, 0.0, -25.0))
0x82: Push(CVector(0.0, 1.0, 0.0))
0x83: Push((int) 0)
0x84: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push(CVector(25.0, 0.0, -25.0))
0x87: Push(CVector(0.0, 1.0, 0.0))
0x88: Push((int) 0)
0x89: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: @@ Enable()
0x8c: Pop(0)
0x8d: Push((bool) 0)
0x8e: @@ Fade(Stack[-1])
0x8f: Pop(1)
0x90: Push(GlobalVars[5])
0x91: Push((bool) 1)
0x92: @@ Fade(Stack[-1])
0x93: Pop(2)
0x94: Push((float)12.0)
0x95: @ Sleep(Stack[-1])
0x96: Pop(1)
0x97: @@ Fade()
0x98: Pop(0)
0x99: Pop(0); Push(( Stack[-11] != 0 )
0x9a: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9b: Push((float)1.0)
0x9c: @@ FadeOut(Stack[-1])
0x9d: Pop(1)
0x9e: Push((float)2.0)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: @ SetDeathStateAndRemove()
0xa2: Pop(0)
0xa3: Return(); Pop(22)

0xa4: Stack[-1] = 0
0xa5: Stack[-2] = 0
0xa6: Stack[-7] = 0
0xa7: Stack[-9] = 0
0xa8: Stack[-10] = 0
0xa9: Stack[-11] = 0
0xaa: PushEmpty(object, object, object, object, object, object)
0xab: Push(CVector(0.0, 0.0, 0.0))
0xac: Push((int) 50)
0xad: Push(GlobalVars[1])
0xae: Push(CVector(2.0, 2.0, 2.0))
0xaf: Push(GlobalVars[0])
0xb0: @ CreateRigidBody(Stack[-8], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(5)
0xb2: Push((bool) 1)
0xb3: @@ Enable(Stack[-1])
0xb4: Pop(1)
0xb5: Push(GlobalVars[6])
0xb6: Stack[-1] = Stack[-4]
0xb7: GlobalVars[6] = Stack[-1]; Pop(1)
0xb8: Push("smoke")
0xb9: @ FindParticleSystem(Stack[-1], Stack[-3])
0xba: Pop(1)
0xbb: Push(CVector(0.0, 0.0, 0.0))
0xbc: Push(CVector(0.0, 1.0, 0.0))
0xbd: Push((int) 0)
0xbe: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Push((bool) 1)
0xc1: @@ Enable(Stack[-1])
0xc2: Pop(1)
0xc3: Push((bool) 0)
0xc4: @@ Fade(Stack[-1])
0xc5: Pop(1)
0xc6: Push(GlobalVars[5])
0xc7: Stack[-1] = Stack[-3]
0xc8: GlobalVars[5] = Stack[-1]; Pop(1)
0xc9: Push("grenade")
0xca: @ FindGeometry(Stack[-1], Stack[-2])
0xcb: Pop(1)
0xcc: Push((bool) 1)
0xcd: @@ Enable(Stack[-1])
0xce: Pop(1)
0xcf: @ Attach(Stack[-3])
0xd0: Pop(0)
0xd1: @ Hold()
0xd2: Pop(0)
0xd3: GOTO 0xd1

0xd4: Return(); Pop(6)

0xd5: Stack[-1] = 0
0xd6: Stack[-2] = 0
0xd7: Stack[-3] = 0
0xd8: @ SetDeathStateAndRemove()
0xd9: Pop(0)
0xda: @ sync()
0xdb: Pop(0)
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: Push((int) 1)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: Stack[-2] = "fire"
0xe2: Return(); Pop(0)

0xe3: Stack[-2] = "phys"
0xe4: Return(); Pop(0)

0xe5: PushEmpty(cvector, cvector)
0xe6: @ GetPosition(Stack[-1])
0xe7: Pop(0)
0xe8: Stack[-3] = Stack[-1]
0xe9: Return(); Pop(2)

0xea: PushEmpty(cvector, cvector)
0xeb: @@ GetPosition(Stack[-1])
0xec: Pop(0)
0xed: Stack[-4] = Stack[-1]
0xee: Return(); Pop(2)

0xef: PushEmpty(bool, bool)
0xf0: Push("HasProperty")
0xf1: Push((int) 2)
0xf2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf5: Stack[-5] = (bool) 0
0xf6: Return(); Pop(2)

0xf7: @@ HasProperty(Stack[-3], Stack[-1])
0xf8: Pop(0)
0xf9: Stack[-5] = Stack[-1]
0xfa: Return(); Pop(2)

0xfb: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xfc: PushEmpty(bool, object, string)
0xfd: Stack[-2] = Stack[-18]
0xfe: Stack[-1] = "health"
0xff: Call 0xef

0x100: Pop(2)
0x101: Pop(1); Push((bool) Stack[-1] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x103: Stack[-16] = (float) 0.0
0x104: Return(); Pop(12)

0x105: PushEmpty(bool, object, string)
0x106: Stack[-2] = Stack[-18]
0x107: Stack[-1] = "armor"
0x108: Call 0xef

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-6] = (int) 0
0x10d: GOTO 0x111

0x10e: Push("armor")
0x10f: @@ GetProperty(Stack[-1], Stack[-7])
0x110: Pop(1)
0x111: Push("armor_")
0x112: PushEmpty(string, int)
0x113: Stack[-1] = Stack[-16]
0x114: Call 0xdd

0x115: Pop(1)
0x116: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x117: PushEmpty(bool, object, string)
0x118: Stack[-2] = Stack[-18]
0x119: Stack[-1] = Stack[-8]
0x11a: Call 0xef

0x11b: Pop(2)
0x11c: Pop(1); Push((bool) Stack[-1] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11e: Stack[-4] = (int) 0
0x11f: GOTO 0x122

0x120: @@ GetProperty(Stack[-5], Stack[-4])
0x121: Pop(0)
0x122: PushEmpty(float, float, float)
0x123: Pop(0); Push(Stack[-9] + Stack[-7]);
0x124: Push((float)100.0)
0x125: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x126: Stack[-1] = (int) 1
0x127: Call 0x140

0x128: Stack[-6] = Stack[-3]
0x129: Pop(3)
0x12a: Push("health")
0x12b: @@ GetProperty(Stack[-1], Stack[-3])
0x12c: Pop(1)
0x12d: Push((int) 1)
0x12e: Pop(1); Push(Stack[-1] - Stack[-4]);
0x12f: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x130: Push("health")
0x131: PushEmpty(float, float, float, float)
0x132: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x133: Stack[-2] = (int) 0
0x134: Stack[-1] = (int) 1
0x135: Call 0x147

0x136: Pop(3)
0x137: @@ SetProperty(Stack[-2], Stack[-1])
0x138: Pop(2)
0x139: Stack[-16] = Stack[-1]
0x13a: Return(); Pop(12)

0x13b: PushEmpty(cvector, cvector)
0x13c: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x13d: Pop(0); Push(Stack[-1] | Stack[-1]);
0x13e: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x13f: Return(); Pop(2)

0x140: PushEmpty()
0x141: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x143: Stack[-3] = Stack[-2]
0x144: GOTO 0x146

0x145: Stack[-3] = Stack[-1]
0x146: Return(); Pop(0)

0x147: PushEmpty()
0x148: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x149: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14a: Stack[-4] = Stack[-2]
0x14b: Return(); Pop(0)

0x14c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14e: Stack[-4] = Stack[-1]
0x14f: Return(); Pop(0)

0x150: Stack[-4] = Stack[-3]
0x151: Return(); Pop(0)

