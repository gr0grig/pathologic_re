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
	cure_officer
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
	AddStationaryActor
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
	RemoveActor (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x2f Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x14c

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call2 0x14c

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
0x12: Call2 0x1a5

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
0x23: Call2 0x194

0x24: Pop(2)
0x25: PushEmpty(string, bool)
0x26: Stack[-2] = "cot_maria@door1"
0x27: Stack[-1] = (bool) 1
0x28: Call2 0x194

0x29: Pop(2)
0x2a: @ Hold()
0x2b: Pop(0)
0x2c: GOTO 0x2a

0x2d: Return(); Pop(2)

0x2e: Stack[-1] = 0
0x2f: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, object, object, object, object, int, object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, object, object, object, object, int)
0x30: @ Trace(Stack[-31])
0x31: Pop(0)
0x32: Push("init_kabak")
0x33: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x35: Push("shouse1_kabak")
0x36: @ GetSceneByName(Stack[-16], Stack[-1])
0x37: Pop(1)
0x38: Stack[-14] = (int) 1
0x39: Push("pt_k11q01_soldier")
0x3a: Pop(1); Push(Stack[-1] + Stack[-15]);
0x3b: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12])
0x3c: Pop(1)
0x3d: Pop(0); Push((bool) Stack[-13] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: GOTO 0x4d

0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-4] = Stack[-20]
0x42: Push("pt_k11q01_soldier")
0x43: Stack[-4] = Stack[-1] + Stack[-20]; Pop(1);
0x44: Stack[-2] = "pers_soldat"
0x45: Stack[-1] = "k11q01_kabak_soldier.xml"
0x46: Call2 0x15d

0x47: Pop(4)
0x48: @@ add(Stack[-1])
0x49: Pop(1)
0x4a: Push((int) 1)
0x4b: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x4c: GOTO 0x39

0x4d: PushEmpty(object, object, string, string, string)
0x4e: Stack[-4] = Stack[-20]
0x4f: Stack[-3] = "pt_k11q01_officer"
0x50: Stack[-2] = "pers_soldat"
0x51: Stack[-1] = "k11q01_kabak_officer.xml"
0x52: Call2 0x15d

0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x54: Pop(5)
0x55: Stack[-15] = 0
0x56: GOTO 0xf6

0x57: Push("init_gun")
0x58: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x5a: @ GetMainOutdoorScene(Stack[-10])
0x5b: Pop(0)
0x5c: Stack[-9] = (int) 1
0x5d: Push("pt_k11q01_soldier")
0x5e: Pop(1); Push(Stack[-1] + Stack[-10]);
0x5f: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x60: Pop(1)
0x61: Pop(0); Push((bool) Stack[-8] == 0)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x71

0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-4] = Stack[-15]
0x66: Push("pt_k11q01_soldier")
0x67: Stack[-4] = Stack[-1] + Stack[-15]; Pop(1);
0x68: Stack[-2] = "pers_soldat"
0x69: Stack[-1] = "k11q01_soldier.xml"
0x6a: Call2 0x16f

0x6b: Pop(4)
0x6c: @@ add(Stack[-1])
0x6d: Pop(1)
0x6e: Push((int) 1)
0x6f: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x70: GOTO 0x5d

0x71: PushEmpty(object, object, string, string, string)
0x72: Stack[-4] = Stack[-15]
0x73: Stack[-3] = "pt_k11q01_agony_officer"
0x74: Stack[-2] = "pers_soldat"
0x75: Stack[-1] = "k11q01_officer_agony.xml"
0x76: Call2 0x16f

0x77: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x78: Pop(5)
0x79: Stack[-10] = 0
0x7a: GOTO 0xf6

