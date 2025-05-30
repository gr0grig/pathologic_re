GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cot_alexandr@door1
	vera_kabak
	shouse1_kabak
	pt_b5q01_vera
	pers_nudegirl
	b5q01_vera1.xml
	vera_stvorki
	cleanup
	b5q01_vera2.xml
	vera_retreat
	GetActor
	place_butchers
	pt_b5q01_butcher1
	pers_butcher
	b5q01_butcher.xml
	add
	pt_b5q01_butcher2
	pt_b5q01_butcher3
	pt_b5q01_nudegirl
	b5q01_gwife.xml
	butcher_attack
	size
	get
	Remove
	gwife_dead
	b5q01WifeDead
	player
	b5q01
	cutscene
	cs_burah_danko_microscope
	cutscene_end
	b5q01MicroscopeCS
	fail
	completed
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	.bin
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	reputation
	clear

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	SetVariable (2 args)
	FindActor (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	AddMessage (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_9 Op = 0xd Vars = (int, float)
		EVENT_26 Op = 0x13 Vars = (string)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "cot_alexandr@door1"
0x2: Stack[-1] = (bool) 0
0x3: Call2 0x16a

0x4: Pop(2)
0x5: PushEmpty(object)
0x6: Call2 0x135

0x7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: @ Hold()
0xa: Pop(0)
0xb: GOTO 0x9

0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: PushEmpty(int, float)
0xf: Stack[-1] = Stack[-3]
0x10: Call2 0x1bd

0x11: Pop(2)
0x12: Return(); Pop(0)

0x13: PushEmpty(object, object, float, object, object, int, int, object, object, object, object, int, object, object, float, object, object, int, int, object, object, object, object, int)
0x14: @ Trace(Stack[-25])
0x15: Pop(0)
0x16: Push("vera_kabak")
0x17: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x19: Push("shouse1_kabak")
0x1a: @ GetSceneByName(Stack[-13], Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-4] = Stack[-17]
0x1e: Stack[-3] = "pt_b5q01_vera"
0x1f: Stack[-2] = "pers_nudegirl"
0x20: Stack[-1] = "b5q01_vera1.xml"
0x21: Call2 0x146

0x22: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x23: Pop(5)
0x24: Stack[-12] = 0
0x25: GOTO 0xd9

0x26: Push("vera_stvorki")
0x27: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x29: Push("cleanup")
0x2a: @ Trigger(Stack[-0], Stack[-1])
0x2b: Pop(1)
0x2c: @ GetMainOutdoorScene(Stack[-11])
0x2d: Pop(0)
0x2e: PushEmpty(object, object, string, string, string)
0x2f: Stack[-4] = Stack[-16]
0x30: Stack[-3] = "pt_b5q01_vera"
0x31: Stack[-2] = "pers_nudegirl"
0x32: Stack[-1] = "b5q01_vera2.xml"
0x33: Call2 0x158

0x34: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x35: Pop(5)
0x36: @ GetGameTime(Stack[-10])
0x37: Pop(0)
0x38: Push((int) 1)
0x39: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x3a: Push((int) 0)
0x3b: @ SetTimeEvent(Stack[-1], Stack[-11])
0x3c: Pop(1)
0x3d: Stack[-11] = 0
0x3e: GOTO 0xd9

0x3f: Push("vera_retreat")
0x40: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x42: @@ GetActor(Stack[-9])
0x43: Pop(0)
0x44: Push("retreat")
0x45: @ Trigger(Stack[-10], Stack[-1])
0x46: Pop(1)
0x47: Stack[-9] = 0
0x48: GOTO 0xd9

0x49: Push("place_butchers")
0x4a: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x4c: @ GetMainOutdoorScene(Stack[-8])
0x4d: Pop(0)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-4] = Stack[-13]
0x50: Stack[-3] = "pt_b5q01_butcher1"
0x51: Stack[-2] = "pers_butcher"
0x52: Stack[-1] = "b5q01_butcher.xml"
0x53: Call2 0x158

0x54: Pop(4)
0x55: @@ add(Stack[-1])
0x56: Pop(1)
0x57: PushEmpty(object, object, string, string, string)
0x58: Stack[-4] = Stack[-13]
0x59: Stack[-3] = "pt_b5q01_butcher2"
0x5a: Stack[-2] = "pers_butcher"
0x5b: Stack[-1] = "b5q01_butcher.xml"
0x5c: Call2 0x158

0x5d: Pop(4)
0x5e: @@ add(Stack[-1])
0x5f: Pop(1)
0x60: PushEmpty(object, object, string, string, string)
0x61: Stack[-4] = Stack[-13]
0x62: Stack[-3] = "pt_b5q01_butcher3"
0x63: Stack[-2] = "pers_butcher"
0x64: Stack[-1] = "b5q01_butcher.xml"
0x65: Call2 0x158

0x66: Pop(4)
0x67: @@ add(Stack[-1])
0x68: Pop(1)
0x69: PushEmpty(object, object, string, string, string)
0x6a: Stack[-4] = Stack[-13]
0x6b: Stack[-3] = "pt_b5q01_nudegirl"
0x6c: Stack[-2] = "pers_nudegirl"
0x6d: Stack[-1] = "b5q01_gwife.xml"
0x6e: Call2 0x158

0x6f: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x70: Pop(5)
0x71: Stack[-8] = 0
0x72: GOTO 0xd9

0x73: Push("butcher_attack")
0x74: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x76: @@ size(Stack[-7])
0x77: Pop(0)
0x78: Stack[-6] = (int) 0
0x79: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x7a: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7b: @@ get(Stack[-5], Stack[-6])
0x7c: Pop(0)
0x7d: Push(Stack[-5])
0x7e: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7f: @@ GetActor(Stack[-4])
0x80: Pop(0)
0x81: Push(Stack[-4])
0x82: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x83: Push("attack")
0x84: @ Trigger(Stack[-5], Stack[-1])
0x85: Pop(1)
0x86: Stack[-4] = 0
0x87: Stack[-5] = 0
0x88: Push((int) 1)
0x89: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x8a: GOTO 0x79

0x8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8c: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8d: @@ GetActor(Stack[-3])
0x8e: Pop(0)
0x8f: Push(Stack[-3])
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Push("retreat")
0x92: @ Trigger(Stack[-4], Stack[-1])
0x93: Pop(1)
0x94: @@ Remove()
0x95: Pop(0)
0x96: Stack[-3] = 0
0x97: GOTO 0xd9

0x98: Push("gwife_dead")
0x99: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x9b: Push("b5q01WifeDead")
0x9c: Push((int) 1)
0x9d: @ SetVariable(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: Push("player")
0xa0: @ FindActor(Stack[-3], Stack[-1])
0xa1: Pop(1)
0xa2: Push(Stack[-2])
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: PushEmpty(bool, object, float)
0xa5: Stack[-2] = Stack[-5]
0xa6: Stack[-1] = (float) 0.5
0xa7: Call2 0x17b

0xa8: Pop(3)
0xa9: Stack[-2] = 0
0xaa: GOTO 0xd9

0xab: Push("cleanup")
0xac: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xae: Push("b5q01")
0xaf: @ GetVariable(Stack[-1], Stack[-2])
0xb0: Pop(1)
0xb1: Push((int) 1000)
0xb2: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0xda

0xb6: Pop(0)
0xb7: GOTO 0xbb

0xb8: PushEmpty()
0xb9: Call2 0xea

0xba: Pop(0)
0xbb: GOTO 0xd9

0xbc: Push("cutscene")
0xbd: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, string)
0xc0: Stack[-1] = "cs_burah_danko_microscope"
0xc1: Call2 0x13b

0xc2: Pop(2)
0xc3: GOTO 0xd9

0xc4: Push("cutscene_end")
0xc5: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: Push("b5q01MicroscopeCS")
0xc8: Push((int) 1)
0xc9: @ SetVariable(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: GOTO 0xd9

0xcc: Push("fail")
0xcd: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0xda

0xd1: Pop(0)
0xd2: GOTO 0xd9

0xd3: Push("completed")
0xd4: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0xe2

0xd8: Pop(0)
0xd9: Return(); Pop(24)

0xda: Push("b5q01")
0xdb: Push((int) -1)
0xdc: @ SetVariable(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: PushEmpty()
0xdf: Call2 0xea

0xe0: Pop(0)
0xe1: Return(); Pop(0)

0xe2: Push("b5q01")
0xe3: Push((int) 1000)
0xe4: @ SetVariable(Stack[-2], Stack[-1])
0xe5: Pop(2)
0xe6: PushEmpty()
0xe7: Call2 0xea

0xe8: Pop(0)
0xe9: Return(); Pop(0)

0xea: EventDisable(9)
0xeb: Push( Stack[0 + Tasks[-1].StackPointer] )
0xec: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xed: Push("cleanup")
0xee: @ Trigger(Stack[-0], Stack[-1])
0xef: Pop(1)
0xf0: Push( Stack[1 + Tasks[-1].StackPointer] )
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: @@ Remove()
0xf3: Pop(0)
0xf4: PushEmpty(object)
0xf5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf6: Call2 0x1a8

0xf7: Pop(1)
0xf8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf9: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfa: @@ Remove()
0xfb: Pop(0)
0xfc: PushEmpty(object)
0xfd: Call2 0x124

0xfe: Pop(0)
0xff: @ RemoveActor(Stack[-1])
0x100: Pop(1)
0x101: Return(); Pop(0)

0x102: PushEmpty(bool, bool)
0x103: Push("HasProperty")
0x104: Push((int) 2)
0x105: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x106: Pop(1); Push((bool) Stack[-1] == 0)
0x107: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x108: Stack[-5] = (bool) 0
0x109: Return(); Pop(2)

0x10a: @@ HasProperty(Stack[-3], Stack[-1])
0x10b: Pop(0)
0x10c: Stack[-5] = Stack[-1]
0x10d: Return(); Pop(2)

0x10e: PushEmpty(float, float)
0x10f: PushEmpty(bool, object, string)
0x110: Stack[-2] = Stack[-10]
0x111: Stack[-1] = Stack[-9]
0x112: Call2 0x102

0x113: Pop(2)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-8] = (bool) 0
0x117: Return(); Pop(2)

0x118: @@ GetProperty(Stack[-6], Stack[-1])
0x119: Pop(0)
0x11a: PushEmpty(float, float, float, float)
0x11b: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x11c: Stack[-2] = Stack[-8]
0x11d: Stack[-1] = Stack[-7]
0x11e: Call2 0x12a

0x11f: Pop(3)
0x120: @@ SetProperty(Stack[-7], Stack[-1])
0x121: Pop(1)
0x122: Stack[-8] = (bool) 1
0x123: Return(); Pop(2)

0x124: PushEmpty(object, object)
0x125: @ self(Stack[-1])
0x126: Pop(0)
0x127: Stack[-3] = Stack[-1]
0x128: Return(); Pop(2)

0x129: Stack[-1] = 0
0x12a: PushEmpty()
0x12b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x12c: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12d: Stack[-4] = Stack[-2]
0x12e: Return(); Pop(0)

0x12f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x131: Stack[-4] = Stack[-1]
0x132: Return(); Pop(0)

0x133: Stack[-4] = Stack[-3]
0x134: Return(); Pop(0)

0x135: PushEmpty(object, object)
0x136: @ CreateObjectVector(Stack[-1])
0x137: Pop(0)
0x138: Stack[-3] = Stack[-1]
0x139: Return(); Pop(2)

0x13a: Stack[-1] = 0
0x13b: PushEmpty(object, object, object, object)
0x13c: @ GetMainOutdoorScene(Stack[-2])
0x13d: Pop(0)
0x13e: Push(".bin")
0x13f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x140: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x141: Pop(1)
0x142: Stack[-6] = Stack[-1]
0x143: Return(); Pop(4)

0x144: Stack[-1] = 0
0x145: Stack[-2] = 0
0x146: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x147: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x148: Pop(0)
0x149: Pop(0); Push((bool) Stack[-4] == 0)
0x14a: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14b: Push("Locator ")
0x14c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x14d: Push(" doesn't exist")
0x14e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14f: @ Trace(Stack[-1])
0x150: Pop(1)
0x151: Stack[-1] = 0
0x152: GOTO 0x155

0x153: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x154: Pop(0)
0x155: Stack[-13] = Stack[-1]
0x156: Return(); Pop(8)

0x157: Stack[-1] = 0
0x158: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x159: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x15a: Pop(0)
0x15b: Pop(0); Push((bool) Stack[-4] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15d: Push("Locator ")
0x15e: Pop(1); Push(Stack[-1] + Stack[-12]);
0x15f: Push(" doesn't exist")
0x160: Pop(2); Push(Stack[-2] + Stack[-1]);
0x161: @ Trace(Stack[-1])
0x162: Pop(1)
0x163: Stack[-1] = 0
0x164: GOTO 0x167

0x165: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x166: Pop(0)
0x167: Stack[-13] = Stack[-1]
0x168: Return(); Pop(8)

0x169: Stack[-1] = 0
0x16a: PushEmpty(object, object)
0x16b: @ FindActor(Stack[-1], Stack[-4])
0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[-1] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16f: Push("Door ")
0x170: Pop(1); Push(Stack[-1] + Stack[-5]);
0x171: Push(" not found")
0x172: Pop(2); Push(Stack[-2] + Stack[-1]);
0x173: @ Trace(Stack[-1])
0x174: Pop(1)
0x175: GOTO 0x179

0x176: Push("locked")
0x177: @@ SetProperty(Stack[-1], Stack[-4])
0x178: Pop(1)
0x179: Return(); Pop(2)

0x17a: Stack[-1] = 0
0x17b: PushEmpty()
0x17c: Pop(0); Push((bool) Stack[-2] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17e: Stack[-3] = (bool) 0
0x17f: Return(); Pop(0)

0x180: Push((int) 0)
0x181: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x183: Push((int) 8)
0x184: @ SendWorldWndMessage(Stack[-1])
0x185: Pop(1)
0x186: GOTO 0x190

0x187: Push((int) 0)
0x188: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18a: Push((int) 9)
0x18b: @ SendWorldWndMessage(Stack[-1])
0x18c: Pop(1)
0x18d: GOTO 0x190

0x18e: Stack[-3] = (bool) 0
0x18f: Return(); Pop(0)

0x190: PushEmpty(float)
0x191: Stack[-1] = Stack[-2]
0x192: Call2 0x19e

0x193: Pop(1)
0x194: PushEmpty(bool, object, string, float, float, float)
0x195: Stack[-5] = Stack[-8]
0x196: Stack[-4] = "reputation"
0x197: Stack[-3] = Stack[-7]
0x198: Stack[-2] = (int) 0
0x199: Stack[-1] = (int) 1
0x19a: Call2 0x10e

0x19b: Pop(6)
0x19c: Stack[-3] = (bool) 1
0x19d: Return(); Pop(0)

0x19e: PushEmpty(object, object)
0x19f: @ CreateFloatVector(Stack[-1])
0x1a0: Pop(0)
0x1a1: @@ add(Stack[-3])
0x1a2: Pop(0)
0x1a3: Push((int) 16)
0x1a4: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1a5: Pop(1)
0x1a6: Return(); Pop(2)

0x1a7: Stack[-1] = 0
0x1a8: PushEmpty(int, int, object, int, int, object)
0x1a9: Push(Stack[-7])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ab: @@ size(Stack[-3])
0x1ac: Pop(0)
0x1ad: Stack[-2] = (int) 0
0x1ae: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1af: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b0: @@ get(Stack[-1], Stack[-2])
0x1b1: Pop(0)
0x1b2: Push(Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b4: @@ Remove()
0x1b5: Pop(0)
0x1b6: Stack[-1] = 0
0x1b7: Push((int) 1)
0x1b8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1b9: GOTO 0x1ae

0x1ba: @@ clear()
0x1bb: Pop(0)
0x1bc: Return(); Pop(6)

0x1bd: PushEmpty()
0x1be: PushEmpty(int, int, int, float)
0x1bf: Stack[-3] = (int) 530811
0x1c0: Stack[-2] = (int) 530810
0x1c1: Stack[-1] = Stack[-5]
0x1c2: Call2 0x1c6

0x1c3: Stack[-6] = Stack[-4]
0x1c4: Pop(4)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(int, int)
0x1c7: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x1c8: Pop(0)
0x1c9: Push((int) 6)
0x1ca: @ SendWorldWndMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: Stack[-6] = Stack[-1]
0x1cd: Return(); Pop(2)

