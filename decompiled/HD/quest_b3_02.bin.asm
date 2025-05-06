GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	b3q02
	place_grabitel1
	warehouse_notkin@door1
	pt_b3q02_grabitel1_1
	pers_grabitel
	b3q02_grabitel1.xml
	add
	pt_b3q02_grabitel1_2
	remove_grabitel
	grabitel_attack
	size
	get
	GetActor
	grabitel_dead
	place_grabitel2
	pt_b3q02_grabitel2_
	b3q02_grabitel2.xml
	fail
	completed
	clear
	b3q02Dead
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	Remove
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

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
	CreateObjectVector (1 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_9 Op = 0xd5 Vars = (int, float)


0x0: Push("b3q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call2 0xe0

0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 3
0xa: Call2 0xc2

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, int, int, object, object, int, object, int, object, int, int, object, object, int, object, int)
0xe: @ Trace(Stack[-17])
0xf: Pop(0)
0x10: Push("place_grabitel1")
0x11: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "warehouse_notkin@door1"
0x15: Stack[-1] = (bool) 1
0x16: Call2 0xf8

0x17: Pop(2)
0x18: @ GetMainOutdoorScene(Stack[-8])
0x19: Pop(0)
0x1a: PushEmpty(object, object, string, string, string)
0x1b: Stack[-4] = Stack[-13]
0x1c: Stack[-3] = "pt_b3q02_grabitel1_1"
0x1d: Stack[-2] = "pers_grabitel"
0x1e: Stack[-1] = "b3q02_grabitel1.xml"
0x1f: Call2 0xe6

0x20: Pop(4)
0x21: @@ add(Stack[-1])
0x22: Pop(1)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-4] = Stack[-13]
0x25: Stack[-3] = "pt_b3q02_grabitel1_2"
0x26: Stack[-2] = "pers_grabitel"
0x27: Stack[-1] = "b3q02_grabitel1.xml"
0x28: Call2 0xe6

0x29: Pop(4)
0x2a: @@ add(Stack[-1])
0x2b: Pop(1)
0x2c: Stack[-8] = 0
0x2d: GOTO 0x81

0x2e: Push("remove_grabitel")
0x2f: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x31: PushEmpty(object)
0x32: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33: Call2 0x109

0x34: Pop(1)
0x35: GOTO 0x81

0x36: Push("grabitel_attack")
0x37: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x39: @@ size(Stack[-7])
0x3a: Pop(0)
0x3b: Stack[-6] = (int) 0
0x3c: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x3d: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x3e: @@ get(Stack[-5], Stack[-6])
0x3f: Pop(0)
0x40: Push(Stack[-5])
0x41: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x42: @@ GetActor(Stack[-4])
0x43: Pop(0)
0x44: Push(Stack[-4])
0x45: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x46: Push("attack")
0x47: @ Trigger(Stack[-5], Stack[-1])
0x48: Pop(1)
0x49: Stack[-4] = 0
0x4a: Stack[-5] = 0
0x4b: Push((int) 1)
0x4c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4d: GOTO 0x3c

0x4e: GOTO 0x81

0x4f: Push("grabitel_dead")
0x50: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x52: @@ size(Stack[-3])
0x53: Pop(0)
0x54: Push((int) 1)
0x55: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x56: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-3])
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: PushEmpty()
0x59: Call2 0xad

0x5a: Pop(0)
0x5b: GOTO 0x81

0x5c: Push("place_grabitel2")
0x5d: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x5f: @ GetMainOutdoorScene(Stack[-2])
0x60: Pop(0)
0x61: Stack[-1] = (int) 1
0x62: Push((int) 4)
0x63: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x65: PushEmpty(object, object, string, string, string)
0x66: Stack[-4] = Stack[-7]
0x67: Push("pt_b3q02_grabitel2_")
0x68: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x69: Stack[-2] = "pers_grabitel"
0x6a: Stack[-1] = "b3q02_grabitel2.xml"
0x6b: Call2 0xe6

