GlobalVarCount = 1
	G_VAR_0 float 

Strings:
	health
	player_shot
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
	bullet
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
	add
	GetItemID
	Category
	AddItem
	DropItems
	battle
	rat
	SetItemName
	quality

Import:
	HasProperty (2 args)
	GetProperty (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
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
	IsPlayerActor (2 args)
	GetScene (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateFloatVector (1 args)
	BroadcastMessage (3 args)
	ResetAAS (0 args)
	SignalDeath (1 args)
	ReportHit (4 args)
	CreateInvItem (1 args)
	rand (3 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_1 Op = 0x11 Vars = (object)
		EVENT_16 Op = 0x1f Vars = (object, string)
		EVENT_17 Op = 0x2f Vars = (object)
		EVENT_0 Op = 0x3f Vars = (object)
		EVENT_42 Op = 0x45 Vars = (object, string)
		EVENT_10 Op = 0x93 Vars = (object)
		EVENT_28 Op = 0x97 Vars = ()
		EVENT_41 Op = 0xa1 Vars = (object)
	GTASK_1  Params = 0
	GTASK_2  Params = 0
		EVENT_22 Op = 0xde Vars = (object, int, float, float)
		EVENT_16 Op = 0xe0 Vars = (object, string)
		EVENT_41 Op = 0xe2 Vars = (object)
	GTASK_3 Vars = (object) Params = 1
		EVENT_16 Op = 0x144 Vars = (object, string)
		EVENT_41 Op = 0x15b Vars = (object)
		EVENT_42 Op = 0x164 Vars = (object, string)
	GTASK_4 Vars = (bool, object) Params = 3
		EVENT_16 Op = 0x193 Vars = (object, string)
		EVENT_41 Op = 0x1aa Vars = (object)
		EVENT_7 Op = 0x1b3 Vars = (int)
		EVENT_42 Op = 0x1c3 Vars = (object, string)
		EVENT_10 Op = 0x249 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool, object) Params = 1
		EVENT_7 Op = 0x270 Vars = (int)
		EVENT_16 Op = 0x293 Vars = (object, string)
		EVENT_41 Op = 0x2aa Vars = (object)
		EVENT_0 Op = 0x2b3 Vars = (object)

Events:
EVENT_41 Op = 0x516 Vars = (object)

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
0xd: Call2 0x53

0xe: Pop(0)
0xf: GOTO 0xc

0x10: Return(); Pop(4)

0x11: PushEmpty()
0x12: PushEmpty(bool, object)
0x13: Stack[-1] = Stack[-3]
0x14: Call2 0x4ba

0x15: Pop(1)
0x16: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x17: PushEmpty()
0x18: Call2 0x9a

0x19: Pop(0)
0x1a: PushEmpty(object)
0x1b: Stack[-1] = Stack[-2]
0x1c: Call2 0x4c1

0x1d: Pop(1)
0x1e: Return(); Pop(0)

0x1f: PushEmpty()
0x20: PushEmpty(bool, object, string)
0x21: Stack[-2] = Stack[-5]
0x22: Stack[-1] = Stack[-4]
0x23: Call2 0x4dc

0x24: Pop(2)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: PushEmpty()
0x27: Call2 0x9a

0x28: Pop(0)
0x29: PushEmpty(object, string)
0x2a: Stack[-2] = Stack[-4]
0x2b: Stack[-1] = Stack[-3]
0x2c: Call2 0x4f7

0x2d: Pop(2)
0x2e: Return(); Pop(0)

0x2f: PushEmpty()
0x30: PushEmpty(bool, object)
0x31: Stack[-1] = Stack[-3]
0x32: Call2 0x408

0x33: Pop(1)
0x34: Pop(1); Push((bool) Stack[-1] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Call2 0x9a

0x39: Pop(0)
0x3a: PushEmpty(object)
0x3b: Stack[-1] = Stack[-2]
0x3c: Call2 0x4cb

0x3d: Pop(1)
0x3e: Return(); Pop(0)

0x3f: PushEmpty()
0x40: PushEmpty(object)
0x41: Stack[-1] = Stack[-2]
0x42: Call2 0x529

0x43: Pop(1)
0x44: Return(); Pop(0)

0x45: PushEmpty()
0x46: Push("player_shot")
0x47: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x49: PushEmpty()
0x4a: Call2 0x9a

0x4b: Pop(0)
0x4c: PushEmpty(object)
0x4d: Stack[-1] = Stack[-3]
0x4e: Push(-1, 4); TaskCall(5)
0x4f: Call2 0x25f

0x50: Pop(-1, 4); TaskReturn
0x51: Pop(1)
0x52: Return(); Pop(0)

0x53: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x54: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x55: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x56: Push((float)0.5)
0x57: @ rand(Stack[-7], Stack[-1])
0x58: Pop(1)
0x59: @ Sleep(Stack[-6])
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x5d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x5f: @ GetPosition(Stack[-4])
0x60: Pop(0)
0x61: PushEmpty(float)
0x62: Call2 0x8e

0x63: Pop(0)
0x64: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x65: Pop(1)
0x66: Push(Stack[-3])
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: GOTO 0x6d

0x69: Push((int) 1)
0x6a: @ Sleep(Stack[-1])
0x6b: Pop(1)
0x6c: GOTO 0x5f

0x6d: GOTO 0x6f

0x6e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x6f: PushEmpty(object, cvector)
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0xac

0x72: Stack[-4] = Stack[-2]
0x73: Pop(2)
0x74: Pop(0); Push(( Stack[-2] != 0 )
0x75: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x76: @ RotatePath(Stack[-2], Stack[-1])
0x77: Pop(0)
0x78: Push(Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7a: PushEmpty(bool)
0x7b: Call2 0xaa

0x7c: Pop(0)
0x7d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x7e: Pop(1)
0x7f: Stack[-2] = 0
0x80: Push(Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: PushEmpty()
0x83: Push(-0, 0); TaskCall(1)
0x84: Call2 0xb2

0x85: Pop(-0, 0); TaskReturn
0x86: Pop(0)
0x87: GOTO 0x8b

0x88: Push((int) 1)
0x89: @ Sleep(Stack[-1])
0x8a: Pop(1)
0x8b: Stack[-2] = 0
0x8c: GOTO 0x5b

0x8d: Return(); Pop(12)

0x8e: PushEmpty(float, float)
0x8f: @ GetCameraFarDistance(Stack[-1])
0x90: Pop(0)
0x91: Stack[-3] = Stack[-1]
0x92: Return(); Pop(2)

0x93: PushEmpty()
0x94: @ RequestClearPath(Stack[-1])
0x95: Pop(0)
0x96: Return(); Pop(0)

0x97: @ Stop()
0x98: Pop(0)
0x99: Return(); Pop(0)

0x9a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x9b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x9c: @ Stop()
0x9d: Pop(0)
0x9e: @ StopGroup0()
0x9f: Pop(0)
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: PushEmpty()
0xa3: Call2 0x9a

0xa4: Pop(0)
0xa5: PushEmpty(object)
0xa6: Stack[-1] = Stack[-2]
0xa7: Call2 0x516

0xa8: Pop(1)
0xa9: Return(); Pop(0)

0xaa: Stack[-1] = (bool) 0
0xab: Return(); Pop(0)

0xac: PushEmpty(object, object)
0xad: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xae: Pop(0)
0xaf: Stack[-4] = Stack[-1]
0xb0: Return(); Pop(2)

0xb1: Stack[-1] = 0
0xb2: Return(); Pop(0)

0xb3: Push("death")
0xb4: @ Speak(Stack[-1])
0xb5: Pop(1)
0xb6: PushEmpty(string)
0xb7: Stack[-1] = "die"
0xb8: Call2 0xbb

0xb9: Pop(1)
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(string)
0xbd: Stack[-1] = Stack[-2]
0xbe: Call2 0xc4

0xbf: Pop(1)
0xc0: @ Hold()
0xc1: Pop(0)
0xc2: GOTO 0xc0

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: @ RemoveRTEnvelope()
0xc6: Pop(0)
0xc7: @ SetDeathState()
0xc8: Pop(0)
0xc9: @ Stop()
0xca: Pop(0)
0xcb: @ StopAsync()
0xcc: Pop(0)
0xcd: @ StopSecondaryAnimation()
0xce: Pop(0)
0xcf: PushEmpty(string)
0xd0: Stack[-1] = Stack[-2]
0xd1: Call2 0x420

0xd2: Pop(1)
0xd3: Push("all")
0xd4: @ PlayAnimation(Stack[-1], Stack[-2])
0xd5: Pop(1)
0xd6: @ WaitForAnimEnd()
0xd7: Pop(0)
0xd8: Push("all")
0xd9: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xda: Pop(1)
0xdb: @ RemoveEnvelope()
0xdc: Pop(0)
0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: Return(); Pop(0)

0xe4: PushEmpty(float, float, bool, cvector, cvector, cvector, float, int, object, float, float, bool, cvector, cvector, cvector, float, int, object)
0xe5: Stack[0 + Tasks[-1].StackPointer] = Stack[-19]
0xe6: @ GetAttackDistance(Stack[-9])
0xe7: Pop(0)
0xe8: Push((int) 10)
0xe9: Stack[-9] = Stack[-10] + Stack[-1]; Pop(1);
0xea: @ Face(Stack[-0])
0xeb: Pop(0)
0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x4ab

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0xf1: @@ GetPosition(Stack[-6])
0xf2: Pop(0)
0xf3: @ GetPosition(Stack[-5])
0xf4: Pop(0)
0xf5: Stack[-4] = Stack[-6] - Stack[-5]; Pop(0);
0xf6: Stack[-3] = Stack[-4] | Stack[-4]; Pop(0);
0xf7: Pop(0); Push(Stack[-8] * Stack[-8]);
0xf8: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0xfa: Push((int) 2)
0xfb: @ irand(Stack[-3], Stack[-1])
0xfc: Pop(1)
0xfd: Push("attack")
0xfe: Push((int) 1)
0xff: Pop(1); Push(Stack[-4] + Stack[-1]);
0x100: Pop(2); Push(Stack[-2] + Stack[-1]);
0x101: @ Speak(Stack[-1])
0x102: Pop(1)
0x103: Push((bool) 1)
0x104: @ SetAttackState(Stack[-1])
0x105: Pop(1)
0x106: PushEmpty()
0x107: Call2 0x4a0

0x108: Pop(0)
0x109: Push("all")
0x10a: Push("attack_begin")
0x10b: @ PlayAnimation(Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: @ WaitForAnimEnd(Stack[-7])
0x10e: Pop(0)
0x10f: Pop(0); Push((bool) Stack[-7] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x111: Push((bool) 0)
0x112: @ SetAttackState(Stack[-1])
0x113: Pop(1)
0x114: GOTO 0x141

0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x408

0x118: Pop(1)
0x119: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11a: @ GetVictim(Stack[-9], Stack[-1])
0x11b: Pop(0)
0x11c: @ ReportAttack(Stack[-0])
0x11d: Pop(0)
0x11e: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x11f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x120: PushEmpty(object)
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x51c

0x123: Pop(1)
0x124: Stack[-1] = 0
0x125: Push((bool) 0)
0x126: @ SetAttackState(Stack[-1])
0x127: Pop(1)
0x128: Push("all")
0x129: Push("attack_end")
0x12a: @ PlayAnimation(Stack[-2], Stack[-1])
0x12b: Pop(2)
0x12c: @ WaitForAnimEnd(Stack[-7])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-7] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: GOTO 0x141

0x131: GOTO 0x140

0x132: @ StopAsync()
0x133: Pop(0)
0x134: PushEmpty(bool, object, float)
0x135: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x136: Stack[-1] = Stack[-11]
0x137: Push(-3, 2); TaskCall(4)
0x138: Call2 0x172

0x139: Pop(-3, 2); TaskReturn
0x13a: Pop(2)
0x13b: Pop(1); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: GOTO 0x141

0x13e: @ Face(Stack[-0])
0x13f: Pop(0)
0x140: GOTO 0xec

0x141: @ StopAsync()
0x142: Pop(0)
0x143: Return(); Pop(18)

0x144: PushEmpty()
0x145: PushEmpty(bool, object, string)
0x146: Stack[-2] = Stack[-5]
0x147: Stack[-1] = Stack[-4]
0x148: Call2 0x4dc

0x149: Pop(2)
0x14a: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14b: PushEmpty()
0x14c: Call2 0x154

0x14d: Pop(0)
0x14e: PushEmpty(object, string)
0x14f: Stack[-2] = Stack[-4]
0x150: Stack[-1] = Stack[-3]
0x151: Call2 0x4f7

0x152: Pop(2)
0x153: Return(); Pop(0)

0x154: @ Stop()
0x155: Pop(0)
0x156: @ StopAnimation()
0x157: Pop(0)
0x158: @ StopAsync()
0x159: Pop(0)
0x15a: Return(); Pop(0)

0x15b: PushEmpty()
0x15c: PushEmpty()
0x15d: Call2 0x154

0x15e: Pop(0)
0x15f: PushEmpty(object)
0x160: Stack[-1] = Stack[-2]
0x161: Call2 0x516

0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: Push("player_shot")
0x166: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x168: PushEmpty()
0x169: Call2 0x154

0x16a: Pop(0)
0x16b: PushEmpty(object)
0x16c: Stack[-1] = Stack[-3]
0x16d: Push(-1, 4); TaskCall(5)
0x16e: Call2 0x25f

0x16f: Pop(-1, 4); TaskReturn
0x170: Pop(1)
0x171: Return(); Pop(0)

0x172: PushEmpty(bool, bool)
0x173: PushEmpty()
0x174: Call2 0x185

0x175: Pop(0)
0x176: PushEmpty(bool, object, float, float, bool, bool)
0x177: Stack[-5] = Stack[-10]
0x178: Push((float)0.9)
0x179: Stack[-5] = Stack[-10] * Stack[-1]; Pop(1);
0x17a: Stack[-3] = (int) 5000
0x17b: Stack[-2] = (bool) 1
0x17c: Stack[-1] = (bool) 1
0x17d: Call2 0x1d1

0x17e: Stack[-7] = Stack[-6]
0x17f: Pop(6)
0x180: PushEmpty()
0x181: Call2 0x18f

0x182: Pop(0)
0x183: Stack[-5] = Stack[-1]
0x184: Return(); Pop(2)

0x185: PushEmpty(float, float)
0x186: Push((int) 10)
0x187: @ rand(Stack[-2], Stack[-1])
0x188: Pop(1)
0x189: Push((int) 111)
0x18a: Push((int) 10)
0x18b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x18c: @ SetTimer(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: Return(); Pop(2)

0x18f: Push((int) 111)
0x190: @ KillTimer(Stack[-1])
0x191: Pop(1)
0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: PushEmpty(bool, object, string)
0x195: Stack[-2] = Stack[-5]
0x196: Stack[-1] = Stack[-4]
0x197: Call2 0x4dc

0x198: Pop(2)
0x199: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19a: PushEmpty()
0x19b: Call2 0x1a3

0x19c: Pop(0)
0x19d: PushEmpty(object, string)
0x19e: Stack[-2] = Stack[-4]
0x19f: Stack[-1] = Stack[-3]
0x1a0: Call2 0x4f7

0x1a1: Pop(2)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: Call2 0x18f

0x1a5: Pop(0)
0x1a6: PushEmpty()
0x1a7: Call2 0x24d

0x1a8: Pop(0)
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: PushEmpty()
0x1ac: Call2 0x1a3

0x1ad: Pop(0)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-2]
0x1b0: Call2 0x516

0x1b1: Pop(1)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: Push((int) 111)
0x1b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b7: Push("run")
0x1b8: @ Speak(Stack[-1])
0x1b9: Pop(1)
0x1ba: PushEmpty()
0x1bb: Call2 0x185

0x1bc: Pop(0)
0x1bd: GOTO 0x1c2

0x1be: PushEmpty(int)
0x1bf: Stack[-1] = Stack[-2]
0x1c0: Call2 0x237

0x1c1: Pop(1)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Push("player_shot")
0x1c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c7: PushEmpty()
0x1c8: Call2 0x1a3

0x1c9: Pop(0)
0x1ca: PushEmpty(object)
0x1cb: Stack[-1] = Stack[-3]
0x1cc: Push(-1, 4); TaskCall(5)
0x1cd: Call2 0x25f

0x1ce: Pop(-1, 4); TaskReturn
0x1cf: Pop(1)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x1d2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d3: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1d4: Stack[-7] = Stack[-17]
0x1d5: PushEmpty(bool, object)
0x1d6: Stack[-1] = Stack[-23]
0x1d7: Call2 0x254

0x1d8: Pop(1)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: Stack[-22] = (bool) 0
0x1dc: Return(); Pop(16)

0x1dd: @@ GetPosition(Stack[-5])
0x1de: Pop(0)
0x1df: @ GetPosition(Stack[-4])
0x1e0: Pop(0)
0x1e1: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1e2: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1e3: PushEmpty(bool)
0x1e4: Stack[-1] = (bool) 0
0x1e5: Push((int) 0)
0x1e6: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1e9: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = (bool) 1
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: @ Stop()
0x1ee: Pop(0)
0x1ef: Stack[-22] = (bool) 0
0x1f0: Return(); Pop(16)

0x1f1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1f2: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x1f4: @@ GetPFPosition(Stack[-5])
0x1f5: Pop(0)
0x1f6: @ FindPathTo(Stack[-1], Stack[-5])
0x1f7: Pop(0)
0x1f8: Pop(0); Push(( Stack[-1] != 0 )
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: Stack[-6] = Stack[-1]
0x1fb: Stack[-1] = 0
0x1fc: Pop(0); Push(( Stack[-6] != 0 )
0x1fd: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x1fe: Push(Stack[-7])
0x1ff: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x200: Stack[-7] = (bool) 0
0x201: @ RotatePath(Stack[-6], Stack[-8])
0x202: Pop(0)
0x203: Pop(0); Push((bool) Stack[-8] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x235

0x206: Push((int) 0)
0x207: Push((float)0.3)
0x208: @ SetTimer(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: PushEmpty(string)
0x20b: Call2 0x25b

0x20c: Pop(0)
0x20d: PushEmpty(string)
0x20e: Call2 0x25d

0x20f: Pop(0)
0x210: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: Pop(0); Push((bool) Stack[-8] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x214: Push( Stack[0 + Tasks[-1].StackPointer] )
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: Stack[-6] = 0
0x217: GOTO 0x235

0x218: GOTO 0x21a

0x219: GOTO 0x234

0x21a: GOTO 0x21c

0x21b: Stack[-6] = 0
0x21c: GOTO 0x22d

0x21d: Push((int) 0)
0x21e: @ KillTimer(Stack[-1])
0x21f: Pop(1)
0x220: Push((float)0.5)
0x221: @ Sleep(Stack[-1], Stack[-9])
0x222: Pop(1)
0x223: Pop(0); Push((bool) Stack[-8] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x225: Push( Stack[0 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: Stack[-6] = 0
0x228: GOTO 0x235

0x229: Push((int) 0)
0x22a: Push((float)0.3)
0x22b: @ SetTimer(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: Stack[-1] = 0
0x22e: GOTO 0x233

0x22f: Push((int) 0)
0x230: @ KillTimer(Stack[-1])
0x231: Pop(1)
0x232: GOTO 0x235

0x233: Stack[-6] = 0
0x234: GOTO 0x1d5

0x235: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x236: Return(); Pop(16)

0x237: PushEmpty()
0x238: Push((int) 0)
0x239: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Return(); Pop(0)

0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call2 0x254

0x23f: Pop(1)
0x240: Pop(1); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x243: Push((int) 0)
0x244: @ KillTimer(Stack[-1])
0x245: Pop(1)
0x246: @ Stop()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: @ RequestClearPath(Stack[-1])
0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x24e: Push((int) 0)
0x24f: @ KillTimer(Stack[-1])
0x250: Pop(1)
0x251: @ Stop()
0x252: Pop(0)
0x253: Return(); Pop(0)

0x254: PushEmpty()
0x255: PushEmpty(bool, object)
0x256: Stack[-1] = Stack[-3]
0x257: Call2 0x408

0x258: Stack[-4] = Stack[-2]
0x259: Pop(2)
0x25a: Return(); Pop(0)

0x25b: Stack[-1] = "walk"
0x25c: Return(); Pop(0)

0x25d: Stack[-1] = "run"
0x25e: Return(); Pop(0)

0x25f: PushEmpty()
0x260: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x261: Push("retreat")
0x262: @ Speak(Stack[-1])
0x263: Pop(1)
0x264: Push((int) 110)
0x265: Push((int) 1)
0x266: @ SetTimer(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: PushEmpty(object)
0x269: Stack[-1] = Stack[-2]
0x26a: Call2 0x2d7

0x26b: Pop(1)
0x26c: Push((int) 110)
0x26d: @ KillTimer(Stack[-1])
0x26e: Pop(1)
0x26f: Return(); Pop(0)

0x270: PushEmpty(cvector, cvector, cvector, cvector)
0x271: Push((int) 110)
0x272: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x276: Call2 0x408

0x277: Pop(1)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27a: PushEmpty()
0x27b: Call2 0x2a3

0x27c: Pop(0)
0x27d: GOTO 0x28d

0x27e: @ GetPosition(Stack[-2])
0x27f: Pop(0)
0x280: @@ GetPosition(Stack[-1])
0x281: Pop(0)
0x282: PushEmpty(float, cvector, cvector)
0x283: Stack[-2] = Stack[-5]
0x284: Stack[-1] = Stack[-4]
0x285: Call2 0x459

0x286: Pop(2)
0x287: Push((float)2250000.0)
0x288: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28a: PushEmpty()
0x28b: Call2 0x2a3

0x28c: Pop(0)
0x28d: GOTO 0x292

0x28e: PushEmpty(int)
0x28f: Stack[-1] = Stack[-6]
0x290: Call2 0x320

0x291: Pop(1)
0x292: Return(); Pop(4)

0x293: PushEmpty()
0x294: PushEmpty(bool, object, string)
0x295: Stack[-2] = Stack[-5]
0x296: Stack[-1] = Stack[-4]
0x297: Call2 0x4dc

0x298: Pop(2)
0x299: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29a: PushEmpty()
0x29b: Call2 0x2a3

0x29c: Pop(0)
0x29d: PushEmpty(object, string)
0x29e: Stack[-2] = Stack[-4]
0x29f: Stack[-1] = Stack[-3]
0x2a0: Call2 0x4f7

0x2a1: Pop(2)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 110)
0x2a4: @ KillTimer(Stack[-1])
0x2a5: Pop(1)
0x2a6: PushEmpty()
0x2a7: Call2 0x354

0x2a8: Pop(0)
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty()
0x2ab: PushEmpty()
0x2ac: Call2 0x2a3

0x2ad: Pop(0)
0x2ae: PushEmpty(object)
0x2af: Stack[-1] = Stack[-2]
0x2b0: Call2 0x516

0x2b1: Pop(1)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: PushEmpty(object)
0x2b5: Stack[-1] = Stack[-2]
0x2b6: Call2 0x529

0x2b7: Pop(1)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2ba: @ GetPosition(Stack[-6])
0x2bb: Pop(0)
0x2bc: @@ GetPosition(Stack[-5])
0x2bd: Pop(0)
0x2be: @ GetDirection(Stack[-4])
0x2bf: Pop(0)
0x2c0: PushEmpty(cvector, cvector)
0x2c1: PushEmpty(cvector, cvector)
0x2c2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2c3: Call2 0x44f

0x2c4: Pop(1)
0x2c5: Push((float)0.75)
0x2c6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2c7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2c8: Call2 0x44f

0x2c9: Stack[-5] = Stack[-2]
0x2ca: Pop(2)
0x2cb: Push((int) 32)
0x2cc: Push((float)7000.0)
0x2cd: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2ce: Pop(2)
0x2cf: Push((int) 100)
0x2d0: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2d1: Push((int) 0)
0x2d2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Stack[-1] = (int) 0
0x2d5: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2d6: Return(); Pop(12)

0x2d7: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2d8: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2d9: PushEmpty(cvector, float)
0x2da: Stack[-1] = (float) 1.74533
0x2db: Call2 0x2b9

0x2dc: Stack[-7] = Stack[-2]
0x2dd: Pop(2)
0x2de: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2df: Push((float)2500.0)
0x2e0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e2: PushEmpty(cvector, float)
0x2e3: Stack[-1] = (float) 2.61799
0x2e4: Call2 0x2b9

0x2e5: Stack[-7] = Stack[-2]
0x2e6: Pop(2)
0x2e7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2e8: Push((float)2500.0)
0x2e9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2eb: Push("Can't retreat, distance: ")
0x2ec: Pop(0); Push(Sqrt(Stack[-5]))
0x2ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ee: @ Trace(Stack[-1])
0x2ef: Pop(1)
0x2f0: Push((float)0.5)
0x2f1: @ Sleep(Stack[-1])
0x2f2: Pop(1)
0x2f3: Return(); Pop(10)

0x2f4: Push(CvectorIndex(Stack[-5], 0))
0x2f5: Push(CvectorIndex(Stack[-6], 2))
0x2f6: @ Rotate(Stack[-2], Stack[-1])
0x2f7: Pop(2)
0x2f8: PushEmpty(cvector)
0x2f9: Call2 0x379

0x2fa: Pop(0)
0x2fb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x2fc: Push((int) 120)
0x2fd: Push((float)0.5)
0x2fe: @ SetTimer(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x301: Push((int) 1)
0x302: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x303: Pop(1)
0x304: Push(Stack[-3])
0x305: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x306: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: GOTO 0x31f

0x309: GOTO 0x31d

0x30a: PushEmpty(cvector, float)
0x30b: Stack[-1] = (float) 2.61799
0x30c: Call2 0x2b9

0x30d: Stack[-4] = Stack[-2]
0x30e: Pop(2)
0x30f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x310: Push((float)2500.0)
0x311: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x313: PushEmpty(cvector)
0x314: Call2 0x379

0x315: Pop(0)
0x316: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x317: Push((int) 120)
0x318: Push((float)0.5)
0x319: @ SetTimer(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: GOTO 0x31d

0x31c: GOTO 0x31f

0x31d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x31f: Return(); Pop(10)

0x320: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x321: Push((int) 120)
0x322: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Return(); Pop(8)

0x325: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x327: @ Stop()
0x328: Pop(0)
0x329: Push((int) 1)
0x32a: @ KillTimer(Stack[-1])
0x32b: Pop(1)
0x32c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x32d: GOTO 0x353

0x32e: @ GetDirection(Stack[-4])
0x32f: Pop(0)
0x330: Push((float)7000.0)
0x331: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x332: Pop(1)
0x333: PushEmpty(cvector, float)
0x334: Stack[-1] = (float) 1.74533
0x335: Call2 0x2b9

0x336: Stack[-4] = Stack[-2]
0x337: Pop(2)
0x338: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x339: PushEmpty(bool)
0x33a: Stack[-1] = (bool) 0
0x33b: Push((float)2500.0)
0x33c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x33e: PushEmpty(bool)
0x33f: Stack[-1] = (bool) 1
0x340: Pop(0); Push(Stack[-5] * Stack[-5]);
0x341: Push((float)2.25)
0x342: Pop(2); Push(Stack[-2] * Stack[-1]);
0x343: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x345: PushEmpty(bool)
0x346: Call2 0x35b

0x347: Pop(0)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Stack[-1] = (bool) 0
0x34a: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34b: Stack[-1] = (bool) 1
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: @ Stop()
0x34e: Pop(0)
0x34f: PushEmpty(cvector)
0x350: Call2 0x379

0x351: Pop(0)
0x352: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x353: Return(); Pop(8)

0x354: @ Stop()
0x355: Pop(0)
0x356: Push((int) 120)
0x357: @ KillTimer(Stack[-1])
0x358: Pop(1)
0x359: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x35a: Return(); Pop(0)

0x35b: PushEmpty(cvector, cvector, cvector, cvector)
0x35c: @ GetDirection(Stack[-2])
0x35d: Pop(0)
0x35e: PushEmpty(cvector, object)
0x35f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x360: Call2 0x37e

0x361: Stack[-3] = Stack[-2]
0x362: Pop(2)
0x363: PushEmpty(float, cvector, cvector)
0x364: Stack[-2] = Stack[-5]
0x365: Stack[-1] = Stack[-4]
0x366: Call2 0x46f

0x367: Pop(2)
0x368: Push((float)-0.34202)
0x369: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x36a: Return(); Pop(4)

0x36b: PushEmpty()
0x36c: Push((int) 2)
0x36d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36f: Stack[-2] = "fire"
0x370: Return(); Pop(0)

0x371: GOTO 0x377

0x372: Push((int) 1)
0x373: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Stack[-2] = "bullet"
0x376: Return(); Pop(0)

0x377: Stack[-2] = "phys"
0x378: Return(); Pop(0)

0x379: PushEmpty(cvector, cvector)
0x37a: @ GetPosition(Stack[-1])
0x37b: Pop(0)
0x37c: Stack[-3] = Stack[-1]
0x37d: Return(); Pop(2)

0x37e: PushEmpty(cvector, cvector, cvector, cvector)
0x37f: @ GetPosition(Stack[-2])
0x380: Pop(0)
0x381: @@ GetPosition(Stack[-1])
0x382: Pop(0)
0x383: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x384: Return(); Pop(4)

0x385: PushEmpty(bool, bool)
0x386: @ IsPlayerActor(Stack[-3], Stack[-1])
0x387: Pop(0)
0x388: Stack[-4] = Stack[-1]
0x389: Return(); Pop(2)

0x38a: PushEmpty(bool, bool)
0x38b: Push("HasProperty")
0x38c: Push((int) 2)
0x38d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x38e: Pop(1); Push((bool) Stack[-1] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: Stack[-5] = (bool) 0
0x391: Return(); Pop(2)

0x392: @@ HasProperty(Stack[-3], Stack[-1])
0x393: Pop(0)
0x394: Stack[-5] = Stack[-1]
0x395: Return(); Pop(2)

0x396: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x397: PushEmpty(bool, object, string)
0x398: Stack[-2] = Stack[-18]
0x399: Stack[-1] = "health"
0x39a: Call2 0x38a

0x39b: Pop(2)
0x39c: Pop(1); Push((bool) Stack[-1] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-16] = (float) 0.0
0x39f: Return(); Pop(12)

0x3a0: PushEmpty(bool, object, string)
0x3a1: Stack[-2] = Stack[-18]
0x3a2: Stack[-1] = "armor"
0x3a3: Call2 0x38a

0x3a4: Pop(2)
0x3a5: Pop(1); Push((bool) Stack[-1] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: Stack[-6] = (int) 0
0x3a8: GOTO 0x3ac

0x3a9: Push("armor")
0x3aa: @@ GetProperty(Stack[-1], Stack[-7])
0x3ab: Pop(1)
0x3ac: Push("armor_")
0x3ad: PushEmpty(string, int)
0x3ae: Stack[-1] = Stack[-16]
0x3af: Call2 0x36b

0x3b0: Pop(1)
0x3b1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3b2: PushEmpty(bool, object, string)
0x3b3: Stack[-2] = Stack[-18]
0x3b4: Stack[-1] = Stack[-8]
0x3b5: Call2 0x38a

0x3b6: Pop(2)
0x3b7: Pop(1); Push((bool) Stack[-1] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-4] = (int) 0
0x3ba: GOTO 0x3bd

0x3bb: @@ GetProperty(Stack[-5], Stack[-4])
0x3bc: Pop(0)
0x3bd: PushEmpty(float, float, float)
0x3be: Pop(0); Push(Stack[-9] + Stack[-7]);
0x3bf: Push((float)100.0)
0x3c0: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x3c1: Stack[-1] = (int) 1
0x3c2: Call2 0x45d

0x3c3: Stack[-6] = Stack[-3]
0x3c4: Pop(3)
0x3c5: Push("health")
0x3c6: @@ GetProperty(Stack[-1], Stack[-3])
0x3c7: Pop(1)
0x3c8: Push((int) 1)
0x3c9: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3ca: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3cb: Push("health")
0x3cc: PushEmpty(float, float, float, float)
0x3cd: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3ce: Stack[-2] = (int) 0
0x3cf: Stack[-1] = (int) 1
0x3d0: Call2 0x464

0x3d1: Pop(3)
0x3d2: @@ SetProperty(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[-17]
0x3d6: Call2 0x385

0x3d7: Pop(1)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d9: PushEmpty(float)
0x3da: Stack[-1] = -Stack[-2]; Pop(0);
0x3db: Call2 0x496

0x3dc: Pop(1)
0x3dd: Stack[-16] = Stack[-1]
0x3de: Return(); Pop(12)

0x3df: PushEmpty(bool, bool)
0x3e0: @@ IsDead(Stack[-1])
0x3e1: Pop(0)
0x3e2: Stack[-4] = Stack[-1]
0x3e3: Return(); Pop(2)

0x3e4: PushEmpty(object, object, object, object)
0x3e5: Pop(0); Push((bool) Stack[-5] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-6] = (bool) 0
0x3e8: Return(); Pop(4)

0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: Push("IsDead")
0x3ec: Push((int) 1)
0x3ed: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3ef: PushEmpty(bool, object)
0x3f0: Stack[-1] = Stack[-8]
0x3f1: Call2 0x3df

0x3f2: Pop(1)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: Stack[-1] = (bool) 1
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-6] = (bool) 0
0x3f7: Return(); Pop(4)

0x3f8: @ GetScene(Stack[-2])
0x3f9: Pop(0)
0x3fa: Pop(0); Push((bool) Stack[-2] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fc: Stack[-6] = (bool) 0
0x3fd: Return(); Pop(4)

0x3fe: @@ GetScene(Stack[-1])
0x3ff: Pop(0)
0x400: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-6] = (bool) 0
0x403: Return(); Pop(4)

0x404: Stack[-6] = (bool) 1
0x405: Return(); Pop(4)

0x406: Stack[-1] = 0
0x407: Stack[-2] = 0
0x408: PushEmpty(int, int)
0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[-5]
0x40b: Call2 0x3e4

0x40c: Pop(1)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-4] = (bool) 0
0x410: Return(); Pop(2)

0x411: PushEmpty(bool, object, string)
0x412: Stack[-2] = Stack[-6]
0x413: Stack[-1] = "noaccess"
0x414: Call2 0x38a

0x415: Pop(2)
0x416: Pop(1); Push((bool) Stack[-1] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-4] = (bool) 1
0x419: Return(); Pop(2)

0x41a: Push("noaccess")
0x41b: @@ GetProperty(Stack[-1], Stack[-2])
0x41c: Pop(1)
0x41d: Push((int) 0)
0x41e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x41f: Return(); Pop(2)

0x420: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x421: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x422: Pop(0)
0x423: Pop(0); Push((bool) Stack[-8] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x425: Stack[-7] = (int) 0
0x426: Push((int) 1)
0x427: Pop(1); Push(Stack[-8] + Stack[-1]);
0x428: Pop(1); Push(Stack[-18] + Stack[-1]);
0x429: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x42a: Pop(1)
0x42b: Pop(0); Push((bool) Stack[-6] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: GOTO 0x431

0x42e: Push((int) 1)
0x42f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x430: GOTO 0x426

0x431: Pop(0); Push((bool) Stack[-7] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: Return(); Pop(16)

0x434: @ irand(Stack[-5], Stack[-7])
0x435: Pop(0)
0x436: Push((int) 1)
0x437: Pop(1); Push(Stack[-6] + Stack[-1]);
0x438: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x439: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x43a: Pop(0)
0x43b: Push(Stack[-4])
0x43c: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x43d: @ GetEyesHeight(Stack[-3])
0x43e: Pop(0)
0x43f: @ GetDirection(Stack[-2])
0x440: Pop(0)
0x441: Push((int) 50)
0x442: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x443: Push(CvectorIndex(Stack[-1], 1))
0x444: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x445: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x446: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x447: Pop(0)
0x448: Return(); Pop(16)

0x449: PushEmpty(object, object)
0x44a: @ self(Stack[-1])
0x44b: Pop(0)
0x44c: Stack[-3] = Stack[-1]
0x44d: Return(); Pop(2)

0x44e: Stack[-1] = 0
0x44f: PushEmpty(float, float)
0x450: Pop(0); Push(Stack[-3] | Stack[-3]);
0x451: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x452: Push((float)0.0)
0x453: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x455: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x456: Return(); Pop(2)

0x457: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x458: Return(); Pop(2)

0x459: PushEmpty(cvector, cvector)
0x45a: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x45b: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x45c: Return(); Pop(2)

0x45d: PushEmpty()
0x45e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-3] = Stack[-2]
0x461: GOTO 0x463

0x462: Stack[-3] = Stack[-1]
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-4] = Stack[-2]
0x468: Return(); Pop(0)

0x469: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-4] = Stack[-1]
0x46c: Return(); Pop(0)

0x46d: Stack[-4] = Stack[-3]
0x46e: Return(); Pop(0)

0x46f: PushEmpty()
0x470: Pop(0); Push(Stack[-2] | Stack[-1]);
0x471: Pop(0); Push(Stack[-3] | Stack[-3]);
0x472: Pop(0); Push(Stack[-3] | Stack[-3]);
0x473: Pop(2); Push(Stack[-2] * Stack[-1]);
0x474: Pop(1); Push(Sqrt(Stack[-1]))
0x475: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x476: Return(); Pop(0)

0x477: PushEmpty(object, object)
0x478: @ CreateIntVector(Stack[-1])
0x479: Pop(0)
0x47a: @@ add(Stack[-4])
0x47b: Pop(0)
0x47c: @@ add(Stack[-3])
0x47d: Pop(0)
0x47e: Push((int) 3)
0x47f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: Return(); Pop(2)

0x482: Stack[-1] = 0
0x483: PushEmpty(int, int, bool, int, int, bool)
0x484: @@ GetItemID(Stack[-3])
0x485: Pop(0)
0x486: Push("Category")
0x487: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x488: Pop(1)
0x489: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48d: @@ DropItems(Stack[-8], Stack[-7])
0x48e: Pop(0)
0x48f: GOTO 0x495

0x490: PushEmpty(int, int)
0x491: Stack[-2] = Stack[-5]
0x492: Stack[-1] = Stack[-9]
0x493: Call2 0x477

0x494: Pop(2)
0x495: Return(); Pop(6)

0x496: PushEmpty(object, object)
0x497: @ CreateFloatVector(Stack[-1])
0x498: Pop(0)
0x499: @@ add(Stack[-3])
0x49a: Pop(0)
0x49b: Push((int) 15)
0x49c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x49d: Pop(1)
0x49e: Return(); Pop(2)

0x49f: Stack[-1] = 0
0x4a0: PushEmpty(object, object)
0x4a1: @ GetScene(Stack[-1])
0x4a2: Pop(0)
0x4a3: Push("battle")
0x4a4: PushEmpty(object)
0x4a5: Call2 0x449

0x4a6: Pop(0)
0x4a7: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x4a8: Pop(2)
0x4a9: Return(); Pop(2)

0x4aa: Stack[-1] = 0
0x4ab: PushEmpty()
0x4ac: PushEmpty(bool, object)
0x4ad: Stack[-1] = Stack[-3]
0x4ae: Call2 0x408

0x4af: Pop(1)
0x4b0: Pop(1); Push((bool) Stack[-1] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-2] = (bool) 0
0x4b3: Return(); Pop(0)

0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[-3]
0x4b6: Call2 0x385

0x4b7: Stack[-4] = Stack[-2]
0x4b8: Pop(2)
0x4b9: Return(); Pop(0)

0x4ba: PushEmpty()
0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-1] = Stack[-3]
0x4bd: Call2 0x4ab

0x4be: Stack[-4] = Stack[-2]
0x4bf: Pop(2)
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty(object)
0x4c3: Stack[-1] = Stack[-2]
0x4c4: Push(-1, 1); TaskCall(3)
0x4c5: Call2 0xe4

0x4c6: Pop(-1, 1); TaskReturn
0x4c7: Pop(1)
0x4c8: @ ResetAAS()
0x4c9: Pop(0)
0x4ca: Return(); Pop(0)

0x4cb: PushEmpty()
0x4cc: PushEmpty(object)
0x4cd: Stack[-1] = Stack[-2]
0x4ce: Push(-1, 1); TaskCall(3)
0x4cf: Call2 0xe4

0x4d0: Pop(-1, 1); TaskReturn
0x4d1: Pop(1)
0x4d2: @ ResetAAS()
0x4d3: Pop(0)
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: PushEmpty()
0x4d7: Push(-0, 0); TaskCall(2)
0x4d8: Call2 0xb3

0x4d9: Pop(-0, 0); TaskReturn
0x4da: Pop(0)
0x4db: Return(); Pop(0)

0x4dc: PushEmpty(float, bool, float, bool)
0x4dd: Push("health")
0x4de: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e0: Push("health")
0x4e1: @ GetProperty(Stack[-1], Stack[-3])
0x4e2: Pop(1)
0x4e3: Push(GlobalVars[0])
0x4e4: Stack[-2] = Stack[-3] < Stack[-1]; Pop(1);
0x4e5: Push(GlobalVars[0])
0x4e6: Stack[-1] = Stack[-3]
0x4e7: GlobalVars[0] = Stack[-1]; Pop(1)
0x4e8: PushEmpty(bool)
0x4e9: Stack[-1] = (bool) 0
0x4ea: Push(Stack[-2])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[-9]
0x4ee: Call2 0x408

0x4ef: Pop(1)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f1: Stack[-1] = (bool) 1
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f3: Stack[-7] = (bool) 1
0x4f4: Return(); Pop(4)

0x4f5: Stack[-7] = (bool) 0
0x4f6: Return(); Pop(4)

0x4f7: PushEmpty(float, float)
0x4f8: Push("health")
0x4f9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x4fb: Push("health")
0x4fc: @ GetProperty(Stack[-1], Stack[-2])
0x4fd: Pop(1)
0x4fe: Push((int) 0)
0x4ff: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: @ SignalDeath(Stack[-4])
0x502: Pop(0)
0x503: PushEmpty(bool)
0x504: Stack[-1] = (bool) 0
0x505: Push(GlobalVars[0])
0x506: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x508: PushEmpty(bool, object)
0x509: Stack[-1] = Stack[-7]
0x50a: Call2 0x408

0x50b: Pop(1)
0x50c: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50d: Stack[-1] = (bool) 1
0x50e: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x50f: PushEmpty(object)
0x510: Stack[-1] = Stack[-5]
0x511: Push(-1, 4); TaskCall(5)
0x512: Call2 0x25f

0x513: Pop(-1, 4); TaskReturn
0x514: Pop(1)
0x515: Return(); Pop(2)

0x516: PushEmpty()
0x517: PushEmpty(object)
0x518: Stack[-1] = Stack[-2]
0x519: Call2 0x4d5

0x51a: Pop(1)
0x51b: Return(); Pop(0)

0x51c: PushEmpty(float, float)
0x51d: PushEmpty(float, object, float, int)
0x51e: Stack[-3] = Stack[-7]
0x51f: Stack[-2] = (float) 0.025
0x520: Stack[-1] = (int) 0
0x521: Call2 0x396

0x522: Stack[-5] = Stack[-4]
0x523: Pop(4)
0x524: Push((int) 7)
0x525: Push((float)0.025)
0x526: @ ReportHit(Stack[-5], Stack[-2], Stack[-3], Stack[-1])
0x527: Pop(2)
0x528: Return(); Pop(2)

0x529: PushEmpty(object, float, object, float)
0x52a: @ CreateInvItem(Stack[-2])
0x52b: Pop(0)
0x52c: Push("rat")
0x52d: @@ SetItemName(Stack[-1])
0x52e: Pop(1)
0x52f: Push((float)0.25)
0x530: Push((float)0.5)
0x531: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x532: Pop(2)
0x533: Push("quality")
0x534: @@ SetProperty(Stack[-1], Stack[-2])
0x535: Pop(1)
0x536: PushEmpty(object, object, int)
0x537: Stack[-3] = Stack[-8]
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = (int) 1
0x53a: Call2 0x483

0x53b: Pop(3)
0x53c: PushEmpty(object)
0x53d: Call2 0x449

0x53e: Pop(0)
0x53f: @ RemoveActor(Stack[-1])
0x540: Pop(1)
0x541: Return(); Pop(4)

0x542: Stack[-2] = 0
