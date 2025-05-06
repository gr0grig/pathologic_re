GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	storojka@door1
	burah_home@door1
	cot_katerina@door1
	cot_alexandr@door1
	pt_k1q01_birdmask
	pers_birdmask
	k1q01_birdmask.xml
	pt_k1q01_whitemask
	pers_whitemask
	k1q01_whitemask.xml
	pt_k1q01_grabitel1
	pers_grabitel
	k1q01_grabitel.xml
	pt_k1q01_grabitel2
	storojka
	pt_k1q01_katerina
	NPC_Katerina
	k1q01_katerina.xml
	remove_whitemask
	Remove
	remove_birdmask
	remove_katerina
	cleanup
	init_alexandr
	cot_anna@door1
	pt_k1q01_doberman
	pers_karlik
	k1q01_doberman.xml
	pt_k1q01_dohodyaga
	pers_dohodyaga
	k1q01_dohodyaga.xml
	cot_anna
	pt_k1q01_danko
	NPC_Bakalavr
	k1q01_danko.xml
	pt_k1q01_wastedmale1
	pers_wasted_male
	k1q01_statist.xml
	pt_k1q01_wastedmale2
	pt_k1q01_woman
	pers_woman
	pt_k1q01_agony
	pers_worker
	k1q01_agony.xml
	doberman_dead
	k1q01DobermanDead
	cure_worker
	quest_k1_01_cutscene
	cutscene_end
	pt_k1q01_worker
	k1q01_worker.xml
	k1q01Healed
	k1q01
	fail
	completed
	player
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
	add
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Hold (0 args)
	Trace (1 args)
	Trigger (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	self (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x47 Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "storojka@door1"
0x3: Stack[-1] = (bool) 0
0x4: Call2 0x1e2

0x5: Pop(2)
0x6: PushEmpty(string, bool)
0x7: Stack[-2] = "burah_home@door1"
0x8: Stack[-1] = (bool) 0
0x9: Call2 0x1e2

0xa: Pop(2)
0xb: PushEmpty(string, bool)
0xc: Stack[-2] = "cot_katerina@door1"
0xd: Stack[-1] = (bool) 1
0xe: Call2 0x1e2

0xf: Pop(2)
0x10: PushEmpty(string, bool)
0x11: Stack[-2] = "cot_alexandr@door1"
0x12: Stack[-1] = (bool) 1
0x13: Call2 0x1e2

0x14: Pop(2)
0x15: @ GetMainOutdoorScene(Stack[-1])
0x16: Pop(0)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-4] = Stack[-6]
0x19: Stack[-3] = "pt_k1q01_birdmask"
0x1a: Stack[-2] = "pers_birdmask"
0x1b: Stack[-1] = "k1q01_birdmask.xml"
0x1c: Call2 0x1cf

0x1d: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1e: Pop(5)
0x1f: PushEmpty(object, object, string, string, string)
0x20: Stack[-4] = Stack[-6]
0x21: Stack[-3] = "pt_k1q01_whitemask"
0x22: Stack[-2] = "pers_whitemask"
0x23: Stack[-1] = "k1q01_whitemask.xml"
0x24: Call2 0x1cf

0x25: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x26: Pop(5)
0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-6]
0x29: Stack[-3] = "pt_k1q01_grabitel1"
0x2a: Stack[-2] = "pers_grabitel"
0x2b: Stack[-1] = "k1q01_grabitel.xml"
0x2c: Call2 0x1bd

0x2d: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x2e: Pop(5)
0x2f: PushEmpty(object, object, string, string, string)
0x30: Stack[-4] = Stack[-6]
0x31: Stack[-3] = "pt_k1q01_grabitel2"
0x32: Stack[-2] = "pers_grabitel"
0x33: Stack[-1] = "k1q01_grabitel.xml"
0x34: Call2 0x1bd