0x6c: Pop(4)
0x6d: @@ add(Stack[-1])
0x6e: Pop(1)
0x6f: Push((int) 1)
0x70: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x71: GOTO 0x62

0x72: Stack[-2] = 0
0x73: GOTO 0x81

0x74: Push("fail")
0x75: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x77: PushEmpty()
0x78: Call2 0x8d

0x79: Pop(0)
0x7a: GOTO 0x81

0x7b: Push("completed")
0x7c: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7e: PushEmpty()
0x7f: Call2 0x95

0x80: Pop(0)
0x81: Return(); Pop(16)

0x82: PushEmpty(int, int)
0x83: Push("b3q02")
0x84: @ GetVariable(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Push((int) 1000)
0x87: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: PushEmpty()
0x8a: Call2 0x8d

0x8b: Pop(0)
0x8c: Return(); Pop(2)

0x8d: Push("b3q02")
0x8e: Push((int) -1)
0x8f: @ SetVariable(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: PushEmpty()
0x92: Call2 0x9d

0x93: Pop(0)
0x94: Return(); Pop(0)

0x95: Push("b3q02")
0x96: Push((int) 1000)
0x97: @ SetVariable(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: PushEmpty()
0x9a: Call2 0x9d

0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: EventDisable(26)
0x9e: PushEmpty(object)
0x9f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0: Call2 0x109

0xa1: Pop(1)
0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = "warehouse_notkin@door1"
0xa4: Stack[-1] = (bool) 0
0xa5: Call2 0xf8

0xa6: Pop(2)
0xa7: PushEmpty(object)
0xa8: Call2 0xda

0xa9: Pop(0)
0xaa: @ RemoveActor(Stack[-1])
0xab: Pop(1)
0xac: Return(); Pop(0)

0xad: PushEmpty(int, int)
0xae: @@ size(Stack[-1])
0xaf: Pop(0)
0xb0: Pop(0); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(2)

0xb3: @@ clear()
0xb4: Pop(0)
0xb5: PushEmpty()
0xb6: Call2 0x11e

0xb7: Pop(0)
0xb8: PushEmpty(string, bool)
0xb9: Stack[-2] = "warehouse_notkin@door1"
0xba: Stack[-1] = (bool) 0
0xbb: Call2 0xf8

0xbc: Pop(2)
0xbd: Push("b3q02Dead")
0xbe: Push((bool) 1)
0xbf: @ SetVariable(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: Return(); Pop(2)

0xc2: PushEmpty(float, float)
0xc3: @ GetGameTime(Stack[-1])
0xc4: Pop(0)
0xc5: Push((int) 24)
0xc6: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc9: PushEmpty()
0xca: Call2 0x9d

0xcb: Pop(0)
0xcc: GOTO 0xd4

0xcd: Push((int) 0)
0xce: Push((int) 24)
0xcf: Pop(1); Push(Stack[-5] * Stack[-1]);
0xd0: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: @ Hold()
0xd3: Pop(0)
0xd4: Return(); Pop(2)

0xd5: PushEmpty()
0xd6: PushEmpty()
0xd7: Call2 0x82

0xd8: Pop(0)
0xd9: Return(); Pop(0)

0xda: PushEmpty(object, object)
0xdb: @ self(Stack[-1])
0xdc: Pop(0)
0xdd: Stack[-3] = Stack[-1]
0xde: Return(); Pop(2)

0xdf: Stack[-1] = 0
0xe0: PushEmpty(object, object)
0xe1: @ CreateObjectVector(Stack[-1])
0xe2: Pop(0)
0xe3: Stack[-3] = Stack[-1]
0xe4: Return(); Pop(2)

0xe5: Stack[-1] = 0
0xe6: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe7: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe8: Pop(0)
0xe9: Pop(0); Push((bool) Stack[-4] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xeb: Push("Locator ")
0xec: Pop(1); Push(Stack[-1] + Stack[-12]);
0xed: Push(" doesn't exist")
0xee: Pop(2); Push(Stack[-2] + Stack[-1]);
0xef: @ Trace(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-1] = 0
0xf2: GOTO 0xf5

0xf3: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xf4: Pop(0)
0xf5: Stack[-13] = Stack[-1]
0xf6: Return(); Pop(8)

0xf7: Stack[-1] = 0
0xf8: PushEmpty(object, object)
0xf9: @ FindActor(Stack[-1], Stack[-4])
0xfa: Pop(0)
0xfb: Pop(0); Push((bool) Stack[-1] == 0)
0xfc: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfd: Push("Door ")
0xfe: Pop(1); Push(Stack[-1] + Stack[-5]);
0xff: Push(" not found")
0x100: Pop(2); Push(Stack[-2] + Stack[-1]);
0x101: @ Trace(Stack[-1])
0x102: Pop(1)
0x103: GOTO 0x107

0x104: Push("locked")
0x105: @@ SetProperty(Stack[-1], Stack[-4])
0x106: Pop(1)
0x107: Return(); Pop(2)

0x108: Stack[-1] = 0
0x109: PushEmpty(int, int, object, int, int, object)
0x10a: Push(Stack[-7])
0x10b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10c: @@ size(Stack[-3])
0x10d: Pop(0)
0x10e: Stack[-2] = (int) 0
0x10f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x110: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x111: @@ get(Stack[-1], Stack[-2])
0x112: Pop(0)
0x113: Push(Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: @@ Remove()
0x116: Pop(0)
0x117: Stack[-1] = 0
0x118: Push((int) 1)
0x119: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11a: GOTO 0x10f

0x11b: @@ clear()
0x11c: Pop(0)
0x11d: Return(); Pop(6)

0x11e: PushEmpty(object, object)
0x11f: Push((int) 231)
0x120: Push((int) 2)
0x121: Push((int) 519659)
0x122: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: PushEmpty(bool, object, int)
0x125: Stack[-2] = Stack[-4]
0x126: Stack[-1] = (int) 227
0x127: Call2 0x138

0x128: Pop(3)
0x129: Return(); Pop(2)

0x12a: Stack[-1] = 0
0x12b: PushEmpty(object, object)
0x12c: @ GetDiaryRoot(Stack[-1])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: Push("Can't retrieve diary root")
0x131: @ Trace(Stack[-1])
0x132: Pop(1)
0x133: Stack[-3] = (bool) 0
0x134: Return(); Pop(2)

0x135: Stack[-3] = Stack[-1]
0x136: Return(); Pop(2)

0x137: Stack[-1] = 0
0x138: PushEmpty(object, object, int, object, object, int)
0x139: PushEmpty(object)
0x13a: Call2 0x12b

0x13b: Stack[-4] = Stack[-1]
0x13c: Pop(1)
0x13d: @@ Find(Stack[-7], Stack[-2])
0x13e: Pop(0)
0x13f: Pop(0); Push((bool) Stack[-2] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x141: Push("Can't find diary parent with id: ")
0x142: Pop(1); Push(Stack[-1] + Stack[-8]);
0x143: @ Trace(Stack[-1])
0x144: Pop(1)
0x145: Stack[-9] = (bool) 0
0x146: Return(); Pop(6)

0x147: @@ AddChild(Stack[-8])
0x148: Pop(0)
0x149: Push((int) 7)
0x14a: @ SendWorldWndMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ GetCategory(Stack[-1])
0x14d: Pop(0)
0x14e: @ SetDiarySection(Stack[-1])
0x14f: Pop(0)
0x150: Stack[-9] = (bool) 0
0x151: Return(); Pop(6)

0x152: Stack[-2] = 0
0x153: Stack[-3] = 0
