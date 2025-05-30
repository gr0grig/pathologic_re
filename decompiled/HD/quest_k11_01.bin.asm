GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cot_eva
	nodanko
	icot_eva_door
	shouse1_kabak
	noandrei
	warehouse_rubin
	sobor@door1
	cot_maria@door1
	init_kabak
	pt_k11q01_soldier
	GetLocator
	pers_soldat
	k11q01_kabak_soldier.xml
	add
	pt_k11q01_officer
	k11q01_kabak_officer.xml
	init_gun
	k11q01_soldier.xml
	pt_k11q01_agony_officer
	k11q01_officer_agony.xml
	AddStationaryActor
	cure_officer
	player
	GetPosition
	GetDirection
	GetActor
	Remove
	k11q01Cured
	quest_k11_01_cutscene
	cutscene_end
	k11q01_officer.xml
	init_house_petr
	pt_k11q01_andrei
	NPC_Andrei
	k11q01_andrei.xml
	pt_k11q01_danko
	NPC_Bakalavr
	k11q01_danko.xml
	place_burah
	burah_home
	noburah
	boiny
	pt_k11q01_burah
	NPC_Burah
	k11q01_burah.xml
	fail
	completed
	cleanup
	k11q01
	.bin
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	Close
	size
	get
	clear
	klara2_npc_positioner
	init

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	FindActor (2 args)
	RemoveActor (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, cvector, cvector) Params = 0
		EVENT_26 Op = 0x2f Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x16b

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call2 0x16b

0x7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: Push("cot_eva")
0xa: @ GetSceneByName(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Push("nodanko")
0xd: @ Trigger(Stack[-2], Stack[-1])
0xe: Pop(1)
0xf: PushEmpty(string, bool)
0x10: Stack[-2] = "icot_eva_door"
0x11: Stack[-1] = (bool) 0
0x12: Call2 0x1b1

0x13: Pop(2)
0x14: Push("shouse1_kabak")
0x15: @ GetSceneByName(Stack[-2], Stack[-1])
0x16: Pop(1)
0x17: Push("noandrei")
0x18: @ Trigger(Stack[-2], Stack[-1])
0x19: Pop(1)
0x1a: Push("warehouse_rubin")
0x1b: @ GetSceneByName(Stack[-2], Stack[-1])
0x1c: Pop(1)
0x1d: Push("rubin")
0x1e: @ Trigger(Stack[-2], Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(string, bool)
0x21: Stack[-2] = "sobor@door1"
0x22: Stack[-1] = (bool) 0
0x23: Call2 0x1a0

0x24: Pop(2)
0x25: PushEmpty(string, bool)
0x26: Stack[-2] = "cot_maria@door1"
0x27: Stack[-1] = (bool) 1
0x28: Call2 0x1a0

0x29: Pop(2)
0x2a: @ Hold()
0x2b: Pop(0)
0x2c: GOTO 0x2a

0x2d: Return(); Pop(2)

0x2e: Stack[-1] = 0
0x2f: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, bool, cvector, cvector, object, object, object, cvector, object, object, int, object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, bool, cvector, cvector, object, object, object, cvector, object, object, int)
0x30: @ Trace(Stack[-41])
0x31: Pop(0)
0x32: Push("init_kabak")
0x33: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x35: Push("shouse1_kabak")
0x36: @ GetSceneByName(Stack[-21], Stack[-1])
0x37: Pop(1)
0x38: Stack[-19] = (int) 1
0x39: Push("pt_k11q01_soldier")
0x3a: Pop(1); Push(Stack[-1] + Stack[-20]);
0x3b: @@ GetLocator(Stack[-1], Stack[-19], Stack[-18], Stack[-17])
0x3c: Pop(1)
0x3d: Pop(0); Push((bool) Stack[-18] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: GOTO 0x4d

0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-4] = Stack[-25]
0x42: Push("pt_k11q01_soldier")
0x43: Stack[-4] = Stack[-1] + Stack[-25]; Pop(1);
0x44: Stack[-2] = "pers_soldat"
0x45: Stack[-1] = "k11q01_kabak_soldier.xml"
0x46: Call2 0x17c

0x47: Pop(4)
0x48: @@ add(Stack[-1])
0x49: Pop(1)
0x4a: Push((int) 1)
0x4b: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x4c: GOTO 0x39

0x4d: PushEmpty(object, object, string, string, string)
0x4e: Stack[-4] = Stack[-25]
0x4f: Stack[-3] = "pt_k11q01_officer"
0x50: Stack[-2] = "pers_soldat"
0x51: Stack[-1] = "k11q01_kabak_officer.xml"
0x52: Call2 0x17c

0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x54: Pop(5)
0x55: Stack[-20] = 0
0x56: GOTO 0x10b

0x57: Push("init_gun")
0x58: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x5a: @ GetMainOutdoorScene(Stack[-15])
0x5b: Pop(0)
0x5c: Stack[-14] = (int) 1
0x5d: Push("pt_k11q01_soldier")
0x5e: Pop(1); Push(Stack[-1] + Stack[-15]);
0x5f: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12])
0x60: Pop(1)
0x61: Pop(0); Push((bool) Stack[-13] == 0)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x71

