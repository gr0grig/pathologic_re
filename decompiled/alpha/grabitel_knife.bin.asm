GlobalVarCount = 3
	G_VAR_0 object Owner
	G_VAR_1 cvector StartDirection
	G_VAR_2 object 

Strings:
	Enable
	knife
	SetRotation
	Knife hit: 
	kill
	fire
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

Import:
	CreateRigidBody (6 args)
	Attach (1 args)
	FindGeometry (2 args)
	Hold (0 args)
	SetDeathStateAndRemove (0 args)
	sync (0 args)
	Trace (1 args)
	ReportAttack (2 args)
	ReportHit (5 args)
	Trigger (2 args)
	GetScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x1e Vars = ()
		EVENT_10 Op = 0x23 Vars = (object, object, cvector, cvector)


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
0xb: Push(GlobalVars[2])
0xc: Stack[-1] = Stack[-2]
0xd: GlobalVars[2] = Stack[-1]; Pop(1)
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
0x1e: @ SetDeathStateAndRemove()
0x1f: Pop(0)
0x20: @ sync()
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty(float, float)
0x24: Push("Knife hit: ")
0x25: Pop(1); Push(Stack[-1] + Stack[-6]);
0x26: @ Trace(Stack[-1])
0x27: Pop(1)
0x28: Push(GlobalVars[2])
0x29: Push((bool) 0)
0x2a: @@ Enable(Stack[-1])
0x2b: Pop(2)
0x2c: @ SetDeathStateAndRemove()
0x2d: Pop(0)
0x2e: PushEmpty(bool, object)
0x2f: Stack[-1] = Stack[-7]
0x30: Call 0xe4

0x31: Pop(1)
0x32: Pop(1); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Return(); Pop(2)

0x35: PushEmpty(float, object, float, int)
0x36: Stack[-3] = Stack[-9]
0x37: Stack[-2] = (float) 0.9
0x38: Stack[-1] = (int) 0
0x39: Call 0x6b

0x3a: Stack[-5] = Stack[-4]
0x3b: Pop(4)
0x3c: PushEmpty(bool, object)
0x3d: Push(GlobalVars[0])
0x3e: Stack[-2] = Stack[-1]
0x3f: Pop(1)
0x40: Call 0xe4

