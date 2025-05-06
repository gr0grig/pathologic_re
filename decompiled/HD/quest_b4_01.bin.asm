GlobalVarCount = 0

Strings:
	cot_alexandr@door1
	warehouse_gangster@door1
	rubin_unlock
	warehouse_rubin@door1
	iwarehouse_rubin_Stol
	b4q01_sample
	AddItem
	place_rubin
	warehouse_gangster
	pt_b4q01_rubin
	NPC_Rubin
	b4q01_Rubin.xml
	pt_b4q01_agony1
	pers_unosha
	b4q01_agony1.xml
	pt_b4q01_agony2
	pers_worker
	b4q01_agony2.xml
	b4q01_corpse
	actor_disp.bin
	wg_unload
	pt_b4q01_patrol1
	pers_patrool
	b4q01_patrol.xml
	add
	pt_b4q01_patrol2
	pt_b4q01_patrol3
	pt_b4q01_patrol4
	quest_b4_01_teleport
	factory
	pt_b4q01_patrol1_1
	b4q01_fpatrol1.xml
	pt_b4q01_patrol2_1
	b4q01_fpatrol2.xml
	b4q01_factory_corpse
	b4q01_factory_corpse.xml
	agony1_man.xml
	pt_b4q01_fog
	GetLocator
	factory_unload
	patrol_attack
	ifactory_grid_door
	patrol_dead
	IsDead
	ifactory@door1
	door_open
	cleanup
	b4q01
	fail
	completed
	RemoveItemByType
	GetRandomPFPoint
	b4q01_fog.xml
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	size
	get

