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
	heal
	player
	idle
	class
	rat
	rat_big
	dog
	branch
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
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	GetVariable (2 args)
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
		EVENT_26 Op = 0x99 Vars = (string)
		EVENT_1 Op = 0xa7 Vars = (object)
		EVENT_3 Op = 0xba Vars = (object)
		EVENT_7 Op = 0xc0 Vars = (int)
		EVENT_6 Op = 0xcc Vars = ()
		EVENT_41 Op = 0xe3 Vars = (object)
		EVENT_10 Op = 0x154 Vars = (object)
		EVENT_28 Op = 0x158 Vars = ()
	GTASK_1  Params = 0
		EVENT_0 Op = 0x171 Vars = (object)
		EVENT_17 Op = 0x185 Vars = (object)
		EVENT_30 Op = 0x19d Vars = (object, object, bool)
		EVENT_40 Op = 0x1b9 Vars = (object)
		EVENT_42 Op = 0x1cd Vars = (object, string)
		EVENT_26 Op = 0x1f2 Vars = (string)
		EVENT_6 Op = 0x200 Vars = ()
		EVENT_1 Op = 0x207 Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_0 Op = 0x2a3 Vars = (object)
		EVENT_17 Op = 0x2b7 Vars = (object)
		EVENT_30 Op = 0x2cf Vars = (object, object, bool)
		EVENT_40 Op = 0x2eb Vars = (object)
		EVENT_42 Op = 0x2ff Vars = (object, string)
		EVENT_26 Op = 0x324 Vars = (string)
		EVENT_41 Op = 0x33d Vars = (object)
		EVENT_7 Op = 0x346 Vars = (int)
		EVENT_6 Op = 0x369 Vars = ()
		EVENT_1 Op = 0x370 Vars = (object)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x39a Vars = ()
		EVENT_7 Op = 0x408 Vars = (int)
		EVENT_41 Op = 0x443 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4c3 Vars = (int)
		EVENT_41 Op = 0x4fe Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x517 Vars = ()
		EVENT_7 Op = 0x585 Vars = (int)
		EVENT_41 Op = 0x5c0 Vars = (object)

Events:
EVENT_16 Op = 0x6be Vars = (object, string)
EVENT_41 Op = 0x6c0 Vars = (object)
EVENT_22 Op = 0x6c2 Vars = (object, int, float, float)
EVENT_43 Op = 0x6c4 Vars = (object, int, float, float, cvector, cvector)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x884

0x5: Pop(0)
0x6: PushEmpty()
0x7: Call2 0xf

0x8: Pop(0)
0x9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa: PushEmpty()
0xb: Call2 0x114

0xc: Pop(0)
0xd: GOTO 0x9

0xe: Return(); Pop(0)

0xf: PushEmpty(bool)
0x10: Call2 0x64a

0x11: Pop(0)
0x12: Pop(1); Push((bool) Stack[-1] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x14: PushEmpty()
0x15: Call2 0x7e8

0x16: Pop(0)
0x17: Return(); Pop(0)

0x18: PushEmpty(int, int)
0x19: PushEmpty(int, object)
0x1a: Stack[-1] = Stack[-5]
0x1b: Call2 0x7df

0x1c: Stack[-3] = Stack[-2]
0x1d: Pop(2)
0x1e: Push((int) 0)
0x1f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x21: Push((int) 1)
0x22: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: PushEmpty()
0x25: Call2 0xd3

0x26: Pop(0)
0x27: PushEmpty(object)
0x28: Stack[-1] = Stack[-4]
0x29: Call2 0x7e2

0x2a: Pop(1)
0x2b: Return(); Pop(2)

0x2c: PushEmpty(int, int)
0x2d: PushEmpty(object)
0x2e: Stack[-1] = Stack[-4]
0x2f: Call2 0x71c

0x30: Pop(1)
0x31: PushEmpty(int, object)
0x32: Stack[-1] = Stack[-5]
0x33: Call2 0x76f

0x34: Stack[-3] = Stack[-2]
0x35: Pop(2)
0x36: Push((int) 0)
0x37: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x39: Push((int) 1)
0x3a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0xd3

0x3e: Pop(0)
0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-4]
0x41: Call2 0x779

0x42: Pop(1)
0x43: Return(); Pop(2)

0x44: PushEmpty(int, int)
0x45: PushEmpty(bool, object, object, bool)
0x46: Stack[-3] = Stack[-9]
0x47: Stack[-2] = Stack[-8]
0x48: Stack[-1] = Stack[-7]
0x49: Call2 0x8a0

0x4a: Pop(3)
0x4b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x4c: PushEmpty(int, object, bool)
0x4d: Stack[-2] = Stack[-8]
0x4e: Stack[-1] = Stack[-6]
0x4f: Call2 0x781

0x50: Stack[-4] = Stack[-3]
0x51: Pop(3)
0x52: Push((int) 0)
0x53: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x55: Push((int) 1)
0x56: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: PushEmpty()
0x59: Call2 0xd3

0x5a: Pop(0)
0x5b: PushEmpty(object)
0x5c: Stack[-1] = Stack[-6]
0x5d: Call2 0x78b

0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: PushEmpty(int, int)
0x61: PushEmpty(int, object)
0x62: Stack[-1] = Stack[-5]
0x63: Call2 0x7d5

0x64: Stack[-3] = Stack[-2]
0x65: Pop(2)
0x66: Push((int) 0)
0x67: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x69: Push((int) 1)
0x6a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: PushEmpty()
0x6d: Call2 0xd3

0x6e: Pop(0)
0x6f: PushEmpty(object)
0x70: Stack[-1] = Stack[-4]
0x71: Call2 0x7d8

0x72: Pop(1)
0x73: Return(); Pop(2)

0x74: PushEmpty(int, int)
0x75: PushEmpty(bool, object, string)
0x76: Stack[-2] = Stack[-7]
0x77: Stack[-1] = Stack[-6]
0x78: Call2 0x6c6

0x79: Pop(2)
0x7a: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7b: PushEmpty()
0x7c: Call2 0xd3

0x7d: Pop(0)
0x7e: PushEmpty(object, string)
0x7f: Stack[-2] = Stack[-6]
0x80: Stack[-1] = Stack[-5]
0x81: Call2 0x6e6

0x82: Pop(2)
0x83: GOTO 0x98

0x84: PushEmpty(int, string, object)
0x85: Stack[-2] = Stack[-6]
0x86: Stack[-1] = Stack[-7]
0x87: Call2 0x7da

0x88: Stack[-4] = Stack[-3]
0x89: Pop(3)
0x8a: Push((int) 0)
0x8b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: Push((int) 1)
0x8e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x90: PushEmpty()
0x91: Call2 0xd3

0x92: Pop(0)
0x93: PushEmpty(string, object)
0x94: Stack[-2] = Stack[-5]
0x95: Stack[-1] = Stack[-6]
0x96: Call2 0x7dd

0x97: Pop(2)
0x98: Return(); Pop(2)

0x99: PushEmpty()
0x9a: PushEmpty(bool, string)
0x9b: Stack[-1] = Stack[-3]
0x9c: Call2 0x729

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0xd3

0xa1: Pop(0)
0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[-2]
0xa4: Call2 0x739

0xa5: Pop(1)
0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[-3]
0xaa: Call2 0x6ff

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xad: PushEmpty()
0xae: Call2 0xd3

0xaf: Pop(0)
0xb0: PushEmpty(object)
0xb1: Stack[-1] = Stack[-2]
0xb2: Call2 0x716

0xb3: Pop(1)
0xb4: GOTO 0xb9

0xb5: PushEmpty(object)
0xb6: Stack[-1] = Stack[-2]
0xb7: Call2 0xec

0xb8: Pop(1)
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: PushEmpty(object)
0xbc: Stack[-1] = Stack[-2]
0xbd: Call2 0xec

0xbe: Pop(1)
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 110)
0xc2: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc6: Push((int) 110)
0xc7: @ KillTimer(Stack[-1])
0xc8: Pop(1)
0xc9: @ ResetAAS()
0xca: Pop(0)
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Call2 0xd3

0xce: Pop(0)
0xcf: PushEmpty()
0xd0: Call2 0x7e8

0xd1: Pop(0)
0xd2: Return(); Pop(0)

0xd3: Push((int) 110)
0xd4: @ KillTimer(Stack[-1])
0xd5: Pop(1)
0xd6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd7: PushEmpty()
0xd8: Call2 0x15b

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: Push((int) 110)
0xdc: @ KillTimer(Stack[-1])
0xdd: Pop(1)
0xde: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xdf: PushEmpty()
0xe0: Call2 0x162

0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty()
0xe5: Call2 0xd3

0xe6: Pop(0)
0xe7: PushEmpty(object)
0xe8: Stack[-1] = Stack[-2]
0xe9: Call2 0x6c0

0xea: Pop(1)
0xeb: Return(); Pop(0)

0xec: PushEmpty(bool, int, bool, int)
0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[-7]
0xef: Call2 0x627

0xf0: Pop(1)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Return(); Pop(4)

0xf4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Return(); Pop(4)

