GlobalVarCount = 0

Strings:
	warehouse_gangster@door1
	cot_alexandr@door1
	init_volnica
	pt_k4q01_grabitel
	GetLocator
	pers_grabitel
	k4q01_grabitel.xml
	AddStationaryActor
	add
	k4q01_grabitel_e.xml
	grabitel_entrance_dead
	Remove
	warehouse_gangster
	pt_britva
	k4q01_britva.xml
	door_open
	cutscene
	door_close
	iwarehouse_gangster@door1
	pt_k4q01_meshok
	scripted_container
	k4q01_meshok.xml
	quest_k4_01_cutscene
	cutscene_end
	pt_britva_attack
	k4q01_britva_attack.xml
	pt_k4q01_rat
	pers_rat
	rat_indoor.xml
	meshok_taken
	warehouse_gangster_unload
	cleanup
	fail
	completed
	k4q01
	.bin
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	size
	get
	clear
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	PlaySound (1 args)
	RemoveActor (1 args)
	AddActor (6 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActorByType (6 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)


0x0: PushEmpty(object)
0x1: Call2 0x107

0x2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(string, bool)
0x5: Stack[-2] = "warehouse_gangster@door1"
0x6: Stack[-1] = (bool) 1
0x7: Call2 0x14e

0x8: Pop(2)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "cot_alexandr@door1"
0xb: Stack[-1] = (bool) 0
0xc: Call2 0x14e

0xd: Pop(2)
0xe: @ Hold()
0xf: Pop(0)
0x10: GOTO 0xe

0x11: Return(); Pop(0)

0x12: PushEmpty(object, int, bool, cvector, cvector, object, object, object, object, int, bool, cvector, cvector, object, int, object, int, bool, cvector, cvector, object, object, object, object, int, bool, cvector, cvector, object, int)
0x13: @ Trace(Stack[-31])
0x14: Pop(0)
0x15: Push("init_volnica")
0x16: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x18: @ GetMainOutdoorScene(Stack[-15])
0x19: Pop(0)
0x1a: Stack[-14] = (int) 1
0x1b: Push("pt_k4q01_grabitel")
0x1c: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1d: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12])
0x1e: Pop(1)
0x1f: Pop(0); Push((bool) Stack[-13] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: GOTO 0x2c

0x22: Push("pers_grabitel")
0x23: Push("k4q01_grabitel.xml")
0x24: @@ AddStationaryActor(Stack[-12], Stack[-14], Stack[-13], Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: @@ add(Stack[-10])
0x27: Pop(0)
0x28: Stack[-10] = 0
0x29: Push((int) 1)
0x2a: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x2b: GOTO 0x1b

0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-4] = Stack[-20]
0x2e: Stack[-3] = "pt_k4q01_grabitel"
0x2f: Stack[-2] = "pers_grabitel"
0x30: Stack[-1] = "k4q01_grabitel_e.xml"
0x31: Call2 0x13c

0x32: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x33: Pop(5)
0x34: Stack[-15] = 0
0x35: GOTO 0xcf

0x36: Push("grabitel_entrance_dead")
0x37: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x39: PushEmpty(string, bool)
0x3a: Stack[-2] = "warehouse_gangster@door1"
0x3b: Stack[-1] = (bool) 0
0x3c: Call2 0x14e

0x3d: Pop(2)
0x3e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: @@ Remove()
0x41: Pop(0)
0x42: Push("warehouse_gangster")
0x43: @ GetSceneByName(Stack[-10], Stack[-1])
0x44: Pop(1)
0x45: PushEmpty(object, object, string, string, string)
0x46: Stack[-4] = Stack[-14]
0x47: Stack[-3] = "pt_britva"
0x48: Stack[-2] = "pers_grabitel"
0x49: Stack[-1] = "k4q01_britva.xml"
0x4a: Call2 0x118

0x4b: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x4c: Pop(5)
0x4d: Push("door_open")
0x4e: @ PlaySound(Stack[-1])
0x4f: Pop(1)
0x50: Stack[-9] = 0
0x51: GOTO 0xcf

0x52: Push("cutscene")
0x53: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x55: Push( Stack[4 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: @ RemoveActor(Stack[-4])
0x58: Pop(0)
0x59: Push("warehouse_gangster")
0x5a: @ GetSceneByName(Stack[-9], Stack[-1])
0x5b: Pop(1)
0x5c: Push("door_close")
0x5d: @ PlaySound(Stack[-1])
0x5e: Pop(1)
0x5f: PushEmpty(string, bool)
0x60: Stack[-2] = "iwarehouse_gangster@door1"
0x61: Stack[-1] = (bool) 1
0x62: Call2 0x14e

0x63: Pop(2)
0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-4] = Stack[-13]
0x66: Stack[-3] = "pt_k4q01_meshok"
0x67: Stack[-2] = "scripted_container"
0x68: Stack[-1] = "k4q01_meshok.xml"
0x69: Call2 0x12a

0x6a: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x6b: Pop(5)
0x6c: PushEmpty(object, string)
0x6d: Stack[-1] = "quest_k4_01_cutscene"
0x6e: Call2 0x10d

0x6f: Pop(2)
0x70: Stack[-8] = 0
0x71: GOTO 0xcf

0x72: Push("cutscene_end")
0x73: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x75: Push("warehouse_gangster")
0x76: @ GetSceneByName(Stack[-8], Stack[-1])
0x77: Pop(1)
0x78: PushEmpty(object, object, string, string, string)
0x79: Stack[-4] = Stack[-12]
0x7a: Stack[-3] = "pt_britva_attack"
0x7b: Stack[-2] = "pers_grabitel"
0x7c: Stack[-1] = "k4q01_britva_attack.xml"
0x7d: Call2 0x118

0x7e: Pop(5)
0x7f: Stack[-6] = (int) 1
0x80: Push("pt_k4q01_rat")
0x81: Pop(1); Push(Stack[-1] + Stack[-7]);
0x82: @@ GetLocator(Stack[-1], Stack[-6], Stack[-5], Stack[-4])
0x83: Pop(1)
0x84: Pop(0); Push((bool) Stack[-5] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: GOTO 0x8f

0x87: Push("pers_rat")
0x88: Push("rat_indoor.xml")
0x89: @ AddActor(Stack[-4], Stack[-2], Stack[-9], Stack[-6], Stack[-5], Stack[-1])
0x8a: Pop(2)
0x8b: Stack[-2] = 0
0x8c: Push((int) 1)
0x8d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x8e: GOTO 0x80

0x8f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x90: Stack[-7] = 0
0x91: GOTO 0xcf

0x92: Push("meshok_taken")
0x93: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = "iwarehouse_gangster@door1"
0x97: Stack[-1] = (bool) 0
0x98: Call2 0x14e

0x99: Pop(2)
0x9a: PushEmpty()
0x9b: Call2 0x174

0x9c: Pop(0)
0x9d: Push("door_open")
0x9e: @ PlaySound(Stack[-1])
0x9f: Pop(1)
0xa0: GOTO 0xcf

0xa1: Push("warehouse_gangster_unload")
0xa2: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa4: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa6: PushEmpty(string, bool)
0xa7: Stack[-2] = "warehouse_gangster@door1"
0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x14e

0xaa: Pop(2)
0xab: Push( Stack[4 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push("cleanup")
0xae: @ Trigger(Stack[-4], Stack[-1])
0xaf: Pop(1)
0xb0: GOTO 0xcf

0xb1: Push("fail")
0xb2: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0xd0

0xb6: Pop(0)
0xb7: GOTO 0xcf

0xb8: Push("completed")
0xb9: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0xd8

0xbd: Pop(0)
0xbe: GOTO 0xcf

0xbf: Push("cleanup")
0xc0: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc2: Push("k4q01")
0xc3: @ GetVariable(Stack[-1], Stack[-2])
0xc4: Pop(1)
0xc5: Push((int) 1000)
0xc6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0xd0

0xca: Pop(0)
0xcb: GOTO 0xcf

0xcc: PushEmpty()
0xcd: Call2 0xe0

0xce: Pop(0)
0xcf: Return(); Pop(30)

0xd0: Push("k4q01")
0xd1: Push((int) -1)
0xd2: @ SetVariable(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: PushEmpty()
0xd5: Call2 0xe0

0xd6: Pop(0)
0xd7: Return(); Pop(0)

0xd8: Push("k4q01")
0xd9: Push((int) 1000)
0xda: @ SetVariable(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: PushEmpty()
0xdd: Call2 0xe0

0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: EventDisable(26)
0xe1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: PushEmpty(object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call2 0x15f

0xe6: Pop(1)
0xe7: Stack[1 + Tasks[-1].StackPointer] = 0
0xe8: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xea: @@ Remove()
0xeb: Pop(0)
0xec: Push( Stack[3 + Tasks[-1].StackPointer] )
0xed: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xee: Push("cleanup")
0xef: @ Trigger(Stack[-3], Stack[-1])
0xf0: Pop(1)
0xf1: Push( Stack[4 + Tasks[-1].StackPointer] )
0xf2: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf3: Push("cleanup")
0xf4: @ Trigger(Stack[-4], Stack[-1])
0xf5: Pop(1)
0xf6: PushEmpty(string, bool)
0xf7: Stack[-2] = "iwarehouse_gangster@door1"
0xf8: Stack[-1] = (bool) 0
0xf9: Call2 0x14e

0xfa: Pop(2)
0xfb: PushEmpty(object)
0xfc: Call2 0x101

0xfd: Pop(0)
0xfe: @ RemoveActor(Stack[-1])
0xff: Pop(1)
0x100: Return(); Pop(0)

0x101: PushEmpty(object, object)
0x102: @ self(Stack[-1])
0x103: Pop(0)
0x104: Stack[-3] = Stack[-1]
0x105: Return(); Pop(2)

0x106: Stack[-1] = 0
0x107: PushEmpty(object, object)
0x108: @ CreateObjectVector(Stack[-1])
0x109: Pop(0)
0x10a: Stack[-3] = Stack[-1]
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(object, object, object, object)
0x10e: @ GetMainOutdoorScene(Stack[-2])
0x10f: Pop(0)
0x110: Push(".bin")
0x111: Pop(1); Push(Stack[-6] + Stack[-1]);
0x112: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x113: Pop(1)
0x114: Stack[-6] = Stack[-1]
0x115: Return(); Pop(4)

0x116: Stack[-1] = 0
0x117: Stack[-2] = 0
0x118: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x119: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x11a: Pop(0)
0x11b: Pop(0); Push((bool) Stack[-4] == 0)
0x11c: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11d: Push("Locator ")
0x11e: Pop(1); Push(Stack[-1] + Stack[-12]);
0x11f: Push(" doesn't exist")
0x120: Pop(2); Push(Stack[-2] + Stack[-1]);
0x121: @ Trace(Stack[-1])
0x122: Pop(1)
0x123: Stack[-1] = 0
0x124: GOTO 0x127

0x125: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x126: Pop(0)
0x127: Stack[-13] = Stack[-1]
0x128: Return(); Pop(8)

0x129: Stack[-1] = 0
0x12a: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12b: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x12c: Pop(0)
0x12d: Pop(0); Push((bool) Stack[-4] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x12f: Push("Locator ")
0x130: Pop(1); Push(Stack[-1] + Stack[-12]);
0x131: Push(" doesn't exist")
0x132: Pop(2); Push(Stack[-2] + Stack[-1]);
0x133: @ Trace(Stack[-1])
0x134: Pop(1)
0x135: Stack[-1] = 0
0x136: GOTO 0x139

0x137: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x138: Pop(0)
0x139: Stack[-13] = Stack[-1]
0x13a: Return(); Pop(8)

0x13b: Stack[-1] = 0
0x13c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x13d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x13e: Pop(0)
0x13f: Pop(0); Push((bool) Stack[-4] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x141: Push("Locator ")
0x142: Pop(1); Push(Stack[-1] + Stack[-12]);
0x143: Push(" doesn't exist")
0x144: Pop(2); Push(Stack[-2] + Stack[-1]);
0x145: @ Trace(Stack[-1])
0x146: Pop(1)
0x147: Stack[-1] = 0
0x148: GOTO 0x14b

0x149: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x14a: Pop(0)
0x14b: Stack[-13] = Stack[-1]
0x14c: Return(); Pop(8)

0x14d: Stack[-1] = 0
0x14e: PushEmpty(object, object)
0x14f: @ FindActor(Stack[-1], Stack[-4])
0x150: Pop(0)
0x151: Pop(0); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x153: Push("Door ")
0x154: Pop(1); Push(Stack[-1] + Stack[-5]);
0x155: Push(" not found")
0x156: Pop(2); Push(Stack[-2] + Stack[-1]);
0x157: @ Trace(Stack[-1])
0x158: Pop(1)
0x159: GOTO 0x15d

0x15a: Push("locked")
0x15b: @@ SetProperty(Stack[-1], Stack[-4])
0x15c: Pop(1)
0x15d: Return(); Pop(2)

0x15e: Stack[-1] = 0
0x15f: PushEmpty(int, int, object, int, int, object)
0x160: Push(Stack[-7])
0x161: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x162: @@ size(Stack[-3])
0x163: Pop(0)
0x164: Stack[-2] = (int) 0
0x165: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x166: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x167: @@ get(Stack[-1], Stack[-2])
0x168: Pop(0)
0x169: Push(Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16b: @@ Remove()
0x16c: Pop(0)
0x16d: Stack[-1] = 0
0x16e: Push((int) 1)
0x16f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x170: GOTO 0x165

0x171: @@ clear()
0x172: Pop(0)
0x173: Return(); Pop(6)

0x174: PushEmpty(object, object)
0x175: Push((int) 373)
0x176: Push((int) 1)
0x177: Push((int) 525730)
0x178: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: PushEmpty(bool, object, int)
0x17b: Stack[-2] = Stack[-4]
0x17c: Stack[-1] = (int) 368
0x17d: Call2 0x18e

0x17e: Pop(3)
0x17f: Return(); Pop(2)

0x180: Stack[-1] = 0
0x181: PushEmpty(object, object)
0x182: @ GetDiaryRoot(Stack[-1])
0x183: Pop(0)
0x184: Pop(0); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: Push("Can't retrieve diary root")
0x187: @ Trace(Stack[-1])
0x188: Pop(1)
0x189: Stack[-3] = (bool) 0
0x18a: Return(); Pop(2)

0x18b: Stack[-3] = Stack[-1]
0x18c: Return(); Pop(2)

0x18d: Stack[-1] = 0
0x18e: PushEmpty(object, object, int, object, object, int)
0x18f: PushEmpty(object)
0x190: Call2 0x181

0x191: Stack[-4] = Stack[-1]
0x192: Pop(1)
0x193: @@ Find(Stack[-7], Stack[-2])
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-2] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x197: Push("Can't find diary parent with id: ")
0x198: Pop(1); Push(Stack[-1] + Stack[-8]);
0x199: @ Trace(Stack[-1])
0x19a: Pop(1)
0x19b: Stack[-9] = (bool) 0
0x19c: Return(); Pop(6)

0x19d: @@ AddChild(Stack[-8])
0x19e: Pop(0)
0x19f: Push((int) 7)
0x1a0: @ SendWorldWndMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ GetCategory(Stack[-1])
0x1a3: Pop(0)
0x1a4: @ SetDiarySection(Stack[-1])
0x1a5: Pop(0)
0x1a6: Stack[-9] = (bool) 0
0x1a7: Return(); Pop(6)

0x1a8: Stack[-2] = 0
0x1a9: Stack[-3] = 0
