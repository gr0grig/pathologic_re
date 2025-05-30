GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d2q02
	mpatrol_unload
	Remove
	patrol1_unload
	patrol2_unload
	put_patrol
	pt_d2q02_driver
	pers_birdmask
	d2q02_driver.xml
	pt_d2q02_mpatrol
	pers_patrool
	d2q02_mpatrol.xml
	pt_d2q02_patrol1
	d2q02_patrol1.xml
	pt_d2q02_patrol2
	d2q02_patrol2.xml
	player_attack
	GetActor
	kill_player
	completed
	driver_unload
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Adding diary entry

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, bool, bool) Params = 0
		EVENT_26 Op = 0xb Vars = (string)
		EVENT_9 Op = 0x135 Vars = (int, float)


0x0: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x1: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x2: Push("d2q02")
0x3: Push((int) 1)
0x4: @ SetVariable(Stack[-2], Stack[-1])
0x5: Pop(2)
0x6: PushEmpty(int)
0x7: Stack[-1] = (int) 2
0x8: Call 0x122

0x9: Pop(1)
0xa: Return(); Pop(0)

0xb: PushEmpty(object, object, object, object)
0xc: @ Trace(Stack[-5])
0xd: Pop(0)
0xe: Push( Stack[5 + Tasks[-1].StackPointer] )
0xf: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x10: Push("mpatrol_unload")
0x11: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x13: @@ Remove()
0x14: Pop(0)
0x15: Stack[1 + Tasks[-1].StackPointer] = 0
0x16: GOTO 0x24

0x17: Push("patrol1_unload")
0x18: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1a: @@ Remove()
0x1b: Pop(0)
0x1c: Stack[2 + Tasks[-1].StackPointer] = 0
0x1d: GOTO 0x24

0x1e: Push("patrol2_unload")
0x1f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x21: @@ Remove()
0x22: Pop(0)
0x23: Stack[3 + Tasks[-1].StackPointer] = 0
0x24: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x26: Push("put_patrol")
0x27: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x29: @ GetMainOutdoorScene(Stack[-2])
0x2a: Pop(0)
0x2b: PushEmpty(object, object, string, string, string)
0x2c: Stack[-4] = Stack[-7]
0x2d: Stack[-3] = "pt_d2q02_driver"
0x2e: Stack[-2] = "pers_birdmask"
0x2f: Stack[-1] = "d2q02_driver.xml"
0x30: Call 0x140

0x31: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x32: Pop(5)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-4] = Stack[-7]
0x35: Stack[-3] = "pt_d2q02_mpatrol"
0x36: Stack[-2] = "pers_patrool"
0x37: Stack[-1] = "d2q02_mpatrol.xml"
0x38: Call 0x140

0x39: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Pop(5)
0x3b: PushEmpty(object, object, string, string, string)
0x3c: Stack[-4] = Stack[-7]
0x3d: Stack[-3] = "pt_d2q02_patrol1"
0x3e: Stack[-2] = "pers_patrool"
0x3f: Stack[-1] = "d2q02_patrol1.xml"
0x40: Call 0x140

0x41: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x42: Pop(5)
0x43: PushEmpty(object, object, string, string, string)
0x44: Stack[-4] = Stack[-7]
0x45: Stack[-3] = "pt_d2q02_patrol2"
0x46: Stack[-2] = "pers_patrool"
0x47: Stack[-1] = "d2q02_patrol2.xml"
0x48: Call 0x140

0x49: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x4a: Pop(5)
0x4b: Stack[-2] = 0
0x4c: GOTO 0x6b

0x4d: Push("player_attack")
0x4e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x50: @@ GetActor(Stack[-1])
0x51: Pop(0)
0x52: Push("kill_player")
0x53: @ Trigger(Stack[-2], Stack[-1])
0x54: Pop(1)
0x55: @@ GetActor(Stack[-1])
0x56: Pop(0)
0x57: Push("kill_player")
0x58: @ Trigger(Stack[-2], Stack[-1])
0x59: Pop(1)
0x5a: @@ GetActor(Stack[-1])
0x5b: Pop(0)
0x5c: Push("kill_player")
0x5d: @ Trigger(Stack[-2], Stack[-1])
0x5e: Pop(1)
0x5f: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x60: PushEmpty()
0x61: Call 0xa2

0x62: Pop(0)
0x63: Stack[-1] = 0
0x64: GOTO 0x6b

0x65: Push("completed")
0x66: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x68: PushEmpty()
0x69: Call 0xa2

0x6a: Pop(0)
0x6b: GOTO 0x8b