Import:
	Hold (0 args)
	Trace (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	AddScriptedActor (6 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	SetTimer (2 args)
	KillTimer (1 args)
	RemoveActor (1 args)
	Trigger (2 args)
	PlaySound (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	AddActorByType (6 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object, object, object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)
		EVENT_7 Op = 0x171 Vars = (int)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "cot_alexandr@door1"
0x2: Stack[-1] = (bool) 1
0x3: Call2 0x1b5

0x4: Pop(2)
0x5: PushEmpty(object)
0x6: Call2 0x192

0x7: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "warehouse_gangster@door1"
0xb: Stack[-1] = (bool) 1
0xc: Call2 0x1b5

0xd: Pop(2)
0xe: @ Hold()
0xf: Pop(0)
0x10: GOTO 0xe

0x11: Return(); Pop(0)

0x12: PushEmpty(object, bool, object, object, object, bool, cvector, bool, int, object, bool, object, object, object, bool, cvector, bool, int)
0x13: @ Trace(Stack[-19])
0x14: Pop(0)
0x15: Push("rubin_unlock")
0x16: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x18: PushEmpty(string, bool)
0x19: Stack[-2] = "warehouse_rubin@door1"
0x1a: Stack[-1] = (bool) 0
0x1b: Call2 0x1b5

0x1c: Pop(2)
0x1d: Push("iwarehouse_rubin_Stol")
0x1e: @ FindActor(Stack[-10], Stack[-1])
0x1f: Pop(1)
0x20: Push("b4q01_sample")
0x21: Push((int) 0)
0x22: @@ AddItem(Stack[-10], Stack[-2], Stack[-1])
0x23: Pop(2)
0x24: Stack[-9] = 0
0x25: GOTO 0x111

0x26: Push("place_rubin")
0x27: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x29: Push("warehouse_gangster")
0x2a: @ GetSceneByName(Stack[-8], Stack[-1])
0x2b: Pop(1)
0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-4] = Stack[-12]
0x2e: Stack[-3] = "pt_b4q01_rubin"
0x2f: Stack[-2] = "NPC_Rubin"
0x30: Stack[-1] = "b4q01_Rubin.xml"
0x31: Call2 0x1a3

0x32: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x33: Pop(5)
0x34: PushEmpty(object, object, string, string, string)
0x35: Stack[-4] = Stack[-12]
0x36: Stack[-3] = "pt_b4q01_agony1"
0x37: Stack[-2] = "pers_unosha"
0x38: Stack[-1] = "b4q01_agony1.xml"
0x39: Call2 0x1a3

0x3a: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3b: Pop(5)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-4] = Stack[-12]
0x3e: Stack[-3] = "pt_b4q01_agony2"
0x3f: Stack[-2] = "pers_worker"
0x40: Stack[-1] = "b4q01_agony2.xml"
0x41: Call2 0x1a3

0x42: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x43: Pop(5)
0x44: Push("b4q01_corpse")
0x45: Push("actor_disp.bin")
0x46: Push(CVector(0.0, 0.0, 0.0))
0x47: Push(CVector(0.0, 0.0, 1.0))
0x48: @ AddScriptedActor(Stack[-4], Stack[-4], Stack[-3], Stack[-11], Stack[-2], Stack[-1])
0x49: Pop(4)
0x4a: PushEmpty(string, bool)
0x4b: Stack[-2] = "warehouse_gangster@door1"
0x4c: Stack[-1] = (bool) 0
0x4d: Call2 0x1b5

0x4e: Pop(2)
0x4f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x50: Stack[-7] = 0
0x51: GOTO 0x111

0x52: Push("wg_unload")
0x53: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0x57: Stack[10 + Tasks[-1].StackPointer] = (bool)1
0x58: PushEmpty()
0x59: Call2 0x122

0x5a: Pop(0)
0x5b: PushEmpty(string, bool)
0x5c: Stack[-2] = "warehouse_gangster@door1"
0x5d: Stack[-1] = (bool) 1
0x5e: Call2 0x1b5

0x5f: Pop(2)
0x60: @ GetMainOutdoorScene(Stack[-6])
0x61: Pop(0)
0x62: PushEmpty(object, object, string, string, string)
0x63: Stack[-4] = Stack[-11]
0x64: Stack[-3] = "pt_b4q01_patrol1"
0x65: Stack[-2] = "pers_patrool"
0x66: Stack[-1] = "b4q01_patrol.xml"
0x67: Call2 0x1a3

0x68: Pop(4)
0x69: @@ add(Stack[-1])
0x6a: Pop(1)
0x6b: PushEmpty(object, object, string, string, string)
0x6c: Stack[-4] = Stack[-11]
0x6d: Stack[-3] = "pt_b4q01_patrol2"
0x6e: Stack[-2] = "pers_patrool"
0x6f: Stack[-1] = "b4q01_patrol.xml"
0x70: Call2 0x1a3

0x71: Pop(4)
0x72: @@ add(Stack[-1])
0x73: Pop(1)
0x74: PushEmpty(object, object, string, string, string)
0x75: Stack[-4] = Stack[-11]
0x76: Stack[-3] = "pt_b4q01_patrol3"
0x77: Stack[-2] = "pers_patrool"
0x78: Stack[-1] = "b4q01_patrol.xml"
0x79: Call2 0x1a3

0x7a: Pop(4)
0x7b: @@ add(Stack[-1])
0x7c: Pop(1)
0x7d: PushEmpty(object, object, string, string, string)
0x7e: Stack[-4] = Stack[-11]
0x7f: Stack[-3] = "pt_b4q01_patrol4"
0x80: Stack[-2] = "pers_patrool"
0x81: Stack[-1] = "b4q01_patrol.xml"
0x82: Call2 0x1a3

0x83: Pop(4)
0x84: @@ add(Stack[-1])
0x85: Pop(1)
0x86: PushEmpty(object, string)
0x87: Stack[-1] = "quest_b4_01_teleport"
0x88: Call2 0x198

0x89: Pop(2)
0x8a: Push("factory")
0x8b: @ GetSceneByName(Stack[-7], Stack[-1])
0x8c: Pop(1)
0x8d: PushEmpty(object, object, string, string, string)
0x8e: Stack[-4] = Stack[-11]
0x8f: Stack[-3] = "pt_b4q01_patrol1_1"
0x90: Stack[-2] = "pers_patrool"
0x91: Stack[-1] = "b4q01_fpatrol1.xml"
0x92: Call2 0x1a3

0x93: Stack[8 + Tasks[-1].StackPointer] = Stack[-5]
0x94: Pop(5)
0x95: PushEmpty(object, object, string, string, string)
0x96: Stack[-4] = Stack[-11]
0x97: Stack[-3] = "pt_b4q01_patrol2_1"
0x98: Stack[-2] = "pers_patrool"
0x99: Stack[-1] = "b4q01_fpatrol2.xml"
0x9a: Call2 0x1a3

0x9b: Stack[9 + Tasks[-1].StackPointer] = Stack[-5]
0x9c: Pop(5)
0x9d: Push("b4q01_factory_corpse")
0x9e: Push(CVector(0.0, 0.0, 0.0))
0x9f: Push(CVector(0.0, 0.0, 1.0))
0xa0: Push("b4q01_factory_corpse.xml")
0xa1: @ AddActor(Stack[-9], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0xa2: Pop(4)
0xa3: PushEmpty(object, object, string, string, string)
0xa4: Stack[-4] = Stack[-11]
0xa5: Stack[-3] = "pt_b4q01_agony1"
0xa6: Stack[-2] = "pers_unosha"
0xa7: Stack[-1] = "agony1_man.xml"
0xa8: Call2 0x1a3

0xa9: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xaa: Pop(5)
0xab: PushEmpty(object, object, string, string, string)
0xac: Stack[-4] = Stack[-11]
0xad: Stack[-3] = "pt_b4q01_agony2"
0xae: Stack[-2] = "pers_worker"
0xaf: Stack[-1] = "agony1_man.xml"
0xb0: Call2 0x1a3

0xb1: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xb2: Pop(5)
0xb3: Push((int) 0)
0xb4: Push((float)20.0)
0xb5: @ SetTimer(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: Push("pt_b4q01_fog")
0xb8: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4])
0xb9: Pop(1)
0xba: PushEmpty(object, cvector)
0xbb: Stack[-2] = Stack[-8]
0xbc: Stack[-1] = Stack[-5]
0xbd: Call2 0x184

0xbe: Pop(2)
0xbf: Stack[-5] = 0
0xc0: Stack[-6] = 0
0xc1: GOTO 0x111

0xc2: Push("factory_unload")
0xc3: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc5: Push((int) 0)
0xc6: @ KillTimer(Stack[-1])
0xc7: Pop(1)
0xc8: Push( Stack[10 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: PushEmpty(object)
0xcb: Call2 0x18c

0xcc: Pop(0)
0xcd: @ RemoveActor(Stack[-1])
0xce: Pop(1)
0xcf: GOTO 0x111

0xd0: Push("patrol_attack")
0xd1: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd3: PushEmpty(string, bool)
0xd4: Stack[-2] = "ifactory_grid_door"
0xd5: Stack[-1] = (bool) 0
0xd6: Call2 0x1b5

0xd7: Pop(2)
0xd8: Push("attack")
0xd9: @ Trigger(Stack[-8], Stack[-1])
0xda: Pop(1)
0xdb: Push("attack")
0xdc: @ Trigger(Stack[-9], Stack[-1])
0xdd: Pop(1)
0xde: GOTO 0x111

0xdf: Push("patrol_dead")
0xe0: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe2: @@ IsDead(Stack[-2])
0xe3: Pop(0)
0xe4: Push(Stack[-2])
0xe5: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe6: @@ IsDead(Stack[-2])
0xe7: Pop(0)
0xe8: Push(Stack[-2])
0xe9: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xea: PushEmpty(string, bool)
0xeb: Stack[-2] = "ifactory@door1"
0xec: Stack[-1] = (bool) 0
0xed: Call2 0x1b5

0xee: Pop(2)
0xef: Push("door_open")
0xf0: @ PlaySound(Stack[-1])
0xf1: Pop(1)
0xf2: GOTO 0x111

0xf3: Push("cleanup")
0xf4: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf6: Push("b4q01")
0xf7: @ GetVariable(Stack[-1], Stack[-2])
0xf8: Pop(1)
0xf9: Push((int) 1000)
0xfa: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x112

0xfe: Pop(0)
0xff: GOTO 0x103

0x100: PushEmpty()
0x101: Call2 0x13a

0x102: Pop(0)
0x103: GOTO 0x111

0x104: Push("fail")
0x105: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x112

0x109: Pop(0)
0x10a: GOTO 0x111

0x10b: Push("completed")
0x10c: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10e: PushEmpty()
0x10f: Call2 0x11a

0x110: Pop(0)
0x111: Return(); Pop(18)

0x112: Push("b4q01")
0x113: Push((int) -1)
0x114: @ SetVariable(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: PushEmpty()
0x117: Call2 0x13a

0x118: Pop(0)
0x119: Return(); Pop(0)

0x11a: Push("b4q01")
0x11b: Push((int) 1000)
0x11c: @ SetVariable(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: PushEmpty()
0x11f: Call2 0x13a

0x120: Pop(0)
0x121: Return(); Pop(0)

0x122: Push( Stack[0 + Tasks[-1].StackPointer] )
0x123: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x124: Push( Stack[1 + Tasks[-1].StackPointer] )
0x125: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x126: Push("cleanup")
0x127: @ Trigger(Stack[-1], Stack[-1])
0x128: Pop(1)
0x129: Push( Stack[2 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: Push("cleanup")
0x12c: @ Trigger(Stack[-2], Stack[-1])
0x12d: Pop(1)
0x12e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: Push("cleanup")
0x131: @ Trigger(Stack[-3], Stack[-1])
0x132: Pop(1)
0x133: Push( Stack[4 + Tasks[-1].StackPointer] )
0x134: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x135: Push("cleanup")
0x136: @ Trigger(Stack[-4], Stack[-1])
0x137: Pop(1)
0x138: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x139: Return(); Pop(0)

0x13a: PushEmpty(object, int, object, int)
0x13b: Push( Stack[10 + Tasks[-1].StackPointer] )
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: Return(); Pop(4)

0x13e: EventDisable(26)
0x13f: Push((int) 0)
0x140: @ KillTimer(Stack[-1])
0x141: Pop(1)
0x142: PushEmpty(string, bool)
0x143: Stack[-2] = "warehouse_rubin@door1"
0x144: Stack[-1] = (bool) 0
0x145: Call2 0x1b5

0x146: Pop(2)
0x147: PushEmpty(string, bool)
0x148: Stack[-2] = "ifactory@door1"
0x149: Stack[-1] = (bool) 0
0x14a: Call2 0x1b5

0x14b: Pop(2)
0x14c: Push("iwarehouse_rubin_Stol")
0x14d: @ FindActor(Stack[-3], Stack[-1])
0x14e: Pop(1)
0x14f: Push("b4q01_sample")
0x150: @@ RemoveItemByType(Stack[-2], Stack[-1])
0x151: Pop(1)
0x152: PushEmpty()
0x153: Call2 0x122

0x154: Pop(0)
0x155: PushEmpty(object, string)
0x156: Stack[-2] = Stack[7 + Tasks[-1].StackPointer]
0x157: Stack[-1] = "cleanup"
0x158: Call2 0x1c6

0x159: Pop(2)
0x15a: Stack[7 + Tasks[-1].StackPointer] = 0
0x15b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x15c: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15d: Push("cleanup")
0x15e: @ Trigger(Stack[-5], Stack[-1])
0x15f: Pop(1)
0x160: Push( Stack[6 + Tasks[-1].StackPointer] )
0x161: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x162: Push("cleanup")
0x163: @ Trigger(Stack[-6], Stack[-1])
0x164: Pop(1)
0x165: PushEmpty(string, bool)
0x166: Stack[-2] = "warehouse_gangster@door1"
0x167: Stack[-1] = (bool) 0
0x168: Call2 0x1b5

0x169: Pop(2)
0x16a: PushEmpty(object)
0x16b: Call2 0x18c

0x16c: Pop(0)
0x16d: @ RemoveActor(Stack[-1])
0x16e: Pop(1)
0x16f: Return(); Pop(4)

0x170: Stack[-2] = 0
0x171: PushEmpty(object, cvector, object, cvector)
0x172: Push((int) 0)
0x173: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Return(); Pop(4)

0x176: Push("factory")
0x177: @ GetSceneByName(Stack[-3], Stack[-1])
0x178: Pop(1)
0x179: Push((int) 0)
0x17a: Push((int) 0)
0x17b: @@ GetRandomPFPoint(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(2)
0x17d: PushEmpty(object, cvector)
0x17e: Stack[-2] = Stack[-4]
0x17f: Stack[-1] = Stack[-3]
0x180: Call2 0x184

0x181: Pop(2)
0x182: Return(); Pop(4)

0x183: Stack[-2] = 0
0x184: PushEmpty(object, object)
0x185: Push("fog")
0x186: Push(CVector(0.0, 0.0, 1.0))
0x187: Push("b4q01_fog.xml")
0x188: @ AddActorByType(Stack[-4], Stack[-3], Stack[-7], Stack[-6], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(2)

0x18b: Stack[-1] = 0
0x18c: PushEmpty(object, object)
0x18d: @ self(Stack[-1])
0x18e: Pop(0)
0x18f: Stack[-3] = Stack[-1]
0x190: Return(); Pop(2)

0x191: Stack[-1] = 0
0x192: PushEmpty(object, object)
0x193: @ CreateObjectVector(Stack[-1])
0x194: Pop(0)
0x195: Stack[-3] = Stack[-1]
0x196: Return(); Pop(2)

0x197: Stack[-1] = 0
0x198: PushEmpty(object, object, object, object)
0x199: @ GetMainOutdoorScene(Stack[-2])
0x19a: Pop(0)
0x19b: Push(".bin")
0x19c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x19d: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x19e: Pop(1)
0x19f: Stack[-6] = Stack[-1]
0x1a0: Return(); Pop(4)

0x1a1: Stack[-1] = 0
0x1a2: Stack[-2] = 0
0x1a3: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1a4: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1a5: Pop(0)
0x1a6: Pop(0); Push((bool) Stack[-4] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a8: Push("Locator ")
0x1a9: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1aa: Push(" doesn't exist")
0x1ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ac: @ Trace(Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[-1] = 0
0x1af: GOTO 0x1b2

0x1b0: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1b1: Pop(0)
0x1b2: Stack[-13] = Stack[-1]
0x1b3: Return(); Pop(8)

0x1b4: Stack[-1] = 0
0x1b5: PushEmpty(object, object)
0x1b6: @ FindActor(Stack[-1], Stack[-4])
0x1b7: Pop(0)
0x1b8: Pop(0); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ba: Push("Door ")
0x1bb: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1bc: Push(" not found")
0x1bd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1be: @ Trace(Stack[-1])
0x1bf: Pop(1)
0x1c0: GOTO 0x1c4

0x1c1: Push("locked")
0x1c2: @@ SetProperty(Stack[-1], Stack[-4])
0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = 0
0x1c6: PushEmpty(int, int, object, int, int, object)
0x1c7: Push(Stack[-8])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c9: @@ size(Stack[-3])
0x1ca: Pop(0)
0x1cb: Stack[-2] = (int) 0
0x1cc: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ce: @@ get(Stack[-1], Stack[-2])
0x1cf: Pop(0)
0x1d0: Push(Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: @ Trigger(Stack[-1], Stack[-7])
0x1d3: Pop(0)
0x1d4: Stack[-1] = 0
0x1d5: Push((int) 1)
0x1d6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1d7: GOTO 0x1cc

0x1d8: Return(); Pop(6)