0x7b: Push("cure_officer")
0x7c: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7e: @@ GetActor(Stack[-5])
0x7f: Pop(0)
0x80: Push(Stack[-5])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: @ RemoveActor(Stack[-5])
0x83: Pop(0)
0x84: @@ Remove()
0x85: Pop(0)
0x86: Push("k11q01Cured")
0x87: Push((int) 1)
0x88: @ SetVariable(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: PushEmpty(object, string)
0x8b: Stack[-1] = "quest_k11_01_cutscene"
0x8c: Call2 0x152

0x8d: Pop(2)
0x8e: Stack[-5] = 0
0x8f: GOTO 0xf6

0x90: Push("cutscene_end")
0x91: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x93: @ GetMainOutdoorScene(Stack[-4])
0x94: Pop(0)
0x95: PushEmpty(object, object, string, string, string)
0x96: Stack[-4] = Stack[-9]
0x97: Stack[-3] = "pt_k11q01_officer"
0x98: Stack[-2] = "pers_soldat"
0x99: Stack[-1] = "k11q01_officer.xml"
0x9a: Call2 0x181

0x9b: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x9c: Pop(5)
0x9d: Stack[-4] = 0
0x9e: GOTO 0xf6

0x9f: Push("init_house_petr")
0xa0: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa2: Push("house_petr")
0xa3: @ GetSceneByName(Stack[-4], Stack[-1])
0xa4: Pop(1)
0xa5: PushEmpty(object, object, string, string, string)
0xa6: Stack[-4] = Stack[-8]
0xa7: Stack[-3] = "pt_k11q01_andrei"
0xa8: Stack[-2] = "NPC_Andrei"
0xa9: Stack[-1] = "k11q01_andrei.xml"
0xaa: Call2 0x15d

0xab: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0xac: Pop(5)
0xad: PushEmpty(object, object, string, string, string)
0xae: Stack[-4] = Stack[-8]
0xaf: Stack[-3] = "pt_k11q01_danko"
0xb0: Stack[-2] = "NPC_Bakalavr"
0xb1: Stack[-1] = "k11q01_danko.xml"
0xb2: Call2 0x15d

0xb3: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xb4: Pop(5)
0xb5: Stack[-3] = 0
0xb6: GOTO 0xf6

0xb7: Push("place_burah")
0xb8: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xba: Push("burah_home")
0xbb: @ GetSceneByName(Stack[-3], Stack[-1])
0xbc: Pop(1)
0xbd: Push("noburah")
0xbe: @ Trigger(Stack[-3], Stack[-1])
0xbf: Pop(1)
0xc0: Push("boiny")
0xc1: @ GetSceneByName(Stack[-3], Stack[-1])
0xc2: Pop(1)
0xc3: PushEmpty(object, object, string, string, string)
0xc4: Stack[-4] = Stack[-7]
0xc5: Stack[-3] = "pt_k11q01_burah"
0xc6: Stack[-2] = "NPC_Burah"
0xc7: Stack[-1] = "k11q01_burah.xml"
0xc8: Call2 0x15d

0xc9: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xca: Pop(5)
0xcb: Stack[-2] = 0
0xcc: GOTO 0xf6

0xcd: Push("fail")
0xce: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty()
0xd1: Call2 0xf7

0xd2: Pop(0)
0xd3: PushEmpty()
0xd4: Call2 0x1ee

0xd5: Pop(0)
0xd6: PushEmpty()
0xd7: Call2 0x1f4

0xd8: Pop(0)
0xd9: GOTO 0xf6

0xda: Push("completed")
0xdb: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdd: PushEmpty()
0xde: Call2 0xff

0xdf: Pop(0)
0xe0: PushEmpty()
0xe1: Call2 0x1ee

0xe2: Pop(0)
0xe3: PushEmpty()
0xe4: Call2 0x1f4

0xe5: Pop(0)
0xe6: GOTO 0xf6

0xe7: Push("cleanup")
0xe8: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xea: Push("k11q01")
0xeb: @ GetVariable(Stack[-1], Stack[-2])
0xec: Pop(1)
0xed: Push((int) 1000)
0xee: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0xf7

0xf2: Pop(0)
0xf3: PushEmpty()
0xf4: Call2 0x137

0xf5: Pop(0)
0xf6: Return(); Pop(30)

0xf7: Push("k11q01")
0xf8: Push((int) -1)
0xf9: @ SetVariable(Stack[-2], Stack[-1])
0xfa: Pop(2)
0xfb: PushEmpty()
0xfc: Call2 0x107

0xfd: Pop(0)
0xfe: Return(); Pop(0)

0xff: Push("k11q01")
0x100: Push((int) 1000)
0x101: @ SetVariable(Stack[-2], Stack[-1])
0x102: Pop(2)
0x103: PushEmpty()
0x104: Call2 0x107

0x105: Pop(0)
0x106: Return(); Pop(0)

0x107: PushEmpty(object, object)
0x108: Push("cot_eva")
0x109: @ GetSceneByName(Stack[-2], Stack[-1])
0x10a: Pop(1)
0x10b: Push("danko")
0x10c: @ Trigger(Stack[-2], Stack[-1])
0x10d: Pop(1)
0x10e: Push("shouse1_kabak")
0x10f: @ GetSceneByName(Stack[-2], Stack[-1])
0x110: Pop(1)
0x111: Push("andrei")
0x112: @ Trigger(Stack[-2], Stack[-1])
0x113: Pop(1)
0x114: PushEmpty(object, string)
0x115: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x116: Stack[-1] = "cleanup"
0x117: Call2 0x1db

0x118: Pop(2)
0x119: Push( Stack[1 + Tasks[-1].StackPointer] )
0x11a: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11b: Push("cleanup")
0x11c: @ Trigger(Stack[-1], Stack[-1])
0x11d: Pop(1)
0x11e: PushEmpty(object)
0x11f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x120: Call2 0x1c6

0x121: Pop(1)
0x122: Push( Stack[3 + Tasks[-1].StackPointer] )
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: @@ Remove()
0x125: Pop(0)
0x126: Push( Stack[5 + Tasks[-1].StackPointer] )
0x127: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x128: Push("cleanup")
0x129: @ Trigger(Stack[-5], Stack[-1])
0x12a: Pop(1)
0x12b: Push( Stack[6 + Tasks[-1].StackPointer] )
0x12c: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12d: Push("cleanup")
0x12e: @ Trigger(Stack[-6], Stack[-1])
0x12f: Pop(1)
0x130: Push( Stack[7 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x132: Push("cleanup")
0x133: @ Trigger(Stack[-7], Stack[-1])
0x134: Pop(1)
0x135: Return(); Pop(2)

0x136: Stack[-1] = 0
0x137: EventDisable(26)
0x138: PushEmpty(string, bool)
0x139: Stack[-2] = "cot_maria@door1"
0x13a: Stack[-1] = (bool) 0
0x13b: Call2 0x194

0x13c: Pop(2)
0x13d: PushEmpty()
0x13e: Call2 0x1fd

0x13f: Pop(0)
0x140: PushEmpty(object)
0x141: Call2 0x146

0x142: Pop(0)
0x143: @ RemoveActor(Stack[-1])
0x144: Pop(1)
0x145: Return(); Pop(0)

0x146: PushEmpty(object, object)
0x147: @ self(Stack[-1])
0x148: Pop(0)
0x149: Stack[-3] = Stack[-1]
0x14a: Return(); Pop(2)

0x14b: Stack[-1] = 0
0x14c: PushEmpty(object, object)
0x14d: @ CreateObjectVector(Stack[-1])
0x14e: Pop(0)
0x14f: Stack[-3] = Stack[-1]
0x150: Return(); Pop(2)

0x151: Stack[-1] = 0
0x152: PushEmpty(object, object, object, object)
0x153: @ GetMainOutdoorScene(Stack[-2])
0x154: Pop(0)
0x155: Push(".bin")
0x156: Pop(1); Push(Stack[-6] + Stack[-1]);
0x157: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x158: Pop(1)
0x159: Stack[-6] = Stack[-1]
0x15a: Return(); Pop(4)

0x15b: Stack[-1] = 0
0x15c: Stack[-2] = 0
0x15d: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x15e: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x15f: Pop(0)
0x160: Pop(0); Push((bool) Stack[-4] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x162: Push("Locator ")
0x163: Pop(1); Push(Stack[-1] + Stack[-12]);
0x164: Push(" doesn't exist")
0x165: Pop(2); Push(Stack[-2] + Stack[-1]);
0x166: @ Trace(Stack[-1])
0x167: Pop(1)
0x168: Stack[-1] = 0
0x169: GOTO 0x16c

0x16a: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x16b: Pop(0)
0x16c: Stack[-13] = Stack[-1]
0x16d: Return(); Pop(8)

0x16e: Stack[-1] = 0
0x16f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x170: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x171: Pop(0)
0x172: Pop(0); Push((bool) Stack[-4] == 0)
0x173: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x174: Push("Locator ")
0x175: Pop(1); Push(Stack[-1] + Stack[-12]);
0x176: Push(" doesn't exist")
0x177: Pop(2); Push(Stack[-2] + Stack[-1]);
0x178: @ Trace(Stack[-1])
0x179: Pop(1)
0x17a: Stack[-1] = 0
0x17b: GOTO 0x17e

0x17c: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x17d: Pop(0)
0x17e: Stack[-13] = Stack[-1]
0x17f: Return(); Pop(8)

0x180: Stack[-1] = 0
0x181: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x182: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x183: Pop(0)
0x184: Pop(0); Push((bool) Stack[-4] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x186: Push("Locator ")
0x187: Pop(1); Push(Stack[-1] + Stack[-12]);
0x188: Push(" doesn't exist")
0x189: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18a: @ Trace(Stack[-1])
0x18b: Pop(1)
0x18c: Stack[-1] = 0
0x18d: GOTO 0x191

0x18e: Push((bool) 1)
0x18f: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1])
0x190: Pop(1)
0x191: Stack[-13] = Stack[-1]
0x192: Return(); Pop(8)

0x193: Stack[-1] = 0
0x194: PushEmpty(object, object)
0x195: @ FindActor(Stack[-1], Stack[-4])
0x196: Pop(0)
0x197: Pop(0); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x199: Push("Door ")
0x19a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x19b: Push(" not found")
0x19c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19d: @ Trace(Stack[-1])
0x19e: Pop(1)
0x19f: GOTO 0x1a3

0x1a0: Push("locked")
0x1a1: @@ SetProperty(Stack[-1], Stack[-4])
0x1a2: Pop(1)
0x1a3: Return(); Pop(2)

0x1a4: Stack[-1] = 0
0x1a5: PushEmpty(object, object)
0x1a6: @ FindActor(Stack[-1], Stack[-4])
0x1a7: Pop(0)
0x1a8: Pop(0); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1aa: Push("Door ")
0x1ab: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1ac: Push(" not found")
0x1ad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ae: @ Trace(Stack[-1])
0x1af: Pop(1)
0x1b0: GOTO 0x1b8

0x1b1: Push(Stack[-3])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b3: @@ Close()
0x1b4: Pop(0)
0x1b5: Push("locked")
0x1b6: @@ SetProperty(Stack[-1], Stack[-4])
0x1b7: Pop(1)
0x1b8: Return(); Pop(2)

0x1b9: Stack[-1] = 0
0x1ba: PushEmpty(object, object)
0x1bb: @ FindActor(Stack[-1], Stack[-4])
0x1bc: Pop(0)
0x1bd: Pop(0); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bf: Stack[-5] = (bool) 0
0x1c0: Return(); Pop(2)

0x1c1: @ Trigger(Stack[-1], Stack[-3])
0x1c2: Pop(0)
0x1c3: Stack[-5] = (bool) 1
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = 0
0x1c6: PushEmpty(int, int, object, int, int, object)
0x1c7: Push(Stack[-7])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1c9: @@ size(Stack[-3])
0x1ca: Pop(0)
0x1cb: Stack[-2] = (int) 0
0x1cc: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ce: @@ get(Stack[-1], Stack[-2])
0x1cf: Pop(0)
0x1d0: Push(Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: @@ Remove()
0x1d3: Pop(0)
0x1d4: Stack[-1] = 0
0x1d5: Push((int) 1)
0x1d6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1d7: GOTO 0x1cc

0x1d8: @@ clear()
0x1d9: Pop(0)
0x1da: Return(); Pop(6)

0x1db: PushEmpty(int, int, object, int, int, object)
0x1dc: Push(Stack[-8])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1de: @@ size(Stack[-3])
0x1df: Pop(0)
0x1e0: Stack[-2] = (int) 0
0x1e1: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e3: @@ get(Stack[-1], Stack[-2])
0x1e4: Pop(0)
0x1e5: Push(Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: @ Trigger(Stack[-1], Stack[-7])
0x1e8: Pop(0)
0x1e9: Stack[-1] = 0
0x1ea: Push((int) 1)
0x1eb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1ec: GOTO 0x1e1

0x1ed: Return(); Pop(6)

0x1ee: PushEmpty(bool, string, string)
0x1ef: Stack[-2] = "klara2_npc_positioner"
0x1f0: Stack[-1] = "init"
0x1f1: Call2 0x1ba

0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: PushEmpty(object, object)
0x1f5: Push("burah_home")
0x1f6: @ GetSceneByName(Stack[-2], Stack[-1])
0x1f7: Pop(1)
0x1f8: Push("noburah")
0x1f9: @ Trigger(Stack[-2], Stack[-1])
0x1fa: Pop(1)
0x1fb: Return(); Pop(2)

0x1fc: Stack[-1] = 0
0x1fd: PushEmpty(object, object)
0x1fe: Push("burah_home")
0x1ff: @ GetSceneByName(Stack[-2], Stack[-1])
0x200: Pop(1)
0x201: Push("burah")
0x202: @ Trigger(Stack[-2], Stack[-1])
0x203: Pop(1)
0x204: Return(); Pop(2)

0x205: Stack[-1] = 0
