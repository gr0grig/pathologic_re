GlobalVarCount = 0

Strings:
	boiny@door1
	cot_eva
	icot_eva_door
	nodanko
	place_mdoberman
	pt_b9q01_mdoberman
	pers_doberman
	b9q01_mdoberman.xml
	remove_mdoberman
	Remove
	init_factory
	factory@door1
	ifactory_grid_door
	pt_b9q01_Danko
	NPC_Bakalavr
	b9q01_danko.xml
	pt_b9q01_doberman1
	pers_karlik
	b9q01_doberman1.xml
	pt_b9q01_doberman2
	b9q01_doberman2.xml
	factory_fight
	attack
	ifactory@door1
	door_close
	doberman_dead
	IsDead
	door_open
	b9q01DankoFree
	danko_free
	reset_factory
	cleanup
	b9q01
	remove_danko
	fail
	completed
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	Close

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	PlaySound (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x16 Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "boiny@door1"
0x3: Stack[-1] = (bool) 0
0x4: Call2 0x143

0x5: Pop(2)
0x6: Push("cot_eva")
0x7: @ GetSceneByName(Stack[-2], Stack[-1])
0x8: Pop(1)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "icot_eva_door"
0xb: Stack[-1] = (bool) 0
0xc: Call2 0x154

0xd: Pop(2)
0xe: Push("nodanko")
0xf: @ Trigger(Stack[-2], Stack[-1])
0x10: Pop(1)
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, object, bool, int, object, object, object, bool, int, object)
0x17: @ Trace(Stack[-11])
0x18: Pop(0)
0x19: Push("place_mdoberman")
0x1a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x1c: @ GetMainOutdoorScene(Stack[-5])
0x1d: Pop(0)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-4] = Stack[-10]
0x20: Stack[-3] = "pt_b9q01_mdoberman"
0x21: Stack[-2] = "pers_doberman"
0x22: Stack[-1] = "b9q01_mdoberman.xml"
0x23: Call2 0x131

0x24: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x25: Pop(5)
0x26: Stack[-5] = 0
0x27: GOTO 0xd2

0x28: Push("remove_mdoberman")
0x29: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2b: @@ Remove()
0x2c: Pop(0)
0x2d: GOTO 0xd2

0x2e: Push("init_factory")
0x2f: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x31: Push("factory")
0x32: @ GetSceneByName(Stack[-5], Stack[-1])
0x33: Pop(1)
0x34: PushEmpty(string, bool)
0x35: Stack[-2] = "factory@door1"
0x36: Stack[-1] = (bool) 0
0x37: Call2 0x143

0x38: Pop(2)
0x39: PushEmpty(string, bool)
0x3a: Stack[-2] = "ifactory_grid_door"
0x3b: Stack[-1] = (bool) 1
0x3c: Call2 0x154

0x3d: Pop(2)
0x3e: PushEmpty(object, object, string, string, string)
0x3f: Stack[-4] = Stack[-9]
0x40: Stack[-3] = "pt_b9q01_Danko"
0x41: Stack[-2] = "NPC_Bakalavr"
0x42: Stack[-1] = "b9q01_danko.xml"
0x43: Call2 0x11f

0x44: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x45: Pop(5)
0x46: PushEmpty(object, object, string, string, string)
0x47: Stack[-4] = Stack[-9]
0x48: Stack[-3] = "pt_b9q01_doberman1"
0x49: Stack[-2] = "pers_karlik"
0x4a: Stack[-1] = "b9q01_doberman1.xml"
0x4b: Call2 0x11f

0x4c: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x4d: Pop(5)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-4] = Stack[-9]
0x50: Stack[-3] = "pt_b9q01_doberman2"
0x51: Stack[-2] = "pers_karlik"
0x52: Stack[-1] = "b9q01_doberman2.xml"
0x53: Call2 0x11f

0x54: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x55: Pop(5)
0x56: Stack[-4] = 0
0x57: GOTO 0xd2

0x58: Push("factory_fight")
0x59: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5b: Push("attack")
0x5c: @ Trigger(Stack[-2], Stack[-1])
0x5d: Pop(1)
0x5e: Push("attack")
0x5f: @ Trigger(Stack[-3], Stack[-1])
0x60: Pop(1)
0x61: PushEmpty(string, bool)
0x62: Stack[-2] = "ifactory@door1"
0x63: Stack[-1] = (bool) 1
0x64: Call2 0x143