0x41: Pop(1)
0x42: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x43: Push(GlobalVars[0])
0x44: @ ReportAttack(Stack[-6], Stack[-1])
0x45: Pop(1)
0x46: Push(Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x48: Push(GlobalVars[0])
0x49: Push((int) 1)
0x4a: Push((float)0.9)
0x4b: @ ReportHit(Stack[-8], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x4c: Pop(3)
0x4d: PushEmpty(bool, object)
0x4e: Stack[-1] = Stack[-7]
0x4f: Call 0xab

0x50: Pop(1)
0x51: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x52: Push(GlobalVars[0])
0x53: Push("kill")
0x54: @ Trigger(Stack[-2], Stack[-1])
0x55: Pop(2)
0x56: Return(); Pop(2)

0x57: PushEmpty()
0x58: Push((int) 1)
0x59: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Stack[-2] = "fire"
0x5c: Return(); Pop(0)

0x5d: Stack[-2] = "phys"
0x5e: Return(); Pop(0)

0x5f: PushEmpty(bool, bool)
0x60: Push("HasProperty")
0x61: Push((int) 2)
0x62: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x63: Pop(1); Push((bool) Stack[-1] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x65: Stack[-5] = (bool) 0
0x66: Return(); Pop(2)

0x67: @@ HasProperty(Stack[-3], Stack[-1])
0x68: Pop(0)
0x69: Stack[-5] = Stack[-1]
0x6a: Return(); Pop(2)

0x6b: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6c: PushEmpty(bool, object, string)
0x6d: Stack[-2] = Stack[-18]
0x6e: Stack[-1] = "health"
0x6f: Call 0x5f

0x70: Pop(2)
0x71: Pop(1); Push((bool) Stack[-1] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x73: Stack[-16] = (float) 0.0
0x74: Return(); Pop(12)

0x75: PushEmpty(bool, object, string)
0x76: Stack[-2] = Stack[-18]
0x77: Stack[-1] = "armor"
0x78: Call 0x5f

0x79: Pop(2)
0x7a: Pop(1); Push((bool) Stack[-1] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-6] = (int) 0
0x7d: GOTO 0x81

0x7e: Push("armor")
0x7f: @@ GetProperty(Stack[-1], Stack[-7])
0x80: Pop(1)
0x81: Push("armor_")
0x82: PushEmpty(string, int)
0x83: Stack[-1] = Stack[-16]
0x84: Call 0x57

0x85: Pop(1)
0x86: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x87: PushEmpty(bool, object, string)
0x88: Stack[-2] = Stack[-18]
0x89: Stack[-1] = Stack[-8]
0x8a: Call 0x5f

0x8b: Pop(2)
0x8c: Pop(1); Push((bool) Stack[-1] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-4] = (int) 0
0x8f: GOTO 0x92

0x90: @@ GetProperty(Stack[-5], Stack[-4])
0x91: Pop(0)
0x92: PushEmpty(float, float, float)
0x93: Pop(0); Push(Stack[-9] + Stack[-7]);
0x94: Push((float)100.0)
0x95: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x96: Stack[-1] = (int) 1
0x97: Call 0xfc

0x98: Stack[-6] = Stack[-3]
0x99: Pop(3)
0x9a: Push("health")
0x9b: @@ GetProperty(Stack[-1], Stack[-3])
0x9c: Pop(1)
0x9d: Push((int) 1)
0x9e: Pop(1); Push(Stack[-1] - Stack[-4]);
0x9f: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xa0: Push("health")
0xa1: PushEmpty(float, float, float, float)
0xa2: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xa3: Stack[-2] = (int) 0
0xa4: Stack[-1] = (int) 1
0xa5: Call 0x103

0xa6: Pop(3)
0xa7: @@ SetProperty(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: Stack[-16] = Stack[-1]
0xaa: Return(); Pop(12)

0xab: PushEmpty(float, float)
0xac: PushEmpty(bool, object, string)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = "health"
0xaf: Call 0x5f

0xb0: Pop(2)
0xb1: Pop(1); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-4] = (bool) 0
0xb4: Return(); Pop(2)

0xb5: Push("health")
0xb6: @@ GetProperty(Stack[-1], Stack[-2])
0xb7: Pop(1)
0xb8: Push((float)0.0)
0xb9: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0xba: Return(); Pop(2)

0xbb: PushEmpty(bool, bool)
0xbc: @@ IsDead(Stack[-1])
0xbd: Pop(0)
0xbe: Stack[-4] = Stack[-1]
0xbf: Return(); Pop(2)

0xc0: PushEmpty(object, object, object, object)
0xc1: Pop(0); Push((bool) Stack[-5] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[-6] = (bool) 0
0xc4: Return(); Pop(4)

0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 0
0xc7: Push("IsDead")
0xc8: Push((int) 1)
0xc9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xca: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[-8]
0xcd: Call 0xbb

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Stack[-1] = (bool) 1
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[-6] = (bool) 0
0xd3: Return(); Pop(4)

0xd4: @ GetScene(Stack[-2])
0xd5: Pop(0)
0xd6: Pop(0); Push((bool) Stack[-2] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-6] = (bool) 0
0xd9: Return(); Pop(4)

0xda: @@ GetScene(Stack[-1])
0xdb: Pop(0)
0xdc: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: Stack[-6] = (bool) 0
0xdf: Return(); Pop(4)

0xe0: Stack[-6] = (bool) 1
0xe1: Return(); Pop(4)

0xe2: Stack[-1] = 0
0xe3: Stack[-2] = 0
0xe4: PushEmpty(int, int)
0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[-5]
0xe7: Call 0xc0

0xe8: Pop(1)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-4] = (bool) 0
0xec: Return(); Pop(2)

0xed: PushEmpty(bool, object, string)
0xee: Stack[-2] = Stack[-6]
0xef: Stack[-1] = "noaccess"
0xf0: Call 0x5f

0xf1: Pop(2)
0xf2: Pop(1); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-4] = (bool) 1
0xf5: Return(); Pop(2)

0xf6: Push("noaccess")
0xf7: @@ GetProperty(Stack[-1], Stack[-2])
0xf8: Pop(1)
0xf9: Push((int) 0)
0xfa: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xfb: Return(); Pop(2)

0xfc: PushEmpty()
0xfd: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xff: Stack[-3] = Stack[-2]
0x100: GOTO 0x102

0x101: Stack[-3] = Stack[-1]
0x102: Return(); Pop(0)

0x103: PushEmpty()
0x104: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-4] = Stack[-2]
0x107: Return(); Pop(0)

0x108: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10a: Stack[-4] = Stack[-1]
0x10b: Return(); Pop(0)

0x10c: Stack[-4] = Stack[-3]
0x10d: Return(); Pop(0)