0xf7: @ IsPlayerActor(Stack[-5], Stack[-2])
0xf8: Pop(0)
0xf9: Pop(0); Push((bool) Stack[-2] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: Return(); Pop(4)

0xfc: PushEmpty(int, object)
0xfd: Stack[-1] = Stack[-7]
0xfe: Call2 0x75e

0xff: Stack[-3] = Stack[-2]
0x100: Pop(2)
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: Push((int) 1)
0x105: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x107: PushEmpty()
0x108: Call2 0xdb

0x109: Pop(0)
0x10a: PushEmpty(object)
0x10b: Stack[-1] = Stack[-6]
0x10c: Call2 0x767

0x10d: Pop(1)
0x10e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x10f: Push((int) 110)
0x110: Push((float)10.0)
0x111: @ SetTimer(Stack[-2], Stack[-1])
0x112: Pop(2)
0x113: Return(); Pop(4)

0x114: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x115: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x116: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x117: Push((float)0.5)
0x118: @ rand(Stack[-7], Stack[-1])
0x119: Pop(1)
0x11a: @ Sleep(Stack[-6])
0x11b: Pop(0)
0x11c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x11e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: @ GetPosition(Stack[-4])
0x121: Pop(0)
0x122: PushEmpty(float)
0x123: Call2 0x14f

0x124: Pop(0)
0x125: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x126: Pop(1)
0x127: Push(Stack[-3])
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: GOTO 0x12e

0x12a: Push((int) 1)
0x12b: @ Sleep(Stack[-1])
0x12c: Pop(1)
0x12d: GOTO 0x120

0x12e: GOTO 0x130

0x12f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x130: PushEmpty(object, cvector)
0x131: Stack[-1] = Stack[-7]
0x132: Call2 0x16b

0x133: Stack[-4] = Stack[-2]
0x134: Pop(2)
0x135: Pop(0); Push(( Stack[-2] != 0 )
0x136: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x137: @ RotatePath(Stack[-2], Stack[-1])
0x138: Pop(0)
0x139: Push(Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13b: PushEmpty(bool)
0x13c: Call2 0x169

0x13d: Pop(0)
0x13e: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x13f: Pop(1)
0x140: Stack[-2] = 0
0x141: Push(Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty()
0x144: Push(-0, 0); TaskCall(1)
0x145: Call2 0x215

0x146: Pop(-0, 0); TaskReturn
0x147: Pop(0)
0x148: GOTO 0x14c

0x149: Push((int) 1)
0x14a: @ Sleep(Stack[-1])
0x14b: Pop(1)
0x14c: Stack[-2] = 0
0x14d: GOTO 0x11c

0x14e: Return(); Pop(12)

0x14f: PushEmpty(float, float)
0x150: @ GetCameraFarDistance(Stack[-1])
0x151: Pop(0)
0x152: Stack[-3] = Stack[-1]
0x153: Return(); Pop(2)

0x154: PushEmpty()
0x155: @ RequestClearPath(Stack[-1])
0x156: Pop(0)
0x157: Return(); Pop(0)

0x158: @ Stop()
0x159: Pop(0)
0x15a: Return(); Pop(0)

0x15b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x15d: @ Stop()
0x15e: Pop(0)
0x15f: @ StopGroup0()
0x160: Pop(0)
0x161: Return(); Pop(0)

0x162: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x163: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x164: @ Stop()
0x165: Pop(0)
0x166: @ StopGroup0()
0x167: Pop(0)
0x168: Return(); Pop(0)

0x169: Stack[-1] = (bool) 0
0x16a: Return(); Pop(0)

0x16b: PushEmpty(object, object)
0x16c: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x16d: Pop(0)
0x16e: Stack[-4] = Stack[-1]
0x16f: Return(); Pop(2)

0x170: Stack[-1] = 0
0x171: PushEmpty(int, int)
0x172: PushEmpty(int, object)
0x173: Stack[-1] = Stack[-5]
0x174: Call2 0x7df

0x175: Stack[-3] = Stack[-2]
0x176: Pop(2)
0x177: Push((int) 0)
0x178: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17a: Push((int) 1)
0x17b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17d: PushEmpty()
0x17e: Call2 0x266

0x17f: Pop(0)
0x180: PushEmpty(object)
0x181: Stack[-1] = Stack[-4]
0x182: Call2 0x7e2

0x183: Pop(1)
0x184: Return(); Pop(2)

0x185: PushEmpty(int, int)
0x186: PushEmpty(object)
0x187: Stack[-1] = Stack[-4]
0x188: Call2 0x71c

0x189: Pop(1)
0x18a: PushEmpty(int, object)
0x18b: Stack[-1] = Stack[-5]
0x18c: Call2 0x76f

0x18d: Stack[-3] = Stack[-2]
0x18e: Pop(2)
0x18f: Push((int) 0)
0x190: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x192: Push((int) 1)
0x193: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: PushEmpty()
0x196: Call2 0x266

0x197: Pop(0)
0x198: PushEmpty(object)
0x199: Stack[-1] = Stack[-4]
0x19a: Call2 0x779

0x19b: Pop(1)
0x19c: Return(); Pop(2)

0x19d: PushEmpty(int, int)
0x19e: PushEmpty(bool, object, object, bool)
0x19f: Stack[-3] = Stack[-9]
0x1a0: Stack[-2] = Stack[-8]
0x1a1: Stack[-1] = Stack[-7]
0x1a2: Call2 0x8a0

0x1a3: Pop(3)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a5: PushEmpty(int, object, bool)
0x1a6: Stack[-2] = Stack[-8]
0x1a7: Stack[-1] = Stack[-6]
0x1a8: Call2 0x781

0x1a9: Stack[-4] = Stack[-3]
0x1aa: Pop(3)
0x1ab: Push((int) 0)
0x1ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1ae: Push((int) 1)
0x1af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b1: PushEmpty()
0x1b2: Call2 0x266

0x1b3: Pop(0)
0x1b4: PushEmpty(object)
0x1b5: Stack[-1] = Stack[-6]
0x1b6: Call2 0x78b

0x1b7: Pop(1)
0x1b8: Return(); Pop(2)

0x1b9: PushEmpty(int, int)
0x1ba: PushEmpty(int, object)
0x1bb: Stack[-1] = Stack[-5]
0x1bc: Call2 0x7d5

0x1bd: Stack[-3] = Stack[-2]
0x1be: Pop(2)
0x1bf: Push((int) 0)
0x1c0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c2: Push((int) 1)
0x1c3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c5: PushEmpty()
0x1c6: Call2 0x266

0x1c7: Pop(0)
0x1c8: PushEmpty(object)
0x1c9: Stack[-1] = Stack[-4]
0x1ca: Call2 0x7d8

0x1cb: Pop(1)
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty(int, int)
0x1ce: PushEmpty(bool, object, string)
0x1cf: Stack[-2] = Stack[-7]
0x1d0: Stack[-1] = Stack[-6]
0x1d1: Call2 0x6c6

0x1d2: Pop(2)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call2 0x266

0x1d6: Pop(0)
0x1d7: PushEmpty(object, string)
0x1d8: Stack[-2] = Stack[-6]
0x1d9: Stack[-1] = Stack[-5]
0x1da: Call2 0x6e6

0x1db: Pop(2)
0x1dc: GOTO 0x1f1

0x1dd: PushEmpty(int, string, object)
0x1de: Stack[-2] = Stack[-6]
0x1df: Stack[-1] = Stack[-7]
0x1e0: Call2 0x7da

0x1e1: Stack[-4] = Stack[-3]
0x1e2: Pop(3)
0x1e3: Push((int) 0)
0x1e4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e6: Push((int) 1)
0x1e7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e9: PushEmpty()
0x1ea: Call2 0x266

0x1eb: Pop(0)
0x1ec: PushEmpty(string, object)
0x1ed: Stack[-2] = Stack[-5]
0x1ee: Stack[-1] = Stack[-6]
0x1ef: Call2 0x7dd

0x1f0: Pop(2)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty()
0x1f3: PushEmpty(bool, string)
0x1f4: Stack[-1] = Stack[-3]
0x1f5: Call2 0x729

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f8: PushEmpty()
0x1f9: Call2 0x266

0x1fa: Pop(0)
0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = Stack[-2]
0x1fd: Call2 0x739

0x1fe: Pop(1)
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: Call2 0x266

0x202: Pop(0)
0x203: PushEmpty()
0x204: Call2 0x7e8

0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: PushEmpty()
0x208: PushEmpty(bool, object)
0x209: Stack[-1] = Stack[-3]
0x20a: Call2 0x6ff

0x20b: Pop(1)
0x20c: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20d: PushEmpty()
0x20e: Call2 0x266

0x20f: Pop(0)
0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[-2]
0x212: Call2 0x716

0x213: Pop(1)
0x214: Return(); Pop(0)

0x215: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x216: @ WaitForAnimEnd()
0x217: Pop(0)
0x218: PushEmpty(bool)
0x219: Call2 0x64a

0x21a: Pop(0)
0x21b: Pop(1); Push((bool) Stack[-1] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Return(); Pop(14)

0x21e: PushEmpty(int)
0x21f: Call2 0x74d

0x220: Stack[-8] = Stack[-1]
0x221: Pop(1)
0x222: Stack[-6] = (int) 0
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: Push((int) 5)
0x226: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(bool)
0x229: Call2 0x64a

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x22e: Push((int) 3)
0x22f: @ irand(Stack[-6], Stack[-1])
0x230: Pop(1)
0x231: Push((int) 0)
0x232: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x234: Push(Stack[-7])
0x235: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x236: @ irand(Stack[-4], Stack[-7])
0x237: Pop(0)
0x238: Push("all")
0x239: PushEmpty(string, int)
0x23a: Stack[-1] = Stack[-7]
0x23b: Call2 0x746

0x23c: Pop(1)
0x23d: @ PlayAnimation(Stack[-2], Stack[-1])
0x23e: Pop(2)
0x23f: @ WaitForAnimEnd(Stack[-3])
0x240: Pop(0)
0x241: Pop(0); Push((bool) Stack[-3] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x261

0x244: GOTO 0x256

0x245: Push((int) 1)
0x246: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x248: Push((int) 4)
0x249: @ rand(Stack[-3], Stack[-1])
0x24a: Pop(1)
0x24b: Push((int) 1)
0x24c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x24d: @ Sleep(Stack[-1], Stack[-2])
0x24e: Pop(1)
0x24f: Pop(0); Push((bool) Stack[-1] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x261

0x252: GOTO 0x256

0x253: Push(Stack[-6])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: GOTO 0x261

0x256: PushEmpty(bool)
0x257: Call2 0x264

0x258: Pop(0)
0x259: Pop(1); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x261

0x25c: @ ResetAAS()
0x25d: Pop(0)
0x25e: Push((int) 1)
0x25f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x260: GOTO 0x223

0x261: @ ResetAAS()
0x262: Pop(0)
0x263: Return(); Pop(14)

0x264: Stack[-1] = (bool) 1
0x265: Return(); Pop(0)

0x266: @ StopAnimation()
0x267: Pop(0)
0x268: @ StopGroup0()
0x269: Pop(0)
0x26a: Return(); Pop(0)

0x26b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x26c: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x26d: PushEmpty()
0x26e: Call2 0x29e

0x26f: Pop(0)
0x270: @ GetDirection(Stack[-3])
0x271: Pop(0)
0x272: PushEmpty(cvector, object)
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call2 0x5de

0x275: Stack[-4] = Stack[-2]
0x276: Pop(2)
0x277: PushEmpty(float, cvector, cvector)
0x278: Stack[-2] = Stack[-6]
0x279: Stack[-1] = Stack[-5]
0x27a: Call2 0x6a4

0x27b: Pop(2)
0x27c: Push((int) 0)
0x27d: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27f: PushEmpty(object)
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call2 0x63f

0x282: Pop(1)
0x283: Stack[-1] = (bool) 1
0x284: GOTO 0x288

0x285: Push((float)1.5)
0x286: @ Sleep(Stack[-1], Stack[-2])
0x287: Pop(1)
0x288: Push(Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x28a: PushEmpty(object)
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call2 0x63f

0x28d: Pop(1)
0x28e: Push((int) 111)
0x28f: Push((float)0.5)
0x290: @ SetTimer(Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: Push((float)5.0)
0x293: @ Sleep(Stack[-1])
0x294: Pop(1)
0x295: Push((int) 111)
0x296: @ KillTimer(Stack[-1])
0x297: Pop(1)
0x298: @ StopAsync()
0x299: Pop(0)
0x29a: Push("head")
0x29b: @ UnlookAsync(Stack[-1])
0x29c: Pop(1)
0x29d: Return(); Pop(6)

0x29e: PushEmpty(object)
0x29f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a0: Call2 0x64f

0x2a1: Pop(1)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty(int, int)
0x2a4: PushEmpty(int, object)
0x2a5: Stack[-1] = Stack[-5]
0x2a6: Call2 0x7df

0x2a7: Stack[-3] = Stack[-2]
0x2a8: Pop(2)
0x2a9: Push((int) 0)
0x2aa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2ac: Push((int) 1)
0x2ad: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: PushEmpty()
0x2b0: Call2 0x332

0x2b1: Pop(0)
0x2b2: PushEmpty(object)
0x2b3: Stack[-1] = Stack[-4]
0x2b4: Call2 0x7e2

0x2b5: Pop(1)
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(int, int)
0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[-4]
0x2ba: Call2 0x71c

0x2bb: Pop(1)
0x2bc: PushEmpty(int, object)
0x2bd: Stack[-1] = Stack[-5]
0x2be: Call2 0x76f

0x2bf: Stack[-3] = Stack[-2]
0x2c0: Pop(2)
0x2c1: Push((int) 0)
0x2c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c4: Push((int) 1)
0x2c5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: PushEmpty()
0x2c8: Call2 0x332

0x2c9: Pop(0)
0x2ca: PushEmpty(object)
0x2cb: Stack[-1] = Stack[-4]
0x2cc: Call2 0x779

0x2cd: Pop(1)
0x2ce: Return(); Pop(2)

0x2cf: PushEmpty(int, int)
0x2d0: PushEmpty(bool, object, object, bool)
0x2d1: Stack[-3] = Stack[-9]
0x2d2: Stack[-2] = Stack[-8]
0x2d3: Stack[-1] = Stack[-7]
0x2d4: Call2 0x8a0

0x2d5: Pop(3)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2d7: PushEmpty(int, object, bool)
0x2d8: Stack[-2] = Stack[-8]
0x2d9: Stack[-1] = Stack[-6]
0x2da: Call2 0x781

0x2db: Stack[-4] = Stack[-3]
0x2dc: Pop(3)
0x2dd: Push((int) 0)
0x2de: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e0: Push((int) 1)
0x2e1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e3: PushEmpty()
0x2e4: Call2 0x332

0x2e5: Pop(0)
0x2e6: PushEmpty(object)
0x2e7: Stack[-1] = Stack[-6]
0x2e8: Call2 0x78b

0x2e9: Pop(1)
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(int, int)
0x2ec: PushEmpty(int, object)
0x2ed: Stack[-1] = Stack[-5]
0x2ee: Call2 0x7d5

0x2ef: Stack[-3] = Stack[-2]
0x2f0: Pop(2)
0x2f1: Push((int) 0)
0x2f2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f4: Push((int) 1)
0x2f5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f7: PushEmpty()
0x2f8: Call2 0x332

0x2f9: Pop(0)
0x2fa: PushEmpty(object)
0x2fb: Stack[-1] = Stack[-4]
0x2fc: Call2 0x7d8

0x2fd: Pop(1)
0x2fe: Return(); Pop(2)

0x2ff: PushEmpty(int, int)
0x300: PushEmpty(bool, object, string)
0x301: Stack[-2] = Stack[-7]
0x302: Stack[-1] = Stack[-6]
0x303: Call2 0x6c6

0x304: Pop(2)
0x305: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x306: PushEmpty()
0x307: Call2 0x332

0x308: Pop(0)
0x309: PushEmpty(object, string)
0x30a: Stack[-2] = Stack[-6]
0x30b: Stack[-1] = Stack[-5]
0x30c: Call2 0x6e6

0x30d: Pop(2)
0x30e: GOTO 0x323

0x30f: PushEmpty(int, string, object)
0x310: Stack[-2] = Stack[-6]
0x311: Stack[-1] = Stack[-7]
0x312: Call2 0x7da

0x313: Stack[-4] = Stack[-3]
0x314: Pop(3)
0x315: Push((int) 0)
0x316: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x318: Push((int) 1)
0x319: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31b: PushEmpty()
0x31c: Call2 0x332

0x31d: Pop(0)
0x31e: PushEmpty(string, object)
0x31f: Stack[-2] = Stack[-5]
0x320: Stack[-1] = Stack[-6]
0x321: Call2 0x7dd

0x322: Pop(2)
0x323: Return(); Pop(2)

0x324: PushEmpty()
0x325: PushEmpty(bool, string)
0x326: Stack[-1] = Stack[-3]
0x327: Call2 0x729

0x328: Pop(1)
0x329: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32a: PushEmpty()
0x32b: Call2 0x332

0x32c: Pop(0)
0x32d: PushEmpty(string)
0x32e: Stack[-1] = Stack[-2]
0x32f: Call2 0x739

0x330: Pop(1)
0x331: Return(); Pop(0)

0x332: @ StopGroup0()
0x333: Pop(0)
0x334: @ StopAsync()
0x335: Pop(0)
0x336: Push("head")
0x337: @ UnlookAsync(Stack[-1])
0x338: Pop(1)
0x339: Push((int) 111)
0x33a: @ KillTimer(Stack[-1])
0x33b: Pop(1)
0x33c: Return(); Pop(0)

0x33d: PushEmpty()
0x33e: PushEmpty()
0x33f: Call2 0x332

0x340: Pop(0)
0x341: PushEmpty(object)
0x342: Stack[-1] = Stack[-2]
0x343: Call2 0x6c0

0x344: Pop(1)
0x345: Return(); Pop(0)

0x346: PushEmpty(cvector, cvector, cvector, cvector)
0x347: Push((int) 111)
0x348: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Return(); Pop(4)

0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34d: Call2 0x627

0x34e: Pop(1)
0x34f: Pop(1); Push((bool) Stack[-1] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x351: PushEmpty()
0x352: Call2 0x332

0x353: Pop(0)
0x354: Return(); Pop(4)

0x355: @ GetDirection(Stack[-2])
0x356: Pop(0)
0x357: PushEmpty(cvector, object)
0x358: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x359: Call2 0x5de

0x35a: Stack[-3] = Stack[-2]
0x35b: Pop(2)
0x35c: PushEmpty(float, cvector, cvector)
0x35d: Stack[-2] = Stack[-5]
0x35e: Stack[-1] = Stack[-4]
0x35f: Call2 0x6a4

0x360: Pop(2)
0x361: Push((float)0.5)
0x362: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x364: PushEmpty(object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x63f

0x367: Pop(1)
0x368: Return(); Pop(4)

0x369: PushEmpty()
0x36a: Call2 0x332

0x36b: Pop(0)
0x36c: PushEmpty()
0x36d: Call2 0x7e8

0x36e: Pop(0)
0x36f: Return(); Pop(0)

0x370: PushEmpty()
0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[-3]
0x373: Call2 0x6ff

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x376: PushEmpty()
0x377: Call2 0x332

0x378: Pop(0)
0x379: PushEmpty(object)
0x37a: Stack[-1] = Stack[-2]
0x37b: Call2 0x716

0x37c: Pop(1)
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: @ Face(Stack[-1])
0x380: Pop(0)
0x381: Push("all")
0x382: Push("attack_on")
0x383: @ PlayAnimation(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: @ WaitForAnimEnd()
0x386: Pop(0)
0x387: Push("all")
0x388: Push("attack_stay")
0x389: @ PlayAnimation(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: @ WaitForAnimEnd()
0x38c: Pop(0)
0x38d: Push("all")
0x38e: Push("attack_off")
0x38f: @ PlayAnimation(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: @ WaitForAnimEnd()
0x392: Pop(0)
0x393: @ StopAsync()
0x394: Pop(0)
0x395: PushEmpty(object)
0x396: Stack[-1] = Stack[-2]
0x397: Call2 0x3bf

0x398: Pop(1)
0x399: Return(); Pop(0)

0x39a: PushEmpty()
0x39b: Call2 0x43c

0x39c: Pop(0)
0x39d: PushEmpty()
0x39e: Call2 0x7e8

0x39f: Pop(0)
0x3a0: Return(); Pop(0)

0x3a1: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3a2: @ GetPosition(Stack[-6])
0x3a3: Pop(0)
0x3a4: @@ GetPosition(Stack[-5])
0x3a5: Pop(0)
0x3a6: @ GetDirection(Stack[-4])
0x3a7: Pop(0)
0x3a8: PushEmpty(cvector, cvector)
0x3a9: PushEmpty(cvector, cvector)
0x3aa: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3ab: Call2 0x67a

0x3ac: Pop(1)
0x3ad: Push((float)0.75)
0x3ae: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3af: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3b0: Call2 0x67a

0x3b1: Stack[-5] = Stack[-2]
0x3b2: Pop(2)
0x3b3: Push((int) 32)
0x3b4: Push((float)7000.0)
0x3b5: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: Push((int) 100)
0x3b8: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3b9: Push((int) 0)
0x3ba: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: Stack[-1] = (int) 0
0x3bd: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3be: Return(); Pop(12)

0x3bf: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3c1: PushEmpty(cvector, float)
0x3c2: Stack[-1] = (float) 1.74533
0x3c3: Call2 0x3a1

0x3c4: Stack[-7] = Stack[-2]
0x3c5: Pop(2)
0x3c6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3c7: Push((float)2500.0)
0x3c8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3ca: PushEmpty(cvector, float)
0x3cb: Stack[-1] = (float) 2.61799
0x3cc: Call2 0x3a1

0x3cd: Stack[-7] = Stack[-2]
0x3ce: Pop(2)
0x3cf: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3d0: Push((float)2500.0)
0x3d1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d3: Push("Can't retreat, distance: ")
0x3d4: Pop(0); Push(Sqrt(Stack[-5]))
0x3d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d6: @ Trace(Stack[-1])
0x3d7: Pop(1)
0x3d8: Push((float)0.5)
0x3d9: @ Sleep(Stack[-1])
0x3da: Pop(1)
0x3db: Return(); Pop(10)

0x3dc: Push(CvectorIndex(Stack[-5], 0))
0x3dd: Push(CvectorIndex(Stack[-6], 2))
0x3de: @ Rotate(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: PushEmpty(cvector)
0x3e1: Call2 0x5d9

0x3e2: Pop(0)
0x3e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3e4: Push((int) 120)
0x3e5: Push((float)0.5)
0x3e6: @ SetTimer(Stack[-2], Stack[-1])
0x3e7: Pop(2)
0x3e8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e9: Push((int) 1)
0x3ea: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3eb: Pop(1)
0x3ec: Push(Stack[-3])
0x3ed: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3ee: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: GOTO 0x407

0x3f1: GOTO 0x405

0x3f2: PushEmpty(cvector, float)
0x3f3: Stack[-1] = (float) 2.61799
0x3f4: Call2 0x3a1

0x3f5: Stack[-4] = Stack[-2]
0x3f6: Pop(2)
0x3f7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3f8: Push((float)2500.0)
0x3f9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fb: PushEmpty(cvector)
0x3fc: Call2 0x5d9

0x3fd: Pop(0)
0x3fe: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3ff: Push((int) 120)
0x400: Push((float)0.5)
0x401: @ SetTimer(Stack[-2], Stack[-1])
0x402: Pop(2)
0x403: GOTO 0x405

0x404: GOTO 0x407

0x405: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x407: Return(); Pop(10)

0x408: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x409: Push((int) 120)
0x40a: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: Return(); Pop(8)

0x40d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x40f: @ Stop()
0x410: Pop(0)
0x411: Push((int) 1)
0x412: @ KillTimer(Stack[-1])
0x413: Pop(1)
0x414: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x415: GOTO 0x43b

0x416: @ GetDirection(Stack[-4])
0x417: Pop(0)
0x418: Push((float)7000.0)
0x419: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x41a: Pop(1)
0x41b: PushEmpty(cvector, float)
0x41c: Stack[-1] = (float) 1.74533
0x41d: Call2 0x3a1

0x41e: Stack[-4] = Stack[-2]
0x41f: Pop(2)
0x420: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x421: PushEmpty(bool)
0x422: Stack[-1] = (bool) 0
0x423: Push((float)2500.0)
0x424: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x426: PushEmpty(bool)
0x427: Stack[-1] = (bool) 1
0x428: Pop(0); Push(Stack[-5] * Stack[-5]);
0x429: Push((float)2.25)
0x42a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42b: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: PushEmpty(bool)
0x42e: Call2 0x44c

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Stack[-1] = (bool) 0
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: Stack[-1] = (bool) 1
0x434: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x435: @ Stop()
0x436: Pop(0)
0x437: PushEmpty(cvector)
0x438: Call2 0x5d9

0x439: Pop(0)
0x43a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x43b: Return(); Pop(8)

0x43c: @ Stop()
0x43d: Pop(0)
0x43e: Push((int) 120)
0x43f: @ KillTimer(Stack[-1])
0x440: Pop(1)
0x441: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x442: Return(); Pop(0)

0x443: PushEmpty()
0x444: PushEmpty()
0x445: Call2 0x43c

0x446: Pop(0)
0x447: PushEmpty(object)
0x448: Stack[-1] = Stack[-2]
0x449: Call2 0x6c0

0x44a: Pop(1)
0x44b: Return(); Pop(0)

0x44c: PushEmpty(cvector, cvector, cvector, cvector)
0x44d: @ GetDirection(Stack[-2])
0x44e: Pop(0)
0x44f: PushEmpty(cvector, object)
0x450: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x451: Call2 0x5de

0x452: Stack[-3] = Stack[-2]
0x453: Pop(2)
0x454: PushEmpty(float, cvector, cvector)
0x455: Stack[-2] = Stack[-5]
0x456: Stack[-1] = Stack[-4]
0x457: Call2 0x689

0x458: Pop(2)
0x459: Push((float)-0.34202)
0x45a: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x45b: Return(); Pop(4)

0x45c: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x45d: @ GetPosition(Stack[-6])
0x45e: Pop(0)
0x45f: @@ GetPosition(Stack[-5])
0x460: Pop(0)
0x461: @ GetDirection(Stack[-4])
0x462: Pop(0)
0x463: PushEmpty(cvector, cvector)
0x464: PushEmpty(cvector, cvector)
0x465: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x466: Call2 0x67a

0x467: Pop(1)
0x468: Push((float)0.75)
0x469: Pop(1); Push(Stack[-8] * Stack[-1]);
0x46a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x46b: Call2 0x67a

0x46c: Stack[-5] = Stack[-2]
0x46d: Pop(2)
0x46e: Push((int) 32)
0x46f: Push((float)7000.0)
0x470: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x471: Pop(2)
0x472: Push((int) 100)
0x473: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x474: Push((int) 0)
0x475: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Stack[-1] = (int) 0
0x478: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x479: Return(); Pop(12)

0x47a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x47b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x47c: PushEmpty(cvector, float)
0x47d: Stack[-1] = (float) 1.74533
0x47e: Call2 0x45c

0x47f: Stack[-7] = Stack[-2]
0x480: Pop(2)
0x481: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x482: Push((float)2500.0)
0x483: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x485: PushEmpty(cvector, float)
0x486: Stack[-1] = (float) 2.61799
0x487: Call2 0x45c

0x488: Stack[-7] = Stack[-2]
0x489: Pop(2)
0x48a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x48b: Push((float)2500.0)
0x48c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x48e: Push("Can't retreat, distance: ")
0x48f: Pop(0); Push(Sqrt(Stack[-5]))
0x490: Pop(2); Push(Stack[-2] + Stack[-1]);
0x491: @ Trace(Stack[-1])
0x492: Pop(1)
0x493: Push((float)0.5)
0x494: @ Sleep(Stack[-1])
0x495: Pop(1)
0x496: Return(); Pop(10)

0x497: Push(CvectorIndex(Stack[-5], 0))
0x498: Push(CvectorIndex(Stack[-6], 2))
0x499: @ Rotate(Stack[-2], Stack[-1])
0x49a: Pop(2)
0x49b: PushEmpty(cvector)
0x49c: Call2 0x5d9

0x49d: Pop(0)
0x49e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x49f: Push((int) 120)
0x4a0: Push((float)0.5)
0x4a1: @ SetTimer(Stack[-2], Stack[-1])
0x4a2: Pop(2)
0x4a3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4a4: Push((int) 1)
0x4a5: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4a6: Pop(1)
0x4a7: Push(Stack[-3])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4a9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: GOTO 0x4c2

0x4ac: GOTO 0x4c0

0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 2.61799
0x4af: Call2 0x45c

0x4b0: Stack[-4] = Stack[-2]
0x4b1: Pop(2)
0x4b2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4b3: Push((float)2500.0)
0x4b4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b6: PushEmpty(cvector)
0x4b7: Call2 0x5d9

0x4b8: Pop(0)
0x4b9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4ba: Push((int) 120)
0x4bb: Push((float)0.5)
0x4bc: @ SetTimer(Stack[-2], Stack[-1])
0x4bd: Pop(2)
0x4be: GOTO 0x4c0

0x4bf: GOTO 0x4c2

0x4c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4c2: Return(); Pop(10)

0x4c3: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4c4: Push((int) 120)
0x4c5: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: Return(); Pop(8)

0x4c8: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4ca: @ Stop()
0x4cb: Pop(0)
0x4cc: Push((int) 1)
0x4cd: @ KillTimer(Stack[-1])
0x4ce: Pop(1)
0x4cf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d0: GOTO 0x4f6

0x4d1: @ GetDirection(Stack[-4])
0x4d2: Pop(0)
0x4d3: Push((float)7000.0)
0x4d4: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4d5: Pop(1)
0x4d6: PushEmpty(cvector, float)
0x4d7: Stack[-1] = (float) 1.74533
0x4d8: Call2 0x45c

0x4d9: Stack[-4] = Stack[-2]
0x4da: Pop(2)
0x4db: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4dc: PushEmpty(bool)
0x4dd: Stack[-1] = (bool) 0
0x4de: Push((float)2500.0)
0x4df: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4e1: PushEmpty(bool)
0x4e2: Stack[-1] = (bool) 1
0x4e3: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4e4: Push((float)2.25)
0x4e5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e6: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e8: PushEmpty(bool)
0x4e9: Call2 0x507

0x4ea: Pop(0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: Stack[-1] = (bool) 0
0x4ed: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ee: Stack[-1] = (bool) 1
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f0: @ Stop()
0x4f1: Pop(0)
0x4f2: PushEmpty(cvector)
0x4f3: Call2 0x5d9

0x4f4: Pop(0)
0x4f5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4f6: Return(); Pop(8)

0x4f7: @ Stop()
0x4f8: Pop(0)
0x4f9: Push((int) 120)
0x4fa: @ KillTimer(Stack[-1])
0x4fb: Pop(1)
0x4fc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4fd: Return(); Pop(0)

0x4fe: PushEmpty()
0x4ff: PushEmpty()
0x500: Call2 0x4f7

0x501: Pop(0)
0x502: PushEmpty(object)
0x503: Stack[-1] = Stack[-2]
0x504: Call2 0x6c0

0x505: Pop(1)
0x506: Return(); Pop(0)

0x507: PushEmpty(cvector, cvector, cvector, cvector)
0x508: @ GetDirection(Stack[-2])
0x509: Pop(0)
0x50a: PushEmpty(cvector, object)
0x50b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50c: Call2 0x5de

0x50d: Stack[-3] = Stack[-2]
0x50e: Pop(2)
0x50f: PushEmpty(float, cvector, cvector)
0x510: Stack[-2] = Stack[-5]
0x511: Stack[-1] = Stack[-4]
0x512: Call2 0x689

0x513: Pop(2)
0x514: Push((float)-0.34202)
0x515: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x516: Return(); Pop(4)

0x517: PushEmpty()
0x518: Call2 0x5b9

0x519: Pop(0)
0x51a: PushEmpty()
0x51b: Call2 0x7e8

0x51c: Pop(0)
0x51d: Return(); Pop(0)

0x51e: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x51f: @ GetPosition(Stack[-6])
0x520: Pop(0)
0x521: @@ GetPosition(Stack[-5])
0x522: Pop(0)
0x523: @ GetDirection(Stack[-4])
0x524: Pop(0)
0x525: PushEmpty(cvector, cvector)
0x526: PushEmpty(cvector, cvector)
0x527: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x528: Call2 0x67a

0x529: Pop(1)
0x52a: Push((float)0.75)
0x52b: Pop(1); Push(Stack[-8] * Stack[-1]);
0x52c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x52d: Call2 0x67a

0x52e: Stack[-5] = Stack[-2]
0x52f: Pop(2)
0x530: Push((int) 32)
0x531: Push((float)7000.0)
0x532: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x533: Pop(2)
0x534: Push((int) 100)
0x535: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x536: Push((int) 0)
0x537: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-1] = (int) 0
0x53a: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x53b: Return(); Pop(12)

0x53c: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x53d: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x53e: PushEmpty(cvector, float)
0x53f: Stack[-1] = (float) 1.74533
0x540: Call2 0x51e

0x541: Stack[-7] = Stack[-2]
0x542: Pop(2)
0x543: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x544: Push((float)2500.0)
0x545: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x547: PushEmpty(cvector, float)
0x548: Stack[-1] = (float) 2.61799
0x549: Call2 0x51e

0x54a: Stack[-7] = Stack[-2]
0x54b: Pop(2)
0x54c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x54d: Push((float)2500.0)
0x54e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x550: Push("Can't retreat, distance: ")
0x551: Pop(0); Push(Sqrt(Stack[-5]))
0x552: Pop(2); Push(Stack[-2] + Stack[-1]);
0x553: @ Trace(Stack[-1])
0x554: Pop(1)
0x555: Push((float)0.5)
0x556: @ Sleep(Stack[-1])
0x557: Pop(1)
0x558: Return(); Pop(10)

0x559: Push(CvectorIndex(Stack[-5], 0))
0x55a: Push(CvectorIndex(Stack[-6], 2))
0x55b: @ Rotate(Stack[-2], Stack[-1])
0x55c: Pop(2)
0x55d: PushEmpty(cvector)
0x55e: Call2 0x5d9

0x55f: Pop(0)
0x560: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x561: Push((int) 120)
0x562: Push((float)0.5)
0x563: @ SetTimer(Stack[-2], Stack[-1])
0x564: Pop(2)
0x565: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x566: Push((int) 1)
0x567: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x568: Pop(1)
0x569: Push(Stack[-3])
0x56a: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x56b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: GOTO 0x584

0x56e: GOTO 0x582

0x56f: PushEmpty(cvector, float)
0x570: Stack[-1] = (float) 2.61799
0x571: Call2 0x51e

0x572: Stack[-4] = Stack[-2]
0x573: Pop(2)
0x574: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x575: Push((float)2500.0)
0x576: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x578: PushEmpty(cvector)
0x579: Call2 0x5d9

0x57a: Pop(0)
0x57b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x57c: Push((int) 120)
0x57d: Push((float)0.5)
0x57e: @ SetTimer(Stack[-2], Stack[-1])
0x57f: Pop(2)
0x580: GOTO 0x582

0x581: GOTO 0x584

0x582: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x583: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x584: Return(); Pop(10)

0x585: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x586: Push((int) 120)
0x587: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: Return(); Pop(8)

0x58a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x58b: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58c: @ Stop()
0x58d: Pop(0)
0x58e: Push((int) 1)
0x58f: @ KillTimer(Stack[-1])
0x590: Pop(1)
0x591: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x592: GOTO 0x5b8

0x593: @ GetDirection(Stack[-4])
0x594: Pop(0)
0x595: Push((float)7000.0)
0x596: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x597: Pop(1)
0x598: PushEmpty(cvector, float)
0x599: Stack[-1] = (float) 1.74533
0x59a: Call2 0x51e

0x59b: Stack[-4] = Stack[-2]
0x59c: Pop(2)
0x59d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x59e: PushEmpty(bool)
0x59f: Stack[-1] = (bool) 0
0x5a0: Push((float)2500.0)
0x5a1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5a3: PushEmpty(bool)
0x5a4: Stack[-1] = (bool) 1
0x5a5: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5a6: Push((float)2.25)
0x5a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a8: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5aa: PushEmpty(bool)
0x5ab: Call2 0x5c9

0x5ac: Pop(0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: Stack[-1] = (bool) 0
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: Stack[-1] = (bool) 1
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b2: @ Stop()
0x5b3: Pop(0)
0x5b4: PushEmpty(cvector)
0x5b5: Call2 0x5d9

0x5b6: Pop(0)
0x5b7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5b8: Return(); Pop(8)

0x5b9: @ Stop()
0x5ba: Pop(0)
0x5bb: Push((int) 120)
0x5bc: @ KillTimer(Stack[-1])
0x5bd: Pop(1)
0x5be: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty()
0x5c1: PushEmpty()
0x5c2: Call2 0x5b9

0x5c3: Pop(0)
0x5c4: PushEmpty(object)
0x5c5: Stack[-1] = Stack[-2]
0x5c6: Call2 0x6c0

0x5c7: Pop(1)
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty(cvector, cvector, cvector, cvector)
0x5ca: @ GetDirection(Stack[-2])
0x5cb: Pop(0)
0x5cc: PushEmpty(cvector, object)
0x5cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ce: Call2 0x5de

0x5cf: Stack[-3] = Stack[-2]
0x5d0: Pop(2)
0x5d1: PushEmpty(float, cvector, cvector)
0x5d2: Stack[-2] = Stack[-5]
0x5d3: Stack[-1] = Stack[-4]
0x5d4: Call2 0x689

0x5d5: Pop(2)
0x5d6: Push((float)-0.34202)
0x5d7: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5d8: Return(); Pop(4)

0x5d9: PushEmpty(cvector, cvector)
0x5da: @ GetPosition(Stack[-1])
0x5db: Pop(0)
0x5dc: Stack[-3] = Stack[-1]
0x5dd: Return(); Pop(2)

0x5de: PushEmpty(cvector, cvector, cvector, cvector)
0x5df: @ GetPosition(Stack[-2])
0x5e0: Pop(0)
0x5e1: @@ GetPosition(Stack[-1])
0x5e2: Pop(0)
0x5e3: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e4: Return(); Pop(4)

0x5e5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e6: @ GetPosition(Stack[-3])
0x5e7: Pop(0)
0x5e8: @@ GetPosition(Stack[-2])
0x5e9: Pop(0)
0x5ea: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5eb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5ec: Return(); Pop(6)

0x5ed: PushEmpty(bool, bool)
0x5ee: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5ef: Pop(0)
0x5f0: Stack[-4] = Stack[-1]
0x5f1: Return(); Pop(2)

0x5f2: PushEmpty(bool, bool)
0x5f3: Push("HasProperty")
0x5f4: Push((int) 2)
0x5f5: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f6: Pop(1); Push((bool) Stack[-1] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-5] = (bool) 0
0x5f9: Return(); Pop(2)

0x5fa: @@ HasProperty(Stack[-3], Stack[-1])
0x5fb: Pop(0)
0x5fc: Stack[-5] = Stack[-1]
0x5fd: Return(); Pop(2)

0x5fe: PushEmpty(bool, bool)
0x5ff: @@ IsDead(Stack[-1])
0x600: Pop(0)
0x601: Stack[-4] = Stack[-1]
0x602: Return(); Pop(2)

0x603: PushEmpty(object, object, object, object)
0x604: Pop(0); Push((bool) Stack[-5] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-6] = (bool) 0
0x607: Return(); Pop(4)

0x608: PushEmpty(bool)
0x609: Stack[-1] = (bool) 0
0x60a: Push("IsDead")
0x60b: Push((int) 1)
0x60c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x60d: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60e: PushEmpty(bool, object)
0x60f: Stack[-1] = Stack[-8]
0x610: Call2 0x5fe

0x611: Pop(1)
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: Stack[-1] = (bool) 1
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-6] = (bool) 0
0x616: Return(); Pop(4)

0x617: @ GetScene(Stack[-2])
0x618: Pop(0)
0x619: Pop(0); Push((bool) Stack[-2] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-6] = (bool) 0
0x61c: Return(); Pop(4)

0x61d: @@ GetScene(Stack[-1])
0x61e: Pop(0)
0x61f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-6] = (bool) 0
0x622: Return(); Pop(4)

0x623: Stack[-6] = (bool) 1
0x624: Return(); Pop(4)

0x625: Stack[-1] = 0
0x626: Stack[-2] = 0
0x627: PushEmpty(int, int)
0x628: PushEmpty(bool, object)
0x629: Stack[-1] = Stack[-5]
0x62a: Call2 0x603

0x62b: Pop(1)
0x62c: Pop(1); Push((bool) Stack[-1] == 0)
0x62d: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62e: Stack[-4] = (bool) 0
0x62f: Return(); Pop(2)

0x630: PushEmpty(bool, object, string)
0x631: Stack[-2] = Stack[-6]
0x632: Stack[-1] = "noaccess"
0x633: Call2 0x5f2

0x634: Pop(2)
0x635: Pop(1); Push((bool) Stack[-1] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x637: Stack[-4] = (bool) 1
0x638: Return(); Pop(2)

0x639: Push("noaccess")
0x63a: @@ GetProperty(Stack[-1], Stack[-2])
0x63b: Pop(1)
0x63c: Push((int) 0)
0x63d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x63e: Return(); Pop(2)

0x63f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x640: @@ GetPosition(Stack[-3])
0x641: Pop(0)
0x642: @ GetPosition(Stack[-2])
0x643: Pop(0)
0x644: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x645: Push(CvectorIndex(Stack[-1], 0))
0x646: Push(CvectorIndex(Stack[-2], 2))
0x647: @ RotateAsync(Stack[-2], Stack[-1])
0x648: Pop(2)
0x649: Return(); Pop(6)

0x64a: PushEmpty(bool, bool)
0x64b: @ IsLoaded(Stack[-1])
0x64c: Pop(0)
0x64d: Stack[-3] = Stack[-1]
0x64e: Return(); Pop(2)

0x64f: PushEmpty(float, cvector, float, cvector)
0x650: @@ GetEyesHeight(Stack[-2])
0x651: Pop(0)
0x652: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x653: Push(CvectorIndex(Stack[-1], 1))
0x654: Stack[-1] = Stack[-3]
0x655: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x656: Push("head")
0x657: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x658: Pop(1)
0x659: Return(); Pop(4)

0x65a: PushEmpty(bool, bool)
0x65b: PushEmpty(bool, int, int)
0x65c: Stack[-2] = Stack[-7]
0x65d: Stack[-1] = Stack[-6]
0x65e: Call2 0x684

0x65f: Pop(2)
0x660: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x661: Push((int) 0)
0x662: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x663: Pop(1)
0x664: Return(); Pop(2)

0x665: PushEmpty(int, bool, int, bool)
0x666: PushEmpty(bool, int, int)
0x667: Stack[-2] = Stack[-10]
0x668: Stack[-1] = Stack[-9]
0x669: Call2 0x684

0x66a: Pop(2)
0x66b: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66c: @ irand(Stack[-2], Stack[-5])
0x66d: Pop(0)
0x66e: Push((int) 0)
0x66f: Push((int) 1)
0x670: Pop(1); Push(Stack[-4] + Stack[-1]);
0x671: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x672: Pop(2)
0x673: Return(); Pop(4)

0x674: PushEmpty(object, object)
0x675: @ self(Stack[-1])
0x676: Pop(0)
0x677: Stack[-3] = Stack[-1]
0x678: Return(); Pop(2)

0x679: Stack[-1] = 0
0x67a: PushEmpty(float, float)
0x67b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x67c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x67d: Push((float)0.0)
0x67e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x681: Return(); Pop(2)

0x682: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x683: Return(); Pop(2)

0x684: PushEmpty(int, int)
0x685: @ irand(Stack[-1], Stack[-3])
0x686: Pop(0)
0x687: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x688: Return(); Pop(2)

0x689: PushEmpty()
0x68a: Pop(0); Push(Stack[-2] | Stack[-1]);
0x68b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x68c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x68d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x68e: Pop(1); Push(Sqrt(Stack[-1]))
0x68f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x690: Return(); Pop(0)

0x691: PushEmpty()
0x692: Push(CvectorIndex(Stack[-2], 0))
0x693: Push(CvectorIndex(Stack[-2], 0))
0x694: Pop(2); Push(Stack[-2] * Stack[-1]);
0x695: Push(CvectorIndex(Stack[-3], 2))
0x696: Push(CvectorIndex(Stack[-3], 2))
0x697: Pop(2); Push(Stack[-2] * Stack[-1]);
0x698: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x699: Return(); Pop(0)

0x69a: PushEmpty()
0x69b: Push(CvectorIndex(Stack[-1], 0))
0x69c: Push(CvectorIndex(Stack[-2], 0))
0x69d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69e: Push(CvectorIndex(Stack[-2], 2))
0x69f: Push(CvectorIndex(Stack[-3], 2))
0x6a0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6a2: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x6a3: Return(); Pop(0)

0x6a4: PushEmpty()
0x6a5: PushEmpty(float, cvector, cvector)
0x6a6: Stack[-2] = Stack[-5]
0x6a7: Stack[-1] = Stack[-4]
0x6a8: Call2 0x691

0x6a9: Pop(2)
0x6aa: PushEmpty(float, cvector)
0x6ab: Stack[-1] = Stack[-5]
0x6ac: Call2 0x69a

0x6ad: Pop(1)
0x6ae: PushEmpty(float, cvector)
0x6af: Stack[-1] = Stack[-5]
0x6b0: Call2 0x69a

0x6b1: Pop(1)
0x6b2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x6b4: Return(); Pop(0)

0x6b5: PushEmpty(float, float)
0x6b6: @ GetGameTime(Stack[-1])
0x6b7: Pop(0)
0x6b8: Push((int) 1)
0x6b9: PushEmpty(int)
0x6ba: Push((int) 24)
0x6bb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6bc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6bd: Return(); Pop(2)

0x6be: PushEmpty()
0x6bf: Return(); Pop(0)

0x6c0: PushEmpty()
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty()
0x6c3: Return(); Pop(0)

0x6c4: PushEmpty()
0x6c5: Return(); Pop(0)

0x6c6: PushEmpty()
0x6c7: Push("unholster")
0x6c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c9: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6ca: PushEmpty(bool, object)
0x6cb: Stack[-1] = Stack[-4]
0x6cc: Call2 0x7e9

0x6cd: Stack[-5] = Stack[-2]
0x6ce: Pop(2)
0x6cf: Return(); Pop(0)

0x6d0: GOTO 0x6e4

0x6d1: Push("player_shot")
0x6d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6d4: PushEmpty(bool, object)
0x6d5: Stack[-1] = Stack[-4]
0x6d6: Call2 0x7ee

0x6d7: Stack[-5] = Stack[-2]
0x6d8: Pop(2)
0x6d9: Return(); Pop(0)

0x6da: GOTO 0x6e4

0x6db: Push("battle")
0x6dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6de: PushEmpty(bool, object)
0x6df: Stack[-1] = Stack[-4]
0x6e0: Call2 0x805

0x6e1: Stack[-5] = Stack[-2]
0x6e2: Pop(2)
0x6e3: Return(); Pop(0)

0x6e4: Stack[-3] = (bool) 0
0x6e5: Return(); Pop(0)

0x6e6: PushEmpty()
0x6e7: Push("unholster")
0x6e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ea: PushEmpty(object)
0x6eb: Stack[-1] = Stack[-3]
0x6ec: Call2 0x7ec

0x6ed: Pop(1)
0x6ee: GOTO 0x6fe

0x6ef: Push("player_shot")
0x6f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f2: PushEmpty(object)
0x6f3: Stack[-1] = Stack[-3]
0x6f4: Call2 0x7fd

0x6f5: Pop(1)
0x6f6: GOTO 0x6fe

0x6f7: Push("battle")
0x6f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f9: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fa: PushEmpty(object)
0x6fb: Stack[-1] = Stack[-3]
0x6fc: Call2 0x80c

0x6fd: Pop(1)
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty(bool, bool)
0x700: PushEmpty(bool)
0x701: Stack[-1] = (bool) 0
0x702: PushEmpty(bool, object)
0x703: Stack[-1] = Stack[-6]
0x704: Call2 0x7e9

0x705: Pop(1)
0x706: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x707: PushEmpty(bool, object)
0x708: Stack[-1] = Stack[-6]
0x709: Call2 0x5ed

0x70a: Pop(1)
0x70b: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70c: Stack[-1] = (bool) 1
0x70d: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70e: @@ IsWeaponHolstered(Stack[-1])
0x70f: Pop(0)
0x710: Pop(0); Push((bool) Stack[-1] == 0)
0x711: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x712: Stack[-4] = (bool) 1
0x713: Return(); Pop(2)

0x714: Stack[-4] = (bool) 0
0x715: Return(); Pop(2)

0x716: PushEmpty()
0x717: PushEmpty(object)
0x718: Stack[-1] = Stack[-2]
0x719: Call2 0x7ec

0x71a: Pop(1)
0x71b: Return(); Pop(0)

0x71c: PushEmpty()
0x71d: PushEmpty(bool, object)
0x71e: Stack[-1] = Stack[-3]
0x71f: Call2 0x5ed

0x720: Pop(1)
0x721: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x722: PushEmpty(object)
0x723: Call2 0x674

0x724: Pop(0)
0x725: Push((float)-0.03)
0x726: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x727: Pop(2)
0x728: Return(); Pop(0)

0x729: PushEmpty(object, object)
0x72a: Push("heal")
0x72b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x72d: Push("player")
0x72e: @ FindActor(Stack[-2], Stack[-1])
0x72f: Pop(1)
0x730: PushEmpty(bool, object)
0x731: Stack[-1] = Stack[-3]
0x732: Call2 0x812

0x733: Stack[-6] = Stack[-2]
0x734: Pop(2)
0x735: Return(); Pop(2)

0x736: Stack[-1] = 0
0x737: Stack[-4] = (bool) 0
0x738: Return(); Pop(2)

0x739: PushEmpty(object, object)
0x73a: Push("heal")
0x73b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x73d: Push("player")
0x73e: @ FindActor(Stack[-2], Stack[-1])
0x73f: Pop(1)
0x740: PushEmpty(object)
0x741: Stack[-1] = Stack[-2]
0x742: Call2 0x815

0x743: Pop(1)
0x744: Stack[-1] = 0
0x745: Return(); Pop(2)

0x746: PushEmpty(string, string)
0x747: Stack[-1] = "idle"
0x748: Push(Stack[-3])
0x749: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x74a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x74b: Stack[-4] = Stack[-1]
0x74c: Return(); Pop(2)

0x74d: PushEmpty(int, bool, int, bool)
0x74e: Stack[-2] = (int) 0
0x74f: Push("all")
0x750: PushEmpty(string, int)
0x751: Stack[-1] = Stack[-5]
0x752: Call2 0x746

0x753: Pop(1)
0x754: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(2)
0x756: Pop(0); Push((bool) Stack[-1] == 0)
0x757: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x758: GOTO 0x75c

0x759: Push((int) 1)
0x75a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x75b: GOTO 0x74f

0x75c: Stack[-5] = Stack[-2]
0x75d: Return(); Pop(4)

0x75e: PushEmpty()
0x75f: PushEmpty(bool)
0x760: Call2 0x89a

0x761: Pop(0)
0x762: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x763: Stack[-2] = (int) 2
0x764: GOTO 0x766

0x765: Stack[-2] = (int) 0
0x766: Return(); Pop(0)

0x767: PushEmpty()
0x768: PushEmpty(object)
0x769: Stack[-1] = Stack[-2]
0x76a: Push(-1, 1); TaskCall(2)
0x76b: Call2 0x26b

0x76c: Pop(-1, 1); TaskReturn
0x76d: Pop(1)
0x76e: Return(); Pop(0)

0x76f: PushEmpty()
0x770: PushEmpty(bool, object)
0x771: Stack[-1] = Stack[-3]
0x772: Call2 0x627

0x773: Pop(1)
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-2] = (int) 2
0x776: GOTO 0x778

0x777: Stack[-2] = (int) 0
0x778: Return(); Pop(0)

0x779: PushEmpty()
0x77a: PushEmpty(object)
0x77b: Stack[-1] = Stack[-2]
0x77c: Push(-1, 3); TaskCall(3)
0x77d: Call2 0x37e

0x77e: Pop(-1, 3); TaskReturn
0x77f: Pop(1)
0x780: Return(); Pop(0)

0x781: PushEmpty()
0x782: PushEmpty(bool, object)
0x783: Stack[-1] = Stack[-4]
0x784: Call2 0x627

0x785: Pop(1)
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-3] = (int) 2
0x788: GOTO 0x78a

0x789: Stack[-3] = (int) 0
0x78a: Return(); Pop(0)

0x78b: PushEmpty()
0x78c: PushEmpty(object)
0x78d: Stack[-1] = Stack[-2]
0x78e: Push(-1, 3); TaskCall(4)
0x78f: Call2 0x47a

0x790: Pop(-1, 3); TaskReturn
0x791: Pop(1)
0x792: Return(); Pop(0)

0x793: PushEmpty(string, bool, string, bool)
0x794: PushEmpty(bool, object, string)
0x795: Stack[-2] = Stack[-9]
0x796: Stack[-1] = "class"
0x797: Call2 0x5f2

0x798: Pop(2)
0x799: Pop(1); Push((bool) Stack[-1] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-8] = (bool) 0
0x79c: Return(); Pop(4)

0x79d: Push("class")
0x79e: @@ GetProperty(Stack[-1], Stack[-3])
0x79f: Pop(1)
0x7a0: Push("rat")
0x7a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a3: Stack[-8] = (bool) 0
0x7a4: Return(); Pop(4)

0x7a5: GOTO 0x7b1

0x7a6: Push("rat_big")
0x7a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a9: Stack[-8] = (bool) 0
0x7aa: Return(); Pop(4)

0x7ab: GOTO 0x7b1

0x7ac: Push("dog")
0x7ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7af: Stack[-8] = (bool) 0
0x7b0: Return(); Pop(4)

0x7b1: @ CanSee(Stack[-1], Stack[-7])
0x7b2: Pop(0)
0x7b3: PushEmpty(bool)
0x7b4: Stack[-1] = (bool) 1
0x7b5: Push(Stack[-2])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b7: PushEmpty(float, object)
0x7b8: Stack[-1] = Stack[-10]
0x7b9: Call2 0x5e5

0x7ba: Pop(1)
0x7bb: Pop(0); Push(Stack[-7] * Stack[-7]);
0x7bc: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7be: Stack[-1] = (bool) 0
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-8] = (bool) 1
0x7c1: Return(); Pop(4)

0x7c2: @ CanSee(Stack[-1], Stack[-6])
0x7c3: Pop(0)
0x7c4: PushEmpty(bool)
0x7c5: Stack[-1] = (bool) 1
0x7c6: Push(Stack[-2])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7c8: PushEmpty(float, object)
0x7c9: Stack[-1] = Stack[-9]
0x7ca: Call2 0x5e5

0x7cb: Pop(1)
0x7cc: Pop(0); Push(Stack[-7] * Stack[-7]);
0x7cd: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: Stack[-1] = (bool) 0
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d1: Stack[-8] = (bool) 1
0x7d2: Return(); Pop(4)

0x7d3: Stack[-8] = (bool) 0
0x7d4: Return(); Pop(4)

0x7d5: PushEmpty()
0x7d6: Stack[-2] = (int) 0
0x7d7: Return(); Pop(0)

0x7d8: PushEmpty()
0x7d9: Return(); Pop(0)

0x7da: PushEmpty()
0x7db: Stack[-3] = (int) 0
0x7dc: Return(); Pop(0)

0x7dd: PushEmpty()
0x7de: Return(); Pop(0)

0x7df: PushEmpty()
0x7e0: Stack[-2] = (int) 2
0x7e1: Return(); Pop(0)

0x7e2: PushEmpty()
0x7e3: PushEmpty(object)
0x7e4: Stack[-1] = Stack[-2]
0x7e5: Call2 0x88c

0x7e6: Pop(1)
0x7e7: Return(); Pop(0)

0x7e8: Return(); Pop(0)

0x7e9: PushEmpty()
0x7ea: Stack[-2] = (bool) 0
0x7eb: Return(); Pop(0)

0x7ec: PushEmpty()
0x7ed: Return(); Pop(0)

0x7ee: PushEmpty(bool, bool)
0x7ef: @ CanSee(Stack[-1], Stack[-3])
0x7f0: Pop(0)
0x7f1: Stack[-4] = (bool) 1
0x7f2: Push(Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f4: PushEmpty(float, object)
0x7f5: Stack[-1] = Stack[-5]
0x7f6: Call2 0x5e5

0x7f7: Pop(1)
0x7f8: Push((int) 4000000)
0x7f9: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7fb: Stack[-4] = (bool) 0
0x7fc: Return(); Pop(2)

0x7fd: PushEmpty()
0x7fe: PushEmpty(object)
0x7ff: Stack[-1] = Stack[-2]
0x800: Push(-1, 3); TaskCall(5)
0x801: Call2 0x53c

0x802: Pop(-1, 3); TaskReturn
0x803: Pop(1)
0x804: Return(); Pop(0)

0x805: PushEmpty()
0x806: PushEmpty(bool, object)
0x807: Stack[-1] = Stack[-3]
0x808: Call2 0x7ee

0x809: Stack[-4] = Stack[-2]
0x80a: Pop(2)
0x80b: Return(); Pop(0)

0x80c: PushEmpty()
0x80d: PushEmpty(object)
0x80e: Stack[-1] = Stack[-2]
0x80f: Call2 0x7fd

0x810: Pop(1)
0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: Stack[-2] = (bool) 0
0x814: Return(); Pop(0)

0x815: PushEmpty()
0x816: Return(); Pop(0)

0x817: PushEmpty(int, int)
0x818: Push("branch")
0x819: @ GetVariable(Stack[-1], Stack[-2])
0x81a: Pop(1)
0x81b: Stack[-3] = Stack[-1]
0x81c: Return(); Pop(2)

0x81d: PushEmpty(object, float, object, float)
0x81e: Push("player")
0x81f: @ FindActor(Stack[-3], Stack[-1])
0x820: Pop(1)
0x821: Pop(0); Push((bool) Stack[-2] == 0)
0x822: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x823: Stack[-5] = (int) 0
0x824: Return(); Pop(4)

0x825: Push("reputation")
0x826: @@ GetProperty(Stack[-1], Stack[-2])
0x827: Pop(1)
0x828: Stack[-5] = Stack[-1]
0x829: Return(); Pop(4)

0x82a: Stack[-2] = 0
0x82b: PushEmpty()
0x82c: PushEmpty(int)
0x82d: Call2 0x817

0x82e: Pop(0)
0x82f: Push((int) 1)
0x830: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x831: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x832: @ WorkWithCorpse(Stack[-1])
0x833: Pop(0)
0x834: GOTO 0x837

0x835: @ Barter(Stack[-1])
0x836: Pop(0)
0x837: Return(); Pop(0)

0x838: PushEmpty(int, int)
0x839: Push((int) 0)
0x83a: @ ClearSubContainer(Stack[-1])
0x83b: Pop(1)
0x83c: Push(Stack[-3])
0x83d: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x83e: PushEmpty(string, int, int, int)
0x83f: Stack[-4] = "rifle_ammo"
0x840: Stack[-3] = (int) 1
0x841: Stack[-2] = (int) 2
0x842: Stack[-1] = (int) 2
0x843: Call2 0x665

0x844: Pop(4)
0x845: PushEmpty(string, int, int, int)
0x846: Stack[-4] = "revolver_ammo"
0x847: Stack[-3] = (int) 1
0x848: Stack[-2] = (int) 2
0x849: Stack[-1] = (int) 2
0x84a: Call2 0x665

0x84b: Pop(4)
0x84c: PushEmpty(string, int, int, int)
0x84d: Stack[-4] = "samopal_ammo"
0x84e: Stack[-3] = (int) 2
0x84f: Stack[-2] = (int) 2
0x850: Stack[-1] = (int) 2
0x851: Call2 0x665

0x852: Pop(4)
0x853: GOTO 0x883

0x854: PushEmpty(string, int, int)
0x855: Stack[-3] = "lockpick"
0x856: Stack[-2] = (int) 1
0x857: Stack[-1] = (int) 4
0x858: Call2 0x65a

0x859: Pop(3)
0x85a: PushEmpty(string, int, int, int)
0x85b: Stack[-4] = "alpha_pills"
0x85c: Stack[-3] = (int) 1
0x85d: Stack[-2] = (int) 2
0x85e: Stack[-1] = (int) 3
0x85f: Call2 0x665

0x860: Pop(4)
0x861: PushEmpty(string, int, int)
0x862: Stack[-3] = "meradorm"
0x863: Stack[-2] = (int) 1
0x864: Stack[-1] = (int) 2
0x865: Call2 0x65a

0x866: Pop(3)
0x867: PushEmpty(string, int, int)
0x868: Stack[-3] = "powder"
0x869: Stack[-2] = (int) 1
0x86a: Stack[-1] = (int) 15
0x86b: Call2 0x65a

0x86c: Pop(3)
0x86d: PushEmpty(int)
0x86e: Call2 0x6b5

0x86f: Stack[-2] = Stack[-1]
0x870: Pop(1)
0x871: Push((int) 4)
0x872: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x874: PushEmpty(string, int, int)
0x875: Stack[-3] = "beta_pills"
0x876: Stack[-2] = (int) 1
0x877: Stack[-1] = (int) 2
0x878: Call2 0x65a

0x879: Pop(3)
0x87a: Push((int) 6)
0x87b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x87d: PushEmpty(string, int, int)
0x87e: Stack[-3] = "gamma_pills"
0x87f: Stack[-2] = (int) 1
0x880: Stack[-1] = (int) 7
0x881: Call2 0x65a

0x882: Pop(3)
0x883: Return(); Pop(2)

0x884: Push(GlobalVars[0])
0x885: Stack[-1] = (bool) 0
0x886: GlobalVars[0] = Stack[-1]; Pop(1)
0x887: PushEmpty(bool)
0x888: Stack[-1] = (bool) 1
0x889: Call2 0x838

0x88a: Pop(1)
0x88b: Return(); Pop(0)

0x88c: PushEmpty(bool, bool)
0x88d: Push(GlobalVars[0])
0x88e: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x88f: @ IsOverrideActive(Stack[-1])
0x890: Pop(0)
0x891: Pop(0); Push((bool) Stack[-1] == 0)
0x892: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x893: PushEmpty(object)
0x894: Stack[-1] = Stack[-4]
0x895: Call2 0x82b

0x896: Pop(1)
0x897: Return(); Pop(2)

0x898: GOTO 0x899

0x899: Return(); Pop(2)

0x89a: PushEmpty(float)
0x89b: Call2 0x81d

0x89c: Pop(0)
0x89d: Push((float)0.4)
0x89e: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x89f: Return(); Pop(0)

0x8a0: PushEmpty()
0x8a1: PushEmpty(bool, object, object, float)
0x8a2: Stack[-3] = Stack[-7]
0x8a3: Stack[-2] = Stack[-6]
0x8a4: Stack[-1] = (float) 700.0
0x8a5: Call2 0x793

0x8a6: Stack[-8] = Stack[-4]
0x8a7: Pop(4)
0x8a8: Return(); Pop(0)