0x65: Pop(2)
0x66: Push("door_close")
0x67: @ PlaySound(Stack[-1])
0x68: Pop(1)
0x69: GOTO 0xd2

0x6a: Push("doberman_dead")
0x6b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x6d: @@ IsDead(Stack[-3])
0x6e: Pop(0)
0x6f: Push(Stack[-3])
0x70: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x71: @@ IsDead(Stack[-3])
0x72: Pop(0)
0x73: Push(Stack[-3])
0x74: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x75: PushEmpty(string, bool)
0x76: Stack[-2] = "ifactory@door1"
0x77: Stack[-1] = (bool) 0
0x78: Call2 0x143

0x79: Pop(2)
0x7a: PushEmpty(string, bool)
0x7b: Stack[-2] = "ifactory_grid_door"
0x7c: Stack[-1] = (bool) 0
0x7d: Call2 0x154

0x7e: Pop(2)
0x7f: Push("door_open")
0x80: @ PlaySound(Stack[-1])
0x81: Pop(1)
0x82: Push("b9q01DankoFree")
0x83: Push((int) 1)
0x84: @ SetVariable(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: GOTO 0xd2

0x87: Push("danko_free")
0x88: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8a: PushEmpty(string, bool)
0x8b: Stack[-2] = "ifactory_grid_door"
0x8c: Stack[-1] = (bool) 0
0x8d: Call2 0x154

0x8e: Pop(2)
0x8f: Push("door_open")
0x90: @ PlaySound(Stack[-1])
0x91: Pop(1)
0x92: PushEmpty(string, bool)
0x93: Stack[-2] = "factory@door1"
0x94: Stack[-1] = (bool) 1
0x95: Call2 0x143

0x96: Pop(2)
0x97: GOTO 0xd2

0x98: Push("reset_factory")
0x99: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9b: PushEmpty()
0x9c: Call2 0xe3

0x9d: Pop(0)
0x9e: PushEmpty(string, bool)
0x9f: Stack[-2] = "factory@door1"
0xa0: Stack[-1] = (bool) 1
0xa1: Call2 0x143

0xa2: Pop(2)
0xa3: GOTO 0xd2

0xa4: Push("cleanup")
0xa5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xa7: Push("b9q01")
0xa8: @ GetVariable(Stack[-1], Stack[-3])
0xa9: Pop(1)
0xaa: Push((int) 1000)
0xab: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xad: PushEmpty()
0xae: Call2 0xd3

0xaf: Pop(0)
0xb0: GOTO 0xb4

0xb1: PushEmpty()
0xb2: Call2 0xf0

0xb3: Pop(0)
0xb4: GOTO 0xd2

0xb5: Push("remove_danko")
0xb6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb8: Push("cot_eva")
0xb9: @ GetSceneByName(Stack[-2], Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(string, bool)
0xbc: Stack[-2] = "icot_eva_door"
0xbd: Stack[-1] = (bool) 0
0xbe: Call2 0x154

0xbf: Pop(2)
0xc0: Push("nodanko")
0xc1: @ Trigger(Stack[-2], Stack[-1])
0xc2: Pop(1)
0xc3: Stack[-1] = 0
0xc4: GOTO 0xd2

0xc5: Push("fail")
0xc6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0xd3

0xca: Pop(0)
0xcb: GOTO 0xd2

0xcc: Push("completed")
0xcd: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0xdb

0xd1: Pop(0)
0xd2: Return(); Pop(10)

0xd3: Push("b9q01")
0xd4: Push((int) -1)
0xd5: @ SetVariable(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: PushEmpty()
0xd8: Call2 0xf0

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: Push("b9q01")
0xdc: Push((int) 1000)
0xdd: @ SetVariable(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: PushEmpty()
0xe0: Call2 0xf0

0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe4: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe5: @ RemoveActor(Stack[-1])
0xe6: Pop(0)
0xe7: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe8: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe9: @ RemoveActor(Stack[-2])
0xea: Pop(0)
0xeb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: @ RemoveActor(Stack[-3])
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty(object, object)
0xf1: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf2: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf3: @@ Remove()
0xf4: Pop(0)
0xf5: PushEmpty()
0xf6: Call2 0xe3

0xf7: Pop(0)
0xf8: PushEmpty(string, bool)
0xf9: Stack[-2] = "ifactory@door1"
0xfa: Stack[-1] = (bool) 0
0xfb: Call2 0x143

0xfc: Pop(2)
0xfd: PushEmpty(string, bool)
0xfe: Stack[-2] = "ifactory_grid_door"
0xff: Stack[-1] = (bool) 0
0x100: Call2 0x154

0x101: Pop(2)
0x102: PushEmpty(string, bool)
0x103: Stack[-2] = "boiny@door1"
0x104: Stack[-1] = (bool) 1
0x105: Call2 0x143

0x106: Pop(2)
0x107: Push("cot_eva")
0x108: @ GetSceneByName(Stack[-2], Stack[-1])
0x109: Pop(1)
0x10a: PushEmpty(string, bool)
0x10b: Stack[-2] = "icot_eva_door"
0x10c: Stack[-1] = (bool) 0
0x10d: Call2 0x154

0x10e: Pop(2)
0x10f: Push("danko")
0x110: @ Trigger(Stack[-2], Stack[-1])
0x111: Pop(1)
0x112: PushEmpty(object)
0x113: Call2 0x119

0x114: Pop(0)
0x115: @ RemoveActor(Stack[-1])
0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty(object, object)
0x11a: @ self(Stack[-1])
0x11b: Pop(0)
0x11c: Stack[-3] = Stack[-1]
0x11d: Return(); Pop(2)

0x11e: Stack[-1] = 0
0x11f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x120: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x121: Pop(0)
0x122: Pop(0); Push((bool) Stack[-4] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x124: Push("Locator ")
0x125: Pop(1); Push(Stack[-1] + Stack[-12]);
0x126: Push(" doesn't exist")
0x127: Pop(2); Push(Stack[-2] + Stack[-1]);
0x128: @ Trace(Stack[-1])
0x129: Pop(1)
0x12a: Stack[-1] = 0
0x12b: GOTO 0x12e

0x12c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x12d: Pop(0)
0x12e: Stack[-13] = Stack[-1]
0x12f: Return(); Pop(8)

0x130: Stack[-1] = 0
0x131: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x132: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x133: Pop(0)
0x134: Pop(0); Push((bool) Stack[-4] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x136: Push("Locator ")
0x137: Pop(1); Push(Stack[-1] + Stack[-12]);
0x138: Push(" doesn't exist")
0x139: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13a: @ Trace(Stack[-1])
0x13b: Pop(1)
0x13c: Stack[-1] = 0
0x13d: GOTO 0x140

0x13e: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x13f: Pop(0)
0x140: Stack[-13] = Stack[-1]
0x141: Return(); Pop(8)

0x142: Stack[-1] = 0
0x143: PushEmpty(object, object)
0x144: @ FindActor(Stack[-1], Stack[-4])
0x145: Pop(0)
0x146: Pop(0); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x148: Push("Door ")
0x149: Pop(1); Push(Stack[-1] + Stack[-5]);
0x14a: Push(" not found")
0x14b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14c: @ Trace(Stack[-1])
0x14d: Pop(1)
0x14e: GOTO 0x152

0x14f: Push("locked")
0x150: @@ SetProperty(Stack[-1], Stack[-4])
0x151: Pop(1)
0x152: Return(); Pop(2)

0x153: Stack[-1] = 0
0x154: PushEmpty(object, object)
0x155: @ FindActor(Stack[-1], Stack[-4])
0x156: Pop(0)
0x157: Pop(0); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x159: Push("Door ")
0x15a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x15b: Push(" not found")
0x15c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15d: @ Trace(Stack[-1])
0x15e: Pop(1)
0x15f: GOTO 0x167

0x160: Push(Stack[-3])
0x161: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x162: @@ Close()
0x163: Pop(0)
0x164: Push("locked")
0x165: @@ SetProperty(Stack[-1], Stack[-4])
0x166: Pop(1)
0x167: Return(); Pop(2)

0x168: Stack[-1] = 0
