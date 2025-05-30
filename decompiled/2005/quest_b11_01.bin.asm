GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	boiny@door1
	storojka
	pt_b11q01_klara
	NPC_Klara
	b11q01_klara_laska.xml
	storojka_unload
	remove_klara
	cleanup
	open_shaft
	boiny_shaft_trigger
	activate
	iboiny_stones
	shaft_drop
	boiny_well.isc
	boiny_well
	pt_player
	b11q01KlaraWillHelp
	quest_b11_01_death_effect.bin
	ApplyEffect
	starshina_fight
	b11q01
	boiny_arena.isc
	boiny_arena
	open_well_exit
	well_trigger
	fight_win
	fail
	completed
	deactivate
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	Teleport location '
	' not found in scene '
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	GetActiveScene (1 args)
	GetSceneByName (2 args)
	Hold (0 args)
	Trace (1 args)
	Trigger (2 args)
	PlayNSSound (1 args)
	AddScene (1 args)
	sync (0 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	AddActor (6 args)
	Teleport (4 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, bool) Params = 0
		EVENT_26 Op = 0x1e Vars = (string)


0x0: PushEmpty(object, object, object, object)
0x1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2: PushEmpty(string, bool)
0x3: Stack[-2] = "boiny@door1"
0x4: Stack[-1] = (bool) 0
0x5: Call2 0x112

0x6: Pop(2)
0x7: @ GetActiveScene(Stack[-2])
0x8: Pop(0)
0x9: Push("storojka")
0xa: @ GetSceneByName(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Pop(0); Push((bool) Stack[-2] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf: GOTO 0x18

0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-4] = Stack[-6]
0x12: Stack[-3] = "pt_b11q01_klara"
0x13: Stack[-2] = "NPC_Klara"
0x14: Stack[-1] = "b11q01_klara_laska.xml"
0x15: Call2 0x100

0x16: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x17: Pop(5)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(4)

0x1c: Stack[-1] = 0
0x1d: Stack[-2] = 0
0x1e: PushEmpty(object, int, int, int, int, object, int, int, int, int)
0x1f: @ Trace(Stack[-11])
0x20: Pop(0)
0x21: Push("storojka_unload")
0x22: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x24: Push( Stack[0 + Tasks[-1].StackPointer] )
0x25: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x27: Push("storojka")
0x28: @ GetSceneByName(Stack[-6], Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(object, object, string, string, string)
0x2b: Stack[-4] = Stack[-10]
0x2c: Stack[-3] = "pt_b11q01_klara"
0x2d: Stack[-2] = "NPC_Klara"
0x2e: Stack[-1] = "b11q01_klara_laska.xml"
0x2f: Call2 0x100

0x30: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x31: Pop(5)
0x32: Stack[-5] = 0
0x33: GOTO 0xcd

0x34: Push("remove_klara")
0x35: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x37: Push("cleanup")
0x38: @ Trigger(Stack[-1], Stack[-1])
0x39: Pop(1)
0x3a: GOTO 0xcd

0x3b: Push("open_shaft")
0x3c: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x3e: PushEmpty(bool, string, string)
0x3f: Stack[-2] = "boiny_shaft_trigger"
0x40: Stack[-1] = "activate"
0x41: Call2 0x123

0x42: Pop(3)
0x43: PushEmpty(bool, string)
0x44: Stack[-1] = "iboiny_stones"
0x45: Call2 0x147

0x46: Pop(2)
0x47: GOTO 0xcd

0x48: Push("shaft_drop")
0x49: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x4b: Push("drop")
0x4c: @ PlayNSSound(Stack[-1])
0x4d: Pop(1)
0x4e: Push("boiny_well.isc")
0x4f: @ AddScene(Stack[-1])
0x50: Pop(1)
0x51: @ sync()
0x52: Pop(0)
0x53: PushEmpty(object, string, string)
0x54: PushEmpty(object)
0x55: Call2 0xf3

0x56: Stack[-4] = Stack[-1]
0x57: Pop(1)
0x58: Stack[-2] = "boiny_well"
0x59: Stack[-1] = "pt_player"
0x5a: Call2 0x12f

0x5b: Pop(3)
0x5c: @ sync()
0x5d: Pop(0)
0x5e: Push("b11q01KlaraWillHelp")
0x5f: @ GetVariable(Stack[-1], Stack[-5])
0x60: Pop(1)
0x61: PushEmpty(bool)
0x62: Stack[-1] = (bool) 1
0x63: Pop(0); Push((bool) Stack[-5] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x65: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x67: Stack[-1] = (bool) 0
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(object)
0x6a: Call2 0xf3

0x6b: Pop(0)
0x6c: Push("quest_b11_01_death_effect.bin")
0x6d: @@ ApplyEffect(Stack[-1])
0x6e: Pop(2)
0x6f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x70: GOTO 0xcd

0x71: Push("starshina_fight")
0x72: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x74: Push( Stack[1 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: Push("cleanup")
0x77: @ Trigger(Stack[-1], Stack[-1])
0x78: Pop(1)
0x79: Push("b11q01")
0x7a: @ GetVariable(Stack[-1], Stack[-4])
0x7b: Pop(1)
0x7c: Push(Stack[-3])
0x7d: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7e: PushEmpty()
0x7f: Call2 0x17a

0x80: Pop(0)
0x81: Push("boiny_arena.isc")
0x82: @ AddScene(Stack[-1])
0x83: Pop(1)
0x84: @ sync()
0x85: Pop(0)
0x86: PushEmpty(object, string, string)
0x87: PushEmpty(object)
0x88: Call2 0xf3

0x89: Stack[-4] = Stack[-1]
0x8a: Pop(1)
0x8b: Stack[-2] = "boiny_arena"
0x8c: Stack[-1] = "pt_player"
0x8d: Call2 0x12f

0x8e: Pop(3)
0x8f: GOTO 0xcd

0x90: Push("open_well_exit")
0x91: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x93: PushEmpty(bool, string, string)
0x94: Stack[-2] = "well_trigger"
0x95: Stack[-1] = "activate"
0x96: Call2 0x123

0x97: Pop(3)
0x98: GOTO 0xcd

0x99: Push("fight_win")
0x9a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x9c: Push("b11q01")
0x9d: @ GetVariable(Stack[-1], Stack[-3])
0x9e: Pop(1)
0x9f: Push(Stack[-2])
0xa0: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa1: PushEmpty()
0xa2: Call2 0x160

0xa3: Pop(0)
0xa4: GOTO 0xab

0xa5: PushEmpty()
0xa6: Call2 0x153

0xa7: Pop(0)
0xa8: PushEmpty()
0xa9: Call2 0x16d

0xaa: Pop(0)
0xab: PushEmpty()
0xac: Call2 0xd6

0xad: Pop(0)
0xae: GOTO 0xcd

0xaf: Push("cleanup")
0xb0: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb2: Push("b11q01")
0xb3: @ GetVariable(Stack[-1], Stack[-2])
0xb4: Pop(1)
0xb5: Push((int) 1000)
0xb6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0xce

0xba: Pop(0)
0xbb: GOTO 0xbf

0xbc: PushEmpty()
0xbd: Call2 0xde

0xbe: Pop(0)
0xbf: GOTO 0xcd

0xc0: Push("fail")
0xc1: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0xce

0xc5: Pop(0)
0xc6: GOTO 0xcd

0xc7: Push("completed")
0xc8: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xca: PushEmpty()
0xcb: Call2 0xd6

0xcc: Pop(0)
0xcd: Return(); Pop(10)

0xce: Push("b11q01")
0xcf: Push((int) -1)
0xd0: @ SetVariable(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: PushEmpty()
0xd3: Call2 0xde

0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: Push("b11q01")
0xd7: Push((int) 1000)
0xd8: @ SetVariable(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: PushEmpty()
0xdb: Call2 0xde

0xdc: Pop(0)
0xdd: Return(); Pop(0)

0xde: PushEmpty(bool, string, string)
0xdf: Stack[-2] = "boiny_shaft_trigger"
0xe0: Stack[-1] = "deactivate"
0xe1: Call2 0x123

0xe2: Pop(3)
0xe3: PushEmpty(bool, string, string)
0xe4: Stack[-2] = "well_trigger"
0xe5: Stack[-1] = "deactivate"
0xe6: Call2 0x123

0xe7: Pop(3)
0xe8: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: Push("cleanup")
0xeb: @ Trigger(Stack[-1], Stack[-1])
0xec: Pop(1)
0xed: PushEmpty(object)
0xee: Call2 0xfa

0xef: Pop(0)
0xf0: @ RemoveActor(Stack[-1])
0xf1: Pop(1)
0xf2: Return(); Pop(0)

0xf3: PushEmpty(object, object)
0xf4: Push("player")
0xf5: @ FindActor(Stack[-2], Stack[-1])
0xf6: Pop(1)
0xf7: Stack[-3] = Stack[-1]
0xf8: Return(); Pop(2)

0xf9: Stack[-1] = 0
0xfa: PushEmpty(object, object)
0xfb: @ self(Stack[-1])
0xfc: Pop(0)
0xfd: Stack[-3] = Stack[-1]
0xfe: Return(); Pop(2)

0xff: Stack[-1] = 0
0x100: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x101: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x102: Pop(0)
0x103: Pop(0); Push((bool) Stack[-4] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x105: Push("Locator ")
0x106: Pop(1); Push(Stack[-1] + Stack[-12]);
0x107: Push(" doesn't exist")
0x108: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109: @ Trace(Stack[-1])
0x10a: Pop(1)
0x10b: Stack[-1] = 0
0x10c: GOTO 0x10f

0x10d: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x10e: Pop(0)
0x10f: Stack[-13] = Stack[-1]
0x110: Return(); Pop(8)

0x111: Stack[-1] = 0
0x112: PushEmpty(object, object)
0x113: @ FindActor(Stack[-1], Stack[-4])
0x114: Pop(0)
0x115: Pop(0); Push((bool) Stack[-1] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x117: Push("Door ")
0x118: Pop(1); Push(Stack[-1] + Stack[-5]);
0x119: Push(" not found")
0x11a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11b: @ Trace(Stack[-1])
0x11c: Pop(1)
0x11d: GOTO 0x121

0x11e: Push("locked")
0x11f: @@ SetProperty(Stack[-1], Stack[-4])
0x120: Pop(1)
0x121: Return(); Pop(2)

0x122: Stack[-1] = 0
0x123: PushEmpty(object, object)
0x124: @ FindActor(Stack[-1], Stack[-4])
0x125: Pop(0)
0x126: Pop(0); Push((bool) Stack[-1] == 0)
0x127: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x128: Stack[-5] = (bool) 0
0x129: Return(); Pop(2)

0x12a: @ Trigger(Stack[-1], Stack[-3])
0x12b: Pop(0)
0x12c: Stack[-5] = (bool) 1
0x12d: Return(); Pop(2)

0x12e: Stack[-1] = 0
0x12f: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x130: Pop(0); Push((bool) Stack[-11] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: Return(); Pop(8)

0x133: @ GetSceneByName(Stack[-4], Stack[-10])
0x134: Pop(0)
0x135: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(0)
0x137: Pop(0); Push((bool) Stack[-3] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x139: Push("Teleport location '")
0x13a: Pop(1); Push(Stack[-1] + Stack[-10]);
0x13b: Push("' not found in scene '")
0x13c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x13e: Push("'")
0x13f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x140: @ Trace(Stack[-1])
0x141: Pop(1)
0x142: GOTO 0x145

0x143: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x144: Pop(0)
0x145: Return(); Pop(8)

0x146: Stack[-4] = 0
0x147: PushEmpty(object, object)
0x148: @ FindActor(Stack[-1], Stack[-3])
0x149: Pop(0)
0x14a: Pop(0); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14c: Stack[-4] = (bool) 0
0x14d: Return(); Pop(2)

0x14e: @ RemoveActor(Stack[-1])
0x14f: Pop(0)
0x150: Stack[-4] = (bool) 1
0x151: Return(); Pop(2)

0x152: Stack[-1] = 0
0x153: PushEmpty(object, object)
0x154: Push((int) 313)
0x155: Push((int) 1)
0x156: Push((int) 522055)
0x157: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: PushEmpty(bool, object, int)
0x15a: Stack[-2] = Stack[-4]
0x15b: Stack[-1] = (int) -1
0x15c: Call2 0x194

0x15d: Pop(3)
0x15e: Return(); Pop(2)

0x15f: Stack[-1] = 0
0x160: PushEmpty(object, object)
0x161: Push((int) 317)
0x162: Push((int) 1)
0x163: Push((int) 522059)
0x164: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: PushEmpty(bool, object, int)
0x167: Stack[-2] = Stack[-4]
0x168: Stack[-1] = (int) 313
0x169: Call2 0x194

0x16a: Pop(3)
0x16b: Return(); Pop(2)

0x16c: Stack[-1] = 0
0x16d: PushEmpty(object, object)
0x16e: Push((int) 780)
0x16f: Push((int) 1)
0x170: Push((int) 541765)
0x171: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: PushEmpty(bool, object, int)
0x174: Stack[-2] = Stack[-4]
0x175: Stack[-1] = (int) 313
0x176: Call2 0x194

0x177: Pop(3)
0x178: Return(); Pop(2)

0x179: Stack[-1] = 0
0x17a: PushEmpty(object, object)
0x17b: Push((int) 316)
0x17c: Push((int) 1)
0x17d: Push((int) 522058)
0x17e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: PushEmpty(bool, object, int)
0x181: Stack[-2] = Stack[-4]
0x182: Stack[-1] = (int) 313
0x183: Call2 0x194

0x184: Pop(3)
0x185: Return(); Pop(2)

0x186: Stack[-1] = 0
0x187: PushEmpty(object, object)
0x188: @ GetDiaryRoot(Stack[-1])
0x189: Pop(0)
0x18a: Pop(0); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: Push("Can't retrieve diary root")
0x18d: @ Trace(Stack[-1])
0x18e: Pop(1)
0x18f: Stack[-3] = (bool) 0
0x190: Return(); Pop(2)

0x191: Stack[-3] = Stack[-1]
0x192: Return(); Pop(2)

0x193: Stack[-1] = 0
0x194: PushEmpty(object, object, int, object, object, int)
0x195: PushEmpty(object)
0x196: Call2 0x187

0x197: Stack[-4] = Stack[-1]
0x198: Pop(1)
0x199: @@ Find(Stack[-7], Stack[-2])
0x19a: Pop(0)
0x19b: Pop(0); Push((bool) Stack[-2] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19d: Push("Can't find diary parent with id: ")
0x19e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x19f: @ Trace(Stack[-1])
0x1a0: Pop(1)
0x1a1: Stack[-9] = (bool) 0
0x1a2: Return(); Pop(6)

0x1a3: @@ AddChild(Stack[-8])
0x1a4: Pop(0)
0x1a5: Push((int) 7)
0x1a6: @ SendWorldWndMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ GetCategory(Stack[-1])
0x1a9: Pop(0)
0x1aa: @ SetDiarySection(Stack[-1])
0x1ab: Pop(0)
0x1ac: Stack[-9] = (bool) 0
0x1ad: Return(); Pop(6)

0x1ae: Stack[-2] = 0
0x1af: Stack[-3] = 0
