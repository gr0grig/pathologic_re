GlobalVarCount = 0

Strings:
	theater
	pt_k7q01_danko
	NPC_Bakalavr
	k7q01_danko.xml
	termitnik2
	pt_k7q01_burah
	NPC_Burah
	k7q01_burah.xml
	termitnik2@door1
	termitnik@door1
	pt_k7q01_birdmask1
	pers_birdmask
	k7q01_birdmask.xml
	pt_k7q01_birdmask2
	burah_home
	noburah
	sobor@door1
	cot_georg@door1
	cot_maria@door1
	cot_viktor@door1
	place_corpse
	d7q02_corpse
	k7q01_corpse.xml
	place_danko
	cot_eva_load
	icot_eva_door
	theater_load
	termitnik2_load
	sobor_load
	Remove
	fail
	completed
	cleanup
	k7q01
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
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	Trace (1 args)
	AddActor (6 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)

RunOp = 0x26
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_9 Op = 0x8f Vars = (int, float)
		EVENT_26 Op = 0xa0 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2: IF (Stack[-1] == 0) GOTO 0x4; Pop(1)

0x3: Return(); Pop(2)

0x4: Push("theater")
0x5: @ GetSceneByName(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-4] = Stack[-6]
0x9: Stack[-3] = "pt_k7q01_danko"
0xa: Stack[-2] = "NPC_Bakalavr"
0xb: Stack[-1] = "k7q01_danko.xml"
0xc: Call2 0x14f

0xd: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0xe: Pop(5)
0xf: Return(); Pop(2)

0x10: Stack[-1] = 0
0x11: PushEmpty(object, object)
0x12: Push( Stack[4 + Tasks[-1].StackPointer] )
0x13: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x14: Return(); Pop(2)

0x15: Push("termitnik2")
0x16: @ GetSceneByName(Stack[-2], Stack[-1])
0x17: Pop(1)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-4] = Stack[-6]
0x1a: Stack[-3] = "pt_k7q01_burah"
0x1b: Stack[-2] = "NPC_Burah"
0x1c: Stack[-1] = "k7q01_burah.xml"
0x1d: Call2 0x14f

0x1e: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(bool, string)
0x21: Stack[-1] = "NPC_Burah"
0x22: Call2 0x199

0x23: Pop(2)
0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty(object, object, object, float, object, object, object, float)
0x27: PushEmpty(string, bool)
0x28: Stack[-2] = "termitnik2@door1"
0x29: Stack[-1] = (bool) 0
0x2a: Call2 0x173

0x2b: Pop(2)
0x2c: PushEmpty(string, bool)
0x2d: Stack[-2] = "termitnik@door1"
0x2e: Stack[-1] = (bool) 1
0x2f: Call2 0x173

0x30: Pop(2)
0x31: @ GetMainOutdoorScene(Stack[-4])
0x32: Pop(0)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-4] = Stack[-9]
0x35: Stack[-3] = "pt_k7q01_birdmask1"
0x36: Stack[-2] = "pers_birdmask"
0x37: Stack[-1] = "k7q01_birdmask.xml"
0x38: Call2 0x161

0x39: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Pop(5)
0x3b: PushEmpty(object, object, string, string, string)
0x3c: Stack[-4] = Stack[-9]
0x3d: Stack[-3] = "pt_k7q01_birdmask2"
0x3e: Stack[-2] = "pers_birdmask"
0x3f: Stack[-1] = "k7q01_birdmask.xml"
0x40: Call2 0x161

0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x42: Pop(5)
0x43: @ GetScene(Stack[-4])
0x44: Pop(0)
0x45: Push("theater")
0x46: @ GetSceneByName(Stack[-4], Stack[-1])
0x47: Pop(1)
0x48: Pop(0); Push((bool) Stack[-3] != Stack[-4])
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x0

0x4c: Pop(0)
0x4d: Push("termitnik2")
0x4e: @ GetSceneByName(Stack[-3], Stack[-1])
0x4f: Pop(1)
0x50: Pop(0); Push((bool) Stack[-2] != Stack[-4])
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x11

