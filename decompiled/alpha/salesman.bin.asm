GlobalVarCount = 5
	G_VAR_0 int 
	G_VAR_1 int 
	G_VAR_2 int 
	G_VAR_3 int 
	G_VAR_4 int 

Strings:
	all
	idle
	clothes
	weapon
	food
	medcine
	other
	load salesman
	Updating salesman
	GetPosition
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetEyesHeight
	Scalpel
	AddItem
	Knife
	Hammer
	revolver_ammo
	rifle_ammo
	ognemet_ammo
	Revolver
	Rifle
	bottle_weapon
	glove
	drapery
	balahon
	mask
	cloak_repel
	raincoat_repel
	halfboot_repel
	tihohody
	glove_disp
	boot_army
	glove_army
	alpha_pills
	tvirin
	bandage
	tourniquet
	beta_pills
	neomicin
	novocaine
	black_vaccine
	etorfin
	meradorm
	gamma_pills
	delta_pills
	monomicin
	morfin
	packet
	blue_vaccine
	feromicin
	lemon
	rusk
	dried_fish
	egg
	vegetables
	milk
	dried_meat
	smoked_meat
	fresh_fish
	fresh_meat
	bread
	bottle_water
	funduk
	peanut
	walnut
	hook
	needle
	kerosene

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	DoTrade (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	GetProperty (2 args)
	Trace (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	GetDirection (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetScene (1 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	IsOverrideActive (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	self (1 args)
	GetGameTime (1 args)
	GetInvItemByName (2 args)
	irand (2 args)
	ClearSubContainer (1 args)

RunOp = 0x73
RunTask = 2

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (bool) Params = 1
		EVENT_11 Op = 0x15 Vars = (int)
	GTASK_2 Vars = (object, float, int) Params = 0
		EVENT_5 Op = 0x81 Vars = ()
		EVENT_6 Op = 0x96 Vars = ()
		EVENT_1 Op = 0xad Vars = (object)
		EVENT_0 Op = 0xc5 Vars = (object)
		EVENT_10 Op = 0xcb Vars = (object)
		EVENT_7 Op = 0xd1 Vars = (int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: @ DoTrade()
0x8: Pop(0)
0x9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xa: @ WaitForAnimEnd()
0xb: Pop(0)
0xc: Push("all")
0xd: Push("idle")
0xe: @ PlayAnimation(Stack[-2], Stack[-1])
0xf: Pop(2)
0x10: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: Return(); Pop(0)

0x13: GOTO 0xa

0x14: Return(); Pop(0)

0x15: PushEmpty()
0x16: @ StopAnimation()
0x17: Pop(0)
0x18: @ StopTrade()
0x19: Pop(0)
0x1a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b: Return(); Pop(0)

0x1c: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x1d: PushEmpty(bool, object, string)
0x1e: PushEmpty(object)
0x1f: Call 0x19c

0x20: Stack[-3] = Stack[-1]
0x21: Pop(1)
0x22: Stack[-1] = "clothes"
0x23: Call 0x10b

0x24: Pop(2)
0x25: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x26: Push("clothes")
0x27: @ GetProperty(Stack[-1], Stack[-6])
0x28: Pop(1)
0x29: GOTO 0x2b

0x2a: Stack[-5] = (int) 0
0x2b: PushEmpty(bool, object, string)
0x2c: PushEmpty(object)
0x2d: Call 0x19c

0x2e: Stack[-3] = Stack[-1]
0x2f: Pop(1)
0x30: Stack[-1] = "weapon"
0x31: Call 0x10b

0x32: Pop(2)
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: Push("weapon")
0x35: @ GetProperty(Stack[-1], Stack[-5])
0x36: Pop(1)
0x37: GOTO 0x39

0x38: Stack[-4] = (int) 0
0x39: PushEmpty(bool, object, string)
0x3a: PushEmpty(object)
0x3b: Call 0x19c

0x3c: Stack[-3] = Stack[-1]
0x3d: Pop(1)
0x3e: Stack[-1] = "food"
0x3f: Call 0x10b

0x40: Pop(2)
0x41: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x42: Push("food")
0x43: @ GetProperty(Stack[-1], Stack[-4])
0x44: Pop(1)
0x45: GOTO 0x47

0x46: Stack[-3] = (int) 0
0x47: PushEmpty(bool, object, string)
0x48: PushEmpty(object)
0x49: Call 0x19c

0x4a: Stack[-3] = Stack[-1]
0x4b: Pop(1)
0x4c: Stack[-1] = "medcine"
0x4d: Call 0x10b

0x4e: Pop(2)
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: Push("medcine")
0x51: @ GetProperty(Stack[-1], Stack[-3])
0x52: Pop(1)
0x53: GOTO 0x55

0x54: Stack[-2] = (int) 0
0x55: PushEmpty(bool, object, string)
0x56: PushEmpty(object)
0x57: Call 0x19c

0x58: Stack[-3] = Stack[-1]
0x59: Pop(1)
0x5a: Stack[-1] = "other"
0x5b: Call 0x10b

0x5c: Pop(2)
0x5d: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5e: Push("other")
0x5f: @ GetProperty(Stack[-1], Stack[-2])
0x60: Pop(1)
0x61: GOTO 0x63

0x62: Stack[-1] = (int) 0
0x63: Push(GlobalVars[0])
0x64: Stack[-1] = Stack[-6]
0x65: GlobalVars[0] = Stack[-1]; Pop(1)
0x66: Push(GlobalVars[1])
0x67: Stack[-1] = Stack[-5]
0x68: GlobalVars[1] = Stack[-1]; Pop(1)
0x69: Push(GlobalVars[2])
0x6a: Stack[-1] = Stack[-4]
0x6b: GlobalVars[2] = Stack[-1]; Pop(1)
0x6c: Push(GlobalVars[3])
0x6d: Stack[-1] = Stack[-3]
0x6e: GlobalVars[3] = Stack[-1]; Pop(1)
0x6f: Push(GlobalVars[4])
0x70: Stack[-1] = Stack[-2]
0x71: GlobalVars[4] = Stack[-1]; Pop(1)
0x72: Return(); Pop(10)

0x73: PushEmpty()
0x74: Call 0x1c

0x75: Pop(0)
0x76: PushEmpty(int)
0x77: Call 0x1c6

0x78: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x79: Pop(1)
0x7a: PushEmpty()
0x7b: Call 0x506

0x7c: Pop(0)
0x7d: PushEmpty()
0x7e: Call 0x99

0x7f: Pop(0)
0x80: Return(); Pop(0)

0x81: Push("load salesman")
0x82: @ Trace(Stack[-1])
0x83: Pop(1)
0x84: PushEmpty(int)
0x85: Call 0x1c6

0x86: Pop(0)
0x87: Pop(1); Push((bool) Stack[-1] != Stack[2 + Tasks[-1].StackPointer])
0x88: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x89: Push("Updating salesman")
0x8a: @ Trace(Stack[-1])
0x8b: Pop(1)
0x8c: PushEmpty(int)
0x8d: Call 0x1c6

0x8e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8f: Pop(1)
0x90: PushEmpty()
0x91: Call 0x506

0x92: Pop(0)
0x93: @ StopGroup0()
0x94: Pop(0)
0x95: Return(); Pop(0)

0x96: @ Hold()
0x97: Pop(0)
0x98: Return(); Pop(0)

0x99: PushEmpty(bool)
0x9a: Call 0x163

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9e: PushEmpty()
0x9f: Push(-0, 0); TaskCall(0)
0xa0: Call 0x0

0xa1: Pop(-0, 0); TaskReturn
0xa2: Pop(0)
0xa3: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xa4: Stack[0 + Tasks[-1].StackPointer] = 0
0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: GOTO 0xa5

0xac: Return(); Pop(0)

0xad: PushEmpty(bool, bool)
0xae: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(2)

0xb1: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb2: Pop(0)
0xb3: Pop(0); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(2)

0xb6: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xb7: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xb8: PushEmpty(object)
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call 0x158

0xbb: Pop(1)
0xbc: Push((int) 111)
0xbd: Push((float)0.2)
0xbe: @ SetTimer(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: Push((int) 112)
0xc1: Push((float)3.0)
0xc2: @ SetTimer(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: Return(); Pop(2)

0xc5: PushEmpty()
0xc6: PushEmpty(object)
0xc7: Stack[-1] = Stack[-2]
0xc8: Call 0x550

0xc9: Pop(1)
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: PushEmpty(object)
0xcd: Stack[-1] = Stack[-2]
0xce: Call 0x158

0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: PushEmpty(cvector, cvector, cvector, cvector)
0xd2: Push((int) 111)
0xd3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call 0x140

0xd8: Pop(1)
0xd9: Pop(1); Push((bool) Stack[-1] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdb: Push((int) 112)
0xdc: @ KillTimer(Stack[-1])
0xdd: Pop(1)
0xde: Push((int) 111)
0xdf: @ KillTimer(Stack[-1])
0xe0: Pop(1)
0xe1: Stack[0 + Tasks[-1].StackPointer] = 0
0xe2: Return(); Pop(4)

0xe3: @ GetDirection(Stack[-2])
0xe4: Pop(0)
0xe5: PushEmpty(cvector, object)
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call 0x104

0xe8: Stack[-3] = Stack[-2]
0xe9: Pop(2)
0xea: PushEmpty(float, cvector, cvector)
0xeb: Stack[-2] = Stack[-5]
0xec: Stack[-1] = Stack[-4]
0xed: Call 0x1b5

0xee: Pop(2)
0xef: Push((float)0.76604)
0xf0: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call 0x158

0xf5: Pop(1)
0xf6: Return(); Pop(4)

0xf7: Push((int) 112)
0xf8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfa: Push((int) 112)
0xfb: @ KillTimer(Stack[-1])
0xfc: Pop(1)
0xfd: Push((int) 111)
0xfe: @ KillTimer(Stack[-1])
0xff: Pop(1)
0x100: Stack[0 + Tasks[-1].StackPointer] = 0
0x101: @ ResetAAS()
0x102: Pop(0)
0x103: Return(); Pop(4)

0x104: PushEmpty(cvector, cvector, cvector, cvector)
0x105: @ GetPosition(Stack[-2])
0x106: Pop(0)
0x107: @@ GetPosition(Stack[-1])
0x108: Pop(0)
0x109: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x10a: Return(); Pop(4)

0x10b: PushEmpty(bool, bool)
0x10c: Push("HasProperty")
0x10d: Push((int) 2)
0x10e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x10f: Pop(1); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: Stack[-5] = (bool) 0
0x112: Return(); Pop(2)

0x113: @@ HasProperty(Stack[-3], Stack[-1])
0x114: Pop(0)
0x115: Stack[-5] = Stack[-1]
0x116: Return(); Pop(2)

0x117: PushEmpty(bool, bool)
0x118: @@ IsDead(Stack[-1])
0x119: Pop(0)
0x11a: Stack[-4] = Stack[-1]
0x11b: Return(); Pop(2)

0x11c: PushEmpty(object, object, object, object)
0x11d: Pop(0); Push((bool) Stack[-5] == 0)
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-6] = (bool) 0
0x120: Return(); Pop(4)

0x121: PushEmpty(bool)
0x122: Stack[-1] = (bool) 0
0x123: Push("IsDead")
0x124: Push((int) 1)
0x125: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x126: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[-8]
0x129: Call 0x117

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-1] = (bool) 1
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-6] = (bool) 0
0x12f: Return(); Pop(4)

0x130: @ GetScene(Stack[-2])
0x131: Pop(0)
0x132: Pop(0); Push((bool) Stack[-2] == 0)
0x133: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x134: Stack[-6] = (bool) 0
0x135: Return(); Pop(4)

0x136: @@ GetScene(Stack[-1])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: Stack[-6] = (bool) 0
0x13b: Return(); Pop(4)

0x13c: Stack[-6] = (bool) 1
0x13d: Return(); Pop(4)

0x13e: Stack[-1] = 0
0x13f: Stack[-2] = 0
0x140: PushEmpty(int, int)
0x141: PushEmpty(bool, object)
0x142: Stack[-1] = Stack[-5]
0x143: Call 0x11c

0x144: Pop(1)
0x145: Pop(1); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: Stack[-4] = (bool) 0
0x148: Return(); Pop(2)

0x149: PushEmpty(bool, object, string)
0x14a: Stack[-2] = Stack[-6]
0x14b: Stack[-1] = "noaccess"
0x14c: Call 0x10b

0x14d: Pop(2)
0x14e: Pop(1); Push((bool) Stack[-1] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x150: Stack[-4] = (bool) 1
0x151: Return(); Pop(2)

0x152: Push("noaccess")
0x153: @@ GetProperty(Stack[-1], Stack[-2])
0x154: Pop(1)
0x155: Push((int) 0)
0x156: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x157: Return(); Pop(2)

0x158: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x159: @@ GetPosition(Stack[-3])
0x15a: Pop(0)
0x15b: @ GetPosition(Stack[-2])
0x15c: Pop(0)
0x15d: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x15e: Push(CvectorIndex(Stack[-1], 0))
0x15f: Push(CvectorIndex(Stack[-2], 2))
0x160: @ RotateAsync(Stack[-2], Stack[-1])
0x161: Pop(2)
0x162: Return(); Pop(6)

0x163: PushEmpty(bool, bool)
0x164: @ IsLoaded(Stack[-1])
0x165: Pop(0)
0x166: Stack[-3] = Stack[-1]
0x167: Return(); Pop(2)

0x168: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x169: @@ GetPosition(Stack[-7])
0x16a: Pop(0)
0x16b: @@ GetEyesHeight(Stack[-8])
0x16c: Pop(0)
0x16d: Push(CvectorIndex(Stack[-7], 1))
0x16e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x16f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x170: @ GetPosition(Stack[-6])
0x171: Pop(0)
0x172: @ GetEyesHeight(Stack[-8])
0x173: Pop(0)
0x174: Push(CvectorIndex(Stack[-6], 1))
0x175: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x176: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x177: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x178: Push(CvectorIndex(Stack[-5], 1))
0x179: Stack[-1] = (int) 0
0x17a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x17b: Pop(0); Push(Stack[-5] | Stack[-5]);
0x17c: Pop(1); Push(Sqrt(Stack[-1]))
0x17d: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x17e: Stack[-4] = -Stack[-5]; Pop(0);
0x17f: Push((int) 70)
0x180: Pop(1); Push(Stack[-6] * Stack[-1]);
0x181: Push(CVector(0.0, 10.0, 0.0))
0x182: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x183: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x184: @ IsOverrideActive(Stack[-1])
0x185: Pop(0)
0x186: Push(Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: Stack[-18] = (bool) 0
0x189: Return(); Pop(16)

0x18a: @ StopWorld()
0x18b: Pop(0)
0x18c: @ CameraTransit(Stack[-2], Stack[-4])
0x18d: Pop(0)
0x18e: Push(CvectorIndex(Stack[-3], 0))
0x18f: Push(CvectorIndex(Stack[-4], 2))
0x190: @ Rotate(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: @ CameraWaitForPlayFinish()
0x193: Pop(0)
0x194: @ ResumeWorld()
0x195: Pop(0)
0x196: Stack[-18] = (bool) 1
0x197: Return(); Pop(16)

0x198: PushEmpty()
0x199: @ CameraSwitchToNormal()
0x19a: Pop(0)
0x19b: Return(); Pop(0)

0x19c: PushEmpty(object, object)
0x19d: @ self(Stack[-1])
0x19e: Pop(0)
0x19f: Stack[-3] = Stack[-1]
0x1a0: Return(); Pop(2)

0x1a1: Stack[-1] = 0
0x1a2: PushEmpty()
0x1a3: Push(CvectorIndex(Stack[-2], 0))
0x1a4: Push(CvectorIndex(Stack[-2], 0))
0x1a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1a6: Push(CvectorIndex(Stack[-3], 2))
0x1a7: Push(CvectorIndex(Stack[-3], 2))
0x1a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1a9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: Push(CvectorIndex(Stack[-1], 0))
0x1ad: Push(CvectorIndex(Stack[-2], 0))
0x1ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1af: Push(CvectorIndex(Stack[-2], 2))
0x1b0: Push(CvectorIndex(Stack[-3], 2))
0x1b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1b2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b3: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty()
0x1b6: PushEmpty(float, cvector, cvector)
0x1b7: Stack[-2] = Stack[-5]
0x1b8: Stack[-1] = Stack[-4]
0x1b9: Call 0x1a2

0x1ba: Pop(2)
0x1bb: PushEmpty(float, cvector)
0x1bc: Stack[-1] = Stack[-5]
0x1bd: Call 0x1ab

0x1be: Pop(1)
0x1bf: PushEmpty(float, cvector)
0x1c0: Stack[-1] = Stack[-5]
0x1c1: Call 0x1ab

0x1c2: Pop(1)
0x1c3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1c4: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(float, float)
0x1c7: @ GetGameTime(Stack[-1])
0x1c8: Pop(0)
0x1c9: Push((int) 1)
0x1ca: PushEmpty(int)
0x1cb: Push((int) 24)
0x1cc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1cd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1ce: Return(); Pop(2)

0x1cf: PushEmpty(int, int)
0x1d0: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1d1: Pop(0)
0x1d2: Stack[-4] = Stack[-1]
0x1d3: Return(); Pop(2)

0x1d4: PushEmpty()
0x1d5: Push((int) 0)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d8: PushEmpty(bool, object, int)
0x1d9: Stack[-2] = Stack[-6]
0x1da: Stack[-1] = Stack[-5]
0x1db: Call 0x207

0x1dc: Stack[-7] = Stack[-3]
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: GOTO 0x200

0x1e0: Push((int) 1)
0x1e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e3: PushEmpty(bool, object, int)
0x1e4: Stack[-2] = Stack[-6]
0x1e5: Stack[-1] = Stack[-5]
0x1e6: Call 0x290

0x1e7: Stack[-7] = Stack[-3]
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: GOTO 0x200

0x1eb: Push((int) 2)
0x1ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ee: PushEmpty(bool, object, int)
0x1ef: Stack[-2] = Stack[-6]
0x1f0: Stack[-1] = Stack[-5]
0x1f1: Call 0x32b

0x1f2: Stack[-7] = Stack[-3]
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: GOTO 0x200

0x1f6: Push((int) 3)
0x1f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f9: PushEmpty(bool, object, int)
0x1fa: Stack[-2] = Stack[-6]
0x1fb: Stack[-1] = Stack[-5]
0x1fc: Call 0x411

0x1fd: Stack[-7] = Stack[-3]
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: PushEmpty(bool, object, int)
0x201: Stack[-2] = Stack[-6]
0x202: Stack[-1] = Stack[-5]
0x203: Call 0x4da

0x204: Stack[-7] = Stack[-3]
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: PushEmpty(bool, int, int, int, int, int, int, bool, int, int, int, int, int, int)
0x208: Push((int) 3)
0x209: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-17] = (bool) 1
0x20c: Return(); Pop(14)

0x20d: Push((int) 2)
0x20e: Pop(1); Push((bool) Stack[-16] >= Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x210: Push((int) 3)
0x211: @ irand(Stack[-7], Stack[-1])
0x212: Pop(1)
0x213: Push((int) 0)
0x214: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x216: PushEmpty(int, string)
0x217: Stack[-1] = "Scalpel"
0x218: Call 0x1cf

0x219: Pop(1)
0x21a: Push((int) 0)
0x21b: Push((int) 1)
0x21c: @@ AddItem(Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: GOTO 0x233

0x21f: Push((int) 1)
0x220: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x222: PushEmpty(int, string)
0x223: Stack[-1] = "Knife"
0x224: Call 0x1cf

0x225: Pop(1)
0x226: Push((int) 0)
0x227: Push((int) 1)
0x228: @@ AddItem(Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: GOTO 0x233

0x22b: PushEmpty(int, string)
0x22c: Stack[-1] = "Hammer"
0x22d: Call 0x1cf

0x22e: Pop(1)
0x22f: Push((int) 0)
0x230: Push((int) 1)
0x231: @@ AddItem(Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Push((int) 5)
0x234: Pop(1); Push((bool) Stack[-16] >= Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x236: Push((int) 4)
0x237: @ irand(Stack[-6], Stack[-1])
0x238: Pop(1)
0x239: Push((int) 0)
0x23a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23c: Push((int) 4)
0x23d: @ irand(Stack[-5], Stack[-1])
0x23e: Pop(1)
0x23f: Push((int) 1)
0x240: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x241: PushEmpty(int, string)
0x242: Stack[-1] = "revolver_ammo"
0x243: Call 0x1cf

0x244: Pop(1)
0x245: Push((int) 0)
0x246: @@ AddItem(Stack[-9], Stack[-2], Stack[-1], Stack[-6])
0x247: Pop(2)
0x248: GOTO 0x271

0x249: Push((int) 1)
0x24a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24c: Push((int) 4)
0x24d: @ irand(Stack[-4], Stack[-1])
0x24e: Pop(1)
0x24f: Push((int) 1)
0x250: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x251: PushEmpty(int, string)
0x252: Stack[-1] = "rifle_ammo"
0x253: Call 0x1cf

0x254: Pop(1)
0x255: Push((int) 0)
0x256: @@ AddItem(Stack[-9], Stack[-2], Stack[-1], Stack[-5])
0x257: Pop(2)
0x258: GOTO 0x271

0x259: Push((int) 2)
0x25a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25c: Push((int) 50)
0x25d: @ irand(Stack[-3], Stack[-1])
0x25e: Pop(1)
0x25f: Push((int) 1)
0x260: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x261: PushEmpty(int, string)
0x262: Stack[-1] = "ognemet_ammo"
0x263: Call 0x1cf

0x264: Pop(1)
0x265: Push((int) 0)
0x266: @@ AddItem(Stack[-9], Stack[-2], Stack[-1], Stack[-4])
0x267: Pop(2)
0x268: GOTO 0x271

0x269: PushEmpty(int, string)
0x26a: Stack[-1] = "Revolver"
0x26b: Call 0x1cf

0x26c: Pop(1)
0x26d: Push((int) 0)
0x26e: Push((int) 1)
0x26f: @@ AddItem(Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Push((int) 7)
0x272: Pop(1); Push((bool) Stack[-16] >= Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x274: Push((int) 8)
0x275: @ irand(Stack[-2], Stack[-1])
0x276: Pop(1)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27a: PushEmpty(int, string)
0x27b: Stack[-1] = "Rifle"
0x27c: Call 0x1cf

0x27d: Pop(1)
0x27e: Push((int) 0)
0x27f: Push((int) 1)
0x280: @@ AddItem(Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: GOTO 0x28e

0x283: Push((int) 1)
0x284: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x286: PushEmpty(int, string)
0x287: Stack[-1] = "bottle_weapon"
0x288: Call 0x1cf

0x289: Pop(1)
0x28a: Push((int) 0)
0x28b: Push((int) 1)
0x28c: @@ AddItem(Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: Stack[-17] = (bool) 1
0x28f: Return(); Pop(14)

0x290: PushEmpty(bool, int, int, int, bool, int, int, int)
0x291: Push((int) 2)
0x292: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-11] = (bool) 1
0x295: Return(); Pop(8)

0x296: Push((int) 2)
0x297: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x299: Push((int) 3)
0x29a: @ irand(Stack[-4], Stack[-1])
0x29b: Pop(1)
0x29c: Push((int) 0)
0x29d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x29f: PushEmpty(int, string)
0x2a0: Stack[-1] = "glove"
0x2a1: Call 0x1cf

0x2a2: Pop(1)
0x2a3: Push((int) 0)
0x2a4: Push((int) 1)
0x2a5: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: GOTO 0x2bc

0x2a8: Push((int) 1)
0x2a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2ab: PushEmpty(int, string)
0x2ac: Stack[-1] = "drapery"
0x2ad: Call 0x1cf

0x2ae: Pop(1)
0x2af: Push((int) 0)
0x2b0: Push((int) 1)
0x2b1: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: GOTO 0x2bc

0x2b4: PushEmpty(int, string)
0x2b5: Stack[-1] = "balahon"
0x2b6: Call 0x1cf

0x2b7: Pop(1)
0x2b8: Push((int) 0)
0x2b9: Push((int) 1)
0x2ba: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2bb: Pop(3)
0x2bc: Push((int) 4)
0x2bd: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x2bf: Push((int) 7)
0x2c0: @ irand(Stack[-3], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push((int) 0)
0x2c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c5: PushEmpty(int, string)
0x2c6: Stack[-1] = "mask"
0x2c7: Call 0x1cf

0x2c8: Pop(1)
0x2c9: Push((int) 0)
0x2ca: Push((int) 1)
0x2cb: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(3)
0x2cd: GOTO 0x2e5

0x2ce: Push((int) 1)
0x2cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d1: PushEmpty(int, string)
0x2d2: Stack[-1] = "cloak_repel"
0x2d3: Call 0x1cf

0x2d4: Pop(1)
0x2d5: Push((int) 0)
0x2d6: Push((int) 1)
0x2d7: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: GOTO 0x2e5

0x2da: Push((int) 2)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2dd: PushEmpty(int, string)
0x2de: Stack[-1] = "raincoat_repel"
0x2df: Call 0x1cf

0x2e0: Pop(1)
0x2e1: Push((int) 0)
0x2e2: Push((int) 1)
0x2e3: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Push((int) 3)
0x2e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e8: PushEmpty(int, string)
0x2e9: Stack[-1] = "halfboot_repel"
0x2ea: Call 0x1cf

0x2eb: Pop(1)
0x2ec: Push((int) 0)
0x2ed: Push((int) 1)
0x2ee: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Push((int) 4)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f3: PushEmpty(int, string)
0x2f4: Stack[-1] = "boot_repel"
0x2f5: Call 0x1cf

0x2f6: Pop(1)
0x2f7: Push((int) 0)
0x2f8: Push((int) 1)
0x2f9: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: Push((int) 5)
0x2fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2fe: PushEmpty(int, string)
0x2ff: Stack[-1] = "tihohody"
0x300: Call 0x1cf

0x301: Pop(1)
0x302: Push((int) 0)
0x303: Push((int) 1)
0x304: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: GOTO 0x30f

0x307: PushEmpty(int, string)
0x308: Stack[-1] = "glove_disp"
0x309: Call 0x1cf

0x30a: Pop(1)
0x30b: Push((int) 0)
0x30c: Push((int) 1)
0x30d: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: Push((int) 9)
0x310: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x312: Push((int) 2)
0x313: @ irand(Stack[-2], Stack[-1])
0x314: Pop(1)
0x315: Push((int) 0)
0x316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x318: PushEmpty(int, string)
0x319: Stack[-1] = "boot_army"
0x31a: Call 0x1cf

0x31b: Pop(1)
0x31c: Push((int) 0)
0x31d: Push((int) 1)
0x31e: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: GOTO 0x329

0x321: PushEmpty(int, string)
0x322: Stack[-1] = "glove_army"
0x323: Call 0x1cf

0x324: Pop(1)
0x325: Push((int) 0)
0x326: Push((int) 1)
0x327: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x328: Pop(3)
0x329: Stack[-11] = (bool) 1
0x32a: Return(); Pop(8)

0x32b: PushEmpty(bool, int, int, int, bool, int, int, int)
0x32c: Push((int) 2)
0x32d: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-11] = (bool) 1
0x330: Return(); Pop(8)

0x331: Push((int) 2)
0x332: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x334: Push((int) 4)
0x335: @ irand(Stack[-4], Stack[-1])
0x336: Pop(1)
0x337: Push((int) 0)
0x338: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33a: PushEmpty(int, string)
0x33b: Stack[-1] = "alpha_pills"
0x33c: Call 0x1cf

0x33d: Pop(1)
0x33e: Push((int) 0)
0x33f: Push((int) 1)
0x340: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: GOTO 0x363

0x343: Push((int) 1)
0x344: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x346: PushEmpty(int, string)
0x347: Stack[-1] = "tvirin"
0x348: Call 0x1cf

0x349: Pop(1)
0x34a: Push((int) 0)
0x34b: Push((int) 1)
0x34c: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: GOTO 0x363

0x34f: Push((int) 2)
0x350: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x352: PushEmpty(int, string)
0x353: Stack[-1] = "bandage"
0x354: Call 0x1cf

0x355: Pop(1)
0x356: Push((int) 0)
0x357: Push((int) 1)
0x358: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: GOTO 0x363

0x35b: PushEmpty(int, string)
0x35c: Stack[-1] = "tourniquet"
0x35d: Call 0x1cf

0x35e: Pop(1)
0x35f: Push((int) 0)
0x360: Push((int) 1)
0x361: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Push((int) 4)
0x364: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x366: Push((int) 6)
0x367: @ irand(Stack[-3], Stack[-1])
0x368: Pop(1)
0x369: Push((int) 0)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36c: PushEmpty(int, string)
0x36d: Stack[-1] = "beta_pills"
0x36e: Call 0x1cf

0x36f: Pop(1)
0x370: Push((int) 0)
0x371: Push((int) 1)
0x372: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: GOTO 0x3ad

0x375: Push((int) 1)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x378: PushEmpty(int, string)
0x379: Stack[-1] = "neomicin"
0x37a: Call 0x1cf

0x37b: Pop(1)
0x37c: Push((int) 0)
0x37d: Push((int) 1)
0x37e: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: GOTO 0x3ad

0x381: Push((int) 2)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x384: PushEmpty(int, string)
0x385: Stack[-1] = "novocaine"
0x386: Call 0x1cf

0x387: Pop(1)
0x388: Push((int) 0)
0x389: Push((int) 1)
0x38a: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: GOTO 0x3ad

0x38d: Push((int) 3)
0x38e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x390: PushEmpty(int, string)
0x391: Stack[-1] = "black_vaccine"
0x392: Call 0x1cf

0x393: Pop(1)
0x394: Push((int) 0)
0x395: Push((int) 1)
0x396: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: GOTO 0x3ad

0x399: Push((int) 4)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39c: PushEmpty(int, string)
0x39d: Stack[-1] = "etorfin"
0x39e: Call 0x1cf

0x39f: Pop(1)
0x3a0: Push((int) 0)
0x3a1: Push((int) 1)
0x3a2: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: GOTO 0x3ad

0x3a5: PushEmpty(int, string)
0x3a6: Stack[-1] = "meradorm"
0x3a7: Call 0x1cf

0x3a8: Pop(1)
0x3a9: Push((int) 0)
0x3aa: Push((int) 1)
0x3ab: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Push((int) 5)
0x3ae: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x3b0: Push((int) 8)
0x3b1: @ irand(Stack[-2], Stack[-1])
0x3b2: Pop(1)
0x3b3: Push((int) 0)
0x3b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b6: PushEmpty(int, string)
0x3b7: Stack[-1] = "gamma_pills"
0x3b8: Call 0x1cf

0x3b9: Pop(1)
0x3ba: Push((int) 0)
0x3bb: Push((int) 1)
0x3bc: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: GOTO 0x40f

0x3bf: Push((int) 1)
0x3c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c2: PushEmpty(int, string)
0x3c3: Stack[-1] = "delta_pills"
0x3c4: Call 0x1cf

0x3c5: Pop(1)
0x3c6: Push((int) 0)
0x3c7: Push((int) 1)
0x3c8: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: GOTO 0x40f

0x3cb: Push((int) 2)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3ce: PushEmpty(int, string)
0x3cf: Stack[-1] = "monomicin"
0x3d0: Call 0x1cf

0x3d1: Pop(1)
0x3d2: Push((int) 0)
0x3d3: Push((int) 1)
0x3d4: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: GOTO 0x40f

0x3d7: Push((int) 3)
0x3d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3da: PushEmpty(int, string)
0x3db: Stack[-1] = "morfin"
0x3dc: Call 0x1cf

0x3dd: Pop(1)
0x3de: Push((int) 0)
0x3df: Push((int) 1)
0x3e0: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: GOTO 0x40f

0x3e3: Push((int) 4)
0x3e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e6: PushEmpty(int, string)
0x3e7: Stack[-1] = "packet"
0x3e8: Call 0x1cf

0x3e9: Pop(1)
0x3ea: Push((int) 0)
0x3eb: Push((int) 1)
0x3ec: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: GOTO 0x40f

0x3ef: Push((int) 5)
0x3f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f2: PushEmpty(int, string)
0x3f3: Stack[-1] = "blue_vaccine"
0x3f4: Call 0x1cf

0x3f5: Pop(1)
0x3f6: Push((int) 0)
0x3f7: Push((int) 1)
0x3f8: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: GOTO 0x40f

0x3fb: Push((int) 6)
0x3fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3fe: PushEmpty(int, string)
0x3ff: Stack[-1] = "etorfin"
0x400: Call 0x1cf

0x401: Pop(1)
0x402: Push((int) 0)
0x403: Push((int) 1)
0x404: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: GOTO 0x40f

0x407: PushEmpty(int, string)
0x408: Stack[-1] = "feromicin"
0x409: Call 0x1cf

0x40a: Pop(1)
0x40b: Push((int) 0)
0x40c: Push((int) 1)
0x40d: @@ AddItem(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(3)
0x40f: Stack[-11] = (bool) 1
0x410: Return(); Pop(8)

0x411: PushEmpty(bool, int, int, bool, int, int)
0x412: Push((int) 3)
0x413: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-1] = (int) 2
0x416: GOTO 0x427

0x417: Push((int) 5)
0x418: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41a: Stack[-1] = (int) 3
0x41b: GOTO 0x427

0x41c: Push((int) 7)
0x41d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41f: Stack[-1] = (int) 3
0x420: GOTO 0x427

0x421: Push((int) 7)
0x422: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-1] = (int) 4
0x425: GOTO 0x427

0x426: Stack[-1] = (int) 5
0x427: @ irand(Stack[-2], Stack[-1])
0x428: Pop(0)
0x429: Pop(0); Push((bool) Stack[-2] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42b: PushEmpty(int, string)
0x42c: Stack[-1] = "lemon"
0x42d: Call 0x1cf

0x42e: Pop(1)
0x42f: Push((int) 0)
0x430: Push((int) 1)
0x431: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: @ irand(Stack[-2], Stack[-1])
0x434: Pop(0)
0x435: Pop(0); Push((bool) Stack[-2] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x437: PushEmpty(int, string)
0x438: Stack[-1] = "rusk"
0x439: Call 0x1cf

0x43a: Pop(1)
0x43b: Push((int) 0)
0x43c: Push((int) 1)
0x43d: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: @ irand(Stack[-2], Stack[-1])
0x440: Pop(0)
0x441: Pop(0); Push((bool) Stack[-2] == 0)
0x442: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x443: PushEmpty(int, string)
0x444: Stack[-1] = "dried_fish"
0x445: Call 0x1cf

0x446: Pop(1)
0x447: Push((int) 0)
0x448: Push((int) 1)
0x449: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: @ irand(Stack[-2], Stack[-1])
0x44c: Pop(0)
0x44d: Pop(0); Push((bool) Stack[-2] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x44f: PushEmpty(int, string)
0x450: Stack[-1] = "egg"
0x451: Call 0x1cf

0x452: Pop(1)
0x453: Push((int) 0)
0x454: Push((int) 1)
0x455: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x456: Pop(3)
0x457: @ irand(Stack[-2], Stack[-1])
0x458: Pop(0)
0x459: Pop(0); Push((bool) Stack[-2] == 0)
0x45a: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45b: PushEmpty(int, string)
0x45c: Stack[-1] = "vegetables"
0x45d: Call 0x1cf

0x45e: Pop(1)
0x45f: Push((int) 0)
0x460: Push((int) 1)
0x461: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: @ irand(Stack[-2], Stack[-1])
0x464: Pop(0)
0x465: Pop(0); Push((bool) Stack[-2] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x467: PushEmpty(int, string)
0x468: Stack[-1] = "milk"
0x469: Call 0x1cf

0x46a: Pop(1)
0x46b: Push((int) 0)
0x46c: Push((int) 1)
0x46d: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: @ irand(Stack[-2], Stack[-1])
0x470: Pop(0)
0x471: Pop(0); Push((bool) Stack[-2] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x473: PushEmpty(int, string)
0x474: Stack[-1] = "dried_meat"
0x475: Call 0x1cf

0x476: Pop(1)
0x477: Push((int) 0)
0x478: Push((int) 1)
0x479: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x47a: Pop(3)
0x47b: @ irand(Stack[-2], Stack[-1])
0x47c: Pop(0)
0x47d: Pop(0); Push((bool) Stack[-2] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x47f: PushEmpty(int, string)
0x480: Stack[-1] = "smoked_meat"
0x481: Call 0x1cf

0x482: Pop(1)
0x483: Push((int) 0)
0x484: Push((int) 1)
0x485: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: @ irand(Stack[-2], Stack[-1])
0x488: Pop(0)
0x489: Pop(0); Push((bool) Stack[-2] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48b: PushEmpty(int, string)
0x48c: Stack[-1] = "fresh_fish"
0x48d: Call 0x1cf

0x48e: Pop(1)
0x48f: Push((int) 0)
0x490: Push((int) 1)
0x491: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: @ irand(Stack[-2], Stack[-1])
0x494: Pop(0)
0x495: Pop(0); Push((bool) Stack[-2] == 0)
0x496: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x497: PushEmpty(int, string)
0x498: Stack[-1] = "fresh_meat"
0x499: Call 0x1cf

0x49a: Pop(1)
0x49b: Push((int) 0)
0x49c: Push((int) 1)
0x49d: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: @ irand(Stack[-2], Stack[-1])
0x4a0: Pop(0)
0x4a1: Pop(0); Push((bool) Stack[-2] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a3: PushEmpty(int, string)
0x4a4: Stack[-1] = "bread"
0x4a5: Call 0x1cf

0x4a6: Pop(1)
0x4a7: Push((int) 0)
0x4a8: Push((int) 1)
0x4a9: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: PushEmpty(int, string)
0x4ac: Stack[-1] = "bottle_water"
0x4ad: Call 0x1cf

0x4ae: Pop(1)
0x4af: Push((int) 0)
0x4b0: Push((int) 1)
0x4b1: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Push((int) 20)
0x4b4: @ irand(Stack[-3], Stack[-1])
0x4b5: Pop(1)
0x4b6: Push((int) 0)
0x4b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b9: PushEmpty(int, string)
0x4ba: Stack[-1] = "funduk"
0x4bb: Call 0x1cf

0x4bc: Pop(1)
0x4bd: Push((int) 0)
0x4be: Push((int) 1)
0x4bf: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: GOTO 0x4cd

0x4c2: Push((int) 1)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c5: PushEmpty(int, string)
0x4c6: Stack[-1] = "peanut"
0x4c7: Call 0x1cf

0x4c8: Pop(1)
0x4c9: Push((int) 0)
0x4ca: Push((int) 1)
0x4cb: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Push((int) 2)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d0: PushEmpty(int, string)
0x4d1: Stack[-1] = "walnut"
0x4d2: Call 0x1cf

0x4d3: Pop(1)
0x4d4: Push((int) 0)
0x4d5: Push((int) 1)
0x4d6: @@ AddItem(Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Stack[-9] = (bool) 1
0x4d9: Return(); Pop(6)

0x4da: PushEmpty(bool, int, bool, int)
0x4db: Push((int) 5)
0x4dc: @ irand(Stack[-2], Stack[-1])
0x4dd: Pop(1)
0x4de: Push((int) 0)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e1: PushEmpty(int, string)
0x4e2: Stack[-1] = "hook"
0x4e3: Call 0x1cf

0x4e4: Pop(1)
0x4e5: Push((int) 0)
0x4e6: Push((int) 1)
0x4e7: @@ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: Push((int) 5)
0x4ea: @ irand(Stack[-2], Stack[-1])
0x4eb: Pop(1)
0x4ec: Push((int) 0)
0x4ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4ef: PushEmpty(int, string)
0x4f0: Stack[-1] = "needle"
0x4f1: Call 0x1cf

0x4f2: Pop(1)
0x4f3: Push((int) 0)
0x4f4: Push((int) 1)
0x4f5: @@ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x4f6: Pop(3)
0x4f7: Push((int) 100)
0x4f8: @ irand(Stack[-2], Stack[-1])
0x4f9: Pop(1)
0x4fa: Push((int) 0)
0x4fb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4fc: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4fd: PushEmpty(int, string)
0x4fe: Stack[-1] = "kerosene"
0x4ff: Call 0x1cf

0x500: Pop(1)
0x501: Push((int) 0)
0x502: @@ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x503: Pop(2)
0x504: Stack[-7] = (bool) 1
0x505: Return(); Pop(4)

0x506: PushEmpty(int, int)
0x507: PushEmpty(int)
0x508: Call 0x1c6

0x509: Stack[-2] = Stack[-1]
0x50a: Pop(1)
0x50b: Push((int) 0)
0x50c: @ ClearSubContainer(Stack[-1])
0x50d: Pop(1)
0x50e: Push(GlobalVars[0])
0x50f: Push((int) 0)
0x510: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x512: PushEmpty(bool, object, int, int)
0x513: PushEmpty(object)
0x514: Call 0x19c

0x515: Stack[-4] = Stack[-1]
0x516: Pop(1)
0x517: Stack[-2] = Stack[-5]
0x518: Stack[-1] = (int) 1
0x519: Call 0x1d4

0x51a: Pop(4)
0x51b: Push(GlobalVars[1])
0x51c: Push((int) 0)
0x51d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x51f: PushEmpty(bool, object, int, int)
0x520: PushEmpty(object)
0x521: Call 0x19c

0x522: Stack[-4] = Stack[-1]
0x523: Pop(1)
0x524: Stack[-2] = Stack[-5]
0x525: Stack[-1] = (int) 0
0x526: Call 0x1d4

0x527: Pop(4)
0x528: Push(GlobalVars[2])
0x529: Push((int) 0)
0x52a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x52c: PushEmpty(bool, object, int, int)
0x52d: PushEmpty(object)
0x52e: Call 0x19c

0x52f: Stack[-4] = Stack[-1]
0x530: Pop(1)
0x531: Stack[-2] = Stack[-5]
0x532: Stack[-1] = (int) 3
0x533: Call 0x1d4

0x534: Pop(4)
0x535: Push(GlobalVars[3])
0x536: Push((int) 0)
0x537: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x539: PushEmpty(bool, object, int, int)
0x53a: PushEmpty(object)
0x53b: Call 0x19c

0x53c: Stack[-4] = Stack[-1]
0x53d: Pop(1)
0x53e: Stack[-2] = Stack[-5]
0x53f: Stack[-1] = (int) 2
0x540: Call 0x1d4

0x541: Pop(4)
0x542: Push(GlobalVars[4])
0x543: Push((int) 0)
0x544: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x545: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x546: PushEmpty(bool, object, int, int)
0x547: PushEmpty(object)
0x548: Call 0x19c

0x549: Stack[-4] = Stack[-1]
0x54a: Pop(1)
0x54b: Stack[-2] = Stack[-5]
0x54c: Stack[-1] = (int) 4
0x54d: Call 0x1d4

0x54e: Pop(4)
0x54f: Return(); Pop(2)

0x550: PushEmpty()
0x551: PushEmpty(bool, object)
0x552: Stack[-1] = Stack[-3]
0x553: Call 0x168

0x554: Pop(1)
0x555: Pop(1); Push((bool) Stack[-1] == 0)
0x556: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x557: Return(); Pop(0)

0x558: PushEmpty(object)
0x559: Stack[-1] = Stack[-2]
0x55a: Push(-1, 1); TaskCall(1)
0x55b: Call 0x6

0x55c: Pop(-1, 1); TaskReturn
0x55d: Pop(1)
0x55e: PushEmpty(object)
0x55f: Stack[-1] = Stack[-2]
0x560: Call 0x198

0x561: Pop(1)
0x562: Return(); Pop(0)

