GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cot_eva
	icot_eva_door
	danko
	boiny@door1
	usable_stone
	b10q01_stone
	enable_use
	place_butchers
	pt_b10q01_butcher1
	pers_butcher
	b10q01_butcher.xml
	pt_b10q01_butcher2
	pt_b10q01_butcher3
	b9q01BurahGotoButcher1
	AddMark
	b9q01BurahGotoButcher2
	b9q01BurahGotoButcher3
	butcher_dead
	b10q01Butchers
	player
	b10q01_stop
	cleanup
	b10q01
	fail
	completed
	Remove
	disable_use
	FindMark
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	Close
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	FindActor (2 args)
	RemoveActor (1 args)
	self (1 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x16 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push("cot_eva")
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(string, bool)
0x5: Stack[-2] = "icot_eva_door"
0x6: Stack[-1] = (bool) 0
0x7: Call2 0x10f

0x8: Pop(2)
0x9: Push("danko")
0xa: @ Trigger(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: PushEmpty(string, bool)
0xd: Stack[-2] = "boiny@door1"
0xe: Stack[-1] = (bool) 0
0xf: Call2 0xfe

0x10: Pop(2)
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, object, int, object, int, object, object, int, object, int)
0x17: @ Trace(Stack[-11])
0x18: Pop(0)
0x19: Push("usable_stone")
0x1a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1c: PushEmpty(bool, string, string)
0x1d: Stack[-2] = "b10q01_stone"
0x1e: Stack[-1] = "enable_use"
0x1f: Call2 0x124

0x20: Pop(3)
0x21: GOTO 0x9d

0x22: Push("place_butchers")
0x23: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x25: @ GetMainOutdoorScene(Stack[-5])
0x26: Pop(0)
0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-10]
0x29: Stack[-3] = "pt_b10q01_butcher1"
0x2a: Stack[-2] = "pers_butcher"
0x2b: Stack[-1] = "b10q01_butcher.xml"
0x2c: Call2 0xec

0x2d: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2e: Pop(5)
0x2f: PushEmpty(object, object, string, string, string)
0x30: Stack[-4] = Stack[-10]
0x31: Stack[-3] = "pt_b10q01_butcher2"
0x32: Stack[-2] = "pers_butcher"
0x33: Stack[-1] = "b10q01_butcher.xml"
0x34: Call2 0xec

0x35: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x36: Pop(5)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-4] = Stack[-10]
0x39: Stack[-3] = "pt_b10q01_butcher3"
0x3a: Stack[-2] = "pers_butcher"
0x3b: Stack[-1] = "b10q01_butcher.xml"
0x3c: Call2 0xec

0x3d: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3e: Pop(5)
0x3f: PushEmpty(object)
0x40: Call2 0x178

0x41: Stack[-5] = Stack[-1]
0x42: Pop(1)
0x43: Push("b9q01BurahGotoButcher1")
0x44: Push("pt_b10q01_butcher1")
0x45: Push((int) 1)
0x46: Push((int) 101000)
0x47: PushEmpty(float)
0x48: Call2 0x130

0x49: Pop(0)
0x4a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4b: Pop(5)
0x4c: Push("b9q01BurahGotoButcher2")
0x4d: Push("pt_b10q01_butcher2")
0x4e: Push((int) 1)
0x4f: Push((int) 101000)
0x50: PushEmpty(float)
0x51: Call2 0x130

0x52: Pop(0)
0x53: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x54: Pop(5)
0x55: Push("b9q01BurahGotoButcher3")
0x56: Push("pt_b10q01_butcher3")
0x57: Push((int) 1)
0x58: Push((int) 101000)
0x59: PushEmpty(float)
0x5a: Call2 0x130

0x5b: Pop(0)
0x5c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(5)
0x5e: PushEmpty()
0x5f: Call2 0x142

0x60: Pop(0)
0x61: Stack[-4] = 0
0x62: Stack[-5] = 0
0x63: GOTO 0x9d