0x6c: Push("driver_unload")
0x6d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: PushEmpty(int)
0x70: Stack[-1] = (int) 0
0x71: Call 0xc4

0x72: Pop(1)
0x73: GOTO 0x8b

0x74: Push("mpatrol_unload")
0x75: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: PushEmpty(int)
0x78: Stack[-1] = (int) 1
0x79: Call 0xc4

0x7a: Pop(1)
0x7b: GOTO 0x8b

0x7c: Push("patrol1_unload")
0x7d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: PushEmpty(int)
0x80: Stack[-1] = (int) 2
0x81: Call 0xc4

0x82: Pop(1)
0x83: GOTO 0x8b

0x84: Push("patrol2_unload")
0x85: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x87: PushEmpty(int)
0x88: Stack[-1] = (int) 3
0x89: Call 0xc4

0x8a: Pop(1)
0x8b: Return(); Pop(4)

0x8c: PushEmpty(int, int)
0x8d: Push("d2q02")
0x8e: @ GetVariable(Stack[-1], Stack[-2])
0x8f: Pop(1)
0x90: Push((int) 1000)
0x91: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x93: PushEmpty()
0x94: Call 0x97

0x95: Pop(0)
0x96: Return(); Pop(2)

0x97: PushEmpty()
0x98: Call 0x18c