0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-4] = Stack[-20]
0x66: Push("pt_k11q01_soldier")
0x67: Stack[-4] = Stack[-1] + Stack[-20]; Pop(1);
0x68: Stack[-2] = "pers_soldat"
0x69: Stack[-1] = "k11q01_soldier.xml"
0x6a: Call2 0x18e

0x6b: Pop(4)
0x6c: @@ add(Stack[-1])
0x6d: Pop(1)
0x6e: Push((int) 1)
0x6f: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x70: GOTO 0x5d

0x71: Push("pt_k11q01_agony_officer")
0x72: @@ GetLocator(Stack[-1], Stack[-11], Stack[-10], Stack[-9])
0x73: Pop(1)
0x74: Push(CVector(0.0, 7.0, 0.0))
0x75: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x76: Push("pers_soldat")
0x77: Push("k11q01_officer_agony.xml")
0x78: Push((bool) 1)
0x79: @@ AddStationaryActor(Stack[-4], Stack[-12], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x7a: Pop(3)
0x7b: Stack[-15] = 0
0x7c: GOTO 0x10b

0x7d: Push("cure_officer")
0x7e: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x80: Push("player")
0x81: @ FindActor(Stack[-8], Stack[-1])
0x82: Pop(1)
0x83: @@ GetPosition(Stack[-8])
0x84: Pop(0)
0x85: @@ GetDirection(Stack[-9])
0x86: Pop(0)
0x87: Push(CvectorIndex(Stack[-9], 1))
0x88: Stack[-1] = (int) 0
0x89: CvectorIndex(Stack[9 + Tasks[-1].StackPointer], 1) = Stack[-1];
0x8a: PushEmpty(cvector, cvector)
0x8b: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x8c: Call2 0x161

0x8d: Stack[9 + Tasks[-1].StackPointer] = Stack[-2]
0x8e: Pop(2)
0x8f: @@ GetActor(Stack[-6])
0x90: Pop(0)
0x91: Push(Stack[-6])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: @ RemoveActor(Stack[-6])
0x94: Pop(0)
0x95: @@ Remove()
0x96: Pop(0)
0x97: Push("k11q01Cured")
0x98: Push((int) 1)
0x99: @ SetVariable(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: PushEmpty(object, string)
0x9c: Stack[-1] = "quest_k11_01_cutscene"
0x9d: Call2 0x171

0x9e: Pop(2)
0x9f: Stack[-6] = 0
0xa0: Stack[-7] = 0
0xa1: GOTO 0x10b

0xa2: Push("cutscene_end")
0xa3: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa5: @ GetMainOutdoorScene(Stack[-5])
0xa6: Pop(0)
0xa7: Push((float)150.0)
0xa8: Pop(1); Push(Stack[9 + StackPtr] * Stack[-1]);
0xa9: Pop(1); Push(Stack[8 + StackPtr] + Stack[-1]);
0xaa: Push(CVector(0.0, 10.0, 0.0))
0xab: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0xac: Pop(0); Push(( -Stack[9 + Tasks[-1].StackPointer])
0xad: Push("pers_soldat")
0xae: Push("k11q01_officer.xml")
0xaf: Push((bool) 1)
0xb0: @@ AddStationaryActor(Stack[-3], Stack[-8], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(4)
0xb2: Stack[-5] = 0
0xb3: GOTO 0x10b

0xb4: Push("init_house_petr")
0xb5: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xb7: Push("house_petr")
0xb8: @ GetSceneByName(Stack[-4], Stack[-1])
0xb9: Pop(1)
0xba: PushEmpty(object, object, string, string, string)
0xbb: Stack[-4] = Stack[-8]
0xbc: Stack[-3] = "pt_k11q01_andrei"
0xbd: Stack[-2] = "NPC_Andrei"
0xbe: Stack[-1] = "k11q01_andrei.xml"
0xbf: Call2 0x17c

0xc0: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0xc1: Pop(5)
0xc2: PushEmpty(object, object, string, string, string)
0xc3: Stack[-4] = Stack[-8]
0xc4: Stack[-3] = "pt_k11q01_danko"
0xc5: Stack[-2] = "NPC_Bakalavr"
0xc6: Stack[-1] = "k11q01_danko.xml"
0xc7: Call2 0x17c

0xc8: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xc9: Pop(5)
0xca: Stack[-3] = 0
0xcb: GOTO 0x10b

0xcc: Push("place_burah")
0xcd: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xcf: Push("burah_home")
0xd0: @ GetSceneByName(Stack[-3], Stack[-1])
0xd1: Pop(1)
0xd2: Push("noburah")
0xd3: @ Trigger(Stack[-3], Stack[-1])
0xd4: Pop(1)
0xd5: Push("boiny")
0xd6: @ GetSceneByName(Stack[-3], Stack[-1])
0xd7: Pop(1)
0xd8: PushEmpty(object, object, string, string, string)
0xd9: Stack[-4] = Stack[-7]
0xda: Stack[-3] = "pt_k11q01_burah"
0xdb: Stack[-2] = "NPC_Burah"
0xdc: Stack[-1] = "k11q01_burah.xml"
0xdd: Call2 0x17c

0xde: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xdf: Pop(5)
0xe0: Stack[-2] = 0
0xe1: GOTO 0x10b

0xe2: Push("fail")
0xe3: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe5: PushEmpty()
0xe6: Call2 0x10c

0xe7: Pop(0)
0xe8: PushEmpty()
0xe9: Call2 0x1fa

0xea: Pop(0)
0xeb: PushEmpty()
0xec: Call2 0x200

0xed: Pop(0)
0xee: GOTO 0x10b

0xef: Push("completed")
0xf0: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf2: PushEmpty()
0xf3: Call2 0x114

0xf4: Pop(0)
0xf5: PushEmpty()
0xf6: Call2 0x1fa

0xf7: Pop(0)
0xf8: PushEmpty()
0xf9: Call2 0x200

0xfa: Pop(0)
0xfb: GOTO 0x10b

0xfc: Push("cleanup")
0xfd: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xff: Push("k11q01")
0x100: @ GetVariable(Stack[-1], Stack[-2])
0x101: Pop(1)
0x102: Push((int) 1000)
0x103: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x105: PushEmpty()
0x106: Call2 0x10c

0x107: Pop(0)
0x108: PushEmpty()
0x109: Call2 0x14c

0x10a: Pop(0)
0x10b: Return(); Pop(40)

0x10c: Push("k11q01")
0x10d: Push((int) -1)
0x10e: @ SetVariable(Stack[-2], Stack[-1])
0x10f: Pop(2)
0x110: PushEmpty()
0x111: Call2 0x11c

0x112: Pop(0)
0x113: Return(); Pop(0)

0x114: Push("k11q01")
0x115: Push((int) 1000)
0x116: @ SetVariable(Stack[-2], Stack[-1])
0x117: Pop(2)
0x118: PushEmpty()
0x119: Call2 0x11c

0x11a: Pop(0)
0x11b: Return(); Pop(0)

0x11c: PushEmpty(object, object)
0x11d: Push("cot_eva")
0x11e: @ GetSceneByName(Stack[-2], Stack[-1])
0x11f: Pop(1)
0x120: Push("danko")
0x121: @ Trigger(Stack[-2], Stack[-1])
0x122: Pop(1)
0x123: Push("shouse1_kabak")
0x124: @ GetSceneByName(Stack[-2], Stack[-1])
0x125: Pop(1)
0x126: Push("andrei")
0x127: @ Trigger(Stack[-2], Stack[-1])
0x128: Pop(1)
0x129: PushEmpty(object, string)
0x12a: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = "cleanup"
0x12c: Call2 0x1e7

0x12d: Pop(2)
0x12e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: Push("cleanup")
0x131: @ Trigger(Stack[-1], Stack[-1])
0x132: Pop(1)
0x133: PushEmpty(object)
0x134: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x135: Call2 0x1d2

0x136: Pop(1)
0x137: Push( Stack[3 + Tasks[-1].StackPointer] )
0x138: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x139: @@ Remove()
0x13a: Pop(0)
0x13b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x13c: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13d: Push("cleanup")
0x13e: @ Trigger(Stack[-5], Stack[-1])
0x13f: Pop(1)
0x140: Push( Stack[6 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: Push("cleanup")
0x143: @ Trigger(Stack[-6], Stack[-1])
0x144: Pop(1)
0x145: Push( Stack[7 + Tasks[-1].StackPointer] )
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: Push("cleanup")
0x148: @ Trigger(Stack[-7], Stack[-1])
0x149: Pop(1)
0x14a: Return(); Pop(2)

0x14b: Stack[-1] = 0
0x14c: EventDisable(26)
0x14d: PushEmpty(string, bool)
0x14e: Stack[-2] = "cot_maria@door1"
0x14f: Stack[-1] = (bool) 0
0x150: Call2 0x1a0

0x151: Pop(2)
0x152: PushEmpty()
0x153: Call2 0x209

0x154: Pop(0)
0x155: PushEmpty(object)
0x156: Call2 0x15b

0x157: Pop(0)
0x158: @ RemoveActor(Stack[-1])
0x159: Pop(1)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(object, object)
0x15c: @ self(Stack[-1])
0x15d: Pop(0)
0x15e: Stack[-3] = Stack[-1]
0x15f: Return(); Pop(2)

0x160: Stack[-1] = 0
0x161: PushEmpty(float, float)
0x162: Pop(0); Push(Stack[-3] | Stack[-3]);
0x163: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x164: Push((float)0.0)
0x165: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x167: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x168: Return(); Pop(2)

0x169: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x16a: Return(); Pop(2)

0x16b: PushEmpty(object, object)
0x16c: @ CreateObjectVector(Stack[-1])
0x16d: Pop(0)
0x16e: Stack[-3] = Stack[-1]
0x16f: Return(); Pop(2)

0x170: Stack[-1] = 0
0x171: PushEmpty(object, object, object, object)
0x172: @ GetMainOutdoorScene(Stack[-2])
0x173: Pop(0)
0x174: Push(".bin")
0x175: Pop(1); Push(Stack[-6] + Stack[-1]);
0x176: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x177: Pop(1)
0x178: Stack[-6] = Stack[-1]
0x179: Return(); Pop(4)

0x17a: Stack[-1] = 0
0x17b: Stack[-2] = 0
0x17c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x17d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x17e: Pop(0)
0x17f: Pop(0); Push((bool) Stack[-4] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x181: Push("Locator ")
0x182: Pop(1); Push(Stack[-1] + Stack[-12]);
0x183: Push(" doesn't exist")
0x184: Pop(2); Push(Stack[-2] + Stack[-1]);
0x185: @ Trace(Stack[-1])
0x186: Pop(1)
0x187: Stack[-1] = 0
0x188: GOTO 0x18b

0x189: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x18a: Pop(0)
0x18b: Stack[-13] = Stack[-1]
0x18c: Return(); Pop(8)

0x18d: Stack[-1] = 0
0x18e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x18f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x190: Pop(0)
0x191: Pop(0); Push((bool) Stack[-4] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x193: Push("Locator ")
0x194: Pop(1); Push(Stack[-1] + Stack[-12]);
0x195: Push(" doesn't exist")
0x196: Pop(2); Push(Stack[-2] + Stack[-1]);
0x197: @ Trace(Stack[-1])
0x198: Pop(1)
0x199: Stack[-1] = 0
0x19a: GOTO 0x19d

0x19b: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x19c: Pop(0)
0x19d: Stack[-13] = Stack[-1]
0x19e: Return(); Pop(8)

0x19f: Stack[-1] = 0
0x1a0: PushEmpty(object, object)
0x1a1: @ FindActor(Stack[-1], Stack[-4])
0x1a2: Pop(0)
0x1a3: Pop(0); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a5: Push("Door ")
0x1a6: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1a7: Push(" not found")
0x1a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a9: @ Trace(Stack[-1])
0x1aa: Pop(1)
0x1ab: GOTO 0x1af

0x1ac: Push("locked")
0x1ad: @@ SetProperty(Stack[-1], Stack[-4])
0x1ae: Pop(1)
0x1af: Return(); Pop(2)

0x1b0: Stack[-1] = 0
0x1b1: PushEmpty(object, object)
0x1b2: @ FindActor(Stack[-1], Stack[-4])
0x1b3: Pop(0)
0x1b4: Pop(0); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b6: Push("Door ")
0x1b7: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1b8: Push(" not found")
0x1b9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ba: @ Trace(Stack[-1])
0x1bb: Pop(1)
0x1bc: GOTO 0x1c4

0x1bd: Push(Stack[-3])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bf: @@ Close()
0x1c0: Pop(0)
0x1c1: Push("locked")
0x1c2: @@ SetProperty(Stack[-1], Stack[-4])
0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = 0
0x1c6: PushEmpty(object, object)
0x1c7: @ FindActor(Stack[-1], Stack[-4])
0x1c8: Pop(0)
0x1c9: Pop(0); Push((bool) Stack[-1] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-5] = (bool) 0
0x1cc: Return(); Pop(2)

0x1cd: @ Trigger(Stack[-1], Stack[-3])
0x1ce: Pop(0)
0x1cf: Stack[-5] = (bool) 1
0x1d0: Return(); Pop(2)

0x1d1: Stack[-1] = 0
0x1d2: PushEmpty(int, int, object, int, int, object)
0x1d3: Push(Stack[-7])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d5: @@ size(Stack[-3])
0x1d6: Pop(0)
0x1d7: Stack[-2] = (int) 0
0x1d8: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1da: @@ get(Stack[-1], Stack[-2])
0x1db: Pop(0)
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: @@ Remove()
0x1df: Pop(0)
0x1e0: Stack[-1] = 0
0x1e1: Push((int) 1)
0x1e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1d8

0x1e4: @@ clear()
0x1e5: Pop(0)
0x1e6: Return(); Pop(6)

0x1e7: PushEmpty(int, int, object, int, int, object)
0x1e8: Push(Stack[-8])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ea: @@ size(Stack[-3])
0x1eb: Pop(0)
0x1ec: Stack[-2] = (int) 0
0x1ed: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ef: @@ get(Stack[-1], Stack[-2])
0x1f0: Pop(0)
0x1f1: Push(Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: @ Trigger(Stack[-1], Stack[-7])
0x1f4: Pop(0)
0x1f5: Stack[-1] = 0
0x1f6: Push((int) 1)
0x1f7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1f8: GOTO 0x1ed

0x1f9: Return(); Pop(6)

0x1fa: PushEmpty(bool, string, string)
0x1fb: Stack[-2] = "klara2_npc_positioner"
0x1fc: Stack[-1] = "init"
0x1fd: Call2 0x1c6

0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: PushEmpty(object, object)
0x201: Push("burah_home")
0x202: @ GetSceneByName(Stack[-2], Stack[-1])
0x203: Pop(1)
0x204: Push("noburah")
0x205: @ Trigger(Stack[-2], Stack[-1])
0x206: Pop(1)
0x207: Return(); Pop(2)

0x208: Stack[-1] = 0
0x209: PushEmpty(object, object)
0x20a: Push("burah_home")
0x20b: @ GetSceneByName(Stack[-2], Stack[-1])
0x20c: Pop(1)
0x20d: Push("burah")
0x20e: @ Trigger(Stack[-2], Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(2)

0x211: Stack[-1] = 0
