GlobalVarCount = 4
	G_VAR_0 object Owner
	G_VAR_1 cvector StartDirection
	G_VAR_2 object Target
	G_VAR_3 object 

Strings:
	Enable
	knife
	SetRotation
	GetScene
	kill
	fire
	bullet
	phys
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess
	add
	god_mode

Import:
	CreateRigidBody (6 args)
	Attach (1 args)
	FindGeometry (2 args)
	Hold (0 args)
	RemoveActor (1 args)
	sync (0 args)
	ReportAttack (2 args)
	ReportHit (5 args)
	Trigger (2 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x1e Vars = ()
		EVENT_10 Op = 0x26 Vars = (object, object, cvector, cvector)


0x0: PushEmpty(object, object)
0x1: Push(CVector(0.0, 0.0, 0.0))
0x2: Push((int) 50)
0x3: Push(GlobalVars[1])
0x4: Push(CVector(20.0, 20.0, 20.0))
0x5: Push(GlobalVars[0])
0x6: @ CreateRigidBody(Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7: Pop(5)
0x8: Push((bool) 1)
0x9: @@ Enable(Stack[-1])
0xa: Pop(1)
0xb: Push(GlobalVars[3])
0xc: Stack[-1] = Stack[-2]
0xd: GlobalVars[3] = Stack[-1]; Pop(1)
0xe: @ Attach(Stack[-1])
0xf: Pop(0)
0x10: Push("knife")
0x11: @ FindGeometry(Stack[-1], Stack[-2])
0x12: Pop(1)
0x13: Push(GlobalVars[1])
0x14: @@ SetRotation(Stack[-1])
0x15: Pop(1)
0x16: Push((bool) 1)
0x17: @@ Enable(Stack[-1])
0x18: Pop(1)
0x19: @ Hold()
0x1a: Pop(0)
0x1b: GOTO 0x19

0x1c: Return(); Pop(2)

0x1d: Stack[-1] = 0
0x1e: PushEmpty(object)
0x1f: Call2 0x137

0x20: Pop(0)
0x21: @ RemoveActor(Stack[-1])
0x22: Pop(1)
0x23: @ sync()
0x24: Pop(0)
0x25: Return(); Pop(0)

0x26: PushEmpty(float, float)
0x27: Push(GlobalVars[3])
0x28: Push((bool) 0)
0x29: @@ Enable(Stack[-1])
0x2a: Pop(2)
0x2b: PushEmpty(object)
0x2c: Call2 0x137

0x2d: Pop(0)
0x2e: @ RemoveActor(Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(bool)
0x31: Stack[-1] = (bool) 1
0x32: PushEmpty(bool)
0x33: Stack[-1] = (bool) 1
0x34: Pop(0); Push((bool) Stack[-7] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x36: Push("GetScene")
0x37: Push((int) 1)
0x38: Pop(2); Push(IsFuncExist(Stack[-9], Stack[-2], Stack[-1]))
0x39: Pop(1); Push((bool) Stack[-1] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Stack[-1] = (bool) 0
0x3c: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3d: PushEmpty(bool, object)
0x3e: Stack[-1] = Stack[-8]
0x3f: Call2 0x11f

0x40: Pop(1)
0x41: Pop(1); Push((bool) Stack[-1] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: Stack[-1] = (bool) 0
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: Return(); Pop(2)

0x46: PushEmpty(float, object, float, int)
0x47: Stack[-3] = Stack[-9]
0x48: Stack[-2] = (float) 0.9
0x49: Stack[-1] = (int) 0
0x4a: Call2 0x8e

0x4b: Stack[-5] = Stack[-4]
0x4c: Pop(4)
0x4d: PushEmpty(bool, object)
0x4e: Push(GlobalVars[0])
0x4f: Stack[-2] = Stack[-1]
0x50: Pop(1)
0x51: Call2 0x11f

0x52: Pop(1)
0x53: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x54: Push(GlobalVars[0])
0x55: @ ReportAttack(Stack[-6], Stack[-1])
0x56: Pop(1)
0x57: Push(Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x59: Push(GlobalVars[0])
0x5a: Push((int) 1)
0x5b: Push((float)0.9)
0x5c: @ ReportHit(Stack[-8], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x5d: Pop(3)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: Push(GlobalVars[2])
0x61: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[-8]
0x65: Call2 0xd7

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: Stack[-1] = (bool) 1
0x69: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6a: Push(GlobalVars[0])
0x6b: Push("kill")
0x6c: @ Trigger(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: Return(); Pop(2)

0x6f: PushEmpty()
0x70: Push((int) 2)
0x71: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x73: Stack[-2] = "fire"
0x74: Return(); Pop(0)

0x75: GOTO 0x7b

0x76: Push((int) 1)
0x77: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-2] = "bullet"
0x7a: Return(); Pop(0)

0x7b: Stack[-2] = "phys"
0x7c: Return(); Pop(0)

0x7d: PushEmpty(bool, bool)
0x7e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7f: Pop(0)
0x80: Stack[-4] = Stack[-1]
0x81: Return(); Pop(2)

0x82: PushEmpty(bool, bool)
0x83: Push("HasProperty")
0x84: Push((int) 2)
0x85: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x86: Pop(1); Push((bool) Stack[-1] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x88: Stack[-5] = (bool) 0
0x89: Return(); Pop(2)

0x8a: @@ HasProperty(Stack[-3], Stack[-1])
0x8b: Pop(0)
0x8c: Stack[-5] = Stack[-1]
0x8d: Return(); Pop(2)

0x8e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x8f: PushEmpty(bool, object, string)
0x90: Stack[-2] = Stack[-18]
0x91: Stack[-1] = "health"
0x92: Call2 0x82

0x93: Pop(2)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x96: Stack[-16] = (float) 0.0
0x97: Return(); Pop(12)

0x98: PushEmpty(bool, object, string)
0x99: Stack[-2] = Stack[-18]
0x9a: Stack[-1] = "armor"
0x9b: Call2 0x82

0x9c: Pop(2)
0x9d: Pop(1); Push((bool) Stack[-1] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-6] = (int) 0
0xa0: GOTO 0xa4

0xa1: Push("armor")
0xa2: @@ GetProperty(Stack[-1], Stack[-7])
0xa3: Pop(1)
0xa4: Push("armor_")
0xa5: PushEmpty(string, int)
0xa6: Stack[-1] = Stack[-16]
0xa7: Call2 0x6f

0xa8: Pop(1)
0xa9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xaa: PushEmpty(bool, object, string)
0xab: Stack[-2] = Stack[-18]
0xac: Stack[-1] = Stack[-8]
0xad: Call2 0x82

0xae: Pop(2)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-4] = (int) 0
0xb2: GOTO 0xb5

0xb3: @@ GetProperty(Stack[-5], Stack[-4])
0xb4: Pop(0)
0xb5: PushEmpty(float, float, float)
0xb6: Pop(0); Push(Stack[-9] + Stack[-7]);
0xb7: Push((float)100.0)
0xb8: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xb9: Stack[-1] = (int) 1
0xba: Call2 0x13d

0xbb: Stack[-6] = Stack[-3]
0xbc: Pop(3)
0xbd: Push("health")
0xbe: @@ GetProperty(Stack[-1], Stack[-3])
0xbf: Pop(1)
0xc0: Push((int) 1)
0xc1: Pop(1); Push(Stack[-1] - Stack[-4]);
0xc2: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xc3: Push("health")
0xc4: PushEmpty(float, float, float, float)
0xc5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xc6: Stack[-2] = (int) 0
0xc7: Stack[-1] = (int) 1
0xc8: Call2 0x144

0xc9: Pop(3)
0xca: @@ SetProperty(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[-17]
0xce: Call2 0x7d

0xcf: Pop(1)
0xd0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd1: PushEmpty(float)
0xd2: Stack[-1] = -Stack[-2]; Pop(0);
0xd3: Call2 0x14f

0xd4: Pop(1)
0xd5: Stack[-16] = Stack[-1]
0xd6: Return(); Pop(12)

0xd7: PushEmpty(float, float)
0xd8: PushEmpty(bool, object, string)
0xd9: Stack[-2] = Stack[-6]
0xda: Stack[-1] = "health"
0xdb: Call2 0x82

0xdc: Pop(2)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdf: Stack[-4] = (bool) 0
0xe0: Return(); Pop(2)

0xe1: PushEmpty(bool)
0xe2: Stack[-1] = (bool) 0
0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[-6]
0xe5: Call2 0x7d

0xe6: Pop(1)
0xe7: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe8: PushEmpty(bool)
0xe9: Call2 0x159

0xea: Pop(0)
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[-1] = (bool) 1
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-4] = (bool) 0
0xef: Return(); Pop(2)

0xf0: Push("health")
0xf1: @@ GetProperty(Stack[-1], Stack[-2])
0xf2: Pop(1)
0xf3: Push((float)0.0)
0xf4: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0xf5: Return(); Pop(2)

0xf6: PushEmpty(bool, bool)
0xf7: @@ IsDead(Stack[-1])
0xf8: Pop(0)
0xf9: Stack[-4] = Stack[-1]
0xfa: Return(); Pop(2)

0xfb: PushEmpty(object, object, object, object)
0xfc: Pop(0); Push((bool) Stack[-5] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfe: Stack[-6] = (bool) 0
0xff: Return(); Pop(4)

0x100: PushEmpty(bool)
0x101: Stack[-1] = (bool) 0
0x102: Push("IsDead")
0x103: Push((int) 1)
0x104: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x105: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[-8]
0x108: Call2 0xf6

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Stack[-1] = (bool) 1
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-6] = (bool) 0
0x10e: Return(); Pop(4)

0x10f: @ GetScene(Stack[-2])
0x110: Pop(0)
0x111: Pop(0); Push((bool) Stack[-2] == 0)
0x112: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x113: Stack[-6] = (bool) 0
0x114: Return(); Pop(4)

0x115: @@ GetScene(Stack[-1])
0x116: Pop(0)
0x117: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-6] = (bool) 0
0x11a: Return(); Pop(4)

0x11b: Stack[-6] = (bool) 1
0x11c: Return(); Pop(4)

0x11d: Stack[-1] = 0
0x11e: Stack[-2] = 0
0x11f: PushEmpty(int, int)
0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[-5]
0x122: Call2 0xfb

0x123: Pop(1)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x126: Stack[-4] = (bool) 0
0x127: Return(); Pop(2)

0x128: PushEmpty(bool, object, string)
0x129: Stack[-2] = Stack[-6]
0x12a: Stack[-1] = "noaccess"
0x12b: Call2 0x82

0x12c: Pop(2)
0x12d: Pop(1); Push((bool) Stack[-1] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12f: Stack[-4] = (bool) 1
0x130: Return(); Pop(2)

0x131: Push("noaccess")
0x132: @@ GetProperty(Stack[-1], Stack[-2])
0x133: Pop(1)
0x134: Push((int) 0)
0x135: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x136: Return(); Pop(2)

0x137: PushEmpty(object, object)
0x138: @ self(Stack[-1])
0x139: Pop(0)
0x13a: Stack[-3] = Stack[-1]
0x13b: Return(); Pop(2)

0x13c: Stack[-1] = 0
0x13d: PushEmpty()
0x13e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x140: Stack[-3] = Stack[-2]
0x141: GOTO 0x143

0x142: Stack[-3] = Stack[-1]
0x143: Return(); Pop(0)

0x144: PushEmpty()
0x145: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: Stack[-4] = Stack[-2]
0x148: Return(); Pop(0)

0x149: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14b: Stack[-4] = Stack[-1]
0x14c: Return(); Pop(0)

0x14d: Stack[-4] = Stack[-3]
0x14e: Return(); Pop(0)

0x14f: PushEmpty(object, object)
0x150: @ CreateFloatVector(Stack[-1])
0x151: Pop(0)
0x152: @@ add(Stack[-3])
0x153: Pop(0)
0x154: Push((int) 15)
0x155: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x156: Pop(1)
0x157: Return(); Pop(2)

0x158: Stack[-1] = 0
0x159: PushEmpty(bool, bool)
0x15a: Push("god_mode")
0x15b: @ GetVariable(Stack[-1], Stack[-2])
0x15c: Pop(1)
0x15d: Stack[-3] = Stack[-1]
0x15e: Return(); Pop(2)