0x99: Pop(0)
0x9a: Push("d2q02")
0x9b: Push((int) -1)
0x9c: @ SetVariable(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: PushEmpty()
0x9f: Call 0xbb

0xa0: Pop(0)
0xa1: Return(); Pop(0)

0xa2: PushEmpty(int, int)
0xa3: Push("d2q02")
0xa4: @ GetVariable(Stack[-1], Stack[-2])
0xa5: Pop(1)
0xa6: PushEmpty(bool)
0xa7: Stack[-1] = (bool) 0
0xa8: Push((int) 1000)
0xa9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xab: Push((int) -1)
0xac: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Stack[-1] = (bool) 1
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: Push("d2q02")
0xb1: Push((int) 1000)
0xb2: @ SetVariable(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: PushEmpty()
0xb5: Call 0x17c

0xb6: Pop(0)
0xb7: PushEmpty()
0xb8: Call 0xbb

0xb9: Pop(0)
0xba: Return(); Pop(2)

0xbb: PushEmpty()
0xbc: Call 0x19c

0xbd: Pop(0)
0xbe: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(int)
0xc0: Stack[-1] = (int) -1
0xc1: Call 0xc4

0xc2: Pop(1)
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 0
0xc7: PushEmpty(bool)
0xc8: Stack[-1] = (bool) 0
0xc9: PushEmpty(bool)
0xca: Stack[-1] = (bool) 0
0xcb: PushEmpty(bool)
0xcc: Stack[-1] = (bool) 1
0xcd: Push((int) 0)
0xce: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call 0x118

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Stack[-1] = (bool) 0
0xd6: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd7: PushEmpty(bool)
0xd8: Stack[-1] = (bool) 1
0xd9: Push((int) 1)
0xda: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call 0x118

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe1: Stack[-1] = (bool) 0
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Stack[-1] = (bool) 1
0xe4: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe5: PushEmpty(bool)
0xe6: Stack[-1] = (bool) 1
0xe7: Push((int) 2)
0xe8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xec: Call 0x118

0xed: Pop(1)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Stack[-1] = (bool) 0
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: Stack[-1] = (bool) 1
0xf2: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 1
0xf5: Push((int) 3)
0xf6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xfa: Call 0x118

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfd: Stack[-1] = (bool) 0
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Stack[-1] = (bool) 1
0x100: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x101: EventDisable(26)
0x102: Push( Stack[0 + Tasks[-1].StackPointer] )
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: @@ Remove()
0x105: Pop(0)
0x106: Push( Stack[1 + Tasks[-1].StackPointer] )
0x107: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x108: @@ Remove()
0x109: Pop(0)
0x10a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: @@ Remove()
0x10d: Pop(0)
0x10e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: @@ Remove()
0x111: Pop(0)
0x112: PushEmpty(object)
0x113: Call 0x13a

0x114: Pop(0)
0x115: @ RemoveActor(Stack[-1])
0x116: Pop(1)
0x117: Return(); Pop(0)

0x118: PushEmpty(object, object)
0x119: Pop(0); Push((bool) Stack[-3] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11b: Stack[-4] = (bool) 1
0x11c: Return(); Pop(2)

0x11d: @@ GetActor(Stack[-1])
0x11e: Pop(0)
0x11f: Stack[-4] = !Stack[-1]; Pop(0);
0x120: Return(); Pop(2)

0x121: Stack[-1] = 0
0x122: PushEmpty(float, float)
0x123: @ GetGameTime(Stack[-1])
0x124: Pop(0)
0x125: Push((int) 24)
0x126: Pop(1); Push(Stack[-4] * Stack[-1]);
0x127: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x129: PushEmpty()
0x12a: Call 0xbb

0x12b: Pop(0)
0x12c: GOTO 0x134

0x12d: Push((int) 0)
0x12e: Push((int) 24)
0x12f: Pop(1); Push(Stack[-5] * Stack[-1]);
0x130: @ SetTimeEvent(Stack[-2], Stack[-1])
0x131: Pop(2)
0x132: @ Hold()
0x133: Pop(0)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty()
0x137: Call 0x8c

0x138: Pop(0)
0x139: Return(); Pop(0)

0x13a: PushEmpty(object, object)
0x13b: @ self(Stack[-1])
0x13c: Pop(0)
0x13d: Stack[-3] = Stack[-1]
0x13e: Return(); Pop(2)

0x13f: Stack[-1] = 0
0x140: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x141: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x142: Pop(0)
0x143: Pop(0); Push((bool) Stack[-4] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x145: Push("Locator ")
0x146: Pop(1); Push(Stack[-1] + Stack[-12]);
0x147: Push(" doesn't exist")
0x148: Pop(2); Push(Stack[-2] + Stack[-1]);
0x149: @ Trace(Stack[-1])
0x14a: Pop(1)
0x14b: Stack[-1] = 0
0x14c: GOTO 0x14f

0x14d: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x14e: Pop(0)
0x14f: Stack[-13] = Stack[-1]
0x150: Return(); Pop(8)

0x151: Stack[-1] = 0
0x152: PushEmpty(object, object)
0x153: @ GetDiaryRoot(Stack[-1])
0x154: Pop(0)
0x155: Pop(0); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: Push("Can't retrieve diary root")
0x158: @ Trace(Stack[-1])
0x159: Pop(1)
0x15a: Stack[-3] = (bool) 0
0x15b: Return(); Pop(2)

0x15c: Stack[-3] = Stack[-1]
0x15d: Return(); Pop(2)

0x15e: Stack[-1] = 0
0x15f: PushEmpty(object, object, int, object, object, int)
0x160: PushEmpty(object)
0x161: Call 0x152

0x162: Stack[-4] = Stack[-1]
0x163: Pop(1)
0x164: @@ Find(Stack[-7], Stack[-2])
0x165: Pop(0)
0x166: Pop(0); Push((bool) Stack[-2] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x168: Push("Can't find diary parent with id: ")
0x169: Pop(1); Push(Stack[-1] + Stack[-8]);
0x16a: @ Trace(Stack[-1])
0x16b: Pop(1)
0x16c: Stack[-9] = (bool) 0
0x16d: Return(); Pop(6)

0x16e: @@ AddChild(Stack[-8])
0x16f: Pop(0)
0x170: Push("player_diary")
0x171: Push((int) 1)
0x172: @ SetVariable(Stack[-2], Stack[-1])
0x173: Pop(2)
0x174: @@ GetCategory(Stack[-1])
0x175: Pop(0)
0x176: @ SetDiarySection(Stack[-1])
0x177: Pop(0)
0x178: Stack[-9] = (bool) 0
0x179: Return(); Pop(6)

0x17a: Stack[-2] = 0
0x17b: Stack[-3] = 0
0x17c: PushEmpty(object, object)
0x17d: Push("Adding diary entry")
0x17e: @ Trace(Stack[-1])
0x17f: Pop(1)
0x180: Push((int) 61)
0x181: Push((int) 2)
0x182: Push((int) 12143)
0x183: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: PushEmpty(bool, object, int)
0x186: Stack[-2] = Stack[-4]
0x187: Stack[-1] = (int) 11
0x188: Call 0x15f

0x189: Pop(3)
0x18a: Return(); Pop(2)

0x18b: Stack[-1] = 0
0x18c: PushEmpty(object, object)
0x18d: Push("Adding diary entry")
0x18e: @ Trace(Stack[-1])
0x18f: Pop(1)
0x190: Push((int) 62)
0x191: Push((int) 2)
0x192: Push((int) 12144)
0x193: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: PushEmpty(bool, object, int)
0x196: Stack[-2] = Stack[-4]
0x197: Stack[-1] = (int) 11
0x198: Call 0x15f

0x199: Pop(3)
0x19a: Return(); Pop(2)

0x19b: Stack[-1] = 0
0x19c: Return(); Pop(0)

