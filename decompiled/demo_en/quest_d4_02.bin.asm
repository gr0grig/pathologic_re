GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d4q02
	s_house7_03_door1
	s_house7_03_door2
	house7_03@door1
	house7_03@door2
	scene_load
	d4q02_survived
	door_close
	quest_d4_02_survival
	scene_unload
	Remove
	birdmask
	pt_d4q02_birdmask
	pers_birdmask
	d4q02_birdmask.xml
	birdmask_talk
	door_open
	completed
	.bin
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	lp
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetVariable (2 args)
	PlaySound (1 args)
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddBlankActor (4 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x1f Vars = (string)
		EVENT_9 Op = 0xcc Vars = (int, float)


0x0: Push("d4q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(string, bool)
0x5: Stack[-2] = "s_house7_03_door1"
0x6: Stack[-1] = (bool) 1
0x7: Call2 0xf4

0x8: Pop(2)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "s_house7_03_door2"
0xb: Stack[-1] = (bool) 1
0xc: Call2 0xf4

0xd: Pop(2)
0xe: PushEmpty(string, bool, bool)
0xf: Stack[-3] = "house7_03@door1"
0x10: Stack[-2] = (bool) 1
0x11: Stack[-1] = (bool) 0
0x12: Call2 0x105

0x13: Pop(3)
0x14: PushEmpty(string, bool, bool)
0x15: Stack[-3] = "house7_03@door2"
0x16: Stack[-2] = (bool) 1
0x17: Stack[-1] = (bool) 0
0x18: Call2 0x105

0x19: Pop(3)
0x1a: PushEmpty(int)
0x1b: Stack[-1] = (int) 4
0x1c: Call2 0xb9

0x1d: Pop(1)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(bool, object, bool, object)
0x20: @ Trace(Stack[-5])
0x21: Pop(0)
0x22: Push("scene_load")
0x23: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x25: Push("d4q02_survived")
0x26: @ GetVariable(Stack[-1], Stack[-3])
0x27: Pop(1)
0x28: Pop(0); Push((bool) Stack[-2] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2a: Push("door_close")
0x2b: @ PlaySound(Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty(object, string)
0x2e: Stack[-1] = "quest_d4_02_survival"
0x2f: Call2 0xd7

0x30: Pop(2)
0x31: GOTO 0x70

0x32: Push("scene_unload")
0x33: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x35: Push( Stack[0 + Tasks[-1].StackPointer] )
0x36: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x37: @@ Remove()
0x38: Pop(0)
0x39: PushEmpty(string, bool)
0x3a: Stack[-2] = "s_house7_03_door2"
0x3b: Stack[-1] = (bool) 0
0x3c: Call2 0xf4

0x3d: Pop(2)
0x3e: GOTO 0x70

0x3f: Push("birdmask")
0x40: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x42: @ GetMainOutdoorScene(Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-4] = Stack[-6]
0x46: Stack[-3] = "pt_d4q02_birdmask"
0x47: Stack[-2] = "pers_birdmask"
0x48: Stack[-1] = "d4q02_birdmask.xml"
0x49: Call2 0xe2

0x4a: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x4b: Pop(5)
0x4c: Stack[-1] = 0
0x4d: GOTO 0x70

0x4e: Push("birdmask_talk")
0x4f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x51: PushEmpty(string, bool)
0x52: Stack[-2] = "house7_03@door1"
0x53: Stack[-1] = (bool) 0
0x54: Call2 0xf4

0x55: Pop(2)
0x56: GOTO 0x70

0x57: Push("survived")
0x58: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5a: PushEmpty(string, bool)
0x5b: Stack[-2] = "s_house7_03_door1"
0x5c: Stack[-1] = (bool) 0
0x5d: Call2 0xf4

0x5e: Pop(2)
0x5f: Push("d4q02_survived")
0x60: Push((int) 1)
0x61: @ SetVariable(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: Push("door_open")
0x64: @ PlaySound(Stack[-1])
0x65: Pop(1)
0x66: PushEmpty()
0x67: Call2 0x119

0x68: Pop(0)
0x69: GOTO 0x70

0x6a: Push("completed")
0x6b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6d: PushEmpty()
0x6e: Call2 0x84

0x6f: Pop(0)
0x70: Return(); Pop(4)

0x71: PushEmpty(int, int)
0x72: Push("d4q02")
0x73: @ GetVariable(Stack[-1], Stack[-2])
0x74: Pop(1)
0x75: Push((int) 1000)
0x76: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x78: PushEmpty()
0x79: Call2 0x7c

0x7a: Pop(0)
0x7b: Return(); Pop(2)

0x7c: Push("d4q02")
0x7d: Push((int) -1)
0x7e: @ SetVariable(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: PushEmpty()
0x81: Call2 0x9a

0x82: Pop(0)
0x83: Return(); Pop(0)

0x84: PushEmpty(int, int)
0x85: Push("d4q02")
0x86: @ GetVariable(Stack[-1], Stack[-2])
0x87: Pop(1)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: Push((int) 1000)
0x8b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8d: Push((int) -1)
0x8e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x92: Push("d4q02")
0x93: Push((int) 1000)
0x94: @ SetVariable(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: PushEmpty()
0x97: Call2 0x9a

0x98: Pop(0)
0x99: Return(); Pop(2)

0x9a: EventDisable(26)
0x9b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: @@ Remove()
0x9e: Pop(0)
0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = "s_house7_03_door1"
0xa1: Stack[-1] = (bool) 0
0xa2: Call2 0xf4

0xa3: Pop(2)
0xa4: PushEmpty(string, bool)
0xa5: Stack[-2] = "s_house7_03_door2"
0xa6: Stack[-1] = (bool) 0
0xa7: Call2 0xf4

0xa8: Pop(2)
0xa9: PushEmpty(string, bool)
0xaa: Stack[-2] = "house7_03@door1"
0xab: Stack[-1] = (bool) 0
0xac: Call2 0xf4

0xad: Pop(2)
0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = "house7_03@door2"
0xb0: Stack[-1] = (bool) 0
0xb1: Call2 0xf4

0xb2: Pop(2)
0xb3: PushEmpty(object)
0xb4: Call2 0xd1

0xb5: Pop(0)
0xb6: @ RemoveActor(Stack[-1])
0xb7: Pop(1)
0xb8: Return(); Pop(0)

0xb9: PushEmpty(float, float)
0xba: @ GetGameTime(Stack[-1])
0xbb: Pop(0)
0xbc: Push((int) 24)
0xbd: Pop(1); Push(Stack[-4] * Stack[-1]);
0xbe: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x9a

0xc2: Pop(0)
0xc3: GOTO 0xcb

0xc4: Push((int) 0)
0xc5: Push((int) 24)
0xc6: Pop(1); Push(Stack[-5] * Stack[-1]);
0xc7: @ SetTimeEvent(Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: @ Hold()
0xca: Pop(0)
0xcb: Return(); Pop(2)

0xcc: PushEmpty()
0xcd: PushEmpty()
0xce: Call2 0x71

0xcf: Pop(0)
0xd0: Return(); Pop(0)

0xd1: PushEmpty(object, object)
0xd2: @ self(Stack[-1])
0xd3: Pop(0)
0xd4: Stack[-3] = Stack[-1]
0xd5: Return(); Pop(2)

0xd6: Stack[-1] = 0
0xd7: PushEmpty(object, object, object, object)
0xd8: @ GetMainOutdoorScene(Stack[-2])
0xd9: Pop(0)
0xda: Push(".bin")
0xdb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdc: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xdd: Pop(1)
0xde: Stack[-6] = Stack[-1]
0xdf: Return(); Pop(4)

0xe0: Stack[-1] = 0
0xe1: Stack[-2] = 0
0xe2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe4: Pop(0)
0xe5: Pop(0); Push((bool) Stack[-4] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe7: Push("Locator ")
0xe8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe9: Push(" doesn't exist")
0xea: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb: @ Trace(Stack[-1])
0xec: Pop(1)
0xed: Stack[-1] = 0
0xee: GOTO 0xf1

0xef: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xf0: Pop(0)
0xf1: Stack[-13] = Stack[-1]
0xf2: Return(); Pop(8)

0xf3: Stack[-1] = 0
0xf4: PushEmpty(object, object)
0xf5: @ FindActor(Stack[-1], Stack[-4])
0xf6: Pop(0)
0xf7: Pop(0); Push((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf9: Push("Door ")
0xfa: Pop(1); Push(Stack[-1] + Stack[-5]);
0xfb: Push(" not found")
0xfc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfd: @ Trace(Stack[-1])
0xfe: Pop(1)
0xff: GOTO 0x103

0x100: Push("locked")
0x101: @@ SetProperty(Stack[-1], Stack[-4])
0x102: Pop(1)
0x103: Return(); Pop(2)

0x104: Stack[-1] = 0
0x105: PushEmpty(object, object)
0x106: @ FindActor(Stack[-1], Stack[-5])
0x107: Pop(0)
0x108: Pop(0); Push((bool) Stack[-1] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: Push("Door ")
0x10b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x10c: Push(" not found")
0x10d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10e: @ Trace(Stack[-1])
0x10f: Pop(1)
0x110: GOTO 0x117

0x111: Push("locked")
0x112: @@ SetProperty(Stack[-1], Stack[-5])
0x113: Pop(1)
0x114: Push("lp")
0x115: @@ SetProperty(Stack[-1], Stack[-4])
0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty(object, object)
0x11a: Push((int) 629)
0x11b: Push((int) 2)
0x11c: Push((int) 532893)
0x11d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: PushEmpty(bool, object, int)
0x120: Stack[-2] = Stack[-4]
0x121: Stack[-1] = (int) 21
0x122: Call2 0x133

0x123: Pop(3)
0x124: Return(); Pop(2)

0x125: Stack[-1] = 0
0x126: PushEmpty(object, object)
0x127: @ GetDiaryRoot(Stack[-1])
0x128: Pop(0)
0x129: Pop(0); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: Push("Can't retrieve diary root")
0x12c: @ Trace(Stack[-1])
0x12d: Pop(1)
0x12e: Stack[-3] = (bool) 0
0x12f: Return(); Pop(2)

0x130: Stack[-3] = Stack[-1]
0x131: Return(); Pop(2)

0x132: Stack[-1] = 0
0x133: PushEmpty(object, object, int, object, object, int)
0x134: PushEmpty(object)
0x135: Call2 0x126

0x136: Stack[-4] = Stack[-1]
0x137: Pop(1)
0x138: @@ Find(Stack[-7], Stack[-2])
0x139: Pop(0)
0x13a: Pop(0); Push((bool) Stack[-2] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13c: Push("Can't find diary parent with id: ")
0x13d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x13e: @ Trace(Stack[-1])
0x13f: Pop(1)
0x140: Stack[-9] = (bool) 0
0x141: Return(); Pop(6)

0x142: @@ AddChild(Stack[-8])
0x143: Pop(0)
0x144: Push((int) 7)
0x145: @ SendWorldWndMessage(Stack[-1])
0x146: Pop(1)
0x147: @@ GetCategory(Stack[-1])
0x148: Pop(0)
0x149: @ SetDiarySection(Stack[-1])
0x14a: Pop(0)
0x14b: Stack[-9] = (bool) 0
0x14c: Return(); Pop(6)

0x14d: Stack[-2] = 0
0x14e: Stack[-3] = 0
