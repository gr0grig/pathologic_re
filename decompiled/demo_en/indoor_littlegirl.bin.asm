GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	all
	head
	attack_on
	attack_stay
	attack_off
	GetPosition
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetEyesHeight
	unholster
	player_shot
	battle
	IsWeaponHolstered
	idle
	class
	rat
	rat_big
	dog
	branch
	player
	reputation
	rifle_ammo
	revolver_ammo
	samopal_ammo
	lockpick
	alpha_pills
	meradorm
	powder
	beta_pills
	gamma_pills

Import:
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
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
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	StopAnimation (0 args)
	GetDirection (1 args)
	StopAsync (0 args)
	UnlookAsync (1 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	LookAsync (3 args)
	AddItem (3 args)
	AddItem (4 args)
	self (1 args)
	GetGameTime (1 args)
	ReportReputationChange (3 args)
	HasAnimation (3 args)
	CanSee (2 args)
	GetVariable (2 args)
	FindActor (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	ClearSubContainer (1 args)
	IsOverrideActive (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x18 Vars = (object)
		EVENT_17 Op = 0x2c Vars = (object)
		EVENT_30 Op = 0x44 Vars = (object, object, bool)
		EVENT_40 Op = 0x60 Vars = (object)
		EVENT_42 Op = 0x74 Vars = (object, string)
		EVENT_1 Op = 0x99 Vars = (object)
		EVENT_3 Op = 0xac Vars = (object)
		EVENT_7 Op = 0xb2 Vars = (int)
		EVENT_6 Op = 0xbe Vars = ()
		EVENT_41 Op = 0xd5 Vars = (object)
		EVENT_10 Op = 0x146 Vars = (object)
		EVENT_28 Op = 0x14a Vars = ()
	GTASK_1  Params = 0
		EVENT_0 Op = 0x163 Vars = (object)
		EVENT_17 Op = 0x177 Vars = (object)
		EVENT_30 Op = 0x18f Vars = (object, object, bool)
		EVENT_40 Op = 0x1ab Vars = (object)
		EVENT_42 Op = 0x1bf Vars = (object, string)
		EVENT_6 Op = 0x1e4 Vars = ()
		EVENT_1 Op = 0x1eb Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_0 Op = 0x287 Vars = (object)
		EVENT_17 Op = 0x29b Vars = (object)
		EVENT_30 Op = 0x2b3 Vars = (object, object, bool)
		EVENT_40 Op = 0x2cf Vars = (object)
		EVENT_42 Op = 0x2e3 Vars = (object, string)
		EVENT_41 Op = 0x313 Vars = (object)
		EVENT_7 Op = 0x31c Vars = (int)
		EVENT_6 Op = 0x33f Vars = ()
		EVENT_1 Op = 0x346 Vars = (object)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x370 Vars = ()
		EVENT_7 Op = 0x3de Vars = (int)
		EVENT_41 Op = 0x419 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x499 Vars = (int)
		EVENT_41 Op = 0x4d4 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x4ed Vars = ()
		EVENT_7 Op = 0x55b Vars = (int)
		EVENT_41 Op = 0x596 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x5af Vars = ()
		EVENT_7 Op = 0x61d Vars = (int)
		EVENT_41 Op = 0x658 Vars = (object)

Events:
EVENT_16 Op = 0x756 Vars = (object, string)
EVENT_41 Op = 0x758 Vars = (object)
EVENT_22 Op = 0x75a Vars = (object, int, float, float)
EVENT_43 Op = 0x75c Vars = (object, int, float, float, cvector, cvector)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x902

0x5: Pop(0)
0x6: PushEmpty()
0x7: Call2 0xf

0x8: Pop(0)
0x9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa: PushEmpty()
0xb: Call2 0x106

0xc: Pop(0)
0xd: GOTO 0x9

0xe: Return(); Pop(0)

0xf: PushEmpty(bool)
0x10: Call2 0x6e2

0x11: Pop(0)
0x12: Pop(1); Push((bool) Stack[-1] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x14: PushEmpty()
0x15: Call2 0x863

0x16: Pop(0)
0x17: Return(); Pop(0)

0x18: PushEmpty(int, int)
0x19: PushEmpty(int, object)
0x1a: Stack[-1] = Stack[-5]
0x1b: Call2 0x85a

0x1c: Stack[-3] = Stack[-2]
0x1d: Pop(2)
0x1e: Push((int) 0)
0x1f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x21: Push((int) 1)
0x22: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: PushEmpty()
0x25: Call2 0xc5

0x26: Pop(0)
0x27: PushEmpty(object)
0x28: Stack[-1] = Stack[-4]
0x29: Call2 0x85d

0x2a: Pop(1)
0x2b: Return(); Pop(2)

0x2c: PushEmpty(int, int)
0x2d: PushEmpty(object)
0x2e: Stack[-1] = Stack[-4]
0x2f: Call2 0x7b4

0x30: Pop(1)
0x31: PushEmpty(int, object)
0x32: Stack[-1] = Stack[-5]
0x33: Call2 0x7ea

0x34: Stack[-3] = Stack[-2]
0x35: Pop(2)
0x36: Push((int) 0)
0x37: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x39: Push((int) 1)
0x3a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0xc5

0x3e: Pop(0)
0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-4]
0x41: Call2 0x7f4

0x42: Pop(1)
0x43: Return(); Pop(2)

0x44: PushEmpty(int, int)
0x45: PushEmpty(bool, object, object, bool)
0x46: Stack[-3] = Stack[-9]
0x47: Stack[-2] = Stack[-8]
0x48: Stack[-1] = Stack[-7]
0x49: Call2 0x91e

0x4a: Pop(3)
0x4b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x4c: PushEmpty(int, object, bool)
0x4d: Stack[-2] = Stack[-8]
0x4e: Stack[-1] = Stack[-6]
0x4f: Call2 0x7fc

0x50: Stack[-4] = Stack[-3]
0x51: Pop(3)
0x52: Push((int) 0)
0x53: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x55: Push((int) 1)
0x56: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: PushEmpty()
0x59: Call2 0xc5

0x5a: Pop(0)
0x5b: PushEmpty(object)
0x5c: Stack[-1] = Stack[-6]
0x5d: Call2 0x806

0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: PushEmpty(int, int)
0x61: PushEmpty(int, object)
0x62: Stack[-1] = Stack[-5]
0x63: Call2 0x850

0x64: Stack[-3] = Stack[-2]
0x65: Pop(2)
0x66: Push((int) 0)
0x67: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x69: Push((int) 1)
0x6a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: PushEmpty()
0x6d: Call2 0xc5

0x6e: Pop(0)
0x6f: PushEmpty(object)
0x70: Stack[-1] = Stack[-4]
0x71: Call2 0x853

0x72: Pop(1)
0x73: Return(); Pop(2)

0x74: PushEmpty(int, int)
0x75: PushEmpty(bool, object, string)
0x76: Stack[-2] = Stack[-7]
0x77: Stack[-1] = Stack[-6]
0x78: Call2 0x75e

0x79: Pop(2)
0x7a: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7b: PushEmpty()
0x7c: Call2 0xc5

0x7d: Pop(0)
0x7e: PushEmpty(object, string)
0x7f: Stack[-2] = Stack[-6]
0x80: Stack[-1] = Stack[-5]
0x81: Call2 0x77e

0x82: Pop(2)
0x83: GOTO 0x98

0x84: PushEmpty(int, string, object)
0x85: Stack[-2] = Stack[-6]
0x86: Stack[-1] = Stack[-7]
0x87: Call2 0x855

0x88: Stack[-4] = Stack[-3]
0x89: Pop(3)
0x8a: Push((int) 0)
0x8b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: Push((int) 1)
0x8e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x90: PushEmpty()
0x91: Call2 0xc5

0x92: Pop(0)
0x93: PushEmpty(string, object)
0x94: Stack[-2] = Stack[-5]
0x95: Stack[-1] = Stack[-6]
0x96: Call2 0x858

0x97: Pop(2)
0x98: Return(); Pop(2)

0x99: PushEmpty()
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[-3]
0x9c: Call2 0x797

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0xc5

0xa1: Pop(0)
0xa2: PushEmpty(object)
0xa3: Stack[-1] = Stack[-2]
0xa4: Call2 0x7ae

0xa5: Pop(1)
0xa6: GOTO 0xab

0xa7: PushEmpty(object)
0xa8: Stack[-1] = Stack[-2]
0xa9: Call2 0xde

0xaa: Pop(1)
0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(object)
0xae: Stack[-1] = Stack[-2]
0xaf: Call2 0xde

0xb0: Pop(1)
0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: Push((int) 110)
0xb4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb8: Push((int) 110)
0xb9: @ KillTimer(Stack[-1])
0xba: Pop(1)
0xbb: @ ResetAAS()
0xbc: Pop(0)
0xbd: Return(); Pop(0)

0xbe: PushEmpty()
0xbf: Call2 0xc5

0xc0: Pop(0)
0xc1: PushEmpty()
0xc2: Call2 0x863

0xc3: Pop(0)
0xc4: Return(); Pop(0)

0xc5: Push((int) 110)
0xc6: @ KillTimer(Stack[-1])
0xc7: Pop(1)
0xc8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc9: PushEmpty()
0xca: Call2 0x14d

0xcb: Pop(0)
0xcc: Return(); Pop(0)

0xcd: Push((int) 110)
0xce: @ KillTimer(Stack[-1])
0xcf: Pop(1)
0xd0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd1: PushEmpty()
0xd2: Call2 0x154

0xd3: Pop(0)
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: PushEmpty()
0xd7: Call2 0xc5

0xd8: Pop(0)
0xd9: PushEmpty(object)
0xda: Stack[-1] = Stack[-2]
0xdb: Call2 0x758

0xdc: Pop(1)
0xdd: Return(); Pop(0)

0xde: PushEmpty(bool, int, bool, int)
0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[-7]
0xe1: Call2 0x6bf

0xe2: Pop(1)
0xe3: Pop(1); Push((bool) Stack[-1] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Return(); Pop(4)

0xe6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Return(); Pop(4)

0xe9: @ IsPlayerActor(Stack[-5], Stack[-2])
0xea: Pop(0)
0xeb: Pop(0); Push((bool) Stack[-2] == 0)
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: Return(); Pop(4)

0xee: PushEmpty(int, object)
0xef: Stack[-1] = Stack[-7]
0xf0: Call2 0x7d9

0xf1: Stack[-3] = Stack[-2]
0xf2: Pop(2)
0xf3: Push((int) 0)
0xf4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: Push((int) 1)
0xf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf9: PushEmpty()
0xfa: Call2 0xcd

0xfb: Pop(0)
0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[-6]
0xfe: Call2 0x7e2

0xff: Pop(1)
0x100: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x101: Push((int) 110)
0x102: Push((float)10.0)
0x103: @ SetTimer(Stack[-2], Stack[-1])
0x104: Pop(2)
0x105: Return(); Pop(4)

0x106: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x107: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x108: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x109: Push((float)0.5)
0x10a: @ rand(Stack[-7], Stack[-1])
0x10b: Pop(1)
0x10c: @ Sleep(Stack[-6])
0x10d: Pop(0)
0x10e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x110: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: @ GetPosition(Stack[-4])
0x113: Pop(0)
0x114: PushEmpty(float)
0x115: Call2 0x141

0x116: Pop(0)
0x117: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x118: Pop(1)
0x119: Push(Stack[-3])
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: GOTO 0x120

0x11c: Push((int) 1)
0x11d: @ Sleep(Stack[-1])
0x11e: Pop(1)
0x11f: GOTO 0x112

0x120: GOTO 0x122

0x121: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x122: PushEmpty(object, cvector)
0x123: Stack[-1] = Stack[-7]
0x124: Call2 0x15d

0x125: Stack[-4] = Stack[-2]
0x126: Pop(2)
0x127: Pop(0); Push(( Stack[-2] != 0 )
0x128: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x129: @ RotatePath(Stack[-2], Stack[-1])
0x12a: Pop(0)
0x12b: Push(Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12d: PushEmpty(bool)
0x12e: Call2 0x15b

0x12f: Pop(0)
0x130: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x131: Pop(1)
0x132: Stack[-2] = 0
0x133: Push(Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: PushEmpty()
0x136: Push(-0, 0); TaskCall(1)
0x137: Call2 0x1f9

0x138: Pop(-0, 0); TaskReturn
0x139: Pop(0)
0x13a: GOTO 0x13e

0x13b: Push((int) 1)
0x13c: @ Sleep(Stack[-1])
0x13d: Pop(1)
0x13e: Stack[-2] = 0
0x13f: GOTO 0x10e

0x140: Return(); Pop(12)

0x141: PushEmpty(float, float)
0x142: @ GetCameraFarDistance(Stack[-1])
0x143: Pop(0)
0x144: Stack[-3] = Stack[-1]
0x145: Return(); Pop(2)

0x146: PushEmpty()
0x147: @ RequestClearPath(Stack[-1])
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: @ Stop()
0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x14e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14f: @ Stop()
0x150: Pop(0)
0x151: @ StopGroup0()
0x152: Pop(0)
0x153: Return(); Pop(0)

0x154: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x155: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x156: @ Stop()
0x157: Pop(0)
0x158: @ StopGroup0()
0x159: Pop(0)
0x15a: Return(); Pop(0)

0x15b: Stack[-1] = (bool) 0
0x15c: Return(); Pop(0)

0x15d: PushEmpty(object, object)
0x15e: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x15f: Pop(0)
0x160: Stack[-4] = Stack[-1]
0x161: Return(); Pop(2)

0x162: Stack[-1] = 0
0x163: PushEmpty(int, int)
0x164: PushEmpty(int, object)
0x165: Stack[-1] = Stack[-5]
0x166: Call2 0x85a

0x167: Stack[-3] = Stack[-2]
0x168: Pop(2)
0x169: Push((int) 0)
0x16a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16c: Push((int) 1)
0x16d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: PushEmpty()
0x170: Call2 0x24a

0x171: Pop(0)
0x172: PushEmpty(object)
0x173: Stack[-1] = Stack[-4]
0x174: Call2 0x85d

0x175: Pop(1)
0x176: Return(); Pop(2)

0x177: PushEmpty(int, int)
0x178: PushEmpty(object)
0x179: Stack[-1] = Stack[-4]
0x17a: Call2 0x7b4

0x17b: Pop(1)
0x17c: PushEmpty(int, object)
0x17d: Stack[-1] = Stack[-5]
0x17e: Call2 0x7ea

0x17f: Stack[-3] = Stack[-2]
0x180: Pop(2)
0x181: Push((int) 0)
0x182: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x184: Push((int) 1)
0x185: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x187: PushEmpty()
0x188: Call2 0x24a

0x189: Pop(0)
0x18a: PushEmpty(object)
0x18b: Stack[-1] = Stack[-4]
0x18c: Call2 0x7f4

0x18d: Pop(1)
0x18e: Return(); Pop(2)

0x18f: PushEmpty(int, int)
0x190: PushEmpty(bool, object, object, bool)
0x191: Stack[-3] = Stack[-9]
0x192: Stack[-2] = Stack[-8]
0x193: Stack[-1] = Stack[-7]
0x194: Call2 0x91e

0x195: Pop(3)
0x196: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x197: PushEmpty(int, object, bool)
0x198: Stack[-2] = Stack[-8]
0x199: Stack[-1] = Stack[-6]
0x19a: Call2 0x7fc

0x19b: Stack[-4] = Stack[-3]
0x19c: Pop(3)
0x19d: Push((int) 0)
0x19e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a0: Push((int) 1)
0x1a1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a3: PushEmpty()
0x1a4: Call2 0x24a

0x1a5: Pop(0)
0x1a6: PushEmpty(object)
0x1a7: Stack[-1] = Stack[-6]
0x1a8: Call2 0x806

0x1a9: Pop(1)
0x1aa: Return(); Pop(2)

0x1ab: PushEmpty(int, int)
0x1ac: PushEmpty(int, object)
0x1ad: Stack[-1] = Stack[-5]
0x1ae: Call2 0x850

0x1af: Stack[-3] = Stack[-2]
0x1b0: Pop(2)
0x1b1: Push((int) 0)
0x1b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b4: Push((int) 1)
0x1b5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: PushEmpty()
0x1b8: Call2 0x24a

0x1b9: Pop(0)
0x1ba: PushEmpty(object)
0x1bb: Stack[-1] = Stack[-4]
0x1bc: Call2 0x853

0x1bd: Pop(1)
0x1be: Return(); Pop(2)

0x1bf: PushEmpty(int, int)
0x1c0: PushEmpty(bool, object, string)
0x1c1: Stack[-2] = Stack[-7]
0x1c2: Stack[-1] = Stack[-6]
0x1c3: Call2 0x75e

0x1c4: Pop(2)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c6: PushEmpty()
0x1c7: Call2 0x24a

0x1c8: Pop(0)
0x1c9: PushEmpty(object, string)
0x1ca: Stack[-2] = Stack[-6]
0x1cb: Stack[-1] = Stack[-5]
0x1cc: Call2 0x77e

0x1cd: Pop(2)
0x1ce: GOTO 0x1e3

0x1cf: PushEmpty(int, string, object)
0x1d0: Stack[-2] = Stack[-6]
0x1d1: Stack[-1] = Stack[-7]
0x1d2: Call2 0x855

0x1d3: Stack[-4] = Stack[-3]
0x1d4: Pop(3)
0x1d5: Push((int) 0)
0x1d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d8: Push((int) 1)
0x1d9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1db: PushEmpty()
0x1dc: Call2 0x24a

0x1dd: Pop(0)
0x1de: PushEmpty(string, object)
0x1df: Stack[-2] = Stack[-5]
0x1e0: Stack[-1] = Stack[-6]
0x1e1: Call2 0x858

0x1e2: Pop(2)
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty()
0x1e5: Call2 0x24a

0x1e6: Pop(0)
0x1e7: PushEmpty()
0x1e8: Call2 0x863

0x1e9: Pop(0)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[-3]
0x1ee: Call2 0x797

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f1: PushEmpty()
0x1f2: Call2 0x24a

0x1f3: Pop(0)
0x1f4: PushEmpty(object)
0x1f5: Stack[-1] = Stack[-2]
0x1f6: Call2 0x7ae

0x1f7: Pop(1)
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1fa: @ WaitForAnimEnd()
0x1fb: Pop(0)
0x1fc: PushEmpty(bool)
0x1fd: Call2 0x6e2

0x1fe: Pop(0)
0x1ff: Pop(1); Push((bool) Stack[-1] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: Return(); Pop(14)

0x202: PushEmpty(int)
0x203: Call2 0x7c8

0x204: Stack[-8] = Stack[-1]
0x205: Pop(1)
0x206: Stack[-6] = (int) 0
0x207: PushEmpty(bool)
0x208: Stack[-1] = (bool) 0
0x209: Push((int) 5)
0x20a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: PushEmpty(bool)
0x20d: Call2 0x6e2

0x20e: Pop(0)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Stack[-1] = (bool) 1
0x211: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x212: Push((int) 3)
0x213: @ irand(Stack[-6], Stack[-1])
0x214: Pop(1)
0x215: Push((int) 0)
0x216: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x218: Push(Stack[-7])
0x219: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x21a: @ irand(Stack[-4], Stack[-7])
0x21b: Pop(0)
0x21c: Push("all")
0x21d: PushEmpty(string, int)
0x21e: Stack[-1] = Stack[-7]
0x21f: Call2 0x7c1

0x220: Pop(1)
0x221: @ PlayAnimation(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: @ WaitForAnimEnd(Stack[-3])
0x224: Pop(0)
0x225: Pop(0); Push((bool) Stack[-3] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x245

0x228: GOTO 0x23a

0x229: Push((int) 1)
0x22a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22c: Push((int) 4)
0x22d: @ rand(Stack[-3], Stack[-1])
0x22e: Pop(1)
0x22f: Push((int) 1)
0x230: Pop(1); Push(Stack[-3] + Stack[-1]);
0x231: @ Sleep(Stack[-1], Stack[-2])
0x232: Pop(1)
0x233: Pop(0); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: GOTO 0x245

0x236: GOTO 0x23a

0x237: Push(Stack[-6])
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x245

0x23a: PushEmpty(bool)
0x23b: Call2 0x248

0x23c: Pop(0)
0x23d: Pop(1); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x245

0x240: @ ResetAAS()
0x241: Pop(0)
0x242: Push((int) 1)
0x243: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x244: GOTO 0x207

0x245: @ ResetAAS()
0x246: Pop(0)
0x247: Return(); Pop(14)

0x248: Stack[-1] = (bool) 1
0x249: Return(); Pop(0)

0x24a: @ StopAnimation()
0x24b: Pop(0)
0x24c: @ StopGroup0()
0x24d: Pop(0)
0x24e: Return(); Pop(0)

0x24f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x250: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x251: PushEmpty()
0x252: Call2 0x282

0x253: Pop(0)
0x254: @ GetDirection(Stack[-3])
0x255: Pop(0)
0x256: PushEmpty(cvector, object)
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call2 0x676

0x259: Stack[-4] = Stack[-2]
0x25a: Pop(2)
0x25b: PushEmpty(float, cvector, cvector)
0x25c: Stack[-2] = Stack[-6]
0x25d: Stack[-1] = Stack[-5]
0x25e: Call2 0x73c

0x25f: Pop(2)
0x260: Push((int) 0)
0x261: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x263: PushEmpty(object)
0x264: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x265: Call2 0x6d7

0x266: Pop(1)
0x267: Stack[-1] = (bool) 1
0x268: GOTO 0x26c

0x269: Push((float)1.5)
0x26a: @ Sleep(Stack[-1], Stack[-2])
0x26b: Pop(1)
0x26c: Push(Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x26e: PushEmpty(object)
0x26f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x270: Call2 0x6d7

0x271: Pop(1)
0x272: Push((int) 111)
0x273: Push((float)0.5)
0x274: @ SetTimer(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: Push((float)5.0)
0x277: @ Sleep(Stack[-1])
0x278: Pop(1)
0x279: Push((int) 111)
0x27a: @ KillTimer(Stack[-1])
0x27b: Pop(1)
0x27c: @ StopAsync()
0x27d: Pop(0)
0x27e: Push("head")
0x27f: @ UnlookAsync(Stack[-1])
0x280: Pop(1)
0x281: Return(); Pop(6)

0x282: PushEmpty(object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x6e7

0x285: Pop(1)
0x286: Return(); Pop(0)

0x287: PushEmpty(int, int)
0x288: PushEmpty(int, object)
0x289: Stack[-1] = Stack[-5]
0x28a: Call2 0x85a

0x28b: Stack[-3] = Stack[-2]
0x28c: Pop(2)
0x28d: Push((int) 0)
0x28e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x290: Push((int) 1)
0x291: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x293: PushEmpty()
0x294: Call2 0x308

0x295: Pop(0)
0x296: PushEmpty(object)
0x297: Stack[-1] = Stack[-4]
0x298: Call2 0x85d

0x299: Pop(1)
0x29a: Return(); Pop(2)

0x29b: PushEmpty(int, int)
0x29c: PushEmpty(object)
0x29d: Stack[-1] = Stack[-4]
0x29e: Call2 0x7b4

0x29f: Pop(1)
0x2a0: PushEmpty(int, object)
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x7ea

0x2a3: Stack[-3] = Stack[-2]
0x2a4: Pop(2)
0x2a5: Push((int) 0)
0x2a6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a8: Push((int) 1)
0x2a9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ab: PushEmpty()
0x2ac: Call2 0x308

0x2ad: Pop(0)
0x2ae: PushEmpty(object)
0x2af: Stack[-1] = Stack[-4]
0x2b0: Call2 0x7f4

0x2b1: Pop(1)
0x2b2: Return(); Pop(2)

0x2b3: PushEmpty(int, int)
0x2b4: PushEmpty(bool, object, object, bool)
0x2b5: Stack[-3] = Stack[-9]
0x2b6: Stack[-2] = Stack[-8]
0x2b7: Stack[-1] = Stack[-7]
0x2b8: Call2 0x91e

0x2b9: Pop(3)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2bb: PushEmpty(int, object, bool)
0x2bc: Stack[-2] = Stack[-8]
0x2bd: Stack[-1] = Stack[-6]
0x2be: Call2 0x7fc

0x2bf: Stack[-4] = Stack[-3]
0x2c0: Pop(3)
0x2c1: Push((int) 0)
0x2c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c4: Push((int) 1)
0x2c5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: PushEmpty()
0x2c8: Call2 0x308

0x2c9: Pop(0)
0x2ca: PushEmpty(object)
0x2cb: Stack[-1] = Stack[-6]
0x2cc: Call2 0x806

0x2cd: Pop(1)
0x2ce: Return(); Pop(2)

0x2cf: PushEmpty(int, int)
0x2d0: PushEmpty(int, object)
0x2d1: Stack[-1] = Stack[-5]
0x2d2: Call2 0x850

0x2d3: Stack[-3] = Stack[-2]
0x2d4: Pop(2)
0x2d5: Push((int) 0)
0x2d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d8: Push((int) 1)
0x2d9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2db: PushEmpty()
0x2dc: Call2 0x308

0x2dd: Pop(0)
0x2de: PushEmpty(object)
0x2df: Stack[-1] = Stack[-4]
0x2e0: Call2 0x853

0x2e1: Pop(1)
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(int, int)
0x2e4: PushEmpty(bool, object, string)
0x2e5: Stack[-2] = Stack[-7]
0x2e6: Stack[-1] = Stack[-6]
0x2e7: Call2 0x75e

0x2e8: Pop(2)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2ea: PushEmpty()
0x2eb: Call2 0x308

0x2ec: Pop(0)
0x2ed: PushEmpty(object, string)
0x2ee: Stack[-2] = Stack[-6]
0x2ef: Stack[-1] = Stack[-5]
0x2f0: Call2 0x77e

0x2f1: Pop(2)
0x2f2: GOTO 0x307

0x2f3: PushEmpty(int, string, object)
0x2f4: Stack[-2] = Stack[-6]
0x2f5: Stack[-1] = Stack[-7]
0x2f6: Call2 0x855

0x2f7: Stack[-4] = Stack[-3]
0x2f8: Pop(3)
0x2f9: Push((int) 0)
0x2fa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2fc: Push((int) 1)
0x2fd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2ff: PushEmpty()
0x300: Call2 0x308

0x301: Pop(0)
0x302: PushEmpty(string, object)
0x303: Stack[-2] = Stack[-5]
0x304: Stack[-1] = Stack[-6]
0x305: Call2 0x858

0x306: Pop(2)
0x307: Return(); Pop(2)

0x308: @ StopGroup0()
0x309: Pop(0)
0x30a: @ StopAsync()
0x30b: Pop(0)
0x30c: Push("head")
0x30d: @ UnlookAsync(Stack[-1])
0x30e: Pop(1)
0x30f: Push((int) 111)
0x310: @ KillTimer(Stack[-1])
0x311: Pop(1)
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: PushEmpty()
0x315: Call2 0x308

0x316: Pop(0)
0x317: PushEmpty(object)
0x318: Stack[-1] = Stack[-2]
0x319: Call2 0x758

0x31a: Pop(1)
0x31b: Return(); Pop(0)

0x31c: PushEmpty(cvector, cvector, cvector, cvector)
0x31d: Push((int) 111)
0x31e: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Return(); Pop(4)

0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x323: Call2 0x6bf

0x324: Pop(1)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x327: PushEmpty()
0x328: Call2 0x308

0x329: Pop(0)
0x32a: Return(); Pop(4)

0x32b: @ GetDirection(Stack[-2])
0x32c: Pop(0)
0x32d: PushEmpty(cvector, object)
0x32e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32f: Call2 0x676

0x330: Stack[-3] = Stack[-2]
0x331: Pop(2)
0x332: PushEmpty(float, cvector, cvector)
0x333: Stack[-2] = Stack[-5]
0x334: Stack[-1] = Stack[-4]
0x335: Call2 0x73c

0x336: Pop(2)
0x337: Push((float)0.5)
0x338: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33a: PushEmpty(object)
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call2 0x6d7

0x33d: Pop(1)
0x33e: Return(); Pop(4)

0x33f: PushEmpty()
0x340: Call2 0x308

0x341: Pop(0)
0x342: PushEmpty()
0x343: Call2 0x863

0x344: Pop(0)
0x345: Return(); Pop(0)

0x346: PushEmpty()
0x347: PushEmpty(bool, object)
0x348: Stack[-1] = Stack[-3]
0x349: Call2 0x797

0x34a: Pop(1)
0x34b: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34c: PushEmpty()
0x34d: Call2 0x308

0x34e: Pop(0)
0x34f: PushEmpty(object)
0x350: Stack[-1] = Stack[-2]
0x351: Call2 0x7ae

0x352: Pop(1)
0x353: Return(); Pop(0)

0x354: PushEmpty()
0x355: @ Face(Stack[-1])
0x356: Pop(0)
0x357: Push("all")
0x358: Push("attack_on")
0x359: @ PlayAnimation(Stack[-2], Stack[-1])
0x35a: Pop(2)
0x35b: @ WaitForAnimEnd()
0x35c: Pop(0)
0x35d: Push("all")
0x35e: Push("attack_stay")
0x35f: @ PlayAnimation(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: @ WaitForAnimEnd()
0x362: Pop(0)
0x363: Push("all")
0x364: Push("attack_off")
0x365: @ PlayAnimation(Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: @ WaitForAnimEnd()
0x368: Pop(0)
0x369: @ StopAsync()
0x36a: Pop(0)
0x36b: PushEmpty(object)
0x36c: Stack[-1] = Stack[-2]
0x36d: Call2 0x395

0x36e: Pop(1)
0x36f: Return(); Pop(0)

0x370: PushEmpty()
0x371: Call2 0x412

0x372: Pop(0)
0x373: PushEmpty()
0x374: Call2 0x863

0x375: Pop(0)
0x376: Return(); Pop(0)

0x377: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x378: @ GetPosition(Stack[-6])
0x379: Pop(0)
0x37a: @@ GetPosition(Stack[-5])
0x37b: Pop(0)
0x37c: @ GetDirection(Stack[-4])
0x37d: Pop(0)
0x37e: PushEmpty(cvector, cvector)
0x37f: PushEmpty(cvector, cvector)
0x380: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x381: Call2 0x712

0x382: Pop(1)
0x383: Push((float)0.75)
0x384: Pop(1); Push(Stack[-8] * Stack[-1]);
0x385: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x386: Call2 0x712

0x387: Stack[-5] = Stack[-2]
0x388: Pop(2)
0x389: Push((int) 32)
0x38a: Push((float)7000.0)
0x38b: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: Push((int) 100)
0x38e: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x38f: Push((int) 0)
0x390: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: Stack[-1] = (int) 0
0x393: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x394: Return(); Pop(12)

0x395: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x396: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x397: PushEmpty(cvector, float)
0x398: Stack[-1] = (float) 1.74533
0x399: Call2 0x377

0x39a: Stack[-7] = Stack[-2]
0x39b: Pop(2)
0x39c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x39d: Push((float)2500.0)
0x39e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a0: PushEmpty(cvector, float)
0x3a1: Stack[-1] = (float) 2.61799
0x3a2: Call2 0x377

0x3a3: Stack[-7] = Stack[-2]
0x3a4: Pop(2)
0x3a5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3a6: Push((float)2500.0)
0x3a7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a9: Push("Can't retreat, distance: ")
0x3aa: Pop(0); Push(Sqrt(Stack[-5]))
0x3ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ac: @ Trace(Stack[-1])
0x3ad: Pop(1)
0x3ae: Push((float)0.5)
0x3af: @ Sleep(Stack[-1])
0x3b0: Pop(1)
0x3b1: Return(); Pop(10)

0x3b2: Push(CvectorIndex(Stack[-5], 0))
0x3b3: Push(CvectorIndex(Stack[-6], 2))
0x3b4: @ Rotate(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: PushEmpty(cvector)
0x3b7: Call2 0x671

0x3b8: Pop(0)
0x3b9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3ba: Push((int) 120)
0x3bb: Push((float)0.5)
0x3bc: @ SetTimer(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3bf: Push((int) 1)
0x3c0: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3c1: Pop(1)
0x3c2: Push(Stack[-3])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3c4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: GOTO 0x3dd

0x3c7: GOTO 0x3db

0x3c8: PushEmpty(cvector, float)
0x3c9: Stack[-1] = (float) 2.61799
0x3ca: Call2 0x377

0x3cb: Stack[-4] = Stack[-2]
0x3cc: Pop(2)
0x3cd: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ce: Push((float)2500.0)
0x3cf: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d1: PushEmpty(cvector)
0x3d2: Call2 0x671

0x3d3: Pop(0)
0x3d4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3d5: Push((int) 120)
0x3d6: Push((float)0.5)
0x3d7: @ SetTimer(Stack[-2], Stack[-1])
0x3d8: Pop(2)
0x3d9: GOTO 0x3db

0x3da: GOTO 0x3dd

0x3db: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3dd: Return(); Pop(10)

0x3de: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3df: Push((int) 120)
0x3e0: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Return(); Pop(8)

0x3e3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e5: @ Stop()
0x3e6: Pop(0)
0x3e7: Push((int) 1)
0x3e8: @ KillTimer(Stack[-1])
0x3e9: Pop(1)
0x3ea: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3eb: GOTO 0x411

0x3ec: @ GetDirection(Stack[-4])
0x3ed: Pop(0)
0x3ee: Push((float)7000.0)
0x3ef: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x3f0: Pop(1)
0x3f1: PushEmpty(cvector, float)
0x3f2: Stack[-1] = (float) 1.74533
0x3f3: Call2 0x377

0x3f4: Stack[-4] = Stack[-2]
0x3f5: Pop(2)
0x3f6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3f7: PushEmpty(bool)
0x3f8: Stack[-1] = (bool) 0
0x3f9: Push((float)2500.0)
0x3fa: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3fc: PushEmpty(bool)
0x3fd: Stack[-1] = (bool) 1
0x3fe: Pop(0); Push(Stack[-5] * Stack[-5]);
0x3ff: Push((float)2.25)
0x400: Pop(2); Push(Stack[-2] * Stack[-1]);
0x401: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x403: PushEmpty(bool)
0x404: Call2 0x422

0x405: Pop(0)
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: Stack[-1] = (bool) 0
0x408: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x409: Stack[-1] = (bool) 1
0x40a: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40b: @ Stop()
0x40c: Pop(0)
0x40d: PushEmpty(cvector)
0x40e: Call2 0x671

0x40f: Pop(0)
0x410: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x411: Return(); Pop(8)

0x412: @ Stop()
0x413: Pop(0)
0x414: Push((int) 120)
0x415: @ KillTimer(Stack[-1])
0x416: Pop(1)
0x417: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: PushEmpty()
0x41b: Call2 0x412

0x41c: Pop(0)
0x41d: PushEmpty(object)
0x41e: Stack[-1] = Stack[-2]
0x41f: Call2 0x758

0x420: Pop(1)
0x421: Return(); Pop(0)

0x422: PushEmpty(cvector, cvector, cvector, cvector)
0x423: @ GetDirection(Stack[-2])
0x424: Pop(0)
0x425: PushEmpty(cvector, object)
0x426: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x427: Call2 0x676

0x428: Stack[-3] = Stack[-2]
0x429: Pop(2)
0x42a: PushEmpty(float, cvector, cvector)
0x42b: Stack[-2] = Stack[-5]
0x42c: Stack[-1] = Stack[-4]
0x42d: Call2 0x721

0x42e: Pop(2)
0x42f: Push((float)-0.34202)
0x430: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x431: Return(); Pop(4)

0x432: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x433: @ GetPosition(Stack[-6])
0x434: Pop(0)
0x435: @@ GetPosition(Stack[-5])
0x436: Pop(0)
0x437: @ GetDirection(Stack[-4])
0x438: Pop(0)
0x439: PushEmpty(cvector, cvector)
0x43a: PushEmpty(cvector, cvector)
0x43b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x43c: Call2 0x712

0x43d: Pop(1)
0x43e: Push((float)0.75)
0x43f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x440: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x441: Call2 0x712

0x442: Stack[-5] = Stack[-2]
0x443: Pop(2)
0x444: Push((int) 32)
0x445: Push((float)7000.0)
0x446: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: Push((int) 100)
0x449: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x44a: Push((int) 0)
0x44b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (int) 0
0x44e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x44f: Return(); Pop(12)

0x450: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x451: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x452: PushEmpty(cvector, float)
0x453: Stack[-1] = (float) 1.74533
0x454: Call2 0x432

0x455: Stack[-7] = Stack[-2]
0x456: Pop(2)
0x457: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x458: Push((float)2500.0)
0x459: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x45b: PushEmpty(cvector, float)
0x45c: Stack[-1] = (float) 2.61799
0x45d: Call2 0x432

0x45e: Stack[-7] = Stack[-2]
0x45f: Pop(2)
0x460: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x461: Push((float)2500.0)
0x462: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x464: Push("Can't retreat, distance: ")
0x465: Pop(0); Push(Sqrt(Stack[-5]))
0x466: Pop(2); Push(Stack[-2] + Stack[-1]);
0x467: @ Trace(Stack[-1])
0x468: Pop(1)
0x469: Push((float)0.5)
0x46a: @ Sleep(Stack[-1])
0x46b: Pop(1)
0x46c: Return(); Pop(10)

0x46d: Push(CvectorIndex(Stack[-5], 0))
0x46e: Push(CvectorIndex(Stack[-6], 2))
0x46f: @ Rotate(Stack[-2], Stack[-1])
0x470: Pop(2)
0x471: PushEmpty(cvector)
0x472: Call2 0x671

0x473: Pop(0)
0x474: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x475: Push((int) 120)
0x476: Push((float)0.5)
0x477: @ SetTimer(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x47a: Push((int) 1)
0x47b: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x47c: Pop(1)
0x47d: Push(Stack[-3])
0x47e: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x47f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x481: GOTO 0x498

0x482: GOTO 0x496

0x483: PushEmpty(cvector, float)
0x484: Stack[-1] = (float) 2.61799
0x485: Call2 0x432

0x486: Stack[-4] = Stack[-2]
0x487: Pop(2)
0x488: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x489: Push((float)2500.0)
0x48a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48c: PushEmpty(cvector)
0x48d: Call2 0x671

0x48e: Pop(0)
0x48f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x490: Push((int) 120)
0x491: Push((float)0.5)
0x492: @ SetTimer(Stack[-2], Stack[-1])
0x493: Pop(2)
0x494: GOTO 0x496

0x495: GOTO 0x498

0x496: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x498: Return(); Pop(10)

0x499: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x49a: Push((int) 120)
0x49b: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: Return(); Pop(8)

0x49e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a0: @ Stop()
0x4a1: Pop(0)
0x4a2: Push((int) 1)
0x4a3: @ KillTimer(Stack[-1])
0x4a4: Pop(1)
0x4a5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4a6: GOTO 0x4cc

0x4a7: @ GetDirection(Stack[-4])
0x4a8: Pop(0)
0x4a9: Push((float)7000.0)
0x4aa: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4ab: Pop(1)
0x4ac: PushEmpty(cvector, float)
0x4ad: Stack[-1] = (float) 1.74533
0x4ae: Call2 0x432

0x4af: Stack[-4] = Stack[-2]
0x4b0: Pop(2)
0x4b1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4b2: PushEmpty(bool)
0x4b3: Stack[-1] = (bool) 0
0x4b4: Push((float)2500.0)
0x4b5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b7: PushEmpty(bool)
0x4b8: Stack[-1] = (bool) 1
0x4b9: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4ba: Push((float)2.25)
0x4bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4bc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4be: PushEmpty(bool)
0x4bf: Call2 0x4dd

0x4c0: Pop(0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: Stack[-1] = (bool) 0
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: Stack[-1] = (bool) 1
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c6: @ Stop()
0x4c7: Pop(0)
0x4c8: PushEmpty(cvector)
0x4c9: Call2 0x671

0x4ca: Pop(0)
0x4cb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4cc: Return(); Pop(8)

0x4cd: @ Stop()
0x4ce: Pop(0)
0x4cf: Push((int) 120)
0x4d0: @ KillTimer(Stack[-1])
0x4d1: Pop(1)
0x4d2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d3: Return(); Pop(0)

0x4d4: PushEmpty()
0x4d5: PushEmpty()
0x4d6: Call2 0x4cd

0x4d7: Pop(0)
0x4d8: PushEmpty(object)
0x4d9: Stack[-1] = Stack[-2]
0x4da: Call2 0x758

0x4db: Pop(1)
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty(cvector, cvector, cvector, cvector)
0x4de: @ GetDirection(Stack[-2])
0x4df: Pop(0)
0x4e0: PushEmpty(cvector, object)
0x4e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e2: Call2 0x676

0x4e3: Stack[-3] = Stack[-2]
0x4e4: Pop(2)
0x4e5: PushEmpty(float, cvector, cvector)
0x4e6: Stack[-2] = Stack[-5]
0x4e7: Stack[-1] = Stack[-4]
0x4e8: Call2 0x721

0x4e9: Pop(2)
0x4ea: Push((float)-0.34202)
0x4eb: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x4ec: Return(); Pop(4)

0x4ed: PushEmpty()
0x4ee: Call2 0x58f

0x4ef: Pop(0)
0x4f0: PushEmpty()
0x4f1: Call2 0x863

0x4f2: Pop(0)
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x4f5: @ GetPosition(Stack[-6])
0x4f6: Pop(0)
0x4f7: @@ GetPosition(Stack[-5])
0x4f8: Pop(0)
0x4f9: @ GetDirection(Stack[-4])
0x4fa: Pop(0)
0x4fb: PushEmpty(cvector, cvector)
0x4fc: PushEmpty(cvector, cvector)
0x4fd: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x4fe: Call2 0x712

0x4ff: Pop(1)
0x500: Push((float)0.75)
0x501: Pop(1); Push(Stack[-8] * Stack[-1]);
0x502: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x503: Call2 0x712

0x504: Stack[-5] = Stack[-2]
0x505: Pop(2)
0x506: Push((int) 32)
0x507: Push((float)7000.0)
0x508: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x509: Pop(2)
0x50a: Push((int) 100)
0x50b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x50c: Push((int) 0)
0x50d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: Stack[-1] = (int) 0
0x510: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x511: Return(); Pop(12)

0x512: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x513: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x514: PushEmpty(cvector, float)
0x515: Stack[-1] = (float) 1.74533
0x516: Call2 0x4f4

0x517: Stack[-7] = Stack[-2]
0x518: Pop(2)
0x519: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x51a: Push((float)2500.0)
0x51b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x51d: PushEmpty(cvector, float)
0x51e: Stack[-1] = (float) 2.61799
0x51f: Call2 0x4f4

0x520: Stack[-7] = Stack[-2]
0x521: Pop(2)
0x522: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x523: Push((float)2500.0)
0x524: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x526: Push("Can't retreat, distance: ")
0x527: Pop(0); Push(Sqrt(Stack[-5]))
0x528: Pop(2); Push(Stack[-2] + Stack[-1]);
0x529: @ Trace(Stack[-1])
0x52a: Pop(1)
0x52b: Push((float)0.5)
0x52c: @ Sleep(Stack[-1])
0x52d: Pop(1)
0x52e: Return(); Pop(10)

0x52f: Push(CvectorIndex(Stack[-5], 0))
0x530: Push(CvectorIndex(Stack[-6], 2))
0x531: @ Rotate(Stack[-2], Stack[-1])
0x532: Pop(2)
0x533: PushEmpty(cvector)
0x534: Call2 0x671

0x535: Pop(0)
0x536: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x537: Push((int) 120)
0x538: Push((float)0.5)
0x539: @ SetTimer(Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x53c: Push((int) 1)
0x53d: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x53e: Pop(1)
0x53f: Push(Stack[-3])
0x540: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x541: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x542: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x543: GOTO 0x55a

0x544: GOTO 0x558

0x545: PushEmpty(cvector, float)
0x546: Stack[-1] = (float) 2.61799
0x547: Call2 0x4f4

0x548: Stack[-4] = Stack[-2]
0x549: Pop(2)
0x54a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x54b: Push((float)2500.0)
0x54c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x54d: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x54e: PushEmpty(cvector)
0x54f: Call2 0x671

0x550: Pop(0)
0x551: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x552: Push((int) 120)
0x553: Push((float)0.5)
0x554: @ SetTimer(Stack[-2], Stack[-1])
0x555: Pop(2)
0x556: GOTO 0x558

0x557: GOTO 0x55a

0x558: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x55a: Return(); Pop(10)

0x55b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x55c: Push((int) 120)
0x55d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55f: Return(); Pop(8)

0x560: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x561: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x562: @ Stop()
0x563: Pop(0)
0x564: Push((int) 1)
0x565: @ KillTimer(Stack[-1])
0x566: Pop(1)
0x567: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x568: GOTO 0x58e

0x569: @ GetDirection(Stack[-4])
0x56a: Pop(0)
0x56b: Push((float)7000.0)
0x56c: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x56d: Pop(1)
0x56e: PushEmpty(cvector, float)
0x56f: Stack[-1] = (float) 1.74533
0x570: Call2 0x4f4

0x571: Stack[-4] = Stack[-2]
0x572: Pop(2)
0x573: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x574: PushEmpty(bool)
0x575: Stack[-1] = (bool) 0
0x576: Push((float)2500.0)
0x577: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 1
0x57b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x57c: Push((float)2.25)
0x57d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x580: PushEmpty(bool)
0x581: Call2 0x59f

0x582: Pop(0)
0x583: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x584: Stack[-1] = (bool) 0
0x585: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x586: Stack[-1] = (bool) 1
0x587: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x588: @ Stop()
0x589: Pop(0)
0x58a: PushEmpty(cvector)
0x58b: Call2 0x671

0x58c: Pop(0)
0x58d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x58e: Return(); Pop(8)

0x58f: @ Stop()
0x590: Pop(0)
0x591: Push((int) 120)
0x592: @ KillTimer(Stack[-1])
0x593: Pop(1)
0x594: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x595: Return(); Pop(0)

0x596: PushEmpty()
0x597: PushEmpty()
0x598: Call2 0x58f

0x599: Pop(0)
0x59a: PushEmpty(object)
0x59b: Stack[-1] = Stack[-2]
0x59c: Call2 0x758

0x59d: Pop(1)
0x59e: Return(); Pop(0)

0x59f: PushEmpty(cvector, cvector, cvector, cvector)
0x5a0: @ GetDirection(Stack[-2])
0x5a1: Pop(0)
0x5a2: PushEmpty(cvector, object)
0x5a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a4: Call2 0x676

0x5a5: Stack[-3] = Stack[-2]
0x5a6: Pop(2)
0x5a7: PushEmpty(float, cvector, cvector)
0x5a8: Stack[-2] = Stack[-5]
0x5a9: Stack[-1] = Stack[-4]
0x5aa: Call2 0x721

0x5ab: Pop(2)
0x5ac: Push((float)-0.34202)
0x5ad: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5ae: Return(); Pop(4)

0x5af: PushEmpty()
0x5b0: Call2 0x651

0x5b1: Pop(0)
0x5b2: PushEmpty()
0x5b3: Call2 0x863

0x5b4: Pop(0)
0x5b5: Return(); Pop(0)

0x5b6: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x5b7: @ GetPosition(Stack[-6])
0x5b8: Pop(0)
0x5b9: @@ GetPosition(Stack[-5])
0x5ba: Pop(0)
0x5bb: @ GetDirection(Stack[-4])
0x5bc: Pop(0)
0x5bd: PushEmpty(cvector, cvector)
0x5be: PushEmpty(cvector, cvector)
0x5bf: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x5c0: Call2 0x712

0x5c1: Pop(1)
0x5c2: Push((float)0.75)
0x5c3: Pop(1); Push(Stack[-8] * Stack[-1]);
0x5c4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5c5: Call2 0x712

0x5c6: Stack[-5] = Stack[-2]
0x5c7: Pop(2)
0x5c8: Push((int) 32)
0x5c9: Push((float)7000.0)
0x5ca: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x5cb: Pop(2)
0x5cc: Push((int) 100)
0x5cd: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x5ce: Push((int) 0)
0x5cf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d1: Stack[-1] = (int) 0
0x5d2: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x5d3: Return(); Pop(12)

0x5d4: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x5d5: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x5d6: PushEmpty(cvector, float)
0x5d7: Stack[-1] = (float) 1.74533
0x5d8: Call2 0x5b6

0x5d9: Stack[-7] = Stack[-2]
0x5da: Pop(2)
0x5db: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5dc: Push((float)2500.0)
0x5dd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5df: PushEmpty(cvector, float)
0x5e0: Stack[-1] = (float) 2.61799
0x5e1: Call2 0x5b6

0x5e2: Stack[-7] = Stack[-2]
0x5e3: Pop(2)
0x5e4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5e5: Push((float)2500.0)
0x5e6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5e8: Push("Can't retreat, distance: ")
0x5e9: Pop(0); Push(Sqrt(Stack[-5]))
0x5ea: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5eb: @ Trace(Stack[-1])
0x5ec: Pop(1)
0x5ed: Push((float)0.5)
0x5ee: @ Sleep(Stack[-1])
0x5ef: Pop(1)
0x5f0: Return(); Pop(10)

0x5f1: Push(CvectorIndex(Stack[-5], 0))
0x5f2: Push(CvectorIndex(Stack[-6], 2))
0x5f3: @ Rotate(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: PushEmpty(cvector)
0x5f6: Call2 0x671

0x5f7: Pop(0)
0x5f8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x5f9: Push((int) 120)
0x5fa: Push((float)0.5)
0x5fb: @ SetTimer(Stack[-2], Stack[-1])
0x5fc: Pop(2)
0x5fd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5fe: Push((int) 1)
0x5ff: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x600: Pop(1)
0x601: Push(Stack[-3])
0x602: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x603: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: GOTO 0x61c

0x606: GOTO 0x61a

0x607: PushEmpty(cvector, float)
0x608: Stack[-1] = (float) 2.61799
0x609: Call2 0x5b6

0x60a: Stack[-4] = Stack[-2]
0x60b: Pop(2)
0x60c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x60d: Push((float)2500.0)
0x60e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x610: PushEmpty(cvector)
0x611: Call2 0x671

0x612: Pop(0)
0x613: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x614: Push((int) 120)
0x615: Push((float)0.5)
0x616: @ SetTimer(Stack[-2], Stack[-1])
0x617: Pop(2)
0x618: GOTO 0x61a

0x619: GOTO 0x61c

0x61a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x61b: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x61c: Return(); Pop(10)

0x61d: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x61e: Push((int) 120)
0x61f: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x621: Return(); Pop(8)

0x622: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x623: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x624: @ Stop()
0x625: Pop(0)
0x626: Push((int) 1)
0x627: @ KillTimer(Stack[-1])
0x628: Pop(1)
0x629: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x62a: GOTO 0x650

0x62b: @ GetDirection(Stack[-4])
0x62c: Pop(0)
0x62d: Push((float)7000.0)
0x62e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x62f: Pop(1)
0x630: PushEmpty(cvector, float)
0x631: Stack[-1] = (float) 1.74533
0x632: Call2 0x5b6

0x633: Stack[-4] = Stack[-2]
0x634: Pop(2)
0x635: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x636: PushEmpty(bool)
0x637: Stack[-1] = (bool) 0
0x638: Push((float)2500.0)
0x639: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x63b: PushEmpty(bool)
0x63c: Stack[-1] = (bool) 1
0x63d: Pop(0); Push(Stack[-5] * Stack[-5]);
0x63e: Push((float)2.25)
0x63f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x640: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x642: PushEmpty(bool)
0x643: Call2 0x661

0x644: Pop(0)
0x645: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x646: Stack[-1] = (bool) 0
0x647: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x648: Stack[-1] = (bool) 1
0x649: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64a: @ Stop()
0x64b: Pop(0)
0x64c: PushEmpty(cvector)
0x64d: Call2 0x671

0x64e: Pop(0)
0x64f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x650: Return(); Pop(8)

0x651: @ Stop()
0x652: Pop(0)
0x653: Push((int) 120)
0x654: @ KillTimer(Stack[-1])
0x655: Pop(1)
0x656: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x657: Return(); Pop(0)

0x658: PushEmpty()
0x659: PushEmpty()
0x65a: Call2 0x651

0x65b: Pop(0)
0x65c: PushEmpty(object)
0x65d: Stack[-1] = Stack[-2]
0x65e: Call2 0x758

0x65f: Pop(1)
0x660: Return(); Pop(0)

0x661: PushEmpty(cvector, cvector, cvector, cvector)
0x662: @ GetDirection(Stack[-2])
0x663: Pop(0)
0x664: PushEmpty(cvector, object)
0x665: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x666: Call2 0x676

0x667: Stack[-3] = Stack[-2]
0x668: Pop(2)
0x669: PushEmpty(float, cvector, cvector)
0x66a: Stack[-2] = Stack[-5]
0x66b: Stack[-1] = Stack[-4]
0x66c: Call2 0x721

0x66d: Pop(2)
0x66e: Push((float)-0.34202)
0x66f: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x670: Return(); Pop(4)

0x671: PushEmpty(cvector, cvector)
0x672: @ GetPosition(Stack[-1])
0x673: Pop(0)
0x674: Stack[-3] = Stack[-1]
0x675: Return(); Pop(2)

0x676: PushEmpty(cvector, cvector, cvector, cvector)
0x677: @ GetPosition(Stack[-2])
0x678: Pop(0)
0x679: @@ GetPosition(Stack[-1])
0x67a: Pop(0)
0x67b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x67c: Return(); Pop(4)

0x67d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x67e: @ GetPosition(Stack[-3])
0x67f: Pop(0)
0x680: @@ GetPosition(Stack[-2])
0x681: Pop(0)
0x682: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x683: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x684: Return(); Pop(6)

0x685: PushEmpty(bool, bool)
0x686: @ IsPlayerActor(Stack[-3], Stack[-1])
0x687: Pop(0)
0x688: Stack[-4] = Stack[-1]
0x689: Return(); Pop(2)

0x68a: PushEmpty(bool, bool)
0x68b: Push("HasProperty")
0x68c: Push((int) 2)
0x68d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x68e: Pop(1); Push((bool) Stack[-1] == 0)
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-5] = (bool) 0
0x691: Return(); Pop(2)

0x692: @@ HasProperty(Stack[-3], Stack[-1])
0x693: Pop(0)
0x694: Stack[-5] = Stack[-1]
0x695: Return(); Pop(2)

0x696: PushEmpty(bool, bool)
0x697: @@ IsDead(Stack[-1])
0x698: Pop(0)
0x699: Stack[-4] = Stack[-1]
0x69a: Return(); Pop(2)

0x69b: PushEmpty(object, object, object, object)
0x69c: Pop(0); Push((bool) Stack[-5] == 0)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-6] = (bool) 0
0x69f: Return(); Pop(4)

0x6a0: PushEmpty(bool)
0x6a1: Stack[-1] = (bool) 0
0x6a2: Push("IsDead")
0x6a3: Push((int) 1)
0x6a4: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a6: PushEmpty(bool, object)
0x6a7: Stack[-1] = Stack[-8]
0x6a8: Call2 0x696

0x6a9: Pop(1)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Stack[-1] = (bool) 1
0x6ac: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ad: Stack[-6] = (bool) 0
0x6ae: Return(); Pop(4)

0x6af: @ GetScene(Stack[-2])
0x6b0: Pop(0)
0x6b1: Pop(0); Push((bool) Stack[-2] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-6] = (bool) 0
0x6b4: Return(); Pop(4)

0x6b5: @@ GetScene(Stack[-1])
0x6b6: Pop(0)
0x6b7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: Stack[-6] = (bool) 0
0x6ba: Return(); Pop(4)

0x6bb: Stack[-6] = (bool) 1
0x6bc: Return(); Pop(4)

0x6bd: Stack[-1] = 0
0x6be: Stack[-2] = 0
0x6bf: PushEmpty(int, int)
0x6c0: PushEmpty(bool, object)
0x6c1: Stack[-1] = Stack[-5]
0x6c2: Call2 0x69b

0x6c3: Pop(1)
0x6c4: Pop(1); Push((bool) Stack[-1] == 0)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c6: Stack[-4] = (bool) 0
0x6c7: Return(); Pop(2)

0x6c8: PushEmpty(bool, object, string)
0x6c9: Stack[-2] = Stack[-6]
0x6ca: Stack[-1] = "noaccess"
0x6cb: Call2 0x68a

0x6cc: Pop(2)
0x6cd: Pop(1); Push((bool) Stack[-1] == 0)
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cf: Stack[-4] = (bool) 1
0x6d0: Return(); Pop(2)

0x6d1: Push("noaccess")
0x6d2: @@ GetProperty(Stack[-1], Stack[-2])
0x6d3: Pop(1)
0x6d4: Push((int) 0)
0x6d5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6d6: Return(); Pop(2)

0x6d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6d8: @@ GetPosition(Stack[-3])
0x6d9: Pop(0)
0x6da: @ GetPosition(Stack[-2])
0x6db: Pop(0)
0x6dc: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6dd: Push(CvectorIndex(Stack[-1], 0))
0x6de: Push(CvectorIndex(Stack[-2], 2))
0x6df: @ RotateAsync(Stack[-2], Stack[-1])
0x6e0: Pop(2)
0x6e1: Return(); Pop(6)

0x6e2: PushEmpty(bool, bool)
0x6e3: @ IsLoaded(Stack[-1])
0x6e4: Pop(0)
0x6e5: Stack[-3] = Stack[-1]
0x6e6: Return(); Pop(2)

0x6e7: PushEmpty(float, cvector, float, cvector)
0x6e8: @@ GetEyesHeight(Stack[-2])
0x6e9: Pop(0)
0x6ea: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6eb: Push(CvectorIndex(Stack[-1], 1))
0x6ec: Stack[-1] = Stack[-3]
0x6ed: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6ee: Push("head")
0x6ef: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6f0: Pop(1)
0x6f1: Return(); Pop(4)

0x6f2: PushEmpty(bool, bool)
0x6f3: PushEmpty(bool, int, int)
0x6f4: Stack[-2] = Stack[-7]
0x6f5: Stack[-1] = Stack[-6]
0x6f6: Call2 0x71c

0x6f7: Pop(2)
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f9: Push((int) 0)
0x6fa: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x6fb: Pop(1)
0x6fc: Return(); Pop(2)

0x6fd: PushEmpty(int, bool, int, bool)
0x6fe: PushEmpty(bool, int, int)
0x6ff: Stack[-2] = Stack[-10]
0x700: Stack[-1] = Stack[-9]
0x701: Call2 0x71c

0x702: Pop(2)
0x703: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x704: @ irand(Stack[-2], Stack[-5])
0x705: Pop(0)
0x706: Push((int) 0)
0x707: Push((int) 1)
0x708: Pop(1); Push(Stack[-4] + Stack[-1]);
0x709: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x70a: Pop(2)
0x70b: Return(); Pop(4)

0x70c: PushEmpty(object, object)
0x70d: @ self(Stack[-1])
0x70e: Pop(0)
0x70f: Stack[-3] = Stack[-1]
0x710: Return(); Pop(2)

0x711: Stack[-1] = 0
0x712: PushEmpty(float, float)
0x713: Pop(0); Push(Stack[-3] | Stack[-3]);
0x714: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x715: Push((float)0.0)
0x716: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x718: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x719: Return(); Pop(2)

0x71a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x71b: Return(); Pop(2)

0x71c: PushEmpty(int, int)
0x71d: @ irand(Stack[-1], Stack[-3])
0x71e: Pop(0)
0x71f: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x720: Return(); Pop(2)

0x721: PushEmpty()
0x722: Pop(0); Push(Stack[-2] | Stack[-1]);
0x723: Pop(0); Push(Stack[-3] | Stack[-3]);
0x724: Pop(0); Push(Stack[-3] | Stack[-3]);
0x725: Pop(2); Push(Stack[-2] * Stack[-1]);
0x726: Pop(1); Push(Sqrt(Stack[-1]))
0x727: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x728: Return(); Pop(0)

0x729: PushEmpty()
0x72a: Push(CvectorIndex(Stack[-2], 0))
0x72b: Push(CvectorIndex(Stack[-2], 0))
0x72c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x72d: Push(CvectorIndex(Stack[-3], 2))
0x72e: Push(CvectorIndex(Stack[-3], 2))
0x72f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x730: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x731: Return(); Pop(0)

0x732: PushEmpty()
0x733: Push(CvectorIndex(Stack[-1], 0))
0x734: Push(CvectorIndex(Stack[-2], 0))
0x735: Pop(2); Push(Stack[-2] * Stack[-1]);
0x736: Push(CvectorIndex(Stack[-2], 2))
0x737: Push(CvectorIndex(Stack[-3], 2))
0x738: Pop(2); Push(Stack[-2] * Stack[-1]);
0x739: Pop(2); Push(Stack[-2] + Stack[-1]);
0x73a: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x73b: Return(); Pop(0)

0x73c: PushEmpty()
0x73d: PushEmpty(float, cvector, cvector)
0x73e: Stack[-2] = Stack[-5]
0x73f: Stack[-1] = Stack[-4]
0x740: Call2 0x729

0x741: Pop(2)
0x742: PushEmpty(float, cvector)
0x743: Stack[-1] = Stack[-5]
0x744: Call2 0x732

0x745: Pop(1)
0x746: PushEmpty(float, cvector)
0x747: Stack[-1] = Stack[-5]
0x748: Call2 0x732

0x749: Pop(1)
0x74a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x74b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x74c: Return(); Pop(0)

0x74d: PushEmpty(float, float)
0x74e: @ GetGameTime(Stack[-1])
0x74f: Pop(0)
0x750: Push((int) 1)
0x751: PushEmpty(int)
0x752: Push((int) 24)
0x753: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x754: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x755: Return(); Pop(2)

0x756: PushEmpty()
0x757: Return(); Pop(0)

0x758: PushEmpty()
0x759: Return(); Pop(0)

0x75a: PushEmpty()
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: Return(); Pop(0)

0x75e: PushEmpty()
0x75f: Push("unholster")
0x760: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x762: PushEmpty(bool, object)
0x763: Stack[-1] = Stack[-4]
0x764: Call2 0x864

0x765: Stack[-5] = Stack[-2]
0x766: Pop(2)
0x767: Return(); Pop(0)

0x768: GOTO 0x77c

0x769: Push("player_shot")
0x76a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x76c: PushEmpty(bool, object)
0x76d: Stack[-1] = Stack[-4]
0x76e: Call2 0x871

0x76f: Stack[-5] = Stack[-2]
0x770: Pop(2)
0x771: Return(); Pop(0)

0x772: GOTO 0x77c

0x773: Push("battle")
0x774: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x776: PushEmpty(bool, object)
0x777: Stack[-1] = Stack[-4]
0x778: Call2 0x888

0x779: Stack[-5] = Stack[-2]
0x77a: Pop(2)
0x77b: Return(); Pop(0)

0x77c: Stack[-3] = (bool) 0
0x77d: Return(); Pop(0)

0x77e: PushEmpty()
0x77f: Push("unholster")
0x780: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x782: PushEmpty(object)
0x783: Stack[-1] = Stack[-3]
0x784: Call2 0x869

0x785: Pop(1)
0x786: GOTO 0x796

0x787: Push("player_shot")
0x788: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x789: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78a: PushEmpty(object)
0x78b: Stack[-1] = Stack[-3]
0x78c: Call2 0x880

0x78d: Pop(1)
0x78e: GOTO 0x796

0x78f: Push("battle")
0x790: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x791: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x792: PushEmpty(object)
0x793: Stack[-1] = Stack[-3]
0x794: Call2 0x88f

0x795: Pop(1)
0x796: Return(); Pop(0)

0x797: PushEmpty(bool, bool)
0x798: PushEmpty(bool)
0x799: Stack[-1] = (bool) 0
0x79a: PushEmpty(bool, object)
0x79b: Stack[-1] = Stack[-6]
0x79c: Call2 0x864

0x79d: Pop(1)
0x79e: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x79f: PushEmpty(bool, object)
0x7a0: Stack[-1] = Stack[-6]
0x7a1: Call2 0x685

0x7a2: Pop(1)
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x7a4: Stack[-1] = (bool) 1
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a6: @@ IsWeaponHolstered(Stack[-1])
0x7a7: Pop(0)
0x7a8: Pop(0); Push((bool) Stack[-1] == 0)
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7aa: Stack[-4] = (bool) 1
0x7ab: Return(); Pop(2)

0x7ac: Stack[-4] = (bool) 0
0x7ad: Return(); Pop(2)

0x7ae: PushEmpty()
0x7af: PushEmpty(object)
0x7b0: Stack[-1] = Stack[-2]
0x7b1: Call2 0x869

0x7b2: Pop(1)
0x7b3: Return(); Pop(0)

0x7b4: PushEmpty()
0x7b5: PushEmpty(bool, object)
0x7b6: Stack[-1] = Stack[-3]
0x7b7: Call2 0x685

0x7b8: Pop(1)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7ba: PushEmpty(object)
0x7bb: Call2 0x70c

0x7bc: Pop(0)
0x7bd: Push((float)-0.03)
0x7be: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(2)
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty(string, string)
0x7c2: Stack[-1] = "idle"
0x7c3: Push(Stack[-3])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7c6: Stack[-4] = Stack[-1]
0x7c7: Return(); Pop(2)

0x7c8: PushEmpty(int, bool, int, bool)
0x7c9: Stack[-2] = (int) 0
0x7ca: Push("all")
0x7cb: PushEmpty(string, int)
0x7cc: Stack[-1] = Stack[-5]
0x7cd: Call2 0x7c1

0x7ce: Pop(1)
0x7cf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7d0: Pop(2)
0x7d1: Pop(0); Push((bool) Stack[-1] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d3: GOTO 0x7d7

0x7d4: Push((int) 1)
0x7d5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7d6: GOTO 0x7ca

0x7d7: Stack[-5] = Stack[-2]
0x7d8: Return(); Pop(4)

0x7d9: PushEmpty()
0x7da: PushEmpty(bool)
0x7db: Call2 0x918

0x7dc: Pop(0)
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7de: Stack[-2] = (int) 2
0x7df: GOTO 0x7e1

0x7e0: Stack[-2] = (int) 0
0x7e1: Return(); Pop(0)

0x7e2: PushEmpty()
0x7e3: PushEmpty(object)
0x7e4: Stack[-1] = Stack[-2]
0x7e5: Push(-1, 1); TaskCall(2)
0x7e6: Call2 0x24f

0x7e7: Pop(-1, 1); TaskReturn
0x7e8: Pop(1)
0x7e9: Return(); Pop(0)

0x7ea: PushEmpty()
0x7eb: PushEmpty(bool, object)
0x7ec: Stack[-1] = Stack[-3]
0x7ed: Call2 0x6bf

0x7ee: Pop(1)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-2] = (int) 2
0x7f1: GOTO 0x7f3

0x7f2: Stack[-2] = (int) 0
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty()
0x7f5: PushEmpty(object)
0x7f6: Stack[-1] = Stack[-2]
0x7f7: Push(-1, 3); TaskCall(3)
0x7f8: Call2 0x354

0x7f9: Pop(-1, 3); TaskReturn
0x7fa: Pop(1)
0x7fb: Return(); Pop(0)

0x7fc: PushEmpty()
0x7fd: PushEmpty(bool, object)
0x7fe: Stack[-1] = Stack[-4]
0x7ff: Call2 0x6bf

0x800: Pop(1)
0x801: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x802: Stack[-3] = (int) 2
0x803: GOTO 0x805

0x804: Stack[-3] = (int) 0
0x805: Return(); Pop(0)

0x806: PushEmpty()
0x807: PushEmpty(object)
0x808: Stack[-1] = Stack[-2]
0x809: Push(-1, 3); TaskCall(4)
0x80a: Call2 0x450

0x80b: Pop(-1, 3); TaskReturn
0x80c: Pop(1)
0x80d: Return(); Pop(0)

0x80e: PushEmpty(string, bool, string, bool)
0x80f: PushEmpty(bool, object, string)
0x810: Stack[-2] = Stack[-9]
0x811: Stack[-1] = "class"
0x812: Call2 0x68a

0x813: Pop(2)
0x814: Pop(1); Push((bool) Stack[-1] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-8] = (bool) 0
0x817: Return(); Pop(4)

0x818: Push("class")
0x819: @@ GetProperty(Stack[-1], Stack[-3])
0x81a: Pop(1)
0x81b: Push("rat")
0x81c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81d: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81e: Stack[-8] = (bool) 0
0x81f: Return(); Pop(4)

0x820: GOTO 0x82c

0x821: Push("rat_big")
0x822: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x824: Stack[-8] = (bool) 0
0x825: Return(); Pop(4)

0x826: GOTO 0x82c

0x827: Push("dog")
0x828: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x829: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82a: Stack[-8] = (bool) 0
0x82b: Return(); Pop(4)

0x82c: @ CanSee(Stack[-1], Stack[-7])
0x82d: Pop(0)
0x82e: PushEmpty(bool)
0x82f: Stack[-1] = (bool) 1
0x830: Push(Stack[-2])
0x831: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x832: PushEmpty(float, object)
0x833: Stack[-1] = Stack[-10]
0x834: Call2 0x67d

0x835: Pop(1)
0x836: Pop(0); Push(Stack[-7] * Stack[-7]);
0x837: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x838: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x839: Stack[-1] = (bool) 0
0x83a: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x83b: Stack[-8] = (bool) 1
0x83c: Return(); Pop(4)

0x83d: @ CanSee(Stack[-1], Stack[-6])
0x83e: Pop(0)
0x83f: PushEmpty(bool)
0x840: Stack[-1] = (bool) 1
0x841: Push(Stack[-2])
0x842: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x843: PushEmpty(float, object)
0x844: Stack[-1] = Stack[-9]
0x845: Call2 0x67d

0x846: Pop(1)
0x847: Pop(0); Push(Stack[-7] * Stack[-7]);
0x848: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x84a: Stack[-1] = (bool) 0
0x84b: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84c: Stack[-8] = (bool) 1
0x84d: Return(); Pop(4)

0x84e: Stack[-8] = (bool) 0
0x84f: Return(); Pop(4)

0x850: PushEmpty()
0x851: Stack[-2] = (int) 0
0x852: Return(); Pop(0)

0x853: PushEmpty()
0x854: Return(); Pop(0)

0x855: PushEmpty()
0x856: Stack[-3] = (int) 0
0x857: Return(); Pop(0)

0x858: PushEmpty()
0x859: Return(); Pop(0)

0x85a: PushEmpty()
0x85b: Stack[-2] = (int) 2
0x85c: Return(); Pop(0)

0x85d: PushEmpty()
0x85e: PushEmpty(object)
0x85f: Stack[-1] = Stack[-2]
0x860: Call2 0x90a

0x861: Pop(1)
0x862: Return(); Pop(0)

0x863: Return(); Pop(0)

0x864: PushEmpty(bool, bool)
0x865: @ CanSee(Stack[-1], Stack[-3])
0x866: Pop(0)
0x867: Stack[-4] = Stack[-1]
0x868: Return(); Pop(2)

0x869: PushEmpty()
0x86a: PushEmpty(object)
0x86b: Stack[-1] = Stack[-2]
0x86c: Push(-1, 3); TaskCall(5)
0x86d: Call2 0x512

0x86e: Pop(-1, 3); TaskReturn
0x86f: Pop(1)
0x870: Return(); Pop(0)

0x871: PushEmpty(bool, bool)
0x872: @ CanSee(Stack[-1], Stack[-3])
0x873: Pop(0)
0x874: Stack[-4] = (bool) 1
0x875: Push(Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x877: PushEmpty(float, object)
0x878: Stack[-1] = Stack[-5]
0x879: Call2 0x67d

0x87a: Pop(1)
0x87b: Push((int) 4000000)
0x87c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87e: Stack[-4] = (bool) 0
0x87f: Return(); Pop(2)

0x880: PushEmpty()
0x881: PushEmpty(object)
0x882: Stack[-1] = Stack[-2]
0x883: Push(-1, 3); TaskCall(6)
0x884: Call2 0x5d4

0x885: Pop(-1, 3); TaskReturn
0x886: Pop(1)
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: PushEmpty(bool, object)
0x88a: Stack[-1] = Stack[-3]
0x88b: Call2 0x871

0x88c: Stack[-4] = Stack[-2]
0x88d: Pop(2)
0x88e: Return(); Pop(0)

0x88f: PushEmpty()
0x890: PushEmpty(object)
0x891: Stack[-1] = Stack[-2]
0x892: Call2 0x880

0x893: Pop(1)
0x894: Return(); Pop(0)

0x895: PushEmpty(int, int)
0x896: Push("branch")
0x897: @ GetVariable(Stack[-1], Stack[-2])
0x898: Pop(1)
0x899: Stack[-3] = Stack[-1]
0x89a: Return(); Pop(2)

0x89b: PushEmpty(object, float, object, float)
0x89c: Push("player")
0x89d: @ FindActor(Stack[-3], Stack[-1])
0x89e: Pop(1)
0x89f: Pop(0); Push((bool) Stack[-2] == 0)
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a1: Stack[-5] = (int) 0
0x8a2: Return(); Pop(4)

0x8a3: Push("reputation")
0x8a4: @@ GetProperty(Stack[-1], Stack[-2])
0x8a5: Pop(1)
0x8a6: Stack[-5] = Stack[-1]
0x8a7: Return(); Pop(4)

0x8a8: Stack[-2] = 0
0x8a9: PushEmpty()
0x8aa: PushEmpty(int)
0x8ab: Call2 0x895

0x8ac: Pop(0)
0x8ad: Push((int) 1)
0x8ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b0: @ WorkWithCorpse(Stack[-1])
0x8b1: Pop(0)
0x8b2: GOTO 0x8b5

0x8b3: @ Barter(Stack[-1])
0x8b4: Pop(0)
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty(int, int)
0x8b7: Push((int) 0)
0x8b8: @ ClearSubContainer(Stack[-1])
0x8b9: Pop(1)
0x8ba: Push(Stack[-3])
0x8bb: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8bc: PushEmpty(string, int, int, int)
0x8bd: Stack[-4] = "rifle_ammo"
0x8be: Stack[-3] = (int) 1
0x8bf: Stack[-2] = (int) 2
0x8c0: Stack[-1] = (int) 2
0x8c1: Call2 0x6fd

0x8c2: Pop(4)
0x8c3: PushEmpty(string, int, int, int)
0x8c4: Stack[-4] = "revolver_ammo"
0x8c5: Stack[-3] = (int) 1
0x8c6: Stack[-2] = (int) 2
0x8c7: Stack[-1] = (int) 2
0x8c8: Call2 0x6fd

0x8c9: Pop(4)
0x8ca: PushEmpty(string, int, int, int)
0x8cb: Stack[-4] = "samopal_ammo"
0x8cc: Stack[-3] = (int) 2
0x8cd: Stack[-2] = (int) 2
0x8ce: Stack[-1] = (int) 2
0x8cf: Call2 0x6fd

0x8d0: Pop(4)
0x8d1: GOTO 0x901

0x8d2: PushEmpty(string, int, int)
0x8d3: Stack[-3] = "lockpick"
0x8d4: Stack[-2] = (int) 1
0x8d5: Stack[-1] = (int) 4
0x8d6: Call2 0x6f2

0x8d7: Pop(3)
0x8d8: PushEmpty(string, int, int, int)
0x8d9: Stack[-4] = "alpha_pills"
0x8da: Stack[-3] = (int) 1
0x8db: Stack[-2] = (int) 2
0x8dc: Stack[-1] = (int) 3
0x8dd: Call2 0x6fd

0x8de: Pop(4)
0x8df: PushEmpty(string, int, int)
0x8e0: Stack[-3] = "meradorm"
0x8e1: Stack[-2] = (int) 1
0x8e2: Stack[-1] = (int) 2
0x8e3: Call2 0x6f2

0x8e4: Pop(3)
0x8e5: PushEmpty(string, int, int)
0x8e6: Stack[-3] = "powder"
0x8e7: Stack[-2] = (int) 1
0x8e8: Stack[-1] = (int) 15
0x8e9: Call2 0x6f2

0x8ea: Pop(3)
0x8eb: PushEmpty(int)
0x8ec: Call2 0x74d

0x8ed: Stack[-2] = Stack[-1]
0x8ee: Pop(1)
0x8ef: Push((int) 4)
0x8f0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f2: PushEmpty(string, int, int)
0x8f3: Stack[-3] = "beta_pills"
0x8f4: Stack[-2] = (int) 1
0x8f5: Stack[-1] = (int) 2
0x8f6: Call2 0x6f2

0x8f7: Pop(3)
0x8f8: Push((int) 6)
0x8f9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8fa: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fb: PushEmpty(string, int, int)
0x8fc: Stack[-3] = "gamma_pills"
0x8fd: Stack[-2] = (int) 1
0x8fe: Stack[-1] = (int) 7
0x8ff: Call2 0x6f2

0x900: Pop(3)
0x901: Return(); Pop(2)

0x902: Push(GlobalVars[0])
0x903: Stack[-1] = (bool) 0
0x904: GlobalVars[0] = Stack[-1]; Pop(1)
0x905: PushEmpty(bool)
0x906: Stack[-1] = (bool) 0
0x907: Call2 0x8b6

0x908: Pop(1)
0x909: Return(); Pop(0)

0x90a: PushEmpty(bool, bool)
0x90b: Push(GlobalVars[0])
0x90c: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x90d: @ IsOverrideActive(Stack[-1])
0x90e: Pop(0)
0x90f: Pop(0); Push((bool) Stack[-1] == 0)
0x910: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x911: PushEmpty(object)
0x912: Stack[-1] = Stack[-4]
0x913: Call2 0x8a9

0x914: Pop(1)
0x915: Return(); Pop(2)

0x916: GOTO 0x917

0x917: Return(); Pop(2)

0x918: PushEmpty(float)
0x919: Call2 0x89b

0x91a: Pop(0)
0x91b: Push((float)0.2)
0x91c: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x91d: Return(); Pop(0)

0x91e: PushEmpty()
0x91f: PushEmpty(bool, object, object, float)
0x920: Stack[-3] = Stack[-7]
0x921: Stack[-2] = Stack[-6]
0x922: Stack[-1] = (float) 700.0
0x923: Call2 0x80e

0x924: Stack[-8] = Stack[-4]
0x925: Pop(4)
0x926: Return(); Pop(0)

