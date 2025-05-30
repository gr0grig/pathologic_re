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
	alpha_pills
	meradorm
	beta_pills
	monomicin
	lockpick
	rifle_ammo
	revolver_ammo
	samopal_ammo

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
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x5d9 Vars = ()
		EVENT_7 Op = 0x647 Vars = (int)
		EVENT_41 Op = 0x682 Vars = (object)

Events:
EVENT_16 Op = 0x780 Vars = (object, string)
EVENT_41 Op = 0x782 Vars = (object)
EVENT_22 Op = 0x784 Vars = (object, int, float, float)
EVENT_43 Op = 0x786 Vars = (object, int, float, float, cvector, cvector)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x966

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
0x10: Call2 0x70c

0x11: Pop(0)
0x12: Pop(1); Push((bool) Stack[-1] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x14: PushEmpty()
0x15: Call2 0x8aa

0x16: Pop(0)
0x17: Return(); Pop(0)

0x18: PushEmpty(int, int)
0x19: PushEmpty(int, object)
0x1a: Stack[-1] = Stack[-5]
0x1b: Call2 0x8a1

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
0x29: Call2 0x8a4

0x2a: Pop(1)
0x2b: Return(); Pop(2)

0x2c: PushEmpty(int, int)
0x2d: PushEmpty(object)
0x2e: Stack[-1] = Stack[-4]
0x2f: Call2 0x7de

0x30: Pop(1)
0x31: PushEmpty(int, object)
0x32: Stack[-1] = Stack[-5]
0x33: Call2 0x831

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
0x41: Call2 0x83b

0x42: Pop(1)
0x43: Return(); Pop(2)

0x44: PushEmpty(int, int)
0x45: PushEmpty(bool, object, object, bool)
0x46: Stack[-3] = Stack[-9]
0x47: Stack[-2] = Stack[-8]
0x48: Stack[-1] = Stack[-7]
0x49: Call2 0x982

0x4a: Pop(3)
0x4b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x4c: PushEmpty(int, object, bool)
0x4d: Stack[-2] = Stack[-8]
0x4e: Stack[-1] = Stack[-6]
0x4f: Call2 0x843

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
0x5d: Call2 0x84d

0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: PushEmpty(int, int)
0x61: PushEmpty(int, object)
0x62: Stack[-1] = Stack[-5]
0x63: Call2 0x897

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
0x71: Call2 0x89a

0x72: Pop(1)
0x73: Return(); Pop(2)

0x74: PushEmpty(int, int)
0x75: PushEmpty(bool, object, string)
0x76: Stack[-2] = Stack[-7]
0x77: Stack[-1] = Stack[-6]
0x78: Call2 0x788

0x79: Pop(2)
0x7a: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7b: PushEmpty()
0x7c: Call2 0xd3

0x7d: Pop(0)
0x7e: PushEmpty(object, string)
0x7f: Stack[-2] = Stack[-6]
0x80: Stack[-1] = Stack[-5]
0x81: Call2 0x7a8

0x82: Pop(2)
0x83: GOTO 0x98

0x84: PushEmpty(int, string, object)
0x85: Stack[-2] = Stack[-6]
0x86: Stack[-1] = Stack[-7]
0x87: Call2 0x89c

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
0x96: Call2 0x89f

0x97: Pop(2)
0x98: Return(); Pop(2)

0x99: PushEmpty()
0x9a: PushEmpty(bool, string)
0x9b: Stack[-1] = Stack[-3]
0x9c: Call2 0x7eb

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0xd3

0xa1: Pop(0)
0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[-2]
0xa4: Call2 0x7fb

0xa5: Pop(1)
0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[-3]
0xaa: Call2 0x7c1

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xad: PushEmpty()
0xae: Call2 0xd3

0xaf: Pop(0)
0xb0: PushEmpty(object)
0xb1: Stack[-1] = Stack[-2]
0xb2: Call2 0x7d8

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
0xd0: Call2 0x8aa

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
0xe9: Call2 0x782

0xea: Pop(1)
0xeb: Return(); Pop(0)

0xec: PushEmpty(bool, int, bool, int)
0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[-7]
0xef: Call2 0x6e9

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
0xfe: Call2 0x820

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
0x10c: Call2 0x829

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
0x174: Call2 0x8a1

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
0x182: Call2 0x8a4

0x183: Pop(1)
0x184: Return(); Pop(2)

0x185: PushEmpty(int, int)
0x186: PushEmpty(object)
0x187: Stack[-1] = Stack[-4]
0x188: Call2 0x7de

0x189: Pop(1)
0x18a: PushEmpty(int, object)
0x18b: Stack[-1] = Stack[-5]
0x18c: Call2 0x831

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
0x19a: Call2 0x83b

0x19b: Pop(1)
0x19c: Return(); Pop(2)

0x19d: PushEmpty(int, int)
0x19e: PushEmpty(bool, object, object, bool)
0x19f: Stack[-3] = Stack[-9]
0x1a0: Stack[-2] = Stack[-8]
0x1a1: Stack[-1] = Stack[-7]
0x1a2: Call2 0x982

0x1a3: Pop(3)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a5: PushEmpty(int, object, bool)
0x1a6: Stack[-2] = Stack[-8]
0x1a7: Stack[-1] = Stack[-6]
0x1a8: Call2 0x843

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
0x1b6: Call2 0x84d

0x1b7: Pop(1)
0x1b8: Return(); Pop(2)

0x1b9: PushEmpty(int, int)
0x1ba: PushEmpty(int, object)
0x1bb: Stack[-1] = Stack[-5]
0x1bc: Call2 0x897

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
0x1ca: Call2 0x89a

0x1cb: Pop(1)
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty(int, int)
0x1ce: PushEmpty(bool, object, string)
0x1cf: Stack[-2] = Stack[-7]
0x1d0: Stack[-1] = Stack[-6]
0x1d1: Call2 0x788

0x1d2: Pop(2)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call2 0x266

0x1d6: Pop(0)
0x1d7: PushEmpty(object, string)
0x1d8: Stack[-2] = Stack[-6]
0x1d9: Stack[-1] = Stack[-5]
0x1da: Call2 0x7a8

0x1db: Pop(2)
0x1dc: GOTO 0x1f1

0x1dd: PushEmpty(int, string, object)
0x1de: Stack[-2] = Stack[-6]
0x1df: Stack[-1] = Stack[-7]
0x1e0: Call2 0x89c

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
0x1ef: Call2 0x89f

0x1f0: Pop(2)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty()
0x1f3: PushEmpty(bool, string)
0x1f4: Stack[-1] = Stack[-3]
0x1f5: Call2 0x7eb

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f8: PushEmpty()
0x1f9: Call2 0x266

0x1fa: Pop(0)
0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = Stack[-2]
0x1fd: Call2 0x7fb

0x1fe: Pop(1)
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: Call2 0x266

0x202: Pop(0)
0x203: PushEmpty()
0x204: Call2 0x8aa

0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: PushEmpty()
0x208: PushEmpty(bool, object)
0x209: Stack[-1] = Stack[-3]
0x20a: Call2 0x7c1

0x20b: Pop(1)
0x20c: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20d: PushEmpty()
0x20e: Call2 0x266

0x20f: Pop(0)
0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[-2]
0x212: Call2 0x7d8

0x213: Pop(1)
0x214: Return(); Pop(0)

0x215: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x216: @ WaitForAnimEnd()
0x217: Pop(0)
0x218: PushEmpty(bool)
0x219: Call2 0x70c

0x21a: Pop(0)
0x21b: Pop(1); Push((bool) Stack[-1] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Return(); Pop(14)

0x21e: PushEmpty(int)
0x21f: Call2 0x80f

0x220: Stack[-8] = Stack[-1]
0x221: Pop(1)
0x222: Stack[-6] = (int) 0
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: Push((int) 5)
0x226: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(bool)
0x229: Call2 0x70c

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
0x23b: Call2 0x808

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
0x274: Call2 0x6a0

0x275: Stack[-4] = Stack[-2]
0x276: Pop(2)
0x277: PushEmpty(float, cvector, cvector)
0x278: Stack[-2] = Stack[-6]
0x279: Stack[-1] = Stack[-5]
0x27a: Call2 0x766

0x27b: Pop(2)
0x27c: Push((int) 0)
0x27d: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27f: PushEmpty(object)
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call2 0x701

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
0x28c: Call2 0x701

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
0x2a0: Call2 0x711

0x2a1: Pop(1)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty(int, int)
0x2a4: PushEmpty(int, object)
0x2a5: Stack[-1] = Stack[-5]
0x2a6: Call2 0x8a1

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
0x2b4: Call2 0x8a4

0x2b5: Pop(1)
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(int, int)
0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[-4]
0x2ba: Call2 0x7de

0x2bb: Pop(1)
0x2bc: PushEmpty(int, object)
0x2bd: Stack[-1] = Stack[-5]
0x2be: Call2 0x831

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
0x2cc: Call2 0x83b

0x2cd: Pop(1)
0x2ce: Return(); Pop(2)

0x2cf: PushEmpty(int, int)
0x2d0: PushEmpty(bool, object, object, bool)
0x2d1: Stack[-3] = Stack[-9]
0x2d2: Stack[-2] = Stack[-8]
0x2d3: Stack[-1] = Stack[-7]
0x2d4: Call2 0x982

0x2d5: Pop(3)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2d7: PushEmpty(int, object, bool)
0x2d8: Stack[-2] = Stack[-8]
0x2d9: Stack[-1] = Stack[-6]
0x2da: Call2 0x843

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
0x2e8: Call2 0x84d

0x2e9: Pop(1)
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(int, int)
0x2ec: PushEmpty(int, object)
0x2ed: Stack[-1] = Stack[-5]
0x2ee: Call2 0x897

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
0x2fc: Call2 0x89a

0x2fd: Pop(1)
0x2fe: Return(); Pop(2)

0x2ff: PushEmpty(int, int)
0x300: PushEmpty(bool, object, string)
0x301: Stack[-2] = Stack[-7]
0x302: Stack[-1] = Stack[-6]
0x303: Call2 0x788

0x304: Pop(2)
0x305: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x306: PushEmpty()
0x307: Call2 0x332

0x308: Pop(0)
0x309: PushEmpty(object, string)
0x30a: Stack[-2] = Stack[-6]
0x30b: Stack[-1] = Stack[-5]
0x30c: Call2 0x7a8

0x30d: Pop(2)
0x30e: GOTO 0x323

0x30f: PushEmpty(int, string, object)
0x310: Stack[-2] = Stack[-6]
0x311: Stack[-1] = Stack[-7]
0x312: Call2 0x89c

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
0x321: Call2 0x89f

0x322: Pop(2)
0x323: Return(); Pop(2)

0x324: PushEmpty()
0x325: PushEmpty(bool, string)
0x326: Stack[-1] = Stack[-3]
0x327: Call2 0x7eb

0x328: Pop(1)
0x329: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32a: PushEmpty()
0x32b: Call2 0x332

0x32c: Pop(0)
0x32d: PushEmpty(string)
0x32e: Stack[-1] = Stack[-2]
0x32f: Call2 0x7fb

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
0x343: Call2 0x782

0x344: Pop(1)
0x345: Return(); Pop(0)

0x346: PushEmpty(cvector, cvector, cvector, cvector)
0x347: Push((int) 111)
0x348: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Return(); Pop(4)

0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34d: Call2 0x6e9

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
0x359: Call2 0x6a0

0x35a: Stack[-3] = Stack[-2]
0x35b: Pop(2)
0x35c: PushEmpty(float, cvector, cvector)
0x35d: Stack[-2] = Stack[-5]
0x35e: Stack[-1] = Stack[-4]
0x35f: Call2 0x766

0x360: Pop(2)
0x361: Push((float)0.5)
0x362: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x364: PushEmpty(object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x701

0x367: Pop(1)
0x368: Return(); Pop(4)

0x369: PushEmpty()
0x36a: Call2 0x332

0x36b: Pop(0)
0x36c: PushEmpty()
0x36d: Call2 0x8aa

0x36e: Pop(0)
0x36f: Return(); Pop(0)

0x370: PushEmpty()
0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[-3]
0x373: Call2 0x7c1

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x376: PushEmpty()
0x377: Call2 0x332

0x378: Pop(0)
0x379: PushEmpty(object)
0x37a: Stack[-1] = Stack[-2]
0x37b: Call2 0x7d8

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
0x39e: Call2 0x8aa

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
0x3ab: Call2 0x73c

0x3ac: Pop(1)
0x3ad: Push((float)0.75)
0x3ae: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3af: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3b0: Call2 0x73c

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
0x3e1: Call2 0x69b

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
0x3fc: Call2 0x69b

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
0x438: Call2 0x69b

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
0x449: Call2 0x782

0x44a: Pop(1)
0x44b: Return(); Pop(0)

0x44c: PushEmpty(cvector, cvector, cvector, cvector)
0x44d: @ GetDirection(Stack[-2])
0x44e: Pop(0)
0x44f: PushEmpty(cvector, object)
0x450: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x451: Call2 0x6a0

0x452: Stack[-3] = Stack[-2]
0x453: Pop(2)
0x454: PushEmpty(float, cvector, cvector)
0x455: Stack[-2] = Stack[-5]
0x456: Stack[-1] = Stack[-4]
0x457: Call2 0x74b

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
0x466: Call2 0x73c

0x467: Pop(1)
0x468: Push((float)0.75)
0x469: Pop(1); Push(Stack[-8] * Stack[-1]);
0x46a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x46b: Call2 0x73c

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
0x49c: Call2 0x69b

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
0x4b7: Call2 0x69b

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
0x4f3: Call2 0x69b

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
0x504: Call2 0x782

0x505: Pop(1)
0x506: Return(); Pop(0)

0x507: PushEmpty(cvector, cvector, cvector, cvector)
0x508: @ GetDirection(Stack[-2])
0x509: Pop(0)
0x50a: PushEmpty(cvector, object)
0x50b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50c: Call2 0x6a0

0x50d: Stack[-3] = Stack[-2]
0x50e: Pop(2)
0x50f: PushEmpty(float, cvector, cvector)
0x510: Stack[-2] = Stack[-5]
0x511: Stack[-1] = Stack[-4]
0x512: Call2 0x74b

0x513: Pop(2)
0x514: Push((float)-0.34202)
0x515: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x516: Return(); Pop(4)

0x517: PushEmpty()
0x518: Call2 0x5b9

0x519: Pop(0)
0x51a: PushEmpty()
0x51b: Call2 0x8aa

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
0x528: Call2 0x73c

0x529: Pop(1)
0x52a: Push((float)0.75)
0x52b: Pop(1); Push(Stack[-8] * Stack[-1]);
0x52c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x52d: Call2 0x73c

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
0x55e: Call2 0x69b

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
0x579: Call2 0x69b

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
0x5b5: Call2 0x69b

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
0x5c6: Call2 0x782

0x5c7: Pop(1)
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty(cvector, cvector, cvector, cvector)
0x5ca: @ GetDirection(Stack[-2])
0x5cb: Pop(0)
0x5cc: PushEmpty(cvector, object)
0x5cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ce: Call2 0x6a0

0x5cf: Stack[-3] = Stack[-2]
0x5d0: Pop(2)
0x5d1: PushEmpty(float, cvector, cvector)
0x5d2: Stack[-2] = Stack[-5]
0x5d3: Stack[-1] = Stack[-4]
0x5d4: Call2 0x74b

0x5d5: Pop(2)
0x5d6: Push((float)-0.34202)
0x5d7: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5d8: Return(); Pop(4)

0x5d9: PushEmpty()
0x5da: Call2 0x67b

0x5db: Pop(0)
0x5dc: PushEmpty()
0x5dd: Call2 0x8aa

0x5de: Pop(0)
0x5df: Return(); Pop(0)

0x5e0: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x5e1: @ GetPosition(Stack[-6])
0x5e2: Pop(0)
0x5e3: @@ GetPosition(Stack[-5])
0x5e4: Pop(0)
0x5e5: @ GetDirection(Stack[-4])
0x5e6: Pop(0)
0x5e7: PushEmpty(cvector, cvector)
0x5e8: PushEmpty(cvector, cvector)
0x5e9: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x5ea: Call2 0x73c

0x5eb: Pop(1)
0x5ec: Push((float)0.75)
0x5ed: Pop(1); Push(Stack[-8] * Stack[-1]);
0x5ee: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5ef: Call2 0x73c

0x5f0: Stack[-5] = Stack[-2]
0x5f1: Pop(2)
0x5f2: Push((int) 32)
0x5f3: Push((float)7000.0)
0x5f4: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x5f5: Pop(2)
0x5f6: Push((int) 100)
0x5f7: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x5f8: Push((int) 0)
0x5f9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fb: Stack[-1] = (int) 0
0x5fc: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x5fd: Return(); Pop(12)

0x5fe: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x5ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x600: PushEmpty(cvector, float)
0x601: Stack[-1] = (float) 1.74533
0x602: Call2 0x5e0

0x603: Stack[-7] = Stack[-2]
0x604: Pop(2)
0x605: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x606: Push((float)2500.0)
0x607: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x609: PushEmpty(cvector, float)
0x60a: Stack[-1] = (float) 2.61799
0x60b: Call2 0x5e0

0x60c: Stack[-7] = Stack[-2]
0x60d: Pop(2)
0x60e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x60f: Push((float)2500.0)
0x610: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x612: Push("Can't retreat, distance: ")
0x613: Pop(0); Push(Sqrt(Stack[-5]))
0x614: Pop(2); Push(Stack[-2] + Stack[-1]);
0x615: @ Trace(Stack[-1])
0x616: Pop(1)
0x617: Push((float)0.5)
0x618: @ Sleep(Stack[-1])
0x619: Pop(1)
0x61a: Return(); Pop(10)

0x61b: Push(CvectorIndex(Stack[-5], 0))
0x61c: Push(CvectorIndex(Stack[-6], 2))
0x61d: @ Rotate(Stack[-2], Stack[-1])
0x61e: Pop(2)
0x61f: PushEmpty(cvector)
0x620: Call2 0x69b

0x621: Pop(0)
0x622: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x623: Push((int) 120)
0x624: Push((float)0.5)
0x625: @ SetTimer(Stack[-2], Stack[-1])
0x626: Pop(2)
0x627: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x628: Push((int) 1)
0x629: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x62a: Pop(1)
0x62b: Push(Stack[-3])
0x62c: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x62d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: GOTO 0x646

0x630: GOTO 0x644

0x631: PushEmpty(cvector, float)
0x632: Stack[-1] = (float) 2.61799
0x633: Call2 0x5e0

0x634: Stack[-4] = Stack[-2]
0x635: Pop(2)
0x636: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x637: Push((float)2500.0)
0x638: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63a: PushEmpty(cvector)
0x63b: Call2 0x69b

0x63c: Pop(0)
0x63d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x63e: Push((int) 120)
0x63f: Push((float)0.5)
0x640: @ SetTimer(Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: GOTO 0x644

0x643: GOTO 0x646

0x644: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x645: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x646: Return(); Pop(10)

0x647: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x648: Push((int) 120)
0x649: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64b: Return(); Pop(8)

0x64c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x64d: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x64e: @ Stop()
0x64f: Pop(0)
0x650: Push((int) 1)
0x651: @ KillTimer(Stack[-1])
0x652: Pop(1)
0x653: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x654: GOTO 0x67a

0x655: @ GetDirection(Stack[-4])
0x656: Pop(0)
0x657: Push((float)7000.0)
0x658: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x659: Pop(1)
0x65a: PushEmpty(cvector, float)
0x65b: Stack[-1] = (float) 1.74533
0x65c: Call2 0x5e0

0x65d: Stack[-4] = Stack[-2]
0x65e: Pop(2)
0x65f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x660: PushEmpty(bool)
0x661: Stack[-1] = (bool) 0
0x662: Push((float)2500.0)
0x663: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x665: PushEmpty(bool)
0x666: Stack[-1] = (bool) 1
0x667: Pop(0); Push(Stack[-5] * Stack[-5]);
0x668: Push((float)2.25)
0x669: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66a: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66c: PushEmpty(bool)
0x66d: Call2 0x68b

0x66e: Pop(0)
0x66f: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x670: Stack[-1] = (bool) 0
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: Stack[-1] = (bool) 1
0x673: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x674: @ Stop()
0x675: Pop(0)
0x676: PushEmpty(cvector)
0x677: Call2 0x69b

0x678: Pop(0)
0x679: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x67a: Return(); Pop(8)

0x67b: @ Stop()
0x67c: Pop(0)
0x67d: Push((int) 120)
0x67e: @ KillTimer(Stack[-1])
0x67f: Pop(1)
0x680: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x681: Return(); Pop(0)

0x682: PushEmpty()
0x683: PushEmpty()
0x684: Call2 0x67b

0x685: Pop(0)
0x686: PushEmpty(object)
0x687: Stack[-1] = Stack[-2]
0x688: Call2 0x782

0x689: Pop(1)
0x68a: Return(); Pop(0)

0x68b: PushEmpty(cvector, cvector, cvector, cvector)
0x68c: @ GetDirection(Stack[-2])
0x68d: Pop(0)
0x68e: PushEmpty(cvector, object)
0x68f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x690: Call2 0x6a0

0x691: Stack[-3] = Stack[-2]
0x692: Pop(2)
0x693: PushEmpty(float, cvector, cvector)
0x694: Stack[-2] = Stack[-5]
0x695: Stack[-1] = Stack[-4]
0x696: Call2 0x74b

0x697: Pop(2)
0x698: Push((float)-0.34202)
0x699: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x69a: Return(); Pop(4)

0x69b: PushEmpty(cvector, cvector)
0x69c: @ GetPosition(Stack[-1])
0x69d: Pop(0)
0x69e: Stack[-3] = Stack[-1]
0x69f: Return(); Pop(2)

0x6a0: PushEmpty(cvector, cvector, cvector, cvector)
0x6a1: @ GetPosition(Stack[-2])
0x6a2: Pop(0)
0x6a3: @@ GetPosition(Stack[-1])
0x6a4: Pop(0)
0x6a5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6a6: Return(); Pop(4)

0x6a7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6a8: @ GetPosition(Stack[-3])
0x6a9: Pop(0)
0x6aa: @@ GetPosition(Stack[-2])
0x6ab: Pop(0)
0x6ac: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x6ad: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x6ae: Return(); Pop(6)

0x6af: PushEmpty(bool, bool)
0x6b0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6b1: Pop(0)
0x6b2: Stack[-4] = Stack[-1]
0x6b3: Return(); Pop(2)

0x6b4: PushEmpty(bool, bool)
0x6b5: Push("HasProperty")
0x6b6: Push((int) 2)
0x6b7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6b8: Pop(1); Push((bool) Stack[-1] == 0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6ba: Stack[-5] = (bool) 0
0x6bb: Return(); Pop(2)

0x6bc: @@ HasProperty(Stack[-3], Stack[-1])
0x6bd: Pop(0)
0x6be: Stack[-5] = Stack[-1]
0x6bf: Return(); Pop(2)

0x6c0: PushEmpty(bool, bool)
0x6c1: @@ IsDead(Stack[-1])
0x6c2: Pop(0)
0x6c3: Stack[-4] = Stack[-1]
0x6c4: Return(); Pop(2)

0x6c5: PushEmpty(object, object, object, object)
0x6c6: Pop(0); Push((bool) Stack[-5] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c8: Stack[-6] = (bool) 0
0x6c9: Return(); Pop(4)

0x6ca: PushEmpty(bool)
0x6cb: Stack[-1] = (bool) 0
0x6cc: Push("IsDead")
0x6cd: Push((int) 1)
0x6ce: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d0: PushEmpty(bool, object)
0x6d1: Stack[-1] = Stack[-8]
0x6d2: Call2 0x6c0

0x6d3: Pop(1)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: Stack[-1] = (bool) 1
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d7: Stack[-6] = (bool) 0
0x6d8: Return(); Pop(4)

0x6d9: @ GetScene(Stack[-2])
0x6da: Pop(0)
0x6db: Pop(0); Push((bool) Stack[-2] == 0)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: Stack[-6] = (bool) 0
0x6de: Return(); Pop(4)

0x6df: @@ GetScene(Stack[-1])
0x6e0: Pop(0)
0x6e1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e3: Stack[-6] = (bool) 0
0x6e4: Return(); Pop(4)

0x6e5: Stack[-6] = (bool) 1
0x6e6: Return(); Pop(4)

0x6e7: Stack[-1] = 0
0x6e8: Stack[-2] = 0
0x6e9: PushEmpty(int, int)
0x6ea: PushEmpty(bool, object)
0x6eb: Stack[-1] = Stack[-5]
0x6ec: Call2 0x6c5

0x6ed: Pop(1)
0x6ee: Pop(1); Push((bool) Stack[-1] == 0)
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f0: Stack[-4] = (bool) 0
0x6f1: Return(); Pop(2)

0x6f2: PushEmpty(bool, object, string)
0x6f3: Stack[-2] = Stack[-6]
0x6f4: Stack[-1] = "noaccess"
0x6f5: Call2 0x6b4

0x6f6: Pop(2)
0x6f7: Pop(1); Push((bool) Stack[-1] == 0)
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f9: Stack[-4] = (bool) 1
0x6fa: Return(); Pop(2)

0x6fb: Push("noaccess")
0x6fc: @@ GetProperty(Stack[-1], Stack[-2])
0x6fd: Pop(1)
0x6fe: Push((int) 0)
0x6ff: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x700: Return(); Pop(2)

0x701: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x702: @@ GetPosition(Stack[-3])
0x703: Pop(0)
0x704: @ GetPosition(Stack[-2])
0x705: Pop(0)
0x706: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x707: Push(CvectorIndex(Stack[-1], 0))
0x708: Push(CvectorIndex(Stack[-2], 2))
0x709: @ RotateAsync(Stack[-2], Stack[-1])
0x70a: Pop(2)
0x70b: Return(); Pop(6)

0x70c: PushEmpty(bool, bool)
0x70d: @ IsLoaded(Stack[-1])
0x70e: Pop(0)
0x70f: Stack[-3] = Stack[-1]
0x710: Return(); Pop(2)

0x711: PushEmpty(float, cvector, float, cvector)
0x712: @@ GetEyesHeight(Stack[-2])
0x713: Pop(0)
0x714: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x715: Push(CvectorIndex(Stack[-1], 1))
0x716: Stack[-1] = Stack[-3]
0x717: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x718: Push("head")
0x719: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x71a: Pop(1)
0x71b: Return(); Pop(4)

0x71c: PushEmpty(bool, bool)
0x71d: PushEmpty(bool, int, int)
0x71e: Stack[-2] = Stack[-7]
0x71f: Stack[-1] = Stack[-6]
0x720: Call2 0x746

0x721: Pop(2)
0x722: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x723: Push((int) 0)
0x724: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x725: Pop(1)
0x726: Return(); Pop(2)

0x727: PushEmpty(int, bool, int, bool)
0x728: PushEmpty(bool, int, int)
0x729: Stack[-2] = Stack[-10]
0x72a: Stack[-1] = Stack[-9]
0x72b: Call2 0x746

0x72c: Pop(2)
0x72d: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x72e: @ irand(Stack[-2], Stack[-5])
0x72f: Pop(0)
0x730: Push((int) 0)
0x731: Push((int) 1)
0x732: Pop(1); Push(Stack[-4] + Stack[-1]);
0x733: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x734: Pop(2)
0x735: Return(); Pop(4)

0x736: PushEmpty(object, object)
0x737: @ self(Stack[-1])
0x738: Pop(0)
0x739: Stack[-3] = Stack[-1]
0x73a: Return(); Pop(2)

0x73b: Stack[-1] = 0
0x73c: PushEmpty(float, float)
0x73d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x73e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x73f: Push((float)0.0)
0x740: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x742: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x743: Return(); Pop(2)

0x744: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x745: Return(); Pop(2)

0x746: PushEmpty(int, int)
0x747: @ irand(Stack[-1], Stack[-3])
0x748: Pop(0)
0x749: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x74a: Return(); Pop(2)

0x74b: PushEmpty()
0x74c: Pop(0); Push(Stack[-2] | Stack[-1]);
0x74d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x74e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x74f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x750: Pop(1); Push(Sqrt(Stack[-1]))
0x751: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x752: Return(); Pop(0)

0x753: PushEmpty()
0x754: Push(CvectorIndex(Stack[-2], 0))
0x755: Push(CvectorIndex(Stack[-2], 0))
0x756: Pop(2); Push(Stack[-2] * Stack[-1]);
0x757: Push(CvectorIndex(Stack[-3], 2))
0x758: Push(CvectorIndex(Stack[-3], 2))
0x759: Pop(2); Push(Stack[-2] * Stack[-1]);
0x75a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: Push(CvectorIndex(Stack[-1], 0))
0x75e: Push(CvectorIndex(Stack[-2], 0))
0x75f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x760: Push(CvectorIndex(Stack[-2], 2))
0x761: Push(CvectorIndex(Stack[-3], 2))
0x762: Pop(2); Push(Stack[-2] * Stack[-1]);
0x763: Pop(2); Push(Stack[-2] + Stack[-1]);
0x764: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x765: Return(); Pop(0)

0x766: PushEmpty()
0x767: PushEmpty(float, cvector, cvector)
0x768: Stack[-2] = Stack[-5]
0x769: Stack[-1] = Stack[-4]
0x76a: Call2 0x753

0x76b: Pop(2)
0x76c: PushEmpty(float, cvector)
0x76d: Stack[-1] = Stack[-5]
0x76e: Call2 0x75c

0x76f: Pop(1)
0x770: PushEmpty(float, cvector)
0x771: Stack[-1] = Stack[-5]
0x772: Call2 0x75c

0x773: Pop(1)
0x774: Pop(2); Push(Stack[-2] * Stack[-1]);
0x775: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x776: Return(); Pop(0)

0x777: PushEmpty(float, float)
0x778: @ GetGameTime(Stack[-1])
0x779: Pop(0)
0x77a: Push((int) 1)
0x77b: PushEmpty(int)
0x77c: Push((int) 24)
0x77d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x77e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x77f: Return(); Pop(2)

0x780: PushEmpty()
0x781: Return(); Pop(0)

0x782: PushEmpty()
0x783: Return(); Pop(0)

0x784: PushEmpty()
0x785: Return(); Pop(0)

0x786: PushEmpty()
0x787: Return(); Pop(0)

0x788: PushEmpty()
0x789: Push("unholster")
0x78a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x78c: PushEmpty(bool, object)
0x78d: Stack[-1] = Stack[-4]
0x78e: Call2 0x8ab

0x78f: Stack[-5] = Stack[-2]
0x790: Pop(2)
0x791: Return(); Pop(0)

0x792: GOTO 0x7a6

0x793: Push("player_shot")
0x794: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x796: PushEmpty(bool, object)
0x797: Stack[-1] = Stack[-4]
0x798: Call2 0x8b8

0x799: Stack[-5] = Stack[-2]
0x79a: Pop(2)
0x79b: Return(); Pop(0)

0x79c: GOTO 0x7a6

0x79d: Push("battle")
0x79e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a0: PushEmpty(bool, object)
0x7a1: Stack[-1] = Stack[-4]
0x7a2: Call2 0x8cf

0x7a3: Stack[-5] = Stack[-2]
0x7a4: Pop(2)
0x7a5: Return(); Pop(0)

0x7a6: Stack[-3] = (bool) 0
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: Push("unholster")
0x7aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7ac: PushEmpty(object)
0x7ad: Stack[-1] = Stack[-3]
0x7ae: Call2 0x8b0

0x7af: Pop(1)
0x7b0: GOTO 0x7c0

0x7b1: Push("player_shot")
0x7b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b4: PushEmpty(object)
0x7b5: Stack[-1] = Stack[-3]
0x7b6: Call2 0x8c7

0x7b7: Pop(1)
0x7b8: GOTO 0x7c0

0x7b9: Push("battle")
0x7ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bc: PushEmpty(object)
0x7bd: Stack[-1] = Stack[-3]
0x7be: Call2 0x8d6

0x7bf: Pop(1)
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty(bool, bool)
0x7c2: PushEmpty(bool)
0x7c3: Stack[-1] = (bool) 0
0x7c4: PushEmpty(bool, object)
0x7c5: Stack[-1] = Stack[-6]
0x7c6: Call2 0x8ab

0x7c7: Pop(1)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c9: PushEmpty(bool, object)
0x7ca: Stack[-1] = Stack[-6]
0x7cb: Call2 0x6af

0x7cc: Pop(1)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ce: Stack[-1] = (bool) 1
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d0: @@ IsWeaponHolstered(Stack[-1])
0x7d1: Pop(0)
0x7d2: Pop(0); Push((bool) Stack[-1] == 0)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-4] = (bool) 1
0x7d5: Return(); Pop(2)

0x7d6: Stack[-4] = (bool) 0
0x7d7: Return(); Pop(2)

0x7d8: PushEmpty()
0x7d9: PushEmpty(object)
0x7da: Stack[-1] = Stack[-2]
0x7db: Call2 0x8b0

0x7dc: Pop(1)
0x7dd: Return(); Pop(0)

0x7de: PushEmpty()
0x7df: PushEmpty(bool, object)
0x7e0: Stack[-1] = Stack[-3]
0x7e1: Call2 0x6af

0x7e2: Pop(1)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e4: PushEmpty(object)
0x7e5: Call2 0x736

0x7e6: Pop(0)
0x7e7: Push((float)-0.05)
0x7e8: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x7e9: Pop(2)
0x7ea: Return(); Pop(0)

0x7eb: PushEmpty(object, object)
0x7ec: Push("heal")
0x7ed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7ef: Push("player")
0x7f0: @ FindActor(Stack[-2], Stack[-1])
0x7f1: Pop(1)
0x7f2: PushEmpty(bool, object)
0x7f3: Stack[-1] = Stack[-3]
0x7f4: Call2 0x8dc

0x7f5: Stack[-6] = Stack[-2]
0x7f6: Pop(2)
0x7f7: Return(); Pop(2)

0x7f8: Stack[-1] = 0
0x7f9: Stack[-4] = (bool) 0
0x7fa: Return(); Pop(2)

0x7fb: PushEmpty(object, object)
0x7fc: Push("heal")
0x7fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7ff: Push("player")
0x800: @ FindActor(Stack[-2], Stack[-1])
0x801: Pop(1)
0x802: PushEmpty(object)
0x803: Stack[-1] = Stack[-2]
0x804: Call2 0x8df

0x805: Pop(1)
0x806: Stack[-1] = 0
0x807: Return(); Pop(2)

0x808: PushEmpty(string, string)
0x809: Stack[-1] = "idle"
0x80a: Push(Stack[-3])
0x80b: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x80d: Stack[-4] = Stack[-1]
0x80e: Return(); Pop(2)

0x80f: PushEmpty(int, bool, int, bool)
0x810: Stack[-2] = (int) 0
0x811: Push("all")
0x812: PushEmpty(string, int)
0x813: Stack[-1] = Stack[-5]
0x814: Call2 0x808

0x815: Pop(1)
0x816: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x817: Pop(2)
0x818: Pop(0); Push((bool) Stack[-1] == 0)
0x819: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x81a: GOTO 0x81e

0x81b: Push((int) 1)
0x81c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x81d: GOTO 0x811

0x81e: Stack[-5] = Stack[-2]
0x81f: Return(); Pop(4)

0x820: PushEmpty()
0x821: PushEmpty(bool)
0x822: Call2 0x97c

0x823: Pop(0)
0x824: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x825: Stack[-2] = (int) 2
0x826: GOTO 0x828

0x827: Stack[-2] = (int) 0
0x828: Return(); Pop(0)

0x829: PushEmpty()
0x82a: PushEmpty(object)
0x82b: Stack[-1] = Stack[-2]
0x82c: Push(-1, 1); TaskCall(2)
0x82d: Call2 0x26b

0x82e: Pop(-1, 1); TaskReturn
0x82f: Pop(1)
0x830: Return(); Pop(0)

0x831: PushEmpty()
0x832: PushEmpty(bool, object)
0x833: Stack[-1] = Stack[-3]
0x834: Call2 0x6e9

0x835: Pop(1)
0x836: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x837: Stack[-2] = (int) 2
0x838: GOTO 0x83a

0x839: Stack[-2] = (int) 0
0x83a: Return(); Pop(0)

0x83b: PushEmpty()
0x83c: PushEmpty(object)
0x83d: Stack[-1] = Stack[-2]
0x83e: Push(-1, 3); TaskCall(3)
0x83f: Call2 0x37e

0x840: Pop(-1, 3); TaskReturn
0x841: Pop(1)
0x842: Return(); Pop(0)

0x843: PushEmpty()
0x844: PushEmpty(bool, object)
0x845: Stack[-1] = Stack[-4]
0x846: Call2 0x6e9

0x847: Pop(1)
0x848: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x849: Stack[-3] = (int) 2
0x84a: GOTO 0x84c

0x84b: Stack[-3] = (int) 0
0x84c: Return(); Pop(0)

0x84d: PushEmpty()
0x84e: PushEmpty(object)
0x84f: Stack[-1] = Stack[-2]
0x850: Push(-1, 3); TaskCall(4)
0x851: Call2 0x47a

0x852: Pop(-1, 3); TaskReturn
0x853: Pop(1)
0x854: Return(); Pop(0)

0x855: PushEmpty(string, bool, string, bool)
0x856: PushEmpty(bool, object, string)
0x857: Stack[-2] = Stack[-9]
0x858: Stack[-1] = "class"
0x859: Call2 0x6b4

0x85a: Pop(2)
0x85b: Pop(1); Push((bool) Stack[-1] == 0)
0x85c: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85d: Stack[-8] = (bool) 0
0x85e: Return(); Pop(4)

0x85f: Push("class")
0x860: @@ GetProperty(Stack[-1], Stack[-3])
0x861: Pop(1)
0x862: Push("rat")
0x863: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x864: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x865: Stack[-8] = (bool) 0
0x866: Return(); Pop(4)

0x867: GOTO 0x873

0x868: Push("rat_big")
0x869: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86a: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86b: Stack[-8] = (bool) 0
0x86c: Return(); Pop(4)

0x86d: GOTO 0x873

0x86e: Push("dog")
0x86f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x871: Stack[-8] = (bool) 0
0x872: Return(); Pop(4)

0x873: @ CanSee(Stack[-1], Stack[-7])
0x874: Pop(0)
0x875: PushEmpty(bool)
0x876: Stack[-1] = (bool) 1
0x877: Push(Stack[-2])
0x878: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x879: PushEmpty(float, object)
0x87a: Stack[-1] = Stack[-10]
0x87b: Call2 0x6a7

0x87c: Pop(1)
0x87d: Pop(0); Push(Stack[-7] * Stack[-7]);
0x87e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: Stack[-1] = (bool) 0
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-8] = (bool) 1
0x883: Return(); Pop(4)

0x884: @ CanSee(Stack[-1], Stack[-6])
0x885: Pop(0)
0x886: PushEmpty(bool)
0x887: Stack[-1] = (bool) 1
0x888: Push(Stack[-2])
0x889: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x88a: PushEmpty(float, object)
0x88b: Stack[-1] = Stack[-9]
0x88c: Call2 0x6a7

0x88d: Pop(1)
0x88e: Pop(0); Push(Stack[-7] * Stack[-7]);
0x88f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x891: Stack[-1] = (bool) 0
0x892: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x893: Stack[-8] = (bool) 1
0x894: Return(); Pop(4)

0x895: Stack[-8] = (bool) 0
0x896: Return(); Pop(4)

0x897: PushEmpty()
0x898: Stack[-2] = (int) 0
0x899: Return(); Pop(0)

0x89a: PushEmpty()
0x89b: Return(); Pop(0)

0x89c: PushEmpty()
0x89d: Stack[-3] = (int) 0
0x89e: Return(); Pop(0)

0x89f: PushEmpty()
0x8a0: Return(); Pop(0)

0x8a1: PushEmpty()
0x8a2: Stack[-2] = (int) 2
0x8a3: Return(); Pop(0)

0x8a4: PushEmpty()
0x8a5: PushEmpty(object)
0x8a6: Stack[-1] = Stack[-2]
0x8a7: Call2 0x96e

0x8a8: Pop(1)
0x8a9: Return(); Pop(0)

0x8aa: Return(); Pop(0)

0x8ab: PushEmpty(bool, bool)
0x8ac: @ CanSee(Stack[-1], Stack[-3])
0x8ad: Pop(0)
0x8ae: Stack[-4] = Stack[-1]
0x8af: Return(); Pop(2)

0x8b0: PushEmpty()
0x8b1: PushEmpty(object)
0x8b2: Stack[-1] = Stack[-2]
0x8b3: Push(-1, 3); TaskCall(5)
0x8b4: Call2 0x53c

0x8b5: Pop(-1, 3); TaskReturn
0x8b6: Pop(1)
0x8b7: Return(); Pop(0)

0x8b8: PushEmpty(bool, bool)
0x8b9: @ CanSee(Stack[-1], Stack[-3])
0x8ba: Pop(0)
0x8bb: Stack[-4] = (bool) 1
0x8bc: Push(Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8be: PushEmpty(float, object)
0x8bf: Stack[-1] = Stack[-5]
0x8c0: Call2 0x6a7

0x8c1: Pop(1)
0x8c2: Push((int) 4000000)
0x8c3: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c5: Stack[-4] = (bool) 0
0x8c6: Return(); Pop(2)

0x8c7: PushEmpty()
0x8c8: PushEmpty(object)
0x8c9: Stack[-1] = Stack[-2]
0x8ca: Push(-1, 3); TaskCall(6)
0x8cb: Call2 0x5fe

0x8cc: Pop(-1, 3); TaskReturn
0x8cd: Pop(1)
0x8ce: Return(); Pop(0)

0x8cf: PushEmpty()
0x8d0: PushEmpty(bool, object)
0x8d1: Stack[-1] = Stack[-3]
0x8d2: Call2 0x8b8

0x8d3: Stack[-4] = Stack[-2]
0x8d4: Pop(2)
0x8d5: Return(); Pop(0)

0x8d6: PushEmpty()
0x8d7: PushEmpty(object)
0x8d8: Stack[-1] = Stack[-2]
0x8d9: Call2 0x8c7

0x8da: Pop(1)
0x8db: Return(); Pop(0)

0x8dc: PushEmpty()
0x8dd: Stack[-2] = (bool) 0
0x8de: Return(); Pop(0)

0x8df: PushEmpty()
0x8e0: Return(); Pop(0)

0x8e1: PushEmpty(int, int)
0x8e2: Push("branch")
0x8e3: @ GetVariable(Stack[-1], Stack[-2])
0x8e4: Pop(1)
0x8e5: Stack[-3] = Stack[-1]
0x8e6: Return(); Pop(2)

0x8e7: PushEmpty(object, float, object, float)
0x8e8: Push("player")
0x8e9: @ FindActor(Stack[-3], Stack[-1])
0x8ea: Pop(1)
0x8eb: Pop(0); Push((bool) Stack[-2] == 0)
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ed: Stack[-5] = (int) 0
0x8ee: Return(); Pop(4)

0x8ef: Push("reputation")
0x8f0: @@ GetProperty(Stack[-1], Stack[-2])
0x8f1: Pop(1)
0x8f2: Stack[-5] = Stack[-1]
0x8f3: Return(); Pop(4)

0x8f4: Stack[-2] = 0
0x8f5: PushEmpty()
0x8f6: PushEmpty(int)
0x8f7: Call2 0x8e1

0x8f8: Pop(0)
0x8f9: Push((int) 1)
0x8fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8fb: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fc: @ WorkWithCorpse(Stack[-1])
0x8fd: Pop(0)
0x8fe: GOTO 0x901

0x8ff: @ Barter(Stack[-1])
0x900: Pop(0)
0x901: Return(); Pop(0)

0x902: PushEmpty(int, bool, int, int, bool, int)
0x903: Push((int) 0)
0x904: @ ClearSubContainer(Stack[-1])
0x905: Pop(1)
0x906: PushEmpty(int)
0x907: Call2 0x777

0x908: Stack[-2] = Stack[-1]
0x909: Pop(1)
0x90a: Push(Stack[-7])
0x90b: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x90c: PushEmpty(string, int, int, int)
0x90d: Stack[-4] = "alpha_pills"
0x90e: Stack[-3] = (int) 1
0x90f: Stack[-2] = (int) 2
0x910: Stack[-1] = (int) 4
0x911: Call2 0x727

0x912: Pop(4)
0x913: PushEmpty(string, int, int, int)
0x914: Stack[-4] = "meradorm"
0x915: Stack[-3] = (int) 2
0x916: Stack[-2] = (int) 3
0x917: Stack[-1] = (int) 3
0x918: Call2 0x727

0x919: Pop(4)
0x91a: Push((int) 3)
0x91b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x91d: PushEmpty(string, int, int)
0x91e: Stack[-3] = "beta_pills"
0x91f: Stack[-2] = (int) 1
0x920: Stack[-1] = (int) 4
0x921: Call2 0x71c

0x922: Pop(3)
0x923: Push((int) 8)
0x924: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x925: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x926: PushEmpty(string, int, int, int)
0x927: Stack[-4] = "monomicin"
0x928: Stack[-3] = (int) 1
0x929: Stack[-2] = (int) 2
0x92a: Stack[-1] = (int) 2
0x92b: Call2 0x727

0x92c: Pop(4)
0x92d: GOTO 0x937

0x92e: Push((int) 4)
0x92f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x930: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x931: PushEmpty(string, int, int)
0x932: Stack[-3] = "monomicin"
0x933: Stack[-2] = (int) 1
0x934: Stack[-1] = (int) 2
0x935: Call2 0x71c

0x936: Pop(3)
0x937: GOTO 0x965

0x938: PushEmpty(string, int, int)
0x939: Stack[-3] = "lockpick"
0x93a: Stack[-2] = (int) 1
0x93b: Stack[-1] = (int) 4
0x93c: Call2 0x71c

0x93d: Pop(3)
0x93e: PushEmpty(string, int, int)
0x93f: Stack[-3] = "rifle_ammo"
0x940: Stack[-2] = (int) 1
0x941: Stack[-1] = (int) 2
0x942: Call2 0x71c

0x943: Pop(3)
0x944: PushEmpty(string, int, int)
0x945: Stack[-3] = "revolver_ammo"
0x946: Stack[-2] = (int) 1
0x947: Stack[-1] = (int) 2
0x948: Call2 0x71c

0x949: Pop(3)
0x94a: PushEmpty(string, int, int, int)
0x94b: Stack[-4] = "samopal_ammo"
0x94c: Stack[-3] = (int) 1
0x94d: Stack[-2] = (int) 2
0x94e: Stack[-1] = (int) 2
0x94f: Call2 0x727

0x950: Pop(4)
0x951: Push((int) 8)
0x952: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x954: PushEmpty(string, int, int, int)
0x955: Stack[-4] = "monomicin"
0x956: Stack[-3] = (int) 1
0x957: Stack[-2] = (int) 2
0x958: Stack[-1] = (int) 2
0x959: Call2 0x727

0x95a: Pop(4)
0x95b: GOTO 0x965

0x95c: Push((int) 4)
0x95d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x95e: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x95f: PushEmpty(string, int, int)
0x960: Stack[-3] = "monomicin"
0x961: Stack[-2] = (int) 1
0x962: Stack[-1] = (int) 2
0x963: Call2 0x71c

0x964: Pop(3)
0x965: Return(); Pop(6)

0x966: Push(GlobalVars[0])
0x967: Stack[-1] = (bool) 0
0x968: GlobalVars[0] = Stack[-1]; Pop(1)
0x969: PushEmpty(bool)
0x96a: Stack[-1] = (bool) 0
0x96b: Call2 0x902

0x96c: Pop(1)
0x96d: Return(); Pop(0)

0x96e: PushEmpty(bool, bool)
0x96f: Push(GlobalVars[0])
0x970: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x971: @ IsOverrideActive(Stack[-1])
0x972: Pop(0)
0x973: Pop(0); Push((bool) Stack[-1] == 0)
0x974: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x975: PushEmpty(object)
0x976: Stack[-1] = Stack[-4]
0x977: Call2 0x8f5

0x978: Pop(1)
0x979: Return(); Pop(2)

0x97a: GOTO 0x97b

0x97b: Return(); Pop(2)

0x97c: PushEmpty(float)
0x97d: Call2 0x8e7

0x97e: Pop(0)
0x97f: Push((float)0.6)
0x980: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: PushEmpty(bool, object, object, float)
0x984: Stack[-3] = Stack[-7]
0x985: Stack[-2] = Stack[-6]
0x986: Stack[-1] = (float) 700.0
0x987: Call2 0x855

0x988: Stack[-8] = Stack[-4]
0x989: Pop(4)
0x98a: Return(); Pop(0)

