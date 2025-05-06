GlobalVarCount = 4
	G_VAR_0 float 
	G_VAR_1 bool 
	G_VAR_2 object 
	G_VAR_3 object 

Strings:
	all
	attack_on
	cattack
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
	add
	flame
	Attach
	SetLength
	Intersect
	Next
	disease
	GetLength
	flame_loop
	FadeIn
	FadeOut

Import:
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	IsPlayerActor (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetAttackDistance (1 args)
	GetScene (1 args)
	AddActorByType (4 args)
	SetTimer (2 args)
	GetHeight (1 args)
	PlayLoopedGlobalSound (5 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0

Events:
EVENT_7 Op = 0xca Vars = (int)

0x0: PushEmpty(bool, bool)
0x1: PushEmpty()
0x2: Call2 0xa7

0x3: Pop(0)
0x4: Push("all")
0x5: Push("attack_on")
0x6: @ PlayAnimation(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: @ WaitForAnimEnd(Stack[-1])
0x9: Pop(0)
0xa: PushEmpty(bool)
0xb: Stack[-1] = (bool) 1
0xc: Call2 0x11f

0xd: Pop(1)
0xe: Push("all")
0xf: Push("cattack")
0x10: @ PlayAnimation(Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: @ WaitForAnimEnd(Stack[-1])
0x13: Pop(0)
0x14: GOTO 0xe

0x15: Return(); Pop(2)

0x16: PushEmpty()
0x17: Push((int) 2)
0x18: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1a: Stack[-2] = "fire"
0x1b: Return(); Pop(0)

0x1c: GOTO 0x22

0x1d: Push((int) 1)
0x1e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-2] = "bullet"
0x21: Return(); Pop(0)

0x22: Stack[-2] = "phys"
0x23: Return(); Pop(0)

0x24: PushEmpty(bool, bool)
0x25: @ IsPlayerActor(Stack[-3], Stack[-1])
0x26: Pop(0)
0x27: Stack[-4] = Stack[-1]
0x28: Return(); Pop(2)

0x29: PushEmpty(bool, bool)
0x2a: Push("HasProperty")
0x2b: Push((int) 2)
0x2c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2d: Pop(1); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2f: Stack[-5] = (bool) 0
0x30: Return(); Pop(2)

0x31: @@ HasProperty(Stack[-3], Stack[-1])
0x32: Pop(0)
0x33: Stack[-5] = Stack[-1]
0x34: Return(); Pop(2)

0x35: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x36: PushEmpty(bool, object, string)
0x37: Stack[-2] = Stack[-18]
0x38: Stack[-1] = "health"
0x39: Call2 0x29

0x3a: Pop(2)
0x3b: Pop(1); Push((bool) Stack[-1] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: Stack[-16] = (float) 0.0
0x3e: Return(); Pop(12)

0x3f: PushEmpty(bool, object, string)
0x40: Stack[-2] = Stack[-18]
0x41: Stack[-1] = "armor"
0x42: Call2 0x29

0x43: Pop(2)
0x44: Pop(1); Push((bool) Stack[-1] == 0)
0x45: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x46: Stack[-6] = (int) 0
0x47: GOTO 0x4b

0x48: Push("armor")
0x49: @@ GetProperty(Stack[-1], Stack[-7])
0x4a: Pop(1)
0x4b: Push("armor_")
0x4c: PushEmpty(string, int)
0x4d: Stack[-1] = Stack[-16]
0x4e: Call2 0x16

0x4f: Pop(1)
0x50: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x51: PushEmpty(bool, object, string)
0x52: Stack[-2] = Stack[-18]
0x53: Stack[-1] = Stack[-8]
0x54: Call2 0x29

0x55: Pop(2)
0x56: Pop(1); Push((bool) Stack[-1] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x58: Stack[-4] = (int) 0
0x59: GOTO 0x5c

0x5a: @@ GetProperty(Stack[-5], Stack[-4])
0x5b: Pop(0)
0x5c: PushEmpty(float, float, float)
0x5d: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5e: Push((float)100.0)
0x5f: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x60: Stack[-1] = (int) 1
0x61: Call2 0x84

0x62: Stack[-6] = Stack[-3]
0x63: Pop(3)
0x64: Push("health")
0x65: @@ GetProperty(Stack[-1], Stack[-3])
0x66: Pop(1)
0x67: Push((int) 1)
0x68: Pop(1); Push(Stack[-1] - Stack[-4]);
0x69: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6a: Push("health")
0x6b: PushEmpty(float, float, float, float)
0x6c: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6d: Stack[-2] = (int) 0
0x6e: Stack[-1] = (int) 1
0x6f: Call2 0x8b

0x70: Pop(3)
0x71: @@ SetProperty(Stack[-2], Stack[-1])
0x72: Pop(2)
0x73: PushEmpty(bool, object)
0x74: Stack[-1] = Stack[-17]
0x75: Call2 0x24

0x76: Pop(1)
0x77: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x78: PushEmpty(float)
0x79: Stack[-1] = -Stack[-2]; Pop(0);
0x7a: Call2 0x96

0x7b: Pop(1)
0x7c: Stack[-16] = Stack[-1]
0x7d: Return(); Pop(12)

0x7e: PushEmpty(object, object)
0x7f: @ self(Stack[-1])
0x80: Pop(0)
0x81: Stack[-3] = Stack[-1]
0x82: Return(); Pop(2)

0x83: Stack[-1] = 0
0x84: PushEmpty()
0x85: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: Stack[-3] = Stack[-2]
0x88: GOTO 0x8a

0x89: Stack[-3] = Stack[-1]
0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-4] = Stack[-2]
0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x92: Stack[-4] = Stack[-1]
0x93: Return(); Pop(0)

0x94: Stack[-4] = Stack[-3]
0x95: Return(); Pop(0)

0x96: PushEmpty(object, object)
0x97: @ CreateFloatVector(Stack[-1])
0x98: Pop(0)
0x99: @@ add(Stack[-3])
0x9a: Pop(0)
0x9b: Push((int) 0)
0x9c: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9e: Push((float)0.7)
0x9f: Push((int) 500)
0xa0: @ RumblePlay(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: Push((int) 15)
0xa3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa4: Pop(1)
0xa5: Return(); Pop(2)

0xa6: Stack[-1] = 0
0xa7: PushEmpty(float, object, object, float, object, object)
0xa8: @ GetAttackDistance(Stack[-3])
0xa9: Pop(0)
0xaa: Push(GlobalVars[0])
0xab: Push((float)600.0)
0xac: Stack[-2] = Stack[-5] / Stack[-1]; Pop(1);
0xad: GlobalVars[0] = Stack[-1]; Pop(1)
0xae: @ GetScene(Stack[-2])
0xaf: Pop(0)
0xb0: Push("flame")
0xb1: Push(CVector(0.0, 0.0, 0.0))
0xb2: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0xb3: Pop(2)
0xb4: PushEmpty(object)
0xb5: Call2 0x7e

0xb6: Pop(0)
0xb7: Push("flame")
0xb8: @@ Attach(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: Push(GlobalVars[1])
0xbb: Stack[-1] = (bool) 0
0xbc: GlobalVars[1] = Stack[-1]; Pop(1)
0xbd: Push((float)0.05)
0xbe: @@ SetLength(Stack[-1])
0xbf: Pop(1)
0xc0: Push(GlobalVars[2])
0xc1: Stack[-1] = Stack[-2]
0xc2: GlobalVars[2] = Stack[-1]; Pop(1)
0xc3: Push((int) 70)
0xc4: Push((float)0.1)
0xc5: @ SetTimer(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: Return(); Pop(6)

0xc8: Stack[-1] = 0
0xc9: Stack[-2] = 0
0xca: PushEmpty(object, float, object, bool, float, float, float, object, float, object, bool, float, float, float)
0xcb: Push((int) 70)
0xcc: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(14)

0xcf: Push(GlobalVars[2])
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(14)

0xd3: Push(GlobalVars[2])
0xd4: @@ Intersect(Stack[-8], Stack[-7])
0xd5: Pop(1)
0xd6: Push(GlobalVars[2])
0xd7: Push(GlobalVars[1])
0xd8: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd9: PushEmpty(float, float, float)
0xda: Stack[-2] = Stack[-10]
0xdb: Push(GlobalVars[0])
0xdc: Stack[-2] = Stack[-1]
0xdd: Pop(1)
0xde: Call2 0x84

0xdf: Pop(2)
0xe0: GOTO 0xe2

0xe1: Push((float)0.05)
0xe2: @@ SetLength(Stack[-1])
0xe3: Pop(2)
0xe4: @@ Next(Stack[-4], Stack[-5])
0xe5: Pop(0)
0xe6: Push(Stack[-4])
0xe7: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 0
0xea: Pop(0); Push(( Stack[-6] != 0 )
0xeb: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xec: PushEmpty(object)
0xed: Call2 0x7e

0xee: Pop(0)
0xef: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: Stack[-1] = (bool) 1
0xf2: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0xf3: PushEmpty(float, object, float, int)
0xf4: Stack[-3] = Stack[-9]
0xf5: Stack[-2] = (float) 0.1
0xf6: Stack[-1] = (int) 2
0xf7: Call2 0x35

0xf8: Stack[-7] = Stack[-4]
0xf9: Pop(4)
0xfa: PushEmpty(bool, object, string)
0xfb: Stack[-2] = Stack[-8]
0xfc: Stack[-1] = "disease"
0xfd: Call2 0x29

0xfe: Pop(2)
0xff: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x100: Push("disease")
0x101: @@ GetProperty(Stack[-1], Stack[-3])
0x102: Pop(1)
0x103: Push((float)0.02)
0x104: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-2] = (int) 0
0x107: GOTO 0x10a

0x108: Push((float)0.02)
0x109: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0x10a: Push("disease")
0x10b: @@ SetProperty(Stack[-1], Stack[-3])
0x10c: Pop(1)
0x10d: PushEmpty(bool, object, string)
0x10e: Stack[-2] = Stack[-8]
0x10f: Stack[-1] = "fire"
0x110: Call2 0x29

0x111: Pop(2)
0x112: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x113: Push("fire")
0x114: @@ GetProperty(Stack[-1], Stack[-2])
0x115: Pop(1)
0x116: Push("fire")
0x117: Push((float)0.1)
0x118: Pop(1); Push(Stack[-3] + Stack[-1]);
0x119: @@ SetProperty(Stack[-2], Stack[-1])
0x11a: Pop(2)
0x11b: GOTO 0xe4

0x11c: Return(); Pop(14)

0x11d: Stack[-5] = 0
0x11e: Stack[-7] = 0
0x11f: PushEmpty(float, float, object, cvector, float, float, float, object, cvector, float)
0x120: Push(Stack[-11])
0x121: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x122: Push(GlobalVars[0])
0x123: Stack[-6] = Stack[-1]
0x124: Pop(1)
0x125: GOTO 0x127

0x126: Stack[-5] = (float) 0.05
0x127: Push(GlobalVars[2])
0x128: @@ GetLength(Stack[-5])
0x129: Pop(1)
0x12a: Pop(0); Push((bool) Stack[-5] < Stack[-4])
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-4] = Stack[-5]
0x12d: Push(GlobalVars[2])
0x12e: @@ SetLength(Stack[-5])
0x12f: Pop(1)
0x130: Push(GlobalVars[1])
0x131: Pop(1); Push((bool) Stack[-1] != Stack[-12])
0x132: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x133: Push(Stack[-11])
0x134: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x135: Push(GlobalVars[3])
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x138: Stack[-2] = CVector(0.0, 0.0, 0.0)
0x139: @ GetHeight(Stack[-1])
0x13a: Pop(0)
0x13b: Push(CvectorIndex(Stack[-2], 1))
0x13c: Stack[-1] = Stack[-2]
0x13d: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x13e: Push("flame_loop")
0x13f: Push((int) 0)
0x140: Push((int) 200)
0x141: @ PlayLoopedGlobalSound(Stack[-6], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Push(GlobalVars[3])
0x144: Stack[-1] = Stack[-4]
0x145: GlobalVars[3] = Stack[-1]; Pop(1)
0x146: Stack[-3] = 0
0x147: Push(GlobalVars[3])
0x148: Push((int) 2)
0x149: @@ FadeIn(Stack[-1])
0x14a: Pop(2)
0x14b: GOTO 0x153

0x14c: Push(GlobalVars[3])
0x14d: Pop(1); Push(( Stack[-1] != 0 )
0x14e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14f: Push(GlobalVars[3])
0x150: Push((int) 2)
0x151: @@ FadeOut(Stack[-1])
0x152: Pop(2)
0x153: Push(GlobalVars[1])
0x154: Stack[-1] = Stack[-12]
0x155: GlobalVars[1] = Stack[-1]; Pop(1)
0x156: Return(); Pop(10)

