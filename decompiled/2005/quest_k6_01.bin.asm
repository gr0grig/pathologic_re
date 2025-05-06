GlobalVarCount = 0

Strings:
	cot_eva
	noeva
	lock_danko
	icot_eva_door
	teleport
	icot_eva@door1
	door_close
	cleanup
	pt_k6q01_klara
	player
	cot_eva_load
	k6q01
	k6q01DoorWasLocked
	unlock_eva
	door_open
	k6q01ItemsRemoved
	ClearSubContainer
	SelectWeapon
	place_danko
	cot_anna
	pt_k6q01_danko
	NPC_Bakalavr
	k6q01_danko.xml
	k6q01DankoPos
	cot_lara
	dt_house_1_04
	fail
	completed
	0: placing danko to lara
	0: placing danko to ospina
	1: placing danko to ospina
	1: placing danko to eva
	placing danko from ospina to eva
	GetItemCount
	GetItem
	add
	GetItemAmount
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	Close
	GetItemID
	Category
	AddItem
	DropItems
	Teleport location '
	' not found in scene '
	size
	get

Import:
	Hold (0 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	Trace (1 args)
	GetScene (1 args)
	PlaySound (1 args)
	sync (0 args)
	FindActor (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	CreateIntVector (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x14f Vars = (int, float)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: Push("cot_eva")
0x7: @ GetSceneByName(Stack[-2], Stack[-1])
0x8: Pop(1)
0x9: Push("noeva")
0xa: @ Trigger(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Return(); Pop(2)

0xd: Stack[-1] = 0
0xe: PushEmpty(object, object, object, object, int, int, object, float, object, int, object, object, object, object, int, int, object, float, object, int)
0xf: @ Trace(Stack[-21])
0x10: Pop(0)
0x11: Push("lock_danko")
0x12: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x14: PushEmpty(string, bool)
0x15: Stack[-2] = "icot_eva_door"
0x16: Stack[-1] = (bool) 1
0x17: Call2 0x251

0x18: Pop(2)
0x19: Push("cot_eva")
0x1a: @ GetSceneByName(Stack[-11], Stack[-1])
0x1b: Pop(1)
0x1c: Push("danko")
0x1d: @ Trigger(Stack[-11], Stack[-1])
0x1e: Pop(1)
0x1f: Stack[-10] = 0
0x20: GOTO 0x14e

0x21: Push("teleport")
0x22: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x24: PushEmpty()
0x25: Call2 0x5

0x26: Pop(0)
0x27: @ GetScene(Stack[-9])
0x28: Pop(0)
0x29: Push("cot_eva")
0x2a: @ GetSceneByName(Stack[-9], Stack[-1])
0x2b: Pop(1)
0x2c: PushEmpty(string, bool)
0x2d: Stack[-2] = "icot_eva_door"
0x2e: Stack[-1] = (bool) 0
0x2f: Call2 0x251

0x30: Pop(2)
0x31: PushEmpty(string, bool)
0x32: Stack[-2] = "icot_eva@door1"
0x33: Stack[-1] = (bool) 1
0x34: Call2 0x240

0x35: Pop(2)
0x36: Push("door_close")
0x37: @ PlaySound(Stack[-1])
0x38: Pop(1)
0x39: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3a: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3b: Push("cleanup")
0x3c: @ Trigger(Stack[-1], Stack[-1])
0x3d: Pop(1)
0x3e: Pop(0); Push((bool) Stack[-9] != Stack[-8])
0x3f: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x40: PushEmpty(object, string, string)
0x41: PushEmpty(object)
0x42: Call2 0x202

0x43: Stack[-4] = Stack[-1]
0x44: Pop(1)
0x45: Stack[-2] = "cot_eva"
0x46: Stack[-1] = "pt_k6q01_klara"
0x47: Call2 0x285

0x48: Pop(3)
0x49: @ sync()
0x4a: Pop(0)
0x4b: Push("player")
0x4c: @ FindActor(Stack[-8], Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(bool)
0x4f: Stack[-1] = (bool) 0
0x50: Push(Stack[-8])
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: Push( Stack[0 + Tasks[-1].StackPointer] )
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-1] = (bool) 1
0x55: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x56: PushEmpty(object, object, object)
0x57: Stack[-3] = Stack[-10]
0x58: Stack[-2] = Stack[4 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x5a: Call2 0x29d

0x5b: Pop(3)
0x5c: PushEmpty(object, object, object)
0x5d: Stack[-3] = Stack[-10]
0x5e: Stack[-2] = Stack[8 + Tasks[-1].StackPointer]
0x5f: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x60: Call2 0x29d

0x61: Pop(3)
0x62: PushEmpty(object, object, object)
0x63: Stack[-3] = Stack[-10]
0x64: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x65: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x66: Call2 0x29d

0x67: Pop(3)
0x68: Stack[-7] = 0
0x69: Stack[-8] = 0
0x6a: Stack[-9] = 0
0x6b: GOTO 0x14e

0x6c: Push("cot_eva_load")
0x6d: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x6f: Push("k6q01")
0x70: @ GetVariable(Stack[-1], Stack[-7])
0x71: Pop(1)
0x72: Push("k6q01DoorWasLocked")
0x73: @ GetVariable(Stack[-1], Stack[-6])
0x74: Pop(1)
0x75: PushEmpty(bool)
0x76: Stack[-1] = (bool) 0
0x77: Push((int) 2)
0x78: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7a: Pop(0); Push((bool) Stack[-6] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = (bool) 1
0x7d: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x7e: PushEmpty(string, bool)
0x7f: Stack[-2] = "icot_eva@door1"
0x80: Stack[-1] = (bool) 1
0x81: Call2 0x240

0x82: Pop(2)
0x83: Push("k6q01DoorWasLocked")
0x84: Push((int) 1)
0x85: @ SetVariable(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: Push("door_close")
0x88: @ PlaySound(Stack[-1])
0x89: Pop(1)
0x8a: GOTO 0x14e

0x8b: Push("unlock_eva")
0x8c: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = "icot_eva@door1"
0x90: Stack[-1] = (bool) 0
0x91: Call2 0x240

0x92: Pop(2)
0x93: Push("door_open")
0x94: @ PlaySound(Stack[-1])
0x95: Pop(1)
0x96: Push("k6q01ItemsRemoved")
0x97: Push((int) 1)
0x98: @ SetVariable(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ CreateIntVector(Stack[-3])
0x9b: Pop(0)
0x9c: @ CreateIntVector(Stack[-5])
0x9d: Pop(0)
0x9e: @ CreateIntVector(Stack[-7])
0x9f: Pop(0)
0xa0: @ CreateIntVector(Stack[-9])
0xa1: Pop(0)
0xa2: @ CreateIntVector(Stack[-11])
0xa3: Pop(0)
0xa4: Push("player")
0xa5: @ FindActor(Stack[-5], Stack[-1])
0xa6: Pop(1)
0xa7: Push(Stack[-4])
0xa8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa9: PushEmpty(object, object, int, object)
0xaa: Stack[-3] = Stack[-8]
0xab: Stack[-2] = (int) 1
0xac: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0xad: Call2 0x209

0xae: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0xaf: Pop(4)
0xb0: PushEmpty(object, object, int, object)
0xb1: Stack[-3] = Stack[-8]
0xb2: Stack[-2] = (int) 3
0xb3: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xb4: Call2 0x209

0xb5: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0xb6: Pop(4)
0xb7: PushEmpty(object, object, int, object)
0xb8: Stack[-3] = Stack[-8]
0xb9: Stack[-2] = (int) 4
0xba: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0xbb: Call2 0x209

0xbc: Stack[10 + Tasks[-1].StackPointer] = Stack[-4]
0xbd: Pop(4)
0xbe: Push((int) 1)
0xbf: @@ ClearSubContainer(Stack[-1])
0xc0: Pop(1)
0xc1: Push((int) 3)
0xc2: @@ ClearSubContainer(Stack[-1])
0xc3: Pop(1)
0xc4: Push((int) 4)
0xc5: @@ ClearSubContainer(Stack[-1])
0xc6: Pop(1)
0xc7: @@ SelectWeapon()
0xc8: Pop(0)
0xc9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xca: Stack[-4] = 0
0xcb: GOTO 0x14e

0xcc: Push("place_danko")
0xcd: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0xcf: @ GetGameTime(Stack[-3])
0xd0: Pop(0)
0xd1: Push((int) 134)
0xd2: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xd4: Push("cot_anna")
0xd5: @ GetSceneByName(Stack[-3], Stack[-1])
0xd6: Pop(1)
0xd7: PushEmpty(object, object, string, string, string)
0xd8: Stack[-4] = Stack[-7]
0xd9: Stack[-3] = "pt_k6q01_danko"
0xda: Stack[-2] = "NPC_Bakalavr"
0xdb: Stack[-1] = "k6q01_danko.xml"
0xdc: Call2 0x22e

0xdd: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0xde: Pop(5)
0xdf: Push((int) 1)
0xe0: Push((int) 134)
0xe1: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: Push((int) 2)
0xe4: Push((int) 136)
0xe5: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: Push((int) 3)
0xe8: Push((int) 138)
0xe9: @ SetTimeEvent(Stack[-2], Stack[-1])
0xea: Pop(2)
0xeb: Push("k6q01DankoPos")
0xec: Push((int) 1)
0xed: @ SetVariable(Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: GOTO 0x12e

0xf0: Push((int) 136)
0xf1: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf3: Push("cot_lara")
0xf4: @ GetSceneByName(Stack[-3], Stack[-1])
0xf5: Pop(1)
0xf6: PushEmpty(object, object, string, string, string)
0xf7: Stack[-4] = Stack[-7]
0xf8: Stack[-3] = "pt_k6q01_danko"
0xf9: Stack[-2] = "NPC_Bakalavr"
0xfa: Stack[-1] = "k6q01_danko.xml"
0xfb: Call2 0x22e

0xfc: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0xfd: Pop(5)
0xfe: Push((int) 2)
0xff: Push((int) 136)
0x100: @ SetTimeEvent(Stack[-2], Stack[-1])
0x101: Pop(2)
0x102: Push((int) 3)
0x103: Push((int) 138)
0x104: @ SetTimeEvent(Stack[-2], Stack[-1])
0x105: Pop(2)
0x106: Push("k6q01DankoPos")
0x107: Push((int) 2)
0x108: @ SetVariable(Stack[-2], Stack[-1])
0x109: Pop(2)
0x10a: GOTO 0x12e

0x10b: Push((int) 138)
0x10c: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: Push("dt_house_1_04")
0x10f: @ GetSceneByName(Stack[-3], Stack[-1])
0x110: Pop(1)
0x111: PushEmpty(object, object, string, string, string)
0x112: Stack[-4] = Stack[-7]
0x113: Stack[-3] = "pt_k6q01_danko"
0x114: Stack[-2] = "NPC_Bakalavr"
0x115: Stack[-1] = "k6q01_danko.xml"
0x116: Call2 0x22e

0x117: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x118: Pop(5)
0x119: Push((int) 3)
0x11a: Push((int) 138)
0x11b: @ SetTimeEvent(Stack[-2], Stack[-1])
0x11c: Pop(2)
0x11d: Push("k6q01DankoPos")
0x11e: Push((int) 3)
0x11f: @ SetVariable(Stack[-2], Stack[-1])
0x120: Pop(2)
0x121: GOTO 0x12e

0x122: PushEmpty(string, bool)
0x123: Stack[-2] = "icot_eva_door"
0x124: Stack[-1] = (bool) 0
0x125: Call2 0x251

0x126: Pop(2)
0x127: PushEmpty()
0x128: Call2 0x5

0x129: Pop(0)
0x12a: Push("k6q01DankoPos")
0x12b: Push((int) 4)
0x12c: @ SetVariable(Stack[-2], Stack[-1])
0x12d: Pop(2)
0x12e: Stack[-2] = 0
0x12f: GOTO 0x14e

0x130: Push("fail")
0x131: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x133: PushEmpty()
0x134: Call2 0x1d2

0x135: Pop(0)
0x136: GOTO 0x14e

0x137: Push("completed")
0x138: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13a: PushEmpty()
0x13b: Call2 0x1da

0x13c: Pop(0)
0x13d: GOTO 0x14e

0x13e: Push("cleanup")
0x13f: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x141: Push("k6q01")
0x142: @ GetVariable(Stack[-1], Stack[-2])
0x143: Pop(1)
0x144: Push((int) 1000)
0x145: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x147: PushEmpty()
0x148: Call2 0x1d2

0x149: Pop(0)
0x14a: GOTO 0x14e

0x14b: PushEmpty()
0x14c: Call2 0x1df

0x14d: Pop(0)
0x14e: Return(); Pop(20)

0x14f: PushEmpty(int, object, object, object, object, object, int, object, object, object, object, object)
0x150: Push("k6q01DankoPos")
0x151: @ GetVariable(Stack[-1], Stack[-7])
0x152: Pop(1)
0x153: Push((int) 1)
0x154: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x156: Push((int) 1)
0x157: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Return(); Pop(12)

0x15a: @ GetScene(Stack[-5])
0x15b: Pop(0)
0x15c: Push("cot_lara")
0x15d: @ GetSceneByName(Stack[-5], Stack[-1])
0x15e: Pop(1)
0x15f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x160: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x161: Push("cleanup")
0x162: @ Trigger(Stack[-1], Stack[-1])
0x163: Pop(1)
0x164: Pop(0); Push((bool) Stack[-5] != Stack[-4])
0x165: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x166: Stack[-5] = Stack[-4]
0x167: Push("0: placing danko to lara")
0x168: @ Trace(Stack[-1])
0x169: Pop(1)
0x16a: Push("k6q01DankoPos")
0x16b: Push((int) 2)
0x16c: @ SetVariable(Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: GOTO 0x179

0x16f: Push("dt_house_1_04")
0x170: @ GetSceneByName(Stack[-6], Stack[-1])
0x171: Pop(1)
0x172: Push("0: placing danko to ospina")
0x173: @ Trace(Stack[-1])
0x174: Pop(1)
0x175: Push("k6q01DankoPos")
0x176: Push((int) 3)
0x177: @ SetVariable(Stack[-2], Stack[-1])
0x178: Pop(2)
0x179: PushEmpty(object, object, string, string, string)
0x17a: Stack[-4] = Stack[-10]
0x17b: Stack[-3] = "pt_k6q01_danko"
0x17c: Stack[-2] = "NPC_Bakalavr"
0x17d: Stack[-1] = "k6q01_danko.xml"
0x17e: Call2 0x22e

0x17f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x180: Pop(5)
0x181: Stack[-4] = 0
0x182: Stack[-5] = 0
0x183: GOTO 0x1d1

0x184: Push((int) 2)
0x185: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x187: Push((int) 2)
0x188: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(12)

0x18b: @ GetScene(Stack[-3])
0x18c: Pop(0)
0x18d: Push("dt_house_1_04")
0x18e: @ GetSceneByName(Stack[-3], Stack[-1])
0x18f: Pop(1)
0x190: Push( Stack[1 + Tasks[-1].StackPointer] )
0x191: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x192: Push("cleanup")
0x193: @ Trigger(Stack[-1], Stack[-1])
0x194: Pop(1)
0x195: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x196: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x197: PushEmpty(object, object, string, string, string)
0x198: Stack[-4] = Stack[-7]
0x199: Stack[-3] = "pt_k6q01_danko"
0x19a: Stack[-2] = "NPC_Bakalavr"
0x19b: Stack[-1] = "k6q01_danko.xml"
0x19c: Call2 0x22e

0x19d: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x19e: Pop(5)
0x19f: Push("1: placing danko to ospina")
0x1a0: @ Trace(Stack[-1])
0x1a1: Pop(1)
0x1a2: Push("k6q01DankoPos")
0x1a3: Push((int) 3)
0x1a4: @ SetVariable(Stack[-2], Stack[-1])
0x1a5: Pop(2)
0x1a6: GOTO 0x1b7

0x1a7: PushEmpty(string, bool)
0x1a8: Stack[-2] = "icot_eva_door"
0x1a9: Stack[-1] = (bool) 0
0x1aa: Call2 0x251

0x1ab: Pop(2)
0x1ac: PushEmpty()
0x1ad: Call2 0x5

0x1ae: Pop(0)
0x1af: Push("k6q01DankoPos")
0x1b0: Push((int) 4)
0x1b1: @ SetVariable(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: Push("1: placing danko to eva")
0x1b4: @ Trace(Stack[-1])
0x1b5: Pop(1)
0x1b6: Stack[-1] = 0
0x1b7: Stack[-2] = 0
0x1b8: Stack[-3] = 0
0x1b9: GOTO 0x1d1

0x1ba: Push((int) 3)
0x1bb: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: Push("placing danko from ospina to eva")
0x1be: @ Trace(Stack[-1])
0x1bf: Pop(1)
0x1c0: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: Push("cleanup")
0x1c3: @ Trigger(Stack[-1], Stack[-1])
0x1c4: Pop(1)
0x1c5: PushEmpty()
0x1c6: Call2 0x5

0x1c7: Pop(0)
0x1c8: PushEmpty(string, bool)
0x1c9: Stack[-2] = "icot_eva_door"
0x1ca: Stack[-1] = (bool) 0
0x1cb: Call2 0x251

0x1cc: Pop(2)
0x1cd: Push("k6q01DankoPos")
0x1ce: Push((int) 4)
0x1cf: @ SetVariable(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: Return(); Pop(12)

0x1d2: Push("k6q01")
0x1d3: Push((int) -1)
0x1d4: @ SetVariable(Stack[-2], Stack[-1])
0x1d5: Pop(2)
0x1d6: PushEmpty()
0x1d7: Call2 0x1df

0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: Push("k6q01")
0x1db: Push((int) 1000)
0x1dc: @ SetVariable(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Return(); Pop(0)

0x1df: PushEmpty(int, int)
0x1e0: EventDisable(26)
0x1e1: PushEmpty(string, bool)
0x1e2: Stack[-2] = "icot_eva_door"
0x1e3: Stack[-1] = (bool) 0
0x1e4: Call2 0x251

0x1e5: Pop(2)
0x1e6: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: Push("cleanup")
0x1e9: @ Trigger(Stack[-1], Stack[-1])
0x1ea: Pop(1)
0x1eb: Push("k6q01")
0x1ec: @ GetVariable(Stack[-1], Stack[-2])
0x1ed: Pop(1)
0x1ee: PushEmpty(string, bool)
0x1ef: Stack[-2] = "icot_eva@door1"
0x1f0: Stack[-1] = (bool) 0
0x1f1: Call2 0x240

0x1f2: Pop(2)
0x1f3: Push((int) 1000)
0x1f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f6: Push("door_open")
0x1f7: @ PlaySound(Stack[-1])
0x1f8: Pop(1)
0x1f9: PushEmpty()
0x1fa: Call2 0x5

0x1fb: Pop(0)
0x1fc: PushEmpty(object)
0x1fd: Call2 0x222

0x1fe: Pop(0)
0x1ff: @ RemoveActor(Stack[-1])
0x200: Pop(1)
0x201: Return(); Pop(2)

0x202: PushEmpty(object, object)
0x203: Push("player")
0x204: @ FindActor(Stack[-2], Stack[-1])
0x205: Pop(1)
0x206: Stack[-3] = Stack[-1]
0x207: Return(); Pop(2)

0x208: Stack[-1] = 0
0x209: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0x20a: PushEmpty(object)
0x20b: Call2 0x228

0x20c: Stack[-6] = Stack[-1]
0x20d: Pop(1)
0x20e: @@ GetItemCount(Stack[-4], Stack[-12])
0x20f: Pop(0)
0x210: Stack[-3] = (int) 0
0x211: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x212: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x213: @@ GetItem(Stack[-2], Stack[-3], Stack[-12])
0x214: Pop(0)
0x215: @@ add(Stack[-2])
0x216: Pop(0)
0x217: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12])
0x218: Pop(0)
0x219: @@ add(Stack[-1])
0x21a: Pop(0)
0x21b: Stack[-2] = 0
0x21c: Push((int) 1)
0x21d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x21e: GOTO 0x211

0x21f: Stack[-14] = Stack[-5]
0x220: Return(); Pop(10)

0x221: Stack[-5] = 0
0x222: PushEmpty(object, object)
0x223: @ self(Stack[-1])
0x224: Pop(0)
0x225: Stack[-3] = Stack[-1]
0x226: Return(); Pop(2)

0x227: Stack[-1] = 0
0x228: PushEmpty(object, object)
0x229: @ CreateObjectVector(Stack[-1])
0x22a: Pop(0)
0x22b: Stack[-3] = Stack[-1]
0x22c: Return(); Pop(2)

0x22d: Stack[-1] = 0
0x22e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x22f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x230: Pop(0)
0x231: Pop(0); Push((bool) Stack[-4] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x233: Push("Locator ")
0x234: Pop(1); Push(Stack[-1] + Stack[-12]);
0x235: Push(" doesn't exist")
0x236: Pop(2); Push(Stack[-2] + Stack[-1]);
0x237: @ Trace(Stack[-1])
0x238: Pop(1)
0x239: Stack[-1] = 0
0x23a: GOTO 0x23d

0x23b: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x23c: Pop(0)
0x23d: Stack[-13] = Stack[-1]
0x23e: Return(); Pop(8)

0x23f: Stack[-1] = 0
0x240: PushEmpty(object, object)
0x241: @ FindActor(Stack[-1], Stack[-4])
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x245: Push("Door ")
0x246: Pop(1); Push(Stack[-1] + Stack[-5]);
0x247: Push(" not found")
0x248: Pop(2); Push(Stack[-2] + Stack[-1]);
0x249: @ Trace(Stack[-1])
0x24a: Pop(1)
0x24b: GOTO 0x24f

0x24c: Push("locked")
0x24d: @@ SetProperty(Stack[-1], Stack[-4])
0x24e: Pop(1)
0x24f: Return(); Pop(2)

0x250: Stack[-1] = 0
0x251: PushEmpty(object, object)
0x252: @ FindActor(Stack[-1], Stack[-4])
0x253: Pop(0)
0x254: Pop(0); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x256: Push("Door ")
0x257: Pop(1); Push(Stack[-1] + Stack[-5]);
0x258: Push(" not found")
0x259: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25a: @ Trace(Stack[-1])
0x25b: Pop(1)
0x25c: GOTO 0x264

0x25d: Push(Stack[-3])
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: @@ Close()
0x260: Pop(0)
0x261: Push("locked")
0x262: @@ SetProperty(Stack[-1], Stack[-4])
0x263: Pop(1)
0x264: Return(); Pop(2)

0x265: Stack[-1] = 0
0x266: PushEmpty(object, object)
0x267: @ CreateIntVector(Stack[-1])
0x268: Pop(0)
0x269: @@ add(Stack[-4])
0x26a: Pop(0)
0x26b: @@ add(Stack[-3])
0x26c: Pop(0)
0x26d: Push((int) 3)
0x26e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x26f: Pop(1)
0x270: Return(); Pop(2)

0x271: Stack[-1] = 0
0x272: PushEmpty(int, int, bool, int, int, bool)
0x273: @@ GetItemID(Stack[-3])
0x274: Pop(0)
0x275: Push("Category")
0x276: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x277: Pop(1)
0x278: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x279: Pop(0)
0x27a: Pop(0); Push((bool) Stack[-1] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27c: @@ DropItems(Stack[-8], Stack[-7])
0x27d: Pop(0)
0x27e: GOTO 0x284

0x27f: PushEmpty(int, int)
0x280: Stack[-2] = Stack[-5]
0x281: Stack[-1] = Stack[-9]
0x282: Call2 0x266

0x283: Pop(2)
0x284: Return(); Pop(6)

0x285: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x286: Pop(0); Push((bool) Stack[-11] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Return(); Pop(8)

0x289: @ GetSceneByName(Stack[-4], Stack[-10])
0x28a: Pop(0)
0x28b: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(0)
0x28d: Pop(0); Push((bool) Stack[-3] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28f: Push("Teleport location '")
0x290: Pop(1); Push(Stack[-1] + Stack[-10]);
0x291: Push("' not found in scene '")
0x292: Pop(2); Push(Stack[-2] + Stack[-1]);
0x293: Pop(1); Push(Stack[-1] + Stack[-11]);
0x294: Push("'")
0x295: Pop(2); Push(Stack[-2] + Stack[-1]);
0x296: @ Trace(Stack[-1])
0x297: Pop(1)
0x298: GOTO 0x29b

0x299: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x29a: Pop(0)
0x29b: Return(); Pop(8)

0x29c: Stack[-4] = 0
0x29d: PushEmpty(int, int, object, int, int, int, object, int)
0x29e: @@ size(Stack[-4])
0x29f: Pop(0)
0x2a0: Stack[-3] = (int) 0
0x2a1: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a3: @@ get(Stack[-2], Stack[-3])
0x2a4: Pop(0)
0x2a5: @@ get(Stack[-1], Stack[-3])
0x2a6: Pop(0)
0x2a7: PushEmpty(object, object, int)
0x2a8: Stack[-3] = Stack[-14]
0x2a9: Stack[-2] = Stack[-5]
0x2aa: Stack[-1] = Stack[-4]
0x2ab: Call2 0x272

0x2ac: Pop(3)
0x2ad: Stack[-2] = 0
0x2ae: Push((int) 1)
0x2af: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2b0: GOTO 0x2a1

0x2b1: Return(); Pop(8)

