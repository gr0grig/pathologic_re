GlobalVarCount = 0

Strings:
	d3q01_graveyard_fire
	d3q01_graveyard_fire.xml
	cot_maria@door1
	init_soldiers
	pt_d11q01_soldier
	pers_soldat
	d11q01_soldier.xml
	add
	pt_d11q01_msoldier
	pers_soldat_hand
	d11q01_msoldier.xml
	init_girl
	shouse1_kabak
	pt_d11q01_girl
	pers_nudegirl
	d11q01_girl.xml
	remove_andrei
	noandrei
	restore_andrei
	cleanup
	soldier_attack
	size
	get
	GetActor
	Remove
	teleport
	player
	RemoveAllItems
	SelectWeapon
	quest_d11_01_teleport
	pt_d11q01_guard1
	d11q01_guard1.xml
	pt_d11q01_guard2
	d11q01_guard2.xml
	soldier_death
	IsDead
	burah_serum
	AddItem
	d11q01
	fail
	completed
	volonteers_danko
	disease
	GetItemCount
	GetItem
	GetItemAmount
	.bin
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	clear

Import:
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	FindActor (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateIntVector (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	Trigger (3 args)
	GetInvItemByName (2 args)

RunOp = 0xb
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, bool, bool) Params = 0
		EVENT_26 Op = 0x40 Vars = (string)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: Push("d3q01_graveyard_fire")
0x4: Push(CVector(0.0, 0.0, 0.0))
0x5: Push(CVector(0.0, 0.0, 1.0))
0x6: Push("d3q01_graveyard_fire.xml")
0x7: @ AddActor(Stack[-3], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x8: Pop(4)
0x9: Return(); Pop(2)

0xa: Stack[-1] = 0
0xb: PushEmpty(object)
0xc: Call2 0x1d2

0xd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0xe: Pop(1)
0xf: PushEmpty(object)
0x10: Call2 0x1d2

0x11: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x12: Pop(1)
0x13: PushEmpty(object)
0x14: Call2 0x1cc

0x15: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x16: Pop(1)
0x17: PushEmpty(object)
0x18: Call2 0x1d2

0x19: Stack[8 + Tasks[-1].StackPointer] = Stack[-1]
0x1a: Pop(1)
0x1b: PushEmpty(object)
0x1c: Call2 0x1cc

0x1d: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x1e: Pop(1)
0x1f: PushEmpty(object)
0x20: Call2 0x1d2

0x21: Stack[10 + Tasks[-1].StackPointer] = Stack[-1]
0x22: Pop(1)
0x23: PushEmpty(object)
0x24: Call2 0x1cc

0x25: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x26: Pop(1)
0x27: PushEmpty(object)
0x28: Call2 0x1d2

0x29: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x2a: Pop(1)
0x2b: PushEmpty(object)
0x2c: Call2 0x1cc

0x2d: Stack[13 + Tasks[-1].StackPointer] = Stack[-1]
0x2e: Pop(1)
0x2f: PushEmpty(object)
0x30: Call2 0x1d2

0x31: Stack[14 + Tasks[-1].StackPointer] = Stack[-1]
0x32: Pop(1)
0x33: PushEmpty(object)
0x34: Call2 0x1cc

0x35: Stack[15 + Tasks[-1].StackPointer] = Stack[-1]
0x36: Pop(1)
0x37: PushEmpty(string, bool)
0x38: Stack[-2] = "cot_maria@door1"
0x39: Stack[-1] = (bool) 1
0x3a: Call2 0x21a

0x3b: Pop(2)
0x3c: @ Hold()
0x3d: Pop(0)
0x3e: GOTO 0x3c

0x3f: Return(); Pop(0)

0x40: PushEmpty(object, int, object, object, object, int, int, object, object, object, object, int, object, object, bool, bool, int, object, int, object, object, object, int, int, object, object, object, object, int, object, object, bool, bool, int)
0x41: @ Trace(Stack[-35])
0x42: Pop(0)
0x43: Push("init_soldiers")
0x44: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x46: @ GetMainOutdoorScene(Stack[-17])
0x47: Pop(0)
0x48: Stack[-16] = (int) 1
0x49: Push((int) 10)
0x4a: Pop(1); Push((bool) Stack[-17] <= Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4c: PushEmpty(object, object, string, string, string)
0x4d: Stack[-4] = Stack[-22]
0x4e: Push("pt_d11q01_soldier")
0x4f: Stack[-4] = Stack[-1] + Stack[-22]; Pop(1);
0x50: Stack[-2] = "pers_soldat"
0x51: Stack[-1] = "d11q01_soldier.xml"
0x52: Call2 0x1f5

0x53: Pop(4)
0x54: @@ add(Stack[-1])
0x55: Pop(1)
0x56: Push((int) 1)
0x57: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x58: GOTO 0x49

0x59: PushEmpty(object, object, string, string, string)
0x5a: Stack[-4] = Stack[-22]
0x5b: Stack[-3] = "pt_d11q01_msoldier"
0x5c: Stack[-2] = "pers_soldat_hand"
0x5d: Stack[-1] = "d11q01_msoldier.xml"
0x5e: Call2 0x1f5

0x5f: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x60: Pop(5)
0x61: Stack[-17] = 0
0x62: GOTO 0x16f

0x63: Push("init_girl")
0x64: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x66: Push("shouse1_kabak")
0x67: @ GetSceneByName(Stack[-16], Stack[-1])
0x68: Pop(1)
0x69: PushEmpty(object, object, string, string, string)
0x6a: Stack[-4] = Stack[-20]
0x6b: Stack[-3] = "pt_d11q01_girl"
0x6c: Stack[-2] = "pers_nudegirl"
0x6d: Stack[-1] = "d11q01_girl.xml"
0x6e: Call2 0x1e3

0x6f: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x70: Pop(5)
0x71: Stack[-15] = 0
0x72: GOTO 0x16f

0x73: Push("remove_andrei")
0x74: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x76: Push("shouse1_kabak")
0x77: @ GetSceneByName(Stack[-15], Stack[-1])
0x78: Pop(1)
0x79: Push("noandrei")
0x7a: @ Trigger(Stack[-15], Stack[-1])
0x7b: Pop(1)
0x7c: Stack[-14] = 0
0x7d: GOTO 0x16f

0x7e: Push("restore_andrei")
0x7f: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x81: Push("shouse1_kabak")
0x82: @ GetSceneByName(Stack[-14], Stack[-1])
0x83: Pop(1)
0x84: Push("andrei")
0x85: @ Trigger(Stack[-14], Stack[-1])
0x86: Pop(1)
0x87: Push( Stack[0 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: Push("cleanup")
0x8a: @ Trigger(Stack[-0], Stack[-1])
0x8b: Pop(1)
0x8c: Stack[-13] = 0
0x8d: GOTO 0x16f

0x8e: Push("soldier_attack")
0x8f: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0x91: @@ size(Stack[-12])
0x92: Pop(0)
0x93: Stack[-11] = (int) 0
0x94: Pop(0); Push((bool) Stack[-11] < Stack[-12])
0x95: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x96: @@ get(Stack[-10], Stack[-11])
0x97: Pop(0)
0x98: Push(Stack[-10])
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @@ GetActor(Stack[-9])
0x9b: Pop(0)
0x9c: Pop(0); Push((bool) Stack[-9] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9e: @@ Remove()
0x9f: Pop(0)
0xa0: GOTO 0xa4

0xa1: Push("attack")
0xa2: @ Trigger(Stack[-10], Stack[-1])
0xa3: Pop(1)
0xa4: Stack[-9] = 0
0xa5: Stack[-10] = 0
0xa6: Push((int) 1)
0xa7: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa8: GOTO 0x94

0xa9: Push( Stack[2 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xab: @@ GetActor(Stack[-8])
0xac: Pop(0)
0xad: Pop(0); Push((bool) Stack[-8] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xaf: @@ Remove()
0xb0: Pop(0)
0xb1: GOTO 0xb5

0xb2: Push("attack")
0xb3: @ Trigger(Stack[-9], Stack[-1])
0xb4: Pop(1)
0xb5: Stack[-8] = 0
0xb6: GOTO 0x16f

0xb7: Push("teleport")
0xb8: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0xba: Push("player")
0xbb: @ FindActor(Stack[-8], Stack[-1])
0xbc: Pop(1)
0xbd: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0xbe: Push(Stack[-7])
0xbf: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xc0: PushEmpty(object, object, int, object)
0xc1: Stack[-3] = Stack[-11]
0xc2: Stack[-2] = (int) 0
0xc3: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xc4: Call2 0x1ad

0xc5: Stack[6 + Tasks[-1].StackPointer] = Stack[-4]
0xc6: Pop(4)
0xc7: PushEmpty(object, object, int, object)
0xc8: Stack[-3] = Stack[-11]
0xc9: Stack[-2] = (int) 1
0xca: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xcb: Call2 0x1ad

0xcc: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0xcd: Pop(4)
0xce: PushEmpty(object, object, int, object)
0xcf: Stack[-3] = Stack[-11]
0xd0: Stack[-2] = (int) 2
0xd1: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0xd2: Call2 0x1ad

0xd3: Stack[10 + Tasks[-1].StackPointer] = Stack[-4]
0xd4: Pop(4)
0xd5: PushEmpty(object, object, int, object)
0xd6: Stack[-3] = Stack[-11]
0xd7: Stack[-2] = (int) 3
0xd8: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0xd9: Call2 0x1ad

0xda: Stack[12 + Tasks[-1].StackPointer] = Stack[-4]
0xdb: Pop(4)
0xdc: PushEmpty(object, object, int, object)
0xdd: Stack[-3] = Stack[-11]
0xde: Stack[-2] = (int) 4
0xdf: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0xe0: Call2 0x1ad

0xe1: Stack[14 + Tasks[-1].StackPointer] = Stack[-4]
0xe2: Pop(4)
0xe3: Stack[-6] = (int) 0
0xe4: Push((int) 5)
0xe5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: @@ RemoveAllItems(Stack[-6])
0xe8: Pop(0)
0xe9: Push((int) 1)
0xea: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xeb: GOTO 0xe4

0xec: @@ SelectWeapon()
0xed: Pop(0)
0xee: PushEmpty()
0xef: Call2 0x0

0xf0: Pop(0)
0xf1: PushEmpty(object, string)
0xf2: Stack[-1] = "quest_d11_01_teleport"
0xf3: Call2 0x1d8

0xf4: Pop(2)
0xf5: @ GetMainOutdoorScene(Stack[-5])
0xf6: Pop(0)
0xf7: PushEmpty(object, object, string, string, string)
0xf8: Stack[-4] = Stack[-10]
0xf9: Stack[-3] = "pt_d11q01_guard1"
0xfa: Stack[-2] = "pers_soldat"
0xfb: Stack[-1] = "d11q01_guard1.xml"
0xfc: Call2 0x207

0xfd: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0xfe: Pop(5)
0xff: PushEmpty(object, object, string, string, string)
0x100: Stack[-4] = Stack[-10]
0x101: Stack[-3] = "pt_d11q01_guard2"
0x102: Stack[-2] = "pers_soldat"
0x103: Stack[-1] = "d11q01_guard2.xml"
0x104: Call2 0x207

0x105: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x106: Pop(5)
0x107: @@ Remove()
0x108: Pop(0)
0x109: PushEmpty(object, object, string, string, string)
0x10a: Stack[-4] = Stack[-10]
0x10b: Stack[-3] = "pt_d11q01_msoldier"
0x10c: Stack[-2] = "pers_soldat"
0x10d: Stack[-1] = "d11q01_soldier.xml"
0x10e: Call2 0x1f5

0x10f: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x110: Pop(5)
0x111: Stack[-5] = 0
0x112: Stack[-7] = 0
0x113: GOTO 0x16f

0x114: Push("soldier_death")
0x115: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x117: Pop(0); Push((bool) Stack[16 + Tasks[-1].StackPointer] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: Return(); Pop(34)

0x11a: Push( Stack[17 + Tasks[-1].StackPointer] )
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Return(); Pop(34)

0x11d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x11e: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x11f: @@ GetActor(Stack[-4])
0x120: Pop(0)
0x121: @@ IsDead(Stack[-3])
0x122: Pop(0)
0x123: Push(Stack[-3])
0x124: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x125: PushEmpty(object, object, object)
0x126: Stack[-3] = Stack[-7]
0x127: Stack[-2] = Stack[6 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0x129: Call2 0x251

0x12a: Pop(3)
0x12b: PushEmpty(object, object, object)
0x12c: Stack[-3] = Stack[-7]
0x12d: Stack[-2] = Stack[8 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x12f: Call2 0x251

0x130: Pop(3)
0x131: PushEmpty(object, object, object)
0x132: Stack[-3] = Stack[-7]
0x133: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x134: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x135: Call2 0x251

0x136: Pop(3)
0x137: PushEmpty(object, object, object)
0x138: Stack[-3] = Stack[-7]
0x139: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x13b: Call2 0x251

0x13c: Pop(3)
0x13d: PushEmpty(object, object, object)
0x13e: Stack[-3] = Stack[-7]
0x13f: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x140: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x141: Call2 0x251

0x142: Pop(3)
0x143: PushEmpty(int, string)
0x144: Stack[-1] = "burah_serum"
0x145: Call2 0x24c

0x146: Pop(1)
0x147: Push((int) 0)
0x148: Push((int) 1)
0x149: @@ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Stack[17 + Tasks[-1].StackPointer] = (bool)1
0x14c: Stack[-4] = 0
0x14d: GOTO 0x16f

0x14e: Push("cleanup")
0x14f: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x151: Push("d11q01")
0x152: @ GetVariable(Stack[-1], Stack[-2])
0x153: Pop(1)
0x154: Push((int) 1000)
0x155: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x157: PushEmpty()
0x158: Call2 0x170

0x159: Pop(0)
0x15a: GOTO 0x15e

0x15b: PushEmpty()
0x15c: Call2 0x186

0x15d: Pop(0)
0x15e: PushEmpty()
0x15f: Call2 0x199

0x160: Pop(0)
0x161: GOTO 0x16f

0x162: Push("fail")
0x163: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x165: PushEmpty()
0x166: Call2 0x170

0x167: Pop(0)
0x168: GOTO 0x16f

0x169: Push("completed")
0x16a: Pop(1); Push((bool) Stack[-36] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x17e

0x16e: Pop(0)
0x16f: Return(); Pop(34)

0x170: PushEmpty(bool, string, string, string)
0x171: Stack[-3] = "volonteers_danko"
0x172: Stack[-2] = "disease"
0x173: Stack[-1] = "andrei"
0x174: Call2 0x22b

0x175: Pop(4)
0x176: Push("d11q01")
0x177: Push((int) -1)
0x178: @ SetVariable(Stack[-2], Stack[-1])
0x179: Pop(2)
0x17a: PushEmpty()
0x17b: Call2 0x186

0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: Push("d11q01")
0x17f: Push((int) 1000)
0x180: @ SetVariable(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: PushEmpty()
0x183: Call2 0x186

0x184: Pop(0)
0x185: Return(); Pop(0)

0x186: Push( Stack[0 + Tasks[-1].StackPointer] )
0x187: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x188: Push("cleanup")
0x189: @ Trigger(Stack[-0], Stack[-1])
0x18a: Pop(1)
0x18b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: Push("cleanup")
0x18e: @ Trigger(Stack[-3], Stack[-1])
0x18f: Pop(1)
0x190: Push( Stack[4 + Tasks[-1].StackPointer] )
0x191: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x192: @@ Remove()
0x193: Pop(0)
0x194: Push( Stack[5 + Tasks[-1].StackPointer] )
0x195: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x196: @@ Remove()
0x197: Pop(0)
0x198: Return(); Pop(0)

0x199: EventDisable(26)
0x19a: PushEmpty(object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x237

0x19d: Pop(1)
0x19e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: @@ Remove()
0x1a1: Pop(0)
0x1a2: PushEmpty(string, bool)
0x1a3: Stack[-2] = "cot_maria@door1"
0x1a4: Stack[-1] = (bool) 0
0x1a5: Call2 0x21a

0x1a6: Pop(2)
0x1a7: PushEmpty(object)
0x1a8: Call2 0x1c6

0x1a9: Pop(0)
0x1aa: @ RemoveActor(Stack[-1])
0x1ab: Pop(1)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0x1ae: PushEmpty(object)
0x1af: Call2 0x1d2

0x1b0: Stack[-6] = Stack[-1]
0x1b1: Pop(1)
0x1b2: @@ GetItemCount(Stack[-4], Stack[-12])
0x1b3: Pop(0)
0x1b4: Stack[-3] = (int) 0
0x1b5: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b7: @@ GetItem(Stack[-2], Stack[-3], Stack[-12])
0x1b8: Pop(0)
0x1b9: @@ add(Stack[-2])
0x1ba: Pop(0)
0x1bb: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12])
0x1bc: Pop(0)
0x1bd: @@ add(Stack[-1])
0x1be: Pop(0)
0x1bf: Stack[-2] = 0
0x1c0: Push((int) 1)
0x1c1: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x1c2: GOTO 0x1b5

0x1c3: Stack[-14] = Stack[-5]
0x1c4: Return(); Pop(10)

0x1c5: Stack[-5] = 0
0x1c6: PushEmpty(object, object)
0x1c7: @ self(Stack[-1])
0x1c8: Pop(0)
0x1c9: Stack[-3] = Stack[-1]
0x1ca: Return(); Pop(2)

0x1cb: Stack[-1] = 0
0x1cc: PushEmpty(object, object)
0x1cd: @ CreateIntVector(Stack[-1])
0x1ce: Pop(0)
0x1cf: Stack[-3] = Stack[-1]
0x1d0: Return(); Pop(2)

0x1d1: Stack[-1] = 0
0x1d2: PushEmpty(object, object)
0x1d3: @ CreateObjectVector(Stack[-1])
0x1d4: Pop(0)
0x1d5: Stack[-3] = Stack[-1]
0x1d6: Return(); Pop(2)

0x1d7: Stack[-1] = 0
0x1d8: PushEmpty(object, object, object, object)
0x1d9: @ GetMainOutdoorScene(Stack[-2])
0x1da: Pop(0)
0x1db: Push(".bin")
0x1dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1dd: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1de: Pop(1)
0x1df: Stack[-6] = Stack[-1]
0x1e0: Return(); Pop(4)

0x1e1: Stack[-1] = 0
0x1e2: Stack[-2] = 0
0x1e3: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1e4: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1e5: Pop(0)
0x1e6: Pop(0); Push((bool) Stack[-4] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e8: Push("Locator ")
0x1e9: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1ea: Push(" doesn't exist")
0x1eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ec: @ Trace(Stack[-1])
0x1ed: Pop(1)
0x1ee: Stack[-1] = 0
0x1ef: GOTO 0x1f2

0x1f0: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1f1: Pop(0)
0x1f2: Stack[-13] = Stack[-1]
0x1f3: Return(); Pop(8)

0x1f4: Stack[-1] = 0
0x1f5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1f6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1f7: Pop(0)
0x1f8: Pop(0); Push((bool) Stack[-4] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fa: Push("Locator ")
0x1fb: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1fc: Push(" doesn't exist")
0x1fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1fe: @ Trace(Stack[-1])
0x1ff: Pop(1)
0x200: Stack[-1] = 0
0x201: GOTO 0x204

0x202: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x203: Pop(0)
0x204: Stack[-13] = Stack[-1]
0x205: Return(); Pop(8)

0x206: Stack[-1] = 0
0x207: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x208: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x209: Pop(0)
0x20a: Pop(0); Push((bool) Stack[-4] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20c: Push("Locator ")
0x20d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x20e: Push(" doesn't exist")
0x20f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x210: @ Trace(Stack[-1])
0x211: Pop(1)
0x212: Stack[-1] = 0
0x213: GOTO 0x217

0x214: Push((bool) 1)
0x215: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1])
0x216: Pop(1)
0x217: Stack[-13] = Stack[-1]
0x218: Return(); Pop(8)

0x219: Stack[-1] = 0
0x21a: PushEmpty(object, object)
0x21b: @ FindActor(Stack[-1], Stack[-4])
0x21c: Pop(0)
0x21d: Pop(0); Push((bool) Stack[-1] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21f: Push("Door ")
0x220: Pop(1); Push(Stack[-1] + Stack[-5]);
0x221: Push(" not found")
0x222: Pop(2); Push(Stack[-2] + Stack[-1]);
0x223: @ Trace(Stack[-1])
0x224: Pop(1)
0x225: GOTO 0x229

0x226: Push("locked")
0x227: @@ SetProperty(Stack[-1], Stack[-4])
0x228: Pop(1)
0x229: Return(); Pop(2)

0x22a: Stack[-1] = 0
0x22b: PushEmpty(object, object)
0x22c: @ FindActor(Stack[-1], Stack[-5])
0x22d: Pop(0)
0x22e: Pop(0); Push((bool) Stack[-1] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-6] = (bool) 0
0x231: Return(); Pop(2)

0x232: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x233: Pop(0)
0x234: Stack[-6] = (bool) 1
0x235: Return(); Pop(2)

0x236: Stack[-1] = 0
0x237: PushEmpty(int, int, object, int, int, object)
0x238: Push(Stack[-7])
0x239: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x23a: @@ size(Stack[-3])
0x23b: Pop(0)
0x23c: Stack[-2] = (int) 0
0x23d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x23e: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23f: @@ get(Stack[-1], Stack[-2])
0x240: Pop(0)
0x241: Push(Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x243: @@ Remove()
0x244: Pop(0)
0x245: Stack[-1] = 0
0x246: Push((int) 1)
0x247: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x248: GOTO 0x23d

0x249: @@ clear()
0x24a: Pop(0)
0x24b: Return(); Pop(6)

0x24c: PushEmpty(int, int)
0x24d: @ GetInvItemByName(Stack[-1], Stack[-3])
0x24e: Pop(0)
0x24f: Stack[-4] = Stack[-1]
0x250: Return(); Pop(2)

0x251: PushEmpty(int, int, object, int, bool, int, int, object, int, bool)
0x252: @@ size(Stack[-5])
0x253: Pop(0)
0x254: Stack[-4] = (int) 0
0x255: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x256: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x257: @@ get(Stack[-3], Stack[-4])
0x258: Pop(0)
0x259: @@ get(Stack[-2], Stack[-4])
0x25a: Pop(0)
0x25b: Push((int) 0)
0x25c: @@ AddItem(Stack[-2], Stack[-4], Stack[-1], Stack[-3])
0x25d: Pop(1)
0x25e: Stack[-3] = 0
0x25f: Push((int) 1)
0x260: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x261: GOTO 0x255

0x262: Return(); Pop(10)

