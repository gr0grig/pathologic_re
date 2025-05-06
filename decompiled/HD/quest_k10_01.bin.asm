GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cot_eva
	nodanko
	warehouse_rubin
	norubin
	warehouse_rubin@door1
	warehouse_rubin_load
	pt_rubin
	NPC_Bakalavr
	k10q01_danko.xml
	place_soldiers
	pt_k10q01_soldier1
	pers_soldat
	k10q01_soldier.xml
	pt_k10q01_soldier2
	uprava_prison@door1
	uprava_admin@door1
	remove_soldiers
	Remove
	init_prison
	uprava_prison
	pt_k10q01_wastedmale
	pers_wasted_male
	k10q01_wastedmale.xml
	pt_k10q01_fog
	GetLocator
	fog_stat_indoor.xml
	add
	free_prisoner
	cleanup
	k10q01_wastedmale_free.xml
	burah_home
	noburah
	init_factory
	pt_k10q01_burah
	NPC_Burah
	k10q01_burah.xml
	factory@door1
	place_prophet
	pt_k10q01_prophet
	pers_krysa
	k10q01_prophet.xml
	teleport
	player
	house_vlad
	pt_k10q01_teleport
	ihouse_vlad@door2
	pt_k10q01_wastedmale_u1
	k10q01_wastedmale_u.xml
	pt_k10q01_wastedmale_u2
	pt_k10q01_rubin
	NPC_Rubin
	k10q01_rubin.xml
	fail
	completed
	k10q01
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	size
	get
	klara2_npc_positioner
	init

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	AddActorByType (6 args)
	FindActor (2 args)
	Teleport (4 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x1b Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x18b

0x3: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: Push("cot_eva")
0x6: @ GetSceneByName(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: Push("nodanko")
0x9: @ Trigger(Stack[-2], Stack[-1])
0xa: Pop(1)
0xb: Push("warehouse_rubin")
0xc: @ GetSceneByName(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: Push("norubin")
0xf: @ Trigger(Stack[-2], Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string, bool)
0x12: Stack[-2] = "warehouse_rubin@door1"
0x13: Stack[-1] = (bool) 0
0x14: Call2 0x1b5

0x15: Pop(2)
0x16: @ Hold()
0x17: Pop(0)
0x18: GOTO 0x16

0x19: Return(); Pop(2)

0x1a: Stack[-1] = 0
0x1b: PushEmpty(object, object, object, int, bool, cvector, cvector, object, object, object, object, object, object, cvector, cvector, bool, int, object, object, object, int, bool, cvector, cvector, object, object, object, object, object, object, cvector, cvector, bool, int)
0x1c: @ Trace(Stack[-35])
0x1d: Pop(0)
0x1e: Push("warehouse_rubin_load")
0x1f: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x21: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x23: Push("warehouse_rubin")
0x24: @ GetSceneByName(Stack[-18], Stack[-1])
0x25: Pop(1)
0x26: PushEmpty(object, object, string, string, string)
0x27: Stack[-4] = Stack[-22]
0x28: Stack[-3] = "pt_rubin"
0x29: Stack[-2] = "NPC_Bakalavr"
0x2a: Stack[-1] = "k10q01_danko.xml"
0x2b: Call2 0x191

0x2c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2d: Pop(5)
0x2e: Stack[-17] = 0
0x2f: GOTO 0x119

0x30: Push("place_soldiers")
0x31: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x33: @ GetMainOutdoorScene(Stack[-16])
0x34: Pop(0)
0x35: PushEmpty(object, object, string, string, string)
0x36: Stack[-4] = Stack[-21]
0x37: Stack[-3] = "pt_k10q01_soldier1"
0x38: Stack[-2] = "pers_soldat"
0x39: Stack[-1] = "k10q01_soldier.xml"
0x3a: Call2 0x1a3

0x3b: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x3c: Pop(5)
0x3d: PushEmpty(object, object, string, string, string)
0x3e: Stack[-4] = Stack[-21]
0x3f: Stack[-3] = "pt_k10q01_soldier2"
0x40: Stack[-2] = "pers_soldat"
0x41: Stack[-1] = "k10q01_soldier.xml"
0x42: Call2 0x1a3

0x43: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x44: Pop(5)
0x45: PushEmpty(string, bool)
0x46: Stack[-2] = "uprava_prison@door1"
0x47: Stack[-1] = (bool) 1
0x48: Call2 0x1b5

0x49: Pop(2)
0x4a: PushEmpty(string, bool)
0x4b: Stack[-2] = "uprava_admin@door1"
0x4c: Stack[-1] = (bool) 0
0x4d: Call2 0x1b5

0x4e: Pop(2)
0x4f: Stack[-16] = 0
0x50: GOTO 0x119

0x51: Push("remove_soldiers")
0x52: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x54: Push( Stack[1 + Tasks[-1].StackPointer] )
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: @@ Remove()
0x57: Pop(0)
0x58: Push( Stack[2 + Tasks[-1].StackPointer] )
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: @@ Remove()
0x5b: Pop(0)
0x5c: PushEmpty(string, bool)
0x5d: Stack[-2] = "uprava_prison@door1"
0x5e: Stack[-1] = (bool) 0
0x5f: Call2 0x1b5

0x60: Pop(2)
0x61: GOTO 0x119

0x62: Push("init_prison")
0x63: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x65: Push("uprava_prison")
0x66: @ GetSceneByName(Stack[-16], Stack[-1])
0x67: Pop(1)
0x68: PushEmpty(object, object, string, string, string)
0x69: Stack[-4] = Stack[-20]
0x6a: Stack[-3] = "pt_k10q01_wastedmale"
0x6b: Stack[-2] = "pers_wasted_male"
0x6c: Stack[-1] = "k10q01_wastedmale.xml"
0x6d: Call2 0x191

0x6e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x6f: Pop(5)
0x70: Stack[-14] = (int) 1
0x71: Push("pt_k10q01_fog")
0x72: Pop(1); Push(Stack[-1] + Stack[-15]);
0x73: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12])
0x74: Pop(1)
0x75: Pop(0); Push((bool) Stack[-13] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x82

0x78: Push("fog")
0x79: Push("fog_stat_indoor.xml")
0x7a: @ AddActorByType(Stack[-12], Stack[-2], Stack[-17], Stack[-14], Stack[-13], Stack[-1])
0x7b: Pop(2)
0x7c: @@ add(Stack[-10])
0x7d: Pop(0)
0x7e: Stack[-10] = 0
0x7f: Push((int) 1)
0x80: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x81: GOTO 0x71

0x82: Stack[-15] = 0
0x83: GOTO 0x119

0x84: Push("free_prisoner")
0x85: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: Push("cleanup")
0x8a: @ Trigger(Stack[-3], Stack[-1])
0x8b: Pop(1)
0x8c: @ GetMainOutdoorScene(Stack[-9])
0x8d: Pop(0)
0x8e: PushEmpty(object, object, string, string, string)
0x8f: Stack[-4] = Stack[-14]
0x90: Stack[-3] = "pt_k10q01_wastedmale"
0x91: Stack[-2] = "pers_wasted_male"
0x92: Stack[-1] = "k10q01_wastedmale_free.xml"
0x93: Call2 0x1a3

0x94: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x95: Pop(5)
0x96: Push("burah_home")
0x97: @ GetSceneByName(Stack[-10], Stack[-1])
0x98: Pop(1)
0x99: Push("noburah")
0x9a: @ Trigger(Stack[-10], Stack[-1])
0x9b: Pop(1)
0x9c: Stack[-9] = 0
0x9d: GOTO 0x119

0x9e: Push("init_factory")
0x9f: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xa1: Push("factory")
0xa2: @ GetSceneByName(Stack[-9], Stack[-1])
0xa3: Pop(1)
0xa4: PushEmpty(object, object, string, string, string)
0xa5: Stack[-4] = Stack[-13]
0xa6: Stack[-3] = "pt_k10q01_burah"
0xa7: Stack[-2] = "NPC_Burah"
0xa8: Stack[-1] = "k10q01_burah.xml"
0xa9: Call2 0x191

0xaa: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xab: Pop(5)
0xac: PushEmpty(string, bool)
0xad: Stack[-2] = "factory@door1"
0xae: Stack[-1] = (bool) 0
0xaf: Call2 0x1b5

0xb0: Pop(2)
0xb1: Stack[-8] = 0
0xb2: GOTO 0x119

0xb3: Push("place_prophet")
0xb4: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb6: @ GetMainOutdoorScene(Stack[-7])
0xb7: Pop(0)
0xb8: PushEmpty(object, object, string, string, string)
0xb9: Stack[-4] = Stack[-12]
0xba: Stack[-3] = "pt_k10q01_prophet"
0xbb: Stack[-2] = "pers_krysa"
0xbc: Stack[-1] = "k10q01_prophet.xml"
0xbd: Call2 0x1a3

0xbe: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0xbf: Pop(5)
0xc0: Stack[-7] = 0
0xc1: GOTO 0x119

0xc2: Push("teleport")
0xc3: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xc5: Push("player")
0xc6: @ FindActor(Stack[-7], Stack[-1])
0xc7: Pop(1)
0xc8: Push(Stack[-6])
0xc9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xca: Push("house_vlad")
0xcb: @ GetSceneByName(Stack[-6], Stack[-1])
0xcc: Pop(1)
0xcd: Push("pt_k10q01_teleport")
0xce: @@ GetLocator(Stack[-1], Stack[-3], Stack[-5], Stack[-4])
0xcf: Pop(1)
0xd0: @ Teleport(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0xd1: Pop(0)
0xd2: PushEmpty(string, bool)
0xd3: Stack[-2] = "ihouse_vlad@door2"
0xd4: Stack[-1] = (bool) 1
0xd5: Call2 0x1b5

0xd6: Pop(2)
0xd7: PushEmpty(object, object, string, string, string)
0xd8: Stack[-4] = Stack[-10]
0xd9: Stack[-3] = "pt_k10q01_wastedmale_u1"
0xda: Stack[-2] = "pers_wasted_male"
0xdb: Stack[-1] = "k10q01_wastedmale_u.xml"
0xdc: Call2 0x191

0xdd: Pop(5)
0xde: PushEmpty(object, object, string, string, string)
0xdf: Stack[-4] = Stack[-10]
0xe0: Stack[-3] = "pt_k10q01_wastedmale_u2"
0xe1: Stack[-2] = "pers_wasted_male"
0xe2: Stack[-1] = "k10q01_wastedmale_u.xml"
0xe3: Call2 0x191

0xe4: Pop(5)
0xe5: PushEmpty(object, object, string, string, string)
0xe6: Stack[-4] = Stack[-10]
0xe7: Stack[-3] = "pt_k10q01_rubin"
0xe8: Stack[-2] = "NPC_Rubin"
0xe9: Stack[-1] = "k10q01_rubin.xml"
0xea: Call2 0x191

0xeb: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xec: Pop(5)
0xed: Stack[-5] = 0
0xee: Stack[-6] = 0
0xef: GOTO 0x119

0xf0: Push("fail")
0xf1: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf3: PushEmpty()
0xf4: Call2 0x11a

0xf5: Pop(0)
0xf6: PushEmpty()
0xf7: Call2 0x1e5

0xf8: Pop(0)
0xf9: PushEmpty()
0xfa: Call2 0x1eb

0xfb: Pop(0)
0xfc: GOTO 0x119

0xfd: Push("completed")
0xfe: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x100: PushEmpty()
0x101: Call2 0x122

0x102: Pop(0)
0x103: PushEmpty()
0x104: Call2 0x1e5

0x105: Pop(0)
0x106: PushEmpty()
0x107: Call2 0x1eb

0x108: Pop(0)
0x109: GOTO 0x119

0x10a: Push("cleanup")
0x10b: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10d: Push("k10q01")
0x10e: @ GetVariable(Stack[-1], Stack[-2])
0x10f: Pop(1)
0x110: Push((int) 1000)
0x111: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x113: PushEmpty()
0x114: Call2 0x11a

0x115: Pop(0)
0x116: PushEmpty()
0x117: Call2 0x17b

0x118: Pop(0)
0x119: Return(); Pop(34)

0x11a: Push("k10q01")
0x11b: Push((int) -1)
0x11c: @ SetVariable(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: PushEmpty()
0x11f: Call2 0x12a

0x120: Pop(0)
0x121: Return(); Pop(0)

0x122: Push("k10q01")
0x123: Push((int) 1000)
0x124: @ SetVariable(Stack[-2], Stack[-1])
0x125: Pop(2)
0x126: PushEmpty()
0x127: Call2 0x12a

0x128: Pop(0)
0x129: Return(); Pop(0)

0x12a: PushEmpty(object, object)
0x12b: Push("cot_eva")
0x12c: @ GetSceneByName(Stack[-2], Stack[-1])
0x12d: Pop(1)
0x12e: Push("danko")
0x12f: @ Trigger(Stack[-2], Stack[-1])
0x130: Pop(1)
0x131: Push("warehouse_rubin")
0x132: @ GetSceneByName(Stack[-2], Stack[-1])
0x133: Pop(1)
0x134: Push("rubin")
0x135: @ Trigger(Stack[-2], Stack[-1])
0x136: Pop(1)
0x137: PushEmpty(string, bool)
0x138: Stack[-2] = "uprava_prison@door1"
0x139: Stack[-1] = (bool) 0
0x13a: Call2 0x1b5

0x13b: Pop(2)
0x13c: PushEmpty(string, bool)
0x13d: Stack[-2] = "ihouse_vlad@door2"
0x13e: Stack[-1] = (bool) 0
0x13f: Call2 0x1b5

0x140: Pop(2)
0x141: PushEmpty(string, bool)
0x142: Stack[-2] = "factory@door1"
0x143: Stack[-1] = (bool) 0
0x144: Call2 0x1b5

0x145: Pop(2)
0x146: Push( Stack[0 + Tasks[-1].StackPointer] )
0x147: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x148: Push("cleanup")
0x149: @ Trigger(Stack[-0], Stack[-1])
0x14a: Pop(1)
0x14b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x14c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14d: @@ Remove()
0x14e: Pop(0)
0x14f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x150: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x151: @@ Remove()
0x152: Pop(0)
0x153: Push( Stack[3 + Tasks[-1].StackPointer] )
0x154: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x155: Push("cleanup")
0x156: @ Trigger(Stack[-3], Stack[-1])
0x157: Pop(1)
0x158: Push( Stack[4 + Tasks[-1].StackPointer] )
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: @@ Remove()
0x15b: Pop(0)
0x15c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x15d: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15e: Push("cleanup")
0x15f: @ Trigger(Stack[-5], Stack[-1])
0x160: Pop(1)
0x161: Push( Stack[10 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x163: @@ Remove()
0x164: Pop(0)
0x165: Push( Stack[6 + Tasks[-1].StackPointer] )
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: Push("cleanup")
0x168: @ Trigger(Stack[-6], Stack[-1])
0x169: Pop(1)
0x16a: PushEmpty(object, string)
0x16b: Stack[-2] = Stack[7 + Tasks[-1].StackPointer]
0x16c: Stack[-1] = "cleanup"
0x16d: Call2 0x1d2

0x16e: Pop(2)
0x16f: Push( Stack[8 + Tasks[-1].StackPointer] )
0x170: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x171: Push("cleanup")
0x172: @ Trigger(Stack[-8], Stack[-1])
0x173: Pop(1)
0x174: Push( Stack[9 + Tasks[-1].StackPointer] )
0x175: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x176: Push("cleanup")
0x177: @ Trigger(Stack[-9], Stack[-1])
0x178: Pop(1)
0x179: Return(); Pop(2)

0x17a: Stack[-1] = 0
0x17b: EventDisable(26)
0x17c: PushEmpty()
0x17d: Call2 0x1f4

0x17e: Pop(0)
0x17f: PushEmpty(object)
0x180: Call2 0x185

0x181: Pop(0)
0x182: @ RemoveActor(Stack[-1])
0x183: Pop(1)
0x184: Return(); Pop(0)

0x185: PushEmpty(object, object)
0x186: @ self(Stack[-1])
0x187: Pop(0)
0x188: Stack[-3] = Stack[-1]
0x189: Return(); Pop(2)

0x18a: Stack[-1] = 0
0x18b: PushEmpty(object, object)
0x18c: @ CreateObjectVector(Stack[-1])
0x18d: Pop(0)
0x18e: Stack[-3] = Stack[-1]
0x18f: Return(); Pop(2)

0x190: Stack[-1] = 0
0x191: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x192: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x193: Pop(0)
0x194: Pop(0); Push((bool) Stack[-4] == 0)
0x195: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x196: Push("Locator ")
0x197: Pop(1); Push(Stack[-1] + Stack[-12]);
0x198: Push(" doesn't exist")
0x199: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19a: @ Trace(Stack[-1])
0x19b: Pop(1)
0x19c: Stack[-1] = 0
0x19d: GOTO 0x1a0

0x19e: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x19f: Pop(0)
0x1a0: Stack[-13] = Stack[-1]
0x1a1: Return(); Pop(8)

0x1a2: Stack[-1] = 0
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

0x1b0: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
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
0x1d3: Push(Stack[-8])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d5: @@ size(Stack[-3])
0x1d6: Pop(0)
0x1d7: Stack[-2] = (int) 0
0x1d8: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1da: @@ get(Stack[-1], Stack[-2])
0x1db: Pop(0)
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: @ Trigger(Stack[-1], Stack[-7])
0x1df: Pop(0)
0x1e0: Stack[-1] = 0
0x1e1: Push((int) 1)
0x1e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1d8

0x1e4: Return(); Pop(6)

0x1e5: PushEmpty(bool, string, string)
0x1e6: Stack[-2] = "klara2_npc_positioner"
0x1e7: Stack[-1] = "init"
0x1e8: Call2 0x1c6

0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(object, object)
0x1ec: Push("burah_home")
0x1ed: @ GetSceneByName(Stack[-2], Stack[-1])
0x1ee: Pop(1)
0x1ef: Push("noburah")
0x1f0: @ Trigger(Stack[-2], Stack[-1])
0x1f1: Pop(1)
0x1f2: Return(); Pop(2)

0x1f3: Stack[-1] = 0
0x1f4: PushEmpty(object, object)
0x1f5: Push("burah_home")
0x1f6: @ GetSceneByName(Stack[-2], Stack[-1])
0x1f7: Pop(1)
0x1f8: Push("burah")
0x1f9: @ Trigger(Stack[-2], Stack[-1])
0x1fa: Pop(1)
0x1fb: Return(); Pop(2)

0x1fc: Stack[-1] = 0