0x64: Push("butcher_dead")
0x65: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x67: Push("b10q01Butchers")
0x68: @ GetVariable(Stack[-1], Stack[-4])
0x69: Pop(1)
0x6a: Push("b10q01Butchers")
0x6b: Push((int) 1)
0x6c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6d: @ SetVariable(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: Push((int) 1)
0x70: Pop(1); Push(Stack[-4] + Stack[-1]);
0x71: Push((int) 3)
0x72: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x74: PushEmpty()
0x75: Call2 0x135

0x76: Pop(0)
0x77: Push("player")
0x78: @ FindActor(Stack[-3], Stack[-1])
0x79: Pop(1)
0x7a: Push("b10q01_stop")
0x7b: @ Trigger(Stack[-3], Stack[-1])
0x7c: Pop(1)
0x7d: Stack[-2] = 0
0x7e: GOTO 0x9d

0x7f: Push("cleanup")
0x80: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x82: Push("b10q01")
0x83: @ GetVariable(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Push((int) 1000)
0x86: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x88: PushEmpty()
0x89: Call2 0x9e

0x8a: Pop(0)
0x8b: GOTO 0x8f

0x8c: PushEmpty()
0x8d: Call2 0xae

0x8e: Pop(0)
0x8f: GOTO 0x9d

0x90: Push("fail")
0x91: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x93: PushEmpty()
0x94: Call2 0x9e

0x95: Pop(0)
0x96: GOTO 0x9d

0x97: Push("completed")
0x98: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9a: PushEmpty()
0x9b: Call2 0xa6

0x9c: Pop(0)
0x9d: Return(); Pop(10)

0x9e: Push("b10q01")
0x9f: Push((int) -1)
0xa0: @ SetVariable(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: PushEmpty()
0xa3: Call2 0xae

0xa4: Pop(0)
0xa5: Return(); Pop(0)

0xa6: Push("b10q01")
0xa7: Push((int) 1000)
0xa8: @ SetVariable(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: PushEmpty()
0xab: Call2 0xae

0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(object, object, object, object)
0xaf: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: @@ Remove()
0xb2: Pop(0)
0xb3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb4: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb5: @@ Remove()
0xb6: Pop(0)
0xb7: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: @@ Remove()
0xba: Pop(0)
0xbb: PushEmpty(bool, string, string)
0xbc: Stack[-2] = "b10q01_stone"
0xbd: Stack[-1] = "disable_use"
0xbe: Call2 0x124

0xbf: Pop(3)
0xc0: PushEmpty(object)
0xc1: Call2 0x178

0xc2: Stack[-3] = Stack[-1]
0xc3: Pop(1)
0xc4: Push("b9q01BurahGotoButcher1")
0xc5: @@ FindMark(Stack[-2], Stack[-1])
0xc6: Pop(1)
0xc7: Push(Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc9: @@ Remove()
0xca: Pop(0)
0xcb: Push("b9q01BurahGotoButcher2")
0xcc: @@ FindMark(Stack[-2], Stack[-1])
0xcd: Pop(1)
0xce: Push(Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: @@ Remove()
0xd1: Pop(0)
0xd2: Push("b9q01BurahGotoButcher3")
0xd3: @@ FindMark(Stack[-2], Stack[-1])
0xd4: Pop(1)
0xd5: Push(Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: @@ Remove()
0xd8: Pop(0)
0xd9: PushEmpty(string, bool)
0xda: Stack[-2] = "boiny@door1"
0xdb: Stack[-1] = (bool) 1
0xdc: Call2 0xfe

0xdd: Pop(2)
0xde: PushEmpty(object)
0xdf: Call2 0xe6

0xe0: Pop(0)
0xe1: @ RemoveActor(Stack[-1])
0xe2: Pop(1)
0xe3: Return(); Pop(4)

0xe4: Stack[-1] = 0
0xe5: Stack[-2] = 0
0xe6: PushEmpty(object, object)
0xe7: @ self(Stack[-1])
0xe8: Pop(0)
0xe9: Stack[-3] = Stack[-1]
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xed: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xee: Pop(0)
0xef: Pop(0); Push((bool) Stack[-4] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf1: Push("Locator ")
0xf2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf3: Push(" doesn't exist")
0xf4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf5: @ Trace(Stack[-1])
0xf6: Pop(1)
0xf7: Stack[-1] = 0
0xf8: GOTO 0xfb

0xf9: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xfa: Pop(0)
0xfb: Stack[-13] = Stack[-1]
0xfc: Return(); Pop(8)

0xfd: Stack[-1] = 0
0xfe: PushEmpty(object, object)
0xff: @ FindActor(Stack[-1], Stack[-4])
0x100: Pop(0)
0x101: Pop(0); Push((bool) Stack[-1] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x103: Push("Door ")
0x104: Pop(1); Push(Stack[-1] + Stack[-5]);
0x105: Push(" not found")
0x106: Pop(2); Push(Stack[-2] + Stack[-1]);
0x107: @ Trace(Stack[-1])
0x108: Pop(1)
0x109: GOTO 0x10d

0x10a: Push("locked")
0x10b: @@ SetProperty(Stack[-1], Stack[-4])
0x10c: Pop(1)
0x10d: Return(); Pop(2)

0x10e: Stack[-1] = 0
0x10f: PushEmpty(object, object)
0x110: @ FindActor(Stack[-1], Stack[-4])
0x111: Pop(0)
0x112: Pop(0); Push((bool) Stack[-1] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x114: Push("Door ")
0x115: Pop(1); Push(Stack[-1] + Stack[-5]);
0x116: Push(" not found")
0x117: Pop(2); Push(Stack[-2] + Stack[-1]);
0x118: @ Trace(Stack[-1])
0x119: Pop(1)
0x11a: GOTO 0x122

0x11b: Push(Stack[-3])
0x11c: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11d: @@ Close()
0x11e: Pop(0)
0x11f: Push("locked")
0x120: @@ SetProperty(Stack[-1], Stack[-4])
0x121: Pop(1)
0x122: Return(); Pop(2)

0x123: Stack[-1] = 0
0x124: PushEmpty(object, object)
0x125: @ FindActor(Stack[-1], Stack[-4])
0x126: Pop(0)
0x127: Pop(0); Push((bool) Stack[-1] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x129: Stack[-5] = (bool) 0
0x12a: Return(); Pop(2)

0x12b: @ Trigger(Stack[-1], Stack[-3])
0x12c: Pop(0)
0x12d: Stack[-5] = (bool) 1
0x12e: Return(); Pop(2)

0x12f: Stack[-1] = 0
0x130: PushEmpty(float, float)
0x131: @ GetGameTime(Stack[-1])
0x132: Pop(0)
0x133: Stack[-3] = Stack[-1]
0x134: Return(); Pop(2)

0x135: PushEmpty(object, object)
0x136: Push((int) 308)
0x137: Push((int) 1)
0x138: Push((int) 521959)
0x139: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: PushEmpty(bool, object, int)
0x13c: Stack[-2] = Stack[-4]
0x13d: Stack[-1] = (int) 305
0x13e: Call2 0x15c

0x13f: Pop(3)
0x140: Return(); Pop(2)

0x141: Stack[-1] = 0
0x142: PushEmpty(object, object)
0x143: Push((int) 312)
0x144: Push((int) 1)
0x145: Push((int) 521963)
0x146: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: PushEmpty(bool, object, int)
0x149: Stack[-2] = Stack[-4]
0x14a: Stack[-1] = (int) 305
0x14b: Call2 0x15c

0x14c: Pop(3)
0x14d: Return(); Pop(2)

0x14e: Stack[-1] = 0
0x14f: PushEmpty(object, object)
0x150: @ GetDiaryRoot(Stack[-1])
0x151: Pop(0)
0x152: Pop(0); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push("Can't retrieve diary root")
0x155: @ Trace(Stack[-1])
0x156: Pop(1)
0x157: Stack[-3] = (bool) 0
0x158: Return(); Pop(2)

0x159: Stack[-3] = Stack[-1]
0x15a: Return(); Pop(2)

0x15b: Stack[-1] = 0
0x15c: PushEmpty(object, object, int, object, object, int)
0x15d: PushEmpty(object)
0x15e: Call2 0x14f

0x15f: Stack[-4] = Stack[-1]
0x160: Pop(1)
0x161: @@ Find(Stack[-7], Stack[-2])
0x162: Pop(0)
0x163: Pop(0); Push((bool) Stack[-2] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x165: Push("Can't find diary parent with id: ")
0x166: Pop(1); Push(Stack[-1] + Stack[-8]);
0x167: @ Trace(Stack[-1])
0x168: Pop(1)
0x169: Stack[-9] = (bool) 0
0x16a: Return(); Pop(6)

0x16b: @@ AddChild(Stack[-8])
0x16c: Pop(0)
0x16d: Push((int) 7)
0x16e: @ SendWorldWndMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ GetCategory(Stack[-1])
0x171: Pop(0)
0x172: @ SetDiarySection(Stack[-1])
0x173: Pop(0)
0x174: Stack[-9] = (bool) 0
0x175: Return(); Pop(6)

0x176: Stack[-2] = 0
0x177: Stack[-3] = 0
0x178: PushEmpty(object, object, object, object)
0x179: @ GetMainOutdoorScene(Stack[-2])
0x17a: Pop(0)
0x17b: Pop(0); Push((bool) Stack[-2] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17d: Push("Can't find main outdoor scene")
0x17e: @ Trace(Stack[-1])
0x17f: Pop(1)
0x180: Stack[-1] = 0
0x181: Stack[-5] = Stack[-1]
0x182: Return(); Pop(4)

0x183: @@ GetMap(Stack[-1])
0x184: Pop(0)
0x185: Stack[-5] = Stack[-1]
0x186: Return(); Pop(4)

0x187: Stack[-1] = 0
0x188: Stack[-2] = 0