0x35: Stack[12 + Tasks[-1].StackPointer] = Stack[-5]
0x36: Pop(5)
0x37: Push("storojka")
0x38: @ GetSceneByName(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(object, object, string, string, string)
0x3b: Stack[-4] = Stack[-6]
0x3c: Stack[-3] = "pt_k1q01_katerina"
0x3d: Stack[-2] = "NPC_Katerina"
0x3e: Stack[-1] = "k1q01_katerina.xml"
0x3f: Call2 0x1ab

0x40: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x41: Pop(5)
0x42: @ Hold()
0x43: Pop(0)
0x44: GOTO 0x42

0x45: Return(); Pop(2)

0x46: Stack[-1] = 0
0x47: PushEmpty(object, object, int, object, object, int)
0x48: @ Trace(Stack[-7])
0x49: Pop(0)
0x4a: Push("remove_whitemask")
0x4b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x4e: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4f: @@ Remove()
0x50: Pop(0)
0x51: GOTO 0x113

0x52: Push("remove_birdmask")
0x53: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: @@ Remove()
0x58: Pop(0)
0x59: GOTO 0x113

0x5a: Push("remove_katerina")
0x5b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5e: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5f: Push("cleanup")
0x60: @ Trigger(Stack[-2], Stack[-1])
0x61: Pop(1)
0x62: PushEmpty(string, bool)
0x63: Stack[-2] = "cot_katerina@door1"
0x64: Stack[-1] = (bool) 0
0x65: Call2 0x1e2

0x66: Pop(2)
0x67: PushEmpty(string, bool)
0x68: Stack[-2] = "cot_alexandr@door1"
0x69: Stack[-1] = (bool) 0
0x6a: Call2 0x1e2

0x6b: Pop(2)
0x6c: GOTO 0x113

0x6d: Push("init_alexandr")
0x6e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0x70: PushEmpty(string, bool)
0x71: Stack[-2] = "cot_anna@door1"
0x72: Stack[-1] = (bool) 0
0x73: Call2 0x1e2

0x74: Pop(2)
0x75: @ GetMainOutdoorScene(Stack[-3])
0x76: Pop(0)
0x77: PushEmpty(object, object, string, string, string)
0x78: Stack[-4] = Stack[-8]
0x79: Stack[-3] = "pt_k1q01_doberman"
0x7a: Stack[-2] = "pers_karlik"
0x7b: Stack[-1] = "k1q01_doberman.xml"
0x7c: Call2 0x1bd

0x7d: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x7e: Pop(5)
0x7f: PushEmpty(object, object, string, string, string)
0x80: Stack[-4] = Stack[-8]
0x81: Stack[-3] = "pt_k1q01_dohodyaga"
0x82: Stack[-2] = "pers_dohodyaga"
0x83: Stack[-1] = "k1q01_dohodyaga.xml"
0x84: Call2 0x1bd

0x85: Stack[8 + Tasks[-1].StackPointer] = Stack[-5]
0x86: Pop(5)
0x87: Push("cot_anna")
0x88: @ GetSceneByName(Stack[-4], Stack[-1])
0x89: Pop(1)
0x8a: PushEmpty(object, object, string, string, string)
0x8b: Stack[-4] = Stack[-8]
0x8c: Stack[-3] = "pt_k1q01_danko"
0x8d: Stack[-2] = "NPC_Bakalavr"
0x8e: Stack[-1] = "k1q01_danko.xml"
0x8f: Call2 0x1ab

0x90: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x91: Pop(5)
0x92: PushEmpty(object, object, string, string, string)
0x93: Stack[-4] = Stack[-8]
0x94: Stack[-3] = "pt_k1q01_wastedmale1"
0x95: Stack[-2] = "pers_wasted_male"
0x96: Stack[-1] = "k1q01_statist.xml"
0x97: Call2 0x1ab

0x98: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x99: Pop(5)
0x9a: PushEmpty(object, object, string, string, string)
0x9b: Stack[-4] = Stack[-8]
0x9c: Stack[-3] = "pt_k1q01_wastedmale2"
0x9d: Stack[-2] = "pers_wasted_male"
0x9e: Stack[-1] = "k1q01_statist.xml"
0x9f: Call2 0x1ab

0xa0: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xa1: Pop(5)
0xa2: PushEmpty(object, object, string, string, string)
0xa3: Stack[-4] = Stack[-8]
0xa4: Stack[-3] = "pt_k1q01_woman"
0xa5: Stack[-2] = "pers_woman"
0xa6: Stack[-1] = "k1q01_statist.xml"
0xa7: Call2 0x1ab

0xa8: Stack[9 + Tasks[-1].StackPointer] = Stack[-5]
0xa9: Pop(5)
0xaa: PushEmpty(object, object, string, string, string)
0xab: Stack[-4] = Stack[-8]
0xac: Stack[-3] = "pt_k1q01_agony"
0xad: Stack[-2] = "pers_worker"
0xae: Stack[-1] = "k1q01_agony.xml"
0xaf: Call2 0x1ab

0xb0: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0xb1: Pop(5)
0xb2: Stack[-3] = 0
0xb3: GOTO 0x113

0xb4: Push("doberman_dead")
0xb5: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xb7: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: @@ Remove()
0xba: Pop(0)
0xbb: Push("k1q01DobermanDead")
0xbc: Push((int) 1)
0xbd: @ SetVariable(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: PushEmpty()
0xc0: Call2 0x220

0xc1: Pop(0)
0xc2: GOTO 0x113

0xc3: Push("cure_worker")
0xc4: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc6: @ RemoveActor(Stack[-7])
0xc7: Pop(0)
0xc8: Stack[7 + Tasks[-1].StackPointer] = 0
0xc9: PushEmpty(object, string)
0xca: Stack[-1] = "quest_k1_01_cutscene"
0xcb: Call2 0x1a0

0xcc: Pop(2)
0xcd: GOTO 0x113

0xce: Push("cutscene_end")
0xcf: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xd1: Push("cot_anna")
0xd2: @ GetSceneByName(Stack[-3], Stack[-1])
0xd3: Pop(1)
0xd4: PushEmpty(object, object, string, string, string)
0xd5: Stack[-4] = Stack[-7]
0xd6: Stack[-3] = "pt_k1q01_worker"
0xd7: Stack[-2] = "pers_worker"
0xd8: Stack[-1] = "k1q01_worker.xml"
0xd9: Call2 0x1ab

0xda: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0xdb: Pop(5)
0xdc: Push("k1q01Healed")
0xdd: Push((int) 1)
0xde: @ SetVariable(Stack[-2], Stack[-1])
0xdf: Pop(2)
0xe0: PushEmpty()
0xe1: Call2 0x22d

0xe2: Pop(0)
0xe3: PushEmpty(bool, object, float)
0xe4: PushEmpty(object)
0xe5: Call2 0x166

0xe6: Stack[-3] = Stack[-1]
0xe7: Pop(1)
0xe8: Stack[-1] = (float) 0.25
0xe9: Call2 0x1f3

0xea: Pop(3)
0xeb: Push( Stack[4 + Tasks[-1].StackPointer] )
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: @@ Remove()
0xee: Pop(0)
0xef: Push( Stack[8 + Tasks[-1].StackPointer] )
0xf0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf1: @@ Remove()
0xf2: Pop(0)
0xf3: Stack[-2] = 0
0xf4: GOTO 0x113

0xf5: Push("cleanup")
0xf6: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf8: Push("k1q01")
0xf9: @ GetVariable(Stack[-1], Stack[-2])
0xfa: Pop(1)
0xfb: Push((int) 1000)
0xfc: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfe: PushEmpty()
0xff: Call2 0x114

0x100: Pop(0)
0x101: GOTO 0x105

0x102: PushEmpty()
0x103: Call2 0x124

0x104: Pop(0)
0x105: GOTO 0x113

0x106: Push("fail")
0x107: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x109: PushEmpty()
0x10a: Call2 0x114

0x10b: Pop(0)
0x10c: GOTO 0x113

0x10d: Push("completed")
0x10e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: PushEmpty()
0x111: Call2 0x11c

0x112: Pop(0)
0x113: Return(); Pop(6)

0x114: Push("k1q01")
0x115: Push((int) -1)
0x116: @ SetVariable(Stack[-2], Stack[-1])
0x117: Pop(2)
0x118: PushEmpty()
0x119: Call2 0x124

0x11a: Pop(0)
0x11b: Return(); Pop(0)

0x11c: Push("k1q01")
0x11d: Push((int) 1000)
0x11e: @ SetVariable(Stack[-2], Stack[-1])
0x11f: Pop(2)
0x120: PushEmpty()
0x121: Call2 0x124

0x122: Pop(0)
0x123: Return(); Pop(0)

0x124: EventDisable(26)
0x125: Push( Stack[1 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x127: @@ Remove()
0x128: Pop(0)
0x129: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: @@ Remove()
0x12c: Pop(0)
0x12d: Push( Stack[11 + Tasks[-1].StackPointer] )
0x12e: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12f: @@ Remove()
0x130: Pop(0)
0x131: Push( Stack[12 + Tasks[-1].StackPointer] )
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: @@ Remove()
0x134: Pop(0)
0x135: Push( Stack[4 + Tasks[-1].StackPointer] )
0x136: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x137: @@ Remove()
0x138: Pop(0)
0x139: Push( Stack[8 + Tasks[-1].StackPointer] )
0x13a: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13b: @@ Remove()
0x13c: Pop(0)
0x13d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: Push("cleanup")
0x140: @ Trigger(Stack[-2], Stack[-1])
0x141: Pop(1)
0x142: Push( Stack[3 + Tasks[-1].StackPointer] )
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: Push("cleanup")
0x145: @ Trigger(Stack[-3], Stack[-1])
0x146: Pop(1)
0x147: Push( Stack[5 + Tasks[-1].StackPointer] )
0x148: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x149: Push("cleanup")
0x14a: @ Trigger(Stack[-5], Stack[-1])
0x14b: Pop(1)
0x14c: Push( Stack[6 + Tasks[-1].StackPointer] )
0x14d: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14e: Push("cleanup")
0x14f: @ Trigger(Stack[-6], Stack[-1])
0x150: Pop(1)
0x151: Push( Stack[9 + Tasks[-1].StackPointer] )
0x152: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x153: Push("cleanup")
0x154: @ Trigger(Stack[-9], Stack[-1])
0x155: Pop(1)
0x156: Push( Stack[10 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x158: Push("cleanup")
0x159: @ Trigger(Stack[-10], Stack[-1])
0x15a: Pop(1)
0x15b: PushEmpty(string, bool)
0x15c: Stack[-2] = "cot_katerina@door1"
0x15d: Stack[-1] = (bool) 0
0x15e: Call2 0x1e2

0x15f: Pop(2)
0x160: PushEmpty(object)
0x161: Call2 0x18f

0x162: Pop(0)
0x163: @ RemoveActor(Stack[-1])
0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty(object, object)
0x167: Push("player")
0x168: @ FindActor(Stack[-2], Stack[-1])
0x169: Pop(1)
0x16a: Stack[-3] = Stack[-1]
0x16b: Return(); Pop(2)

0x16c: Stack[-1] = 0
0x16d: PushEmpty(bool, bool)
0x16e: Push("HasProperty")
0x16f: Push((int) 2)
0x170: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x173: Stack[-5] = (bool) 0
0x174: Return(); Pop(2)

0x175: @@ HasProperty(Stack[-3], Stack[-1])
0x176: Pop(0)
0x177: Stack[-5] = Stack[-1]
0x178: Return(); Pop(2)

0x179: PushEmpty(float, float)
0x17a: PushEmpty(bool, object, string)
0x17b: Stack[-2] = Stack[-10]
0x17c: Stack[-1] = Stack[-9]
0x17d: Call2 0x16d

0x17e: Pop(2)
0x17f: Pop(1); Push((bool) Stack[-1] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: Stack[-8] = (bool) 0
0x182: Return(); Pop(2)

0x183: @@ GetProperty(Stack[-6], Stack[-1])
0x184: Pop(0)
0x185: PushEmpty(float, float, float, float)
0x186: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x187: Stack[-2] = Stack[-8]
0x188: Stack[-1] = Stack[-7]
0x189: Call2 0x195

0x18a: Pop(3)
0x18b: @@ SetProperty(Stack[-7], Stack[-1])
0x18c: Pop(1)
0x18d: Stack[-8] = (bool) 1
0x18e: Return(); Pop(2)

0x18f: PushEmpty(object, object)
0x190: @ self(Stack[-1])
0x191: Pop(0)
0x192: Stack[-3] = Stack[-1]
0x193: Return(); Pop(2)

0x194: Stack[-1] = 0
0x195: PushEmpty()
0x196: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x197: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x198: Stack[-4] = Stack[-2]
0x199: Return(); Pop(0)

0x19a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19c: Stack[-4] = Stack[-1]
0x19d: Return(); Pop(0)

0x19e: Stack[-4] = Stack[-3]
0x19f: Return(); Pop(0)

0x1a0: PushEmpty(object, object, object, object)
0x1a1: @ GetMainOutdoorScene(Stack[-2])
0x1a2: Pop(0)
0x1a3: Push(".bin")
0x1a4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1a5: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1a6: Pop(1)
0x1a7: Stack[-6] = Stack[-1]
0x1a8: Return(); Pop(4)

0x1a9: Stack[-1] = 0
0x1aa: Stack[-2] = 0
0x1ab: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1ac: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1ad: Pop(0)
0x1ae: Pop(0); Push((bool) Stack[-4] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b0: Push("Locator ")
0x1b1: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1b2: Push(" doesn't exist")
0x1b3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b4: @ Trace(Stack[-1])
0x1b5: Pop(1)
0x1b6: Stack[-1] = 0
0x1b7: GOTO 0x1ba

0x1b8: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1b9: Pop(0)
0x1ba: Stack[-13] = Stack[-1]
0x1bb: Return(); Pop(8)

0x1bc: Stack[-1] = 0
0x1bd: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1be: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1bf: Pop(0)
0x1c0: Pop(0); Push((bool) Stack[-4] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c2: Push("Locator ")
0x1c3: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1c4: Push(" doesn't exist")
0x1c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c6: @ Trace(Stack[-1])
0x1c7: Pop(1)
0x1c8: Stack[-1] = 0
0x1c9: GOTO 0x1cc

0x1ca: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x1cb: Pop(0)
0x1cc: Stack[-13] = Stack[-1]
0x1cd: Return(); Pop(8)

0x1ce: Stack[-1] = 0
0x1cf: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1d0: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1d1: Pop(0)
0x1d2: Pop(0); Push((bool) Stack[-4] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d4: Push("Locator ")
0x1d5: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1d6: Push(" doesn't exist")
0x1d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d8: @ Trace(Stack[-1])
0x1d9: Pop(1)
0x1da: Stack[-1] = 0
0x1db: GOTO 0x1df

0x1dc: Push((bool) 1)
0x1dd: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1])
0x1de: Pop(1)
0x1df: Stack[-13] = Stack[-1]
0x1e0: Return(); Pop(8)

0x1e1: Stack[-1] = 0
0x1e2: PushEmpty(object, object)
0x1e3: @ FindActor(Stack[-1], Stack[-4])
0x1e4: Pop(0)
0x1e5: Pop(0); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: Push("Door ")
0x1e8: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1e9: Push(" not found")
0x1ea: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1eb: @ Trace(Stack[-1])
0x1ec: Pop(1)
0x1ed: GOTO 0x1f1

0x1ee: Push("locked")
0x1ef: @@ SetProperty(Stack[-1], Stack[-4])
0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: Stack[-1] = 0
0x1f3: PushEmpty()
0x1f4: Pop(0); Push((bool) Stack[-2] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[-3] = (bool) 0
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fb: Push((int) 8)
0x1fc: @ SendWorldWndMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: GOTO 0x208

0x1ff: Push((int) 0)
0x200: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x202: Push((int) 9)
0x203: @ SendWorldWndMessage(Stack[-1])
0x204: Pop(1)
0x205: GOTO 0x208

0x206: Stack[-3] = (bool) 0
0x207: Return(); Pop(0)

0x208: PushEmpty(float)
0x209: Stack[-1] = Stack[-2]
0x20a: Call2 0x216

0x20b: Pop(1)
0x20c: PushEmpty(bool, object, string, float, float, float)
0x20d: Stack[-5] = Stack[-8]
0x20e: Stack[-4] = "reputation"
0x20f: Stack[-3] = Stack[-7]
0x210: Stack[-2] = (int) 0
0x211: Stack[-1] = (int) 1
0x212: Call2 0x179

0x213: Pop(6)
0x214: Stack[-3] = (bool) 1
0x215: Return(); Pop(0)

0x216: PushEmpty(object, object)
0x217: @ CreateFloatVector(Stack[-1])
0x218: Pop(0)
0x219: @@ add(Stack[-3])
0x21a: Pop(0)
0x21b: Push((int) 16)
0x21c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x21d: Pop(1)
0x21e: Return(); Pop(2)

0x21f: Stack[-1] = 0
0x220: PushEmpty(object, object)
0x221: Push((int) 325)
0x222: Push((int) 1)
0x223: Push((int) 524741)
0x224: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: PushEmpty(bool, object, int)
0x227: Stack[-2] = Stack[-4]
0x228: Stack[-1] = (int) 318
0x229: Call2 0x247

0x22a: Pop(3)
0x22b: Return(); Pop(2)

0x22c: Stack[-1] = 0
0x22d: PushEmpty(object, object)
0x22e: Push((int) 323)
0x22f: Push((int) 1)
0x230: Push((int) 524739)
0x231: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: PushEmpty(bool, object, int)
0x234: Stack[-2] = Stack[-4]
0x235: Stack[-1] = (int) 318
0x236: Call2 0x247

0x237: Pop(3)
0x238: Return(); Pop(2)

0x239: Stack[-1] = 0
0x23a: PushEmpty(object, object)
0x23b: @ GetDiaryRoot(Stack[-1])
0x23c: Pop(0)
0x23d: Pop(0); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: Push("Can't retrieve diary root")
0x240: @ Trace(Stack[-1])
0x241: Pop(1)
0x242: Stack[-3] = (bool) 0
0x243: Return(); Pop(2)

0x244: Stack[-3] = Stack[-1]
0x245: Return(); Pop(2)

0x246: Stack[-1] = 0
0x247: PushEmpty(object, object, int, object, object, int)
0x248: PushEmpty(object)
0x249: Call2 0x23a

0x24a: Stack[-4] = Stack[-1]
0x24b: Pop(1)
0x24c: @@ Find(Stack[-7], Stack[-2])
0x24d: Pop(0)
0x24e: Pop(0); Push((bool) Stack[-2] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x250: Push("Can't find diary parent with id: ")
0x251: Pop(1); Push(Stack[-1] + Stack[-8]);
0x252: @ Trace(Stack[-1])
0x253: Pop(1)
0x254: Stack[-9] = (bool) 0
0x255: Return(); Pop(6)

0x256: @@ AddChild(Stack[-8])
0x257: Pop(0)
0x258: Push((int) 7)
0x259: @ SendWorldWndMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ GetCategory(Stack[-1])
0x25c: Pop(0)
0x25d: @ SetDiarySection(Stack[-1])
0x25e: Pop(0)
0x25f: Stack[-9] = (bool) 0
0x260: Return(); Pop(6)

0x261: Stack[-2] = 0
0x262: Stack[-3] = 0