0x54: Pop(0)
0x55: Push("burah_home")
0x56: @ GetSceneByName(Stack[-5], Stack[-1])
0x57: Pop(1)
0x58: Push("noburah")
0x59: @ Trigger(Stack[-5], Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty(string, bool)
0x5c: Stack[-2] = "sobor@door1"
0x5d: Stack[-1] = (bool) 1
0x5e: Call2 0x173

0x5f: Pop(2)
0x60: @ GetGameTime(Stack[-1])
0x61: Pop(0)
0x62: Push((float)156.0)
0x63: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x65: PushEmpty(string, bool)
0x66: Stack[-2] = "cot_georg@door1"
0x67: Stack[-1] = (bool) 0
0x68: Call2 0x173

0x69: Pop(2)
0x6a: PushEmpty(string, bool)
0x6b: Stack[-2] = "cot_maria@door1"
0x6c: Stack[-1] = (bool) 0
0x6d: Call2 0x173

0x6e: Pop(2)
0x6f: PushEmpty(string, bool)
0x70: Stack[-2] = "cot_viktor@door1"
0x71: Stack[-1] = (bool) 0
0x72: Call2 0x173

0x73: Pop(2)
0x74: GOTO 0x88

0x75: PushEmpty(string, bool)
0x76: Stack[-2] = "cot_georg@door1"
0x77: Stack[-1] = (bool) 1
0x78: Call2 0x173

0x79: Pop(2)
0x7a: PushEmpty(string, bool)
0x7b: Stack[-2] = "cot_maria@door1"
0x7c: Stack[-1] = (bool) 1
0x7d: Call2 0x173

0x7e: Pop(2)
0x7f: PushEmpty(string, bool)
0x80: Stack[-2] = "cot_viktor@door1"
0x81: Stack[-1] = (bool) 1
0x82: Call2 0x173

0x83: Pop(2)
0x84: Push((int) 0)
0x85: Push((float)156.0)
0x86: @ SetTimeEvent(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ Hold()
0x89: Pop(0)
0x8a: GOTO 0x88

0x8b: Return(); Pop(8)

0x8c: Stack[-2] = 0
0x8d: Stack[-3] = 0
0x8e: Stack[-4] = 0
0x8f: PushEmpty()
0x90: PushEmpty(string, bool)
0x91: Stack[-2] = "cot_georg@door1"
0x92: Stack[-1] = (bool) 0
0x93: Call2 0x173

0x94: Pop(2)
0x95: PushEmpty(string, bool)
0x96: Stack[-2] = "cot_maria@door1"
0x97: Stack[-1] = (bool) 0
0x98: Call2 0x173

0x99: Pop(2)
0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = "cot_viktor@door1"
0x9c: Stack[-1] = (bool) 0
0x9d: Call2 0x173

0x9e: Pop(2)
0x9f: Return(); Pop(0)

0xa0: PushEmpty(object, int, object, int)
0xa1: @ Trace(Stack[-5])
0xa2: Pop(0)
0xa3: Push("place_corpse")
0xa4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa6: @ GetMainOutdoorScene(Stack[-2])
0xa7: Pop(0)
0xa8: Push("d7q02_corpse")
0xa9: Push(CVector(0.0, 0.0, 0.0))
0xaa: Push(CVector(0.0, 0.0, 1.0))
0xab: Push("k7q01_corpse.xml")
0xac: @ AddActor(Stack[-2], Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(4)
0xae: Stack[-2] = 0
0xaf: GOTO 0xfa

0xb0: Push("place_danko")
0xb1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb5: PushEmpty()
0xb6: Call2 0x0

0xb7: Pop(0)
0xb8: GOTO 0xfa

0xb9: Push("cot_eva_load")
0xba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbc: PushEmpty(string, bool)
0xbd: Stack[-2] = "icot_eva_door"
0xbe: Stack[-1] = (bool) 1
0xbf: Call2 0x184

0xc0: Pop(2)
0xc1: GOTO 0xfa

0xc2: Push("theater_load")
0xc3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x0

0xc7: Pop(0)
0xc8: GOTO 0xfa

0xc9: Push("termitnik2_load")
0xca: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcc: PushEmpty()
0xcd: Call2 0x11

0xce: Pop(0)
0xcf: GOTO 0xfa

0xd0: Push("sobor_load")
0xd1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd3: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: @@ Remove()
0xd6: Pop(0)
0xd7: Push( Stack[1 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: @@ Remove()
0xda: Pop(0)
0xdb: GOTO 0xfa

0xdc: Push("fail")
0xdd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdf: PushEmpty()
0xe0: Call2 0xfb

0xe1: Pop(0)
0xe2: GOTO 0xfa

0xe3: Push("completed")
0xe4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x103

0xe8: Pop(0)
0xe9: GOTO 0xfa

0xea: Push("cleanup")
0xeb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xed: Push("k7q01")
0xee: @ GetVariable(Stack[-1], Stack[-2])
0xef: Pop(1)
0xf0: Push((int) 1000)
0xf1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf3: Push("k7q01")
0xf4: Push((int) -1)
0xf5: @ SetVariable(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: PushEmpty()
0xf8: Call2 0x11e

0xf9: Pop(0)
0xfa: Return(); Pop(4)

0xfb: Push("k7q01")
0xfc: Push((int) -1)
0xfd: @ SetVariable(Stack[-2], Stack[-1])
0xfe: Pop(2)
0xff: PushEmpty()
0x100: Call2 0x10b

0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: Push("k7q01")
0x104: Push((int) 1000)
0x105: @ SetVariable(Stack[-2], Stack[-1])
0x106: Pop(2)
0x107: PushEmpty()
0x108: Call2 0x10b

0x109: Pop(0)
0x10a: Return(); Pop(0)

0x10b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: @@ Remove()
0x10e: Pop(0)
0x10f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: @@ Remove()
0x112: Pop(0)
0x113: PushEmpty(string, bool)
0x114: Stack[-2] = "sobor@door1"
0x115: Stack[-1] = (bool) 0
0x116: Call2 0x173

0x117: Pop(2)
0x118: PushEmpty(string, bool)
0x119: Stack[-2] = "termitnik@door1"
0x11a: Stack[-1] = (bool) 0
0x11b: Call2 0x173

0x11c: Pop(2)
0x11d: Return(); Pop(0)

0x11e: PushEmpty(object, object)
0x11f: EventDisable(26)
0x120: PushEmpty()
0x121: Call2 0x10b

0x122: Pop(0)
0x123: Push( Stack[3 + Tasks[-1].StackPointer] )
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: Push("cleanup")
0x126: @ Trigger(Stack[-3], Stack[-1])
0x127: Pop(1)
0x128: PushEmpty(string, bool)
0x129: Stack[-2] = "icot_eva_door"
0x12a: Stack[-1] = (bool) 0
0x12b: Call2 0x184

0x12c: Pop(2)
0x12d: Push( Stack[4 + Tasks[-1].StackPointer] )
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: Push("cleanup")
0x130: @ Trigger(Stack[-4], Stack[-1])
0x131: Pop(1)
0x132: Push( Stack[2 + Tasks[-1].StackPointer] )
0x133: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x134: Push("cleanup")
0x135: @ Trigger(Stack[-2], Stack[-1])
0x136: Pop(1)
0x137: Push("burah_home")
0x138: @ GetSceneByName(Stack[-2], Stack[-1])
0x139: Pop(1)
0x13a: Push("burah")
0x13b: @ Trigger(Stack[-2], Stack[-1])
0x13c: Pop(1)
0x13d: PushEmpty(string, bool)
0x13e: Stack[-2] = "termitnik2@door1"
0x13f: Stack[-1] = (bool) 1
0x140: Call2 0x173

0x141: Pop(2)
0x142: PushEmpty(object)
0x143: Call2 0x149

0x144: Pop(0)
0x145: @ RemoveActor(Stack[-1])
0x146: Pop(1)
0x147: Return(); Pop(2)

0x148: Stack[-1] = 0
0x149: PushEmpty(object, object)
0x14a: @ self(Stack[-1])
0x14b: Pop(0)
0x14c: Stack[-3] = Stack[-1]
0x14d: Return(); Pop(2)

0x14e: Stack[-1] = 0
0x14f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x150: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x151: Pop(0)
0x152: Pop(0); Push((bool) Stack[-4] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x154: Push("Locator ")
0x155: Pop(1); Push(Stack[-1] + Stack[-12]);
0x156: Push(" doesn't exist")
0x157: Pop(2); Push(Stack[-2] + Stack[-1]);
0x158: @ Trace(Stack[-1])
0x159: Pop(1)
0x15a: Stack[-1] = 0
0x15b: GOTO 0x15e

0x15c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x15d: Pop(0)
0x15e: Stack[-13] = Stack[-1]
0x15f: Return(); Pop(8)

0x160: Stack[-1] = 0
0x161: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x162: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x163: Pop(0)
0x164: Pop(0); Push((bool) Stack[-4] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x166: Push("Locator ")
0x167: Pop(1); Push(Stack[-1] + Stack[-12]);
0x168: Push(" doesn't exist")
0x169: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16a: @ Trace(Stack[-1])
0x16b: Pop(1)
0x16c: Stack[-1] = 0
0x16d: GOTO 0x170

0x16e: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x16f: Pop(0)
0x170: Stack[-13] = Stack[-1]
0x171: Return(); Pop(8)

0x172: Stack[-1] = 0
0x173: PushEmpty(object, object)
0x174: @ FindActor(Stack[-1], Stack[-4])
0x175: Pop(0)
0x176: Pop(0); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x178: Push("Door ")
0x179: Pop(1); Push(Stack[-1] + Stack[-5]);
0x17a: Push(" not found")
0x17b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17c: @ Trace(Stack[-1])
0x17d: Pop(1)
0x17e: GOTO 0x182

0x17f: Push("locked")
0x180: @@ SetProperty(Stack[-1], Stack[-4])
0x181: Pop(1)
0x182: Return(); Pop(2)

0x183: Stack[-1] = 0
0x184: PushEmpty(object, object)
0x185: @ FindActor(Stack[-1], Stack[-4])
0x186: Pop(0)
0x187: Pop(0); Push((bool) Stack[-1] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x189: Push("Door ")
0x18a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x18b: Push(" not found")
0x18c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18d: @ Trace(Stack[-1])
0x18e: Pop(1)
0x18f: GOTO 0x197

0x190: Push(Stack[-3])
0x191: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x192: @@ Close()
0x193: Pop(0)
0x194: Push("locked")
0x195: @@ SetProperty(Stack[-1], Stack[-4])
0x196: Pop(1)
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(object, object)
0x19a: @ FindActor(Stack[-1], Stack[-3])
0x19b: Pop(0)
0x19c: Pop(0); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19e: Stack[-4] = (bool) 0
0x19f: Return(); Pop(2)

0x1a0: @ RemoveActor(Stack[-1])
0x1a1: Pop(0)
0x1a2: Stack[-4] = (bool) 1
0x1a3: Return(); Pop(2)

0x1a4: Stack[-1] = 0
