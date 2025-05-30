GlobalVarCount = 1
	G_VAR_0 float 

Strings:
	health
	death
	die
	all
	GetPosition
	attack
	attack_begin
	attack_end
	run
	GetPFPosition
	walk
	retreat
	Can't retreat, distance: 
	fire
	phys
	HasProperty
	HasProperty
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess

Import:
	HasProperty (2 args)
	GetProperty (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	Speak (1 args)
	Hold (0 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	StopSecondaryAnimation (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	GetAttackDistance (1 args)
	Face (1 args)
	irand (2 args)
	SetAttackState (1 args)
	WaitForAnimEnd (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	StopAnimation (0 args)
	SetTimer (2 args)
	KillTimer (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsPlayerActor (2 args)
	ResetAAS (0 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_1 Op = 0x11 Vars = (object)
		EVENT_16 Op = 0x1f Vars = (object, string)
		EVENT_17 Op = 0x2f Vars = (object)
		EVENT_10 Op = 0x78 Vars = (object)
		EVENT_28 Op = 0x7c Vars = ()
		EVENT_41 Op = 0x86 Vars = (object)
	GTASK_1  Params = 0
	GTASK_2  Params = 0
		EVENT_22 Op = 0xb9 Vars = (object, int, float, float)
		EVENT_16 Op = 0xbb Vars = (object, string)
		EVENT_41 Op = 0xbd Vars = (object)
	GTASK_3 Vars = (object) Params = 1
		EVENT_16 Op = 0x123 Vars = (object, string)
		EVENT_41 Op = 0x13a Vars = (object)
	GTASK_4 Vars = (bool, object) Params = 3
		EVENT_16 Op = 0x164 Vars = (object, string)
		EVENT_41 Op = 0x17b Vars = (object)
		EVENT_7 Op = 0x184 Vars = (int)
		EVENT_10 Op = 0x1f5 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool, object) Params = 1
		EVENT_7 Op = 0x21c Vars = (int)
		EVENT_16 Op = 0x23f Vars = (object, string)
		EVENT_41 Op = 0x256 Vars = (object)

Events:
EVENT_41 Op = 0x43a Vars = (object)

0x0: PushEmpty(bool, float, bool, float)
0x1: Push("health")
0x2: @ HasProperty(Stack[-1], Stack[-3])
0x3: Pop(1)
0x4: Push(Stack[-2])
0x5: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x6: Push("health")
0x7: @ GetProperty(Stack[-1], Stack[-2])
0x8: Pop(1)
0x9: Push(GlobalVars[0])
0xa: Stack[-1] = Stack[-2]
0xb: GlobalVars[0] = Stack[-1]; Pop(1)
0xc: PushEmpty()
0xd: Call 0x3f

0xe: Pop(0)
0xf: GOTO 0xc

0x10: Return(); Pop(4)

0x11: PushEmpty()
0x12: PushEmpty(bool, object)
0x13: Stack[-1] = Stack[-3]
0x14: Call 0x3de

0x15: Pop(1)
0x16: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x17: PushEmpty()
0x18: Call 0x7f

0x19: Pop(0)
0x1a: PushEmpty(object)
0x1b: Stack[-1] = Stack[-2]
0x1c: Call 0x3e5

0x1d: Pop(1)
0x1e: Return(); Pop(0)

0x1f: PushEmpty()
0x20: PushEmpty(bool, object, string)
0x21: Stack[-2] = Stack[-5]
0x22: Stack[-1] = Stack[-4]
0x23: Call 0x400

0x24: Pop(2)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: PushEmpty()
0x27: Call 0x7f

0x28: Pop(0)
0x29: PushEmpty(object, string)
0x2a: Stack[-2] = Stack[-4]
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x41b

0x2d: Pop(2)
0x2e: Return(); Pop(0)

0x2f: PushEmpty()
0x30: PushEmpty(bool, object)
0x31: Stack[-1] = Stack[-3]
0x32: Call 0x391

0x33: Pop(1)
0x34: Pop(1); Push((bool) Stack[-1] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Call 0x7f

0x39: Pop(0)
0x3a: PushEmpty(object)
0x3b: Stack[-1] = Stack[-2]
0x3c: Call 0x3ef

0x3d: Pop(1)
0x3e: Return(); Pop(0)

0x3f: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x40: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x41: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x42: Push((float)0.5)
0x43: @ rand(Stack[-8], Stack[-1])
0x44: Pop(1)
0x45: @ Sleep(Stack[-7])
0x46: Pop(0)
0x47: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x48: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x49: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x4a: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x4b: @ GetPosition(Stack[-5])
0x4c: Pop(0)
0x4d: @ GetCameraFarDistance(Stack[-4])
0x4e: Pop(0)
0x4f: Push((float)2.5)
0x50: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x51: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x52: Pop(0)
0x53: Push(Stack[-3])
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: GOTO 0x5a

0x56: Push((int) 1)
0x57: @ Sleep(Stack[-1])
0x58: Pop(1)
0x59: GOTO 0x4b

0x5a: GOTO 0x5c

0x5b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x5c: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x5d: Pop(0)
0x5e: Pop(0); Push(( Stack[-2] != 0 )
0x5f: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x60: @ RotatePath(Stack[-2], Stack[-1])
0x61: Pop(0)
0x62: Push(Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x64: PushEmpty(bool)
0x65: Call 0x8f

0x66: Pop(0)
0x67: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x68: Pop(1)
0x69: Stack[-2] = 0
0x6a: Push(Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: PushEmpty()
0x6d: Push(-0, 0); TaskCall(1)
0x6e: Call 0x91

0x6f: Pop(-0, 0); TaskReturn
0x70: Pop(0)
0x71: GOTO 0x75

0x72: Push((int) 1)
0x73: @ Sleep(Stack[-1])
0x74: Pop(1)
0x75: Stack[-2] = 0
0x76: GOTO 0x47

0x77: Return(); Pop(14)

0x78: PushEmpty()
0x79: @ RequestClearPath(Stack[-1])
0x7a: Pop(0)
0x7b: Return(); Pop(0)

0x7c: @ Stop()
0x7d: Pop(0)
0x7e: Return(); Pop(0)

0x7f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x80: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x81: @ Stop()
0x82: Pop(0)
0x83: @ StopGroup0()
0x84: Pop(0)
0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: PushEmpty()
0x88: Call 0x7f

0x89: Pop(0)
0x8a: PushEmpty(object)
0x8b: Stack[-1] = Stack[-2]
0x8c: Call 0x43a

0x8d: Pop(1)
0x8e: Return(); Pop(0)

0x8f: Stack[-1] = (bool) 0
0x90: Return(); Pop(0)

0x91: Return(); Pop(0)

0x92: Push("death")
0x93: @ Speak(Stack[-1])
0x94: Pop(1)
0x95: PushEmpty(string)
0x96: Stack[-1] = "die"
0x97: Call 0x9a

0x98: Pop(1)
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: PushEmpty(string)
0x9c: Stack[-1] = Stack[-2]
0x9d: Call 0xa3

0x9e: Pop(1)
0x9f: @ Hold()
0xa0: Pop(0)
0xa1: GOTO 0x9f

0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: @ RemoveRTEnvelope()
0xa5: Pop(0)
0xa6: @ SetDeathState()
0xa7: Pop(0)
0xa8: @ Stop()
0xa9: Pop(0)
0xaa: @ StopAsync()
0xab: Pop(0)
0xac: @ StopSecondaryAnimation()
0xad: Pop(0)
0xae: Push("all")
0xaf: @ PlayAnimation(Stack[-1], Stack[-2])
0xb0: Pop(1)
0xb1: @ WaitForAnimEnd()
0xb2: Pop(0)
0xb3: Push("all")
0xb4: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb5: Pop(1)
0xb6: @ RemoveEnvelope()
0xb7: Pop(0)
0xb8: Return(); Pop(0)

0xb9: PushEmpty()
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Return(); Pop(0)

0xbf: PushEmpty(float, float, bool, cvector, cvector, cvector, float, int, object, float, float, float, bool, cvector, cvector, cvector, float, int, object, float)
0xc0: Stack[0 + Tasks[-1].StackPointer] = Stack[-21]
0xc1: @ GetAttackDistance(Stack[-10])
0xc2: Pop(0)
0xc3: Push((int) 10)
0xc4: Stack[-10] = Stack[-11] + Stack[-1]; Pop(1);
0xc5: @ Face(Stack[-0])
0xc6: Pop(0)
0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call 0x3d1

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xcc: @@ GetPosition(Stack[-7])
0xcd: Pop(0)
0xce: @ GetPosition(Stack[-6])
0xcf: Pop(0)
0xd0: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xd1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd2: Pop(0); Push(Stack[-9] * Stack[-9]);
0xd3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xd5: Push((int) 2)
0xd6: @ irand(Stack[-4], Stack[-1])
0xd7: Pop(1)
0xd8: Push("attack")
0xd9: Push((int) 1)
0xda: Pop(1); Push(Stack[-5] + Stack[-1]);
0xdb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdc: @ Speak(Stack[-1])
0xdd: Pop(1)
0xde: Push((bool) 1)
0xdf: @ SetAttackState(Stack[-1])
0xe0: Pop(1)
0xe1: Push("all")
0xe2: Push("attack_begin")
0xe3: @ PlayAnimation(Stack[-2], Stack[-1])
0xe4: Pop(2)
0xe5: @ WaitForAnimEnd(Stack[-8])
0xe6: Pop(0)
0xe7: Pop(0); Push((bool) Stack[-8] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe9: Push((bool) 0)
0xea: @ SetAttackState(Stack[-1])
0xeb: Pop(1)
0xec: GOTO 0x120

0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call 0x391

0xf0: Pop(1)
0xf1: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf2: @ GetVictim(Stack[-10], Stack[-2])
0xf3: Pop(0)
0xf4: @ ReportAttack(Stack[-0])
0xf5: Pop(0)
0xf6: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0xf7: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf8: PushEmpty(float, object, float, int)
0xf9: Stack[-3] = Stack[-6]
0xfa: Stack[-2] = (float) 0.05
0xfb: Stack[-1] = (int) 0
0xfc: Call 0x328

0xfd: Stack[-5] = Stack[-4]
0xfe: Pop(4)
0xff: Push((int) 0)
0x100: Push((float)0.05)
0x101: @ ReportHit(Stack[-0], Stack[-2], Stack[-3], Stack[-1])
0x102: Pop(2)
0x103: Stack[-2] = 0
0x104: Push((bool) 0)
0x105: @ SetAttackState(Stack[-1])
0x106: Pop(1)
0x107: Push("all")
0x108: Push("attack_end")
0x109: @ PlayAnimation(Stack[-2], Stack[-1])
0x10a: Pop(2)
0x10b: @ WaitForAnimEnd(Stack[-8])
0x10c: Pop(0)
0x10d: Pop(0); Push((bool) Stack[-8] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x120

0x110: GOTO 0x11f

0x111: @ StopAsync()
0x112: Pop(0)
0x113: PushEmpty(bool, object, float)
0x114: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[-12]
0x116: Push(-3, 2); TaskCall(4)
0x117: Call 0x143

0x118: Pop(-3, 2); TaskReturn
0x119: Pop(2)
0x11a: Pop(1); Push((bool) Stack[-1] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: GOTO 0x120

0x11d: @ Face(Stack[-0])
0x11e: Pop(0)
0x11f: GOTO 0xc7

0x120: @ StopAsync()
0x121: Pop(0)
0x122: Return(); Pop(20)

0x123: PushEmpty()
0x124: PushEmpty(bool, object, string)
0x125: Stack[-2] = Stack[-5]
0x126: Stack[-1] = Stack[-4]
0x127: Call 0x400

0x128: Pop(2)
0x129: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12a: PushEmpty()
0x12b: Call 0x133

0x12c: Pop(0)
0x12d: PushEmpty(object, string)
0x12e: Stack[-2] = Stack[-4]
0x12f: Stack[-1] = Stack[-3]
0x130: Call 0x41b

0x131: Pop(2)
0x132: Return(); Pop(0)

0x133: @ Stop()
0x134: Pop(0)
0x135: @ StopAnimation()
0x136: Pop(0)
0x137: @ StopAsync()
0x138: Pop(0)
0x139: Return(); Pop(0)

0x13a: PushEmpty()
0x13b: PushEmpty()
0x13c: Call 0x133

0x13d: Pop(0)
0x13e: PushEmpty(object)
0x13f: Stack[-1] = Stack[-2]
0x140: Call 0x43a

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty(bool, bool)
0x144: PushEmpty()
0x145: Call 0x156

0x146: Pop(0)
0x147: PushEmpty(bool, object, float, float, bool, bool)
0x148: Stack[-5] = Stack[-10]
0x149: Push((float)0.9)
0x14a: Stack[-5] = Stack[-10] * Stack[-1]; Pop(1);
0x14b: Stack[-3] = (int) 5000
0x14c: Stack[-2] = (bool) 1
0x14d: Stack[-1] = (bool) 1
0x14e: Call 0x18f

0x14f: Stack[-7] = Stack[-6]
0x150: Pop(6)
0x151: PushEmpty()
0x152: Call 0x160

0x153: Pop(0)
0x154: Stack[-5] = Stack[-1]
0x155: Return(); Pop(2)

0x156: PushEmpty(float, float)
0x157: Push((int) 10)
0x158: @ rand(Stack[-2], Stack[-1])
0x159: Pop(1)
0x15a: Push((int) 111)
0x15b: Push((int) 10)
0x15c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x15d: @ SetTimer(Stack[-2], Stack[-1])
0x15e: Pop(2)
0x15f: Return(); Pop(2)

0x160: Push((int) 111)
0x161: @ KillTimer(Stack[-1])
0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: PushEmpty(bool, object, string)
0x166: Stack[-2] = Stack[-5]
0x167: Stack[-1] = Stack[-4]
0x168: Call 0x400

0x169: Pop(2)
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: PushEmpty()
0x16c: Call 0x174

0x16d: Pop(0)
0x16e: PushEmpty(object, string)
0x16f: Stack[-2] = Stack[-4]
0x170: Stack[-1] = Stack[-3]
0x171: Call 0x41b

0x172: Pop(2)
0x173: Return(); Pop(0)

0x174: PushEmpty()
0x175: Call 0x160

0x176: Pop(0)
0x177: PushEmpty()
0x178: Call 0x1f9

0x179: Pop(0)
0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: PushEmpty()
0x17d: Call 0x174

0x17e: Pop(0)
0x17f: PushEmpty(object)
0x180: Stack[-1] = Stack[-2]
0x181: Call 0x43a

0x182: Pop(1)
0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: Push((int) 111)
0x186: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x188: Push("run")
0x189: @ Speak(Stack[-1])
0x18a: Pop(1)
0x18b: PushEmpty()
0x18c: Call 0x156

0x18d: Pop(0)
0x18e: Return(); Pop(0)

0x18f: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x190: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x191: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x192: Stack[-7] = Stack[-17]
0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[-23]
0x195: Call 0x200

0x196: Pop(1)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x199: Stack[-22] = (bool) 0
0x19a: Return(); Pop(16)

0x19b: @@ GetPosition(Stack[-5])
0x19c: Pop(0)
0x19d: @ GetPosition(Stack[-4])
0x19e: Pop(0)
0x19f: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1a0: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: Push((int) 0)
0x1a4: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a6: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1a7: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = (bool) 1
0x1aa: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ab: @ Stop()
0x1ac: Pop(0)
0x1ad: Stack[-22] = (bool) 0
0x1ae: Return(); Pop(16)

0x1af: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1b0: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1b2: @@ GetPFPosition(Stack[-5])
0x1b3: Pop(0)
0x1b4: @ FindPathTo(Stack[-1], Stack[-5])
0x1b5: Pop(0)
0x1b6: Pop(0); Push(( Stack[-1] != 0 )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-6] = Stack[-1]
0x1b9: Stack[-1] = 0
0x1ba: Pop(0); Push(( Stack[-6] != 0 )
0x1bb: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1bc: Push(Stack[-7])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1be: Stack[-7] = (bool) 0
0x1bf: @ RotatePath(Stack[-6], Stack[-8])
0x1c0: Pop(0)
0x1c1: Pop(0); Push((bool) Stack[-8] == 0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: GOTO 0x1f3

0x1c4: Push((int) 0)
0x1c5: Push((float)0.3)
0x1c6: @ SetTimer(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: PushEmpty(string)
0x1c9: Call 0x207

0x1ca: Pop(0)
0x1cb: PushEmpty(string)
0x1cc: Call 0x209

0x1cd: Pop(0)
0x1ce: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: Pop(0); Push((bool) Stack[-8] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: Stack[-6] = 0
0x1d5: GOTO 0x1f3

0x1d6: GOTO 0x1d8

0x1d7: GOTO 0x1f2

0x1d8: GOTO 0x1da

0x1d9: Stack[-6] = 0
0x1da: GOTO 0x1eb

0x1db: Push((int) 0)
0x1dc: @ KillTimer(Stack[-1])
0x1dd: Pop(1)
0x1de: Push((float)0.5)
0x1df: @ Sleep(Stack[-1], Stack[-9])
0x1e0: Pop(1)
0x1e1: Pop(0); Push((bool) Stack[-8] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e5: Stack[-6] = 0
0x1e6: GOTO 0x1f3

0x1e7: Push((int) 0)
0x1e8: Push((float)0.3)
0x1e9: @ SetTimer(Stack[-2], Stack[-1])
0x1ea: Pop(2)
0x1eb: Stack[-1] = 0
0x1ec: GOTO 0x1f1

0x1ed: Push((int) 0)
0x1ee: @ KillTimer(Stack[-1])
0x1ef: Pop(1)
0x1f0: GOTO 0x1f3

0x1f1: Stack[-6] = 0
0x1f2: GOTO 0x193

0x1f3: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f4: Return(); Pop(16)

0x1f5: PushEmpty()
0x1f6: @ RequestClearPath(Stack[-1])
0x1f7: Pop(0)
0x1f8: Return(); Pop(0)

0x1f9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1fa: Push((int) 0)
0x1fb: @ KillTimer(Stack[-1])
0x1fc: Pop(1)
0x1fd: @ Stop()
0x1fe: Pop(0)
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: PushEmpty(bool, object)
0x202: Stack[-1] = Stack[-3]
0x203: Call 0x391

0x204: Stack[-4] = Stack[-2]
0x205: Pop(2)
0x206: Return(); Pop(0)

0x207: Stack[-1] = "walk"
0x208: Return(); Pop(0)

0x209: Stack[-1] = "run"
0x20a: Return(); Pop(0)

0x20b: PushEmpty()
0x20c: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x20d: Push("retreat")
0x20e: @ Speak(Stack[-1])
0x20f: Pop(1)
0x210: Push((int) 110)
0x211: Push((int) 1)
0x212: @ SetTimer(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[-2]
0x216: Call 0x27d

0x217: Pop(1)
0x218: Push((int) 110)
0x219: @ KillTimer(Stack[-1])
0x21a: Pop(1)
0x21b: Return(); Pop(0)

0x21c: PushEmpty(cvector, cvector, cvector, cvector)
0x21d: Push((int) 110)
0x21e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x222: Call 0x391

0x223: Pop(1)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: PushEmpty()
0x227: Call 0x24f

0x228: Pop(0)
0x229: GOTO 0x239

0x22a: @ GetPosition(Stack[-2])
0x22b: Pop(0)
0x22c: @@ GetPosition(Stack[-1])
0x22d: Pop(0)
0x22e: PushEmpty(float, cvector, cvector)
0x22f: Stack[-2] = Stack[-5]
0x230: Stack[-1] = Stack[-4]
0x231: Call 0x3b3

0x232: Pop(2)
0x233: Push((float)2250000.0)
0x234: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x236: PushEmpty()
0x237: Call 0x24f

0x238: Pop(0)
0x239: GOTO 0x23e

0x23a: PushEmpty(int)
0x23b: Stack[-1] = Stack[-6]
0x23c: Call 0x2bd

0x23d: Pop(1)
0x23e: Return(); Pop(4)

0x23f: PushEmpty()
0x240: PushEmpty(bool, object, string)
0x241: Stack[-2] = Stack[-5]
0x242: Stack[-1] = Stack[-4]
0x243: Call 0x400

0x244: Pop(2)
0x245: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x246: PushEmpty()
0x247: Call 0x24f

0x248: Pop(0)
0x249: PushEmpty(object, string)
0x24a: Stack[-2] = Stack[-4]
0x24b: Stack[-1] = Stack[-3]
0x24c: Call 0x41b

0x24d: Pop(2)
0x24e: Return(); Pop(0)

0x24f: Push((int) 110)
0x250: @ KillTimer(Stack[-1])
0x251: Pop(1)
0x252: PushEmpty()
0x253: Call 0x2f1

0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: PushEmpty()
0x257: PushEmpty()
0x258: Call 0x24f

0x259: Pop(0)
0x25a: PushEmpty(object)
0x25b: Stack[-1] = Stack[-2]
0x25c: Call 0x43a

0x25d: Pop(1)
0x25e: Return(); Pop(0)

0x25f: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x260: @ GetPosition(Stack[-6])
0x261: Pop(0)
0x262: @@ GetPosition(Stack[-5])
0x263: Pop(0)
0x264: @ GetDirection(Stack[-4])
0x265: Pop(0)
0x266: PushEmpty(cvector, cvector)
0x267: PushEmpty(cvector, cvector)
0x268: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x269: Call 0x3a9

0x26a: Pop(1)
0x26b: Push((float)0.75)
0x26c: Pop(1); Push(Stack[-8] * Stack[-1]);
0x26d: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x26e: Call 0x3a9

0x26f: Stack[-5] = Stack[-2]
0x270: Pop(2)
0x271: Push((int) 32)
0x272: Push((float)7000.0)
0x273: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x274: Pop(2)
0x275: Push((int) 100)
0x276: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Stack[-1] = (int) 0
0x27b: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x27c: Return(); Pop(12)

0x27d: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x27e: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x27f: PushEmpty(cvector, float)
0x280: Stack[-1] = (float) 1.74533
0x281: Call 0x25f

0x282: Stack[-7] = Stack[-2]
0x283: Pop(2)
0x284: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x285: Push((float)10000.0)
0x286: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x288: Push("Can't retreat, distance: ")
0x289: Pop(0); Push(Sqrt(Stack[-5]))
0x28a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28b: @ Trace(Stack[-1])
0x28c: Pop(1)
0x28d: Push((float)0.5)
0x28e: @ Sleep(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(10)

0x291: Push(CvectorIndex(Stack[-5], 0))
0x292: Push(CvectorIndex(Stack[-6], 2))
0x293: @ Rotate(Stack[-2], Stack[-1])
0x294: Pop(2)
0x295: PushEmpty(cvector)
0x296: Call 0x310

0x297: Pop(0)
0x298: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x299: Push((int) 120)
0x29a: Push((float)0.5)
0x29b: @ SetTimer(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x29e: Push((int) 1)
0x29f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x2a0: Pop(1)
0x2a1: Push(Stack[-3])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2a3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: GOTO 0x2bc

0x2a6: GOTO 0x2ba

0x2a7: PushEmpty(cvector, float)
0x2a8: Stack[-1] = (float) 2.61799
0x2a9: Call 0x25f

0x2aa: Stack[-4] = Stack[-2]
0x2ab: Pop(2)
0x2ac: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2ad: Push((float)10000.0)
0x2ae: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b0: PushEmpty(cvector)
0x2b1: Call 0x310

0x2b2: Pop(0)
0x2b3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2b4: Push((int) 120)
0x2b5: Push((float)0.5)
0x2b6: @ SetTimer(Stack[-2], Stack[-1])
0x2b7: Pop(2)
0x2b8: GOTO 0x2ba

0x2b9: GOTO 0x2bc

0x2ba: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x2bc: Return(); Pop(10)

0x2bd: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2be: Push((int) 120)
0x2bf: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: Return(); Pop(8)

0x2c2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c4: @ Stop()
0x2c5: Pop(0)
0x2c6: Push((int) 1)
0x2c7: @ KillTimer(Stack[-1])
0x2c8: Pop(1)
0x2c9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2ca: GOTO 0x2f0

0x2cb: @ GetDirection(Stack[-4])
0x2cc: Pop(0)
0x2cd: Push((float)7000.0)
0x2ce: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2cf: Pop(1)
0x2d0: PushEmpty(cvector, float)
0x2d1: Stack[-1] = (float) 1.74533
0x2d2: Call 0x25f

0x2d3: Stack[-4] = Stack[-2]
0x2d4: Pop(2)
0x2d5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2d6: PushEmpty(bool)
0x2d7: Stack[-1] = (bool) 0
0x2d8: Push((float)10000.0)
0x2d9: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2db: PushEmpty(bool)
0x2dc: Stack[-1] = (bool) 1
0x2dd: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2de: Push((float)2.25)
0x2df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e0: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e2: PushEmpty(bool)
0x2e3: Call 0x2f8

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: Stack[-1] = (bool) 0
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: Stack[-1] = (bool) 1
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ea: @ Stop()
0x2eb: Pop(0)
0x2ec: PushEmpty(cvector)
0x2ed: Call 0x310

0x2ee: Pop(0)
0x2ef: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2f0: Return(); Pop(8)

0x2f1: @ Stop()
0x2f2: Pop(0)
0x2f3: Push((int) 120)
0x2f4: @ KillTimer(Stack[-1])
0x2f5: Pop(1)
0x2f6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(cvector, cvector, cvector, cvector)
0x2f9: @ GetDirection(Stack[-2])
0x2fa: Pop(0)
0x2fb: PushEmpty(cvector, object)
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call 0x315

0x2fe: Stack[-3] = Stack[-2]
0x2ff: Pop(2)
0x300: PushEmpty(float, cvector, cvector)
0x301: Stack[-2] = Stack[-5]
0x302: Stack[-1] = Stack[-4]
0x303: Call 0x3c9

0x304: Pop(2)
0x305: Push((float)-0.34202)
0x306: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x307: Return(); Pop(4)

0x308: PushEmpty()
0x309: Push((int) 1)
0x30a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-2] = "fire"
0x30d: Return(); Pop(0)

0x30e: Stack[-2] = "phys"
0x30f: Return(); Pop(0)

0x310: PushEmpty(cvector, cvector)
0x311: @ GetPosition(Stack[-1])
0x312: Pop(0)
0x313: Stack[-3] = Stack[-1]
0x314: Return(); Pop(2)

0x315: PushEmpty(cvector, cvector, cvector, cvector)
0x316: @ GetPosition(Stack[-2])
0x317: Pop(0)
0x318: @@ GetPosition(Stack[-1])
0x319: Pop(0)
0x31a: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x31b: Return(); Pop(4)

0x31c: PushEmpty(bool, bool)
0x31d: Push("HasProperty")
0x31e: Push((int) 2)
0x31f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x320: Pop(1); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x322: Stack[-5] = (bool) 0
0x323: Return(); Pop(2)

0x324: @@ HasProperty(Stack[-3], Stack[-1])
0x325: Pop(0)
0x326: Stack[-5] = Stack[-1]
0x327: Return(); Pop(2)

0x328: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x329: PushEmpty(bool, object, string)
0x32a: Stack[-2] = Stack[-18]
0x32b: Stack[-1] = "health"
0x32c: Call 0x31c

0x32d: Pop(2)
0x32e: Pop(1); Push((bool) Stack[-1] == 0)
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: Stack[-16] = (float) 0.0
0x331: Return(); Pop(12)

0x332: PushEmpty(bool, object, string)
0x333: Stack[-2] = Stack[-18]
0x334: Stack[-1] = "armor"
0x335: Call 0x31c

0x336: Pop(2)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x339: Stack[-6] = (int) 0
0x33a: GOTO 0x33e

0x33b: Push("armor")
0x33c: @@ GetProperty(Stack[-1], Stack[-7])
0x33d: Pop(1)
0x33e: Push("armor_")
0x33f: PushEmpty(string, int)
0x340: Stack[-1] = Stack[-16]
0x341: Call 0x308

0x342: Pop(1)
0x343: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x344: PushEmpty(bool, object, string)
0x345: Stack[-2] = Stack[-18]
0x346: Stack[-1] = Stack[-8]
0x347: Call 0x31c

0x348: Pop(2)
0x349: Pop(1); Push((bool) Stack[-1] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-4] = (int) 0
0x34c: GOTO 0x34f

0x34d: @@ GetProperty(Stack[-5], Stack[-4])
0x34e: Pop(0)
0x34f: PushEmpty(float, float, float)
0x350: Pop(0); Push(Stack[-9] + Stack[-7]);
0x351: Push((float)100.0)
0x352: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x353: Stack[-1] = (int) 1
0x354: Call 0x3b7

0x355: Stack[-6] = Stack[-3]
0x356: Pop(3)
0x357: Push("health")
0x358: @@ GetProperty(Stack[-1], Stack[-3])
0x359: Pop(1)
0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-1] - Stack[-4]);
0x35c: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x35d: Push("health")
0x35e: PushEmpty(float, float, float, float)
0x35f: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x360: Stack[-2] = (int) 0
0x361: Stack[-1] = (int) 1
0x362: Call 0x3be

0x363: Pop(3)
0x364: @@ SetProperty(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: Stack[-16] = Stack[-1]
0x367: Return(); Pop(12)

0x368: PushEmpty(bool, bool)
0x369: @@ IsDead(Stack[-1])
0x36a: Pop(0)
0x36b: Stack[-4] = Stack[-1]
0x36c: Return(); Pop(2)

0x36d: PushEmpty(object, object, object, object)
0x36e: Pop(0); Push((bool) Stack[-5] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-6] = (bool) 0
0x371: Return(); Pop(4)

0x372: PushEmpty(bool)
0x373: Stack[-1] = (bool) 0
0x374: Push("IsDead")
0x375: Push((int) 1)
0x376: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[-8]
0x37a: Call 0x368

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 1
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-6] = (bool) 0
0x380: Return(); Pop(4)

0x381: @ GetScene(Stack[-2])
0x382: Pop(0)
0x383: Pop(0); Push((bool) Stack[-2] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-6] = (bool) 0
0x386: Return(); Pop(4)

0x387: @@ GetScene(Stack[-1])
0x388: Pop(0)
0x389: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38b: Stack[-6] = (bool) 0
0x38c: Return(); Pop(4)

0x38d: Stack[-6] = (bool) 1
0x38e: Return(); Pop(4)

0x38f: Stack[-1] = 0
0x390: Stack[-2] = 0
0x391: PushEmpty(int, int)
0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[-5]
0x394: Call 0x36d

0x395: Pop(1)
0x396: Pop(1); Push((bool) Stack[-1] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x398: Stack[-4] = (bool) 0
0x399: Return(); Pop(2)

0x39a: PushEmpty(bool, object, string)
0x39b: Stack[-2] = Stack[-6]
0x39c: Stack[-1] = "noaccess"
0x39d: Call 0x31c

0x39e: Pop(2)
0x39f: Pop(1); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-4] = (bool) 1
0x3a2: Return(); Pop(2)

0x3a3: Push("noaccess")
0x3a4: @@ GetProperty(Stack[-1], Stack[-2])
0x3a5: Pop(1)
0x3a6: Push((int) 0)
0x3a7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x3a8: Return(); Pop(2)

0x3a9: PushEmpty(float, float)
0x3aa: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3ab: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3ac: Push((float)0.0)
0x3ad: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3b0: Return(); Pop(2)

0x3b1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3b2: Return(); Pop(2)

0x3b3: PushEmpty(cvector, cvector)
0x3b4: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x3b5: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x3b6: Return(); Pop(2)

0x3b7: PushEmpty()
0x3b8: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-3] = Stack[-2]
0x3bb: GOTO 0x3bd

0x3bc: Stack[-3] = Stack[-1]
0x3bd: Return(); Pop(0)

0x3be: PushEmpty()
0x3bf: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-4] = Stack[-2]
0x3c2: Return(); Pop(0)

0x3c3: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-4] = Stack[-1]
0x3c6: Return(); Pop(0)

0x3c7: Stack[-4] = Stack[-3]
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: Pop(0); Push(Stack[-2] | Stack[-1]);
0x3cb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3cc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ce: Pop(1); Push(Sqrt(Stack[-1]))
0x3cf: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty(bool, bool)
0x3d2: PushEmpty(bool, object)
0x3d3: Stack[-1] = Stack[-5]
0x3d4: Call 0x391

0x3d5: Pop(1)
0x3d6: Pop(1); Push((bool) Stack[-1] == 0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-4] = (bool) 0
0x3d9: Return(); Pop(2)

0x3da: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3db: Pop(0)
0x3dc: Stack[-4] = Stack[-1]
0x3dd: Return(); Pop(2)

0x3de: PushEmpty()
0x3df: PushEmpty(bool, object)
0x3e0: Stack[-1] = Stack[-3]
0x3e1: Call 0x3d1

0x3e2: Stack[-4] = Stack[-2]
0x3e3: Pop(2)
0x3e4: Return(); Pop(0)

0x3e5: PushEmpty()
0x3e6: PushEmpty(object)
0x3e7: Stack[-1] = Stack[-2]
0x3e8: Push(-1, 1); TaskCall(3)
0x3e9: Call 0xbf

0x3ea: Pop(-1, 1); TaskReturn
0x3eb: Pop(1)
0x3ec: @ ResetAAS()
0x3ed: Pop(0)
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: PushEmpty(object)
0x3f1: Stack[-1] = Stack[-2]
0x3f2: Push(-1, 1); TaskCall(3)
0x3f3: Call 0xbf

0x3f4: Pop(-1, 1); TaskReturn
0x3f5: Pop(1)
0x3f6: @ ResetAAS()
0x3f7: Pop(0)
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: PushEmpty()
0x3fb: Push(-0, 0); TaskCall(2)
0x3fc: Call 0x92

0x3fd: Pop(-0, 0); TaskReturn
0x3fe: Pop(0)
0x3ff: Return(); Pop(0)

0x400: PushEmpty(float, bool, float, bool)
0x401: Push("health")
0x402: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x404: Push("health")
0x405: @ GetProperty(Stack[-1], Stack[-3])
0x406: Pop(1)
0x407: Push(GlobalVars[0])
0x408: Stack[-2] = Stack[-3] < Stack[-1]; Pop(1);
0x409: Push(GlobalVars[0])
0x40a: Stack[-1] = Stack[-3]
0x40b: GlobalVars[0] = Stack[-1]; Pop(1)
0x40c: PushEmpty(bool)
0x40d: Stack[-1] = (bool) 0
0x40e: Push(Stack[-2])
0x40f: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x410: PushEmpty(bool, object)
0x411: Stack[-1] = Stack[-9]
0x412: Call 0x391

0x413: Pop(1)
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: Stack[-1] = (bool) 1
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-7] = (bool) 1
0x418: Return(); Pop(4)

0x419: Stack[-7] = (bool) 0
0x41a: Return(); Pop(4)

0x41b: PushEmpty(float, float)
0x41c: Push("health")
0x41d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x41f: Push("health")
0x420: @ GetProperty(Stack[-1], Stack[-2])
0x421: Pop(1)
0x422: Push((int) 0)
0x423: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: @ SignalDeath(Stack[-4])
0x426: Pop(0)
0x427: PushEmpty(bool)
0x428: Stack[-1] = (bool) 0
0x429: Push(GlobalVars[0])
0x42a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42c: PushEmpty(bool, object)
0x42d: Stack[-1] = Stack[-7]
0x42e: Call 0x391

0x42f: Pop(1)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Stack[-1] = (bool) 1
0x432: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x433: PushEmpty(object)
0x434: Stack[-1] = Stack[-5]
0x435: Push(-1, 4); TaskCall(5)
0x436: Call 0x20b

0x437: Pop(-1, 4); TaskReturn
0x438: Pop(1)
0x439: Return(); Pop(2)

0x43a: PushEmpty()
0x43b: PushEmpty(object)
0x43c: Stack[-1] = Stack[-2]
0x43d: Call 0x3f9

0x43e: Pop(1)
0x43f: Return(); Pop(0)

