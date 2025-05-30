GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	sobor
	noaglaja
	cot_kapella
	b9q03BadInit
	pt_b9q03_aglaja
	NPC_Aglaja
	b9q03_aglaja.xml
	init_house_spi4ka
	nospi4ka
	pt_b9q03_doberman1
	pers_doberman
	b9q03_doberman.xml
	add
	pt_b9q03_doberman2
	cleanup
	doberman_attack
	doberman_dead
	size
	ihouse_spi4ka@door1
	ihouse_spi4ka@door2
	door_open
	place_follower
	pt_b9q03_follower
	pers_boy
	b9q03_follower.xml
	init_bonefires
	pt_b9q03_b1_doberman1
	pers_karlik
	b9q03_e_doberman.xml
	pt_b9q03_b1_morlok1
	pers_morlok
	b9q03_e_morlok.xml
	pt_b9q03_b1_morlok2
	pt_b9q03_b2_doberman1
	pt_b9q03_b2_grabitel1
	pers_grabitel
	b9q03_e_grabitel.xml
	pt_b9q03_b2_grabitel2
	pt_b9q03_b3_doberman1
	pt_b9q03_b3_wastedmale1
	pers_wasted_male
	b9q03_e_wasted_male.xml
	pt_b9q03_b3_hunter1
	pers_hunter
	b9q03_e_hunter.xml
	pt_b9q03_b4_doberman1
	pt_b9q03_b4_doberman2
	pt_b9q03_b4_doberman3
	bonfire_burn
	b9q03BonefiresCount
	pt_b9q03_girl
	pers_girl
	b9q03_girl.xml
	pt_b9q03_spi4ka
	NPC_Spi4ka
	b9q03_spi4ka.xml
	fail
	completed
	b9q03
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	get
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	GetActiveScene (1 args)
	SetVariable (2 args)
	Trace (1 args)
	PlaySound (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, int, bool, bool) Params = 0
		EVENT_26 Op = 0x2c Vars = (string)
		EVENT_9 Op = 0x1cb Vars = (int, float)


0x0: PushEmpty(object, object, object, object)
0x1: Stack[7 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[8 + Tasks[-1].StackPointer] = (bool)0
0x3: PushEmpty(object)
0x4: Call2 0x1d6

0x5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6: Pop(1)
0x7: PushEmpty(object)
0x8: Call2 0x1d6

0x9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa: Pop(1)
0xb: Push("sobor")
0xc: @ GetSceneByName(Stack[-3], Stack[-1])
0xd: Pop(1)
0xe: Push("noaglaja")
0xf: @ Trigger(Stack[-3], Stack[-1])
0x10: Pop(1)
0x11: Push("cot_kapella")
0x12: @ GetSceneByName(Stack[-3], Stack[-1])
0x13: Pop(1)
0x14: @ GetActiveScene(Stack[-1])
0x15: Pop(0)
0x16: Pop(0); Push((bool) Stack[-1] == Stack[-2])
0x17: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x18: Push("b9q03BadInit")
0x19: Push((int) 1)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: GOTO 0x25

0x1d: PushEmpty(object, object, string, string, string)
0x1e: Stack[-4] = Stack[-7]
0x1f: Stack[-3] = "pt_b9q03_aglaja"
0x20: Stack[-2] = "NPC_Aglaja"
0x21: Stack[-1] = "b9q03_aglaja.xml"
0x22: Call2 0x1dc

0x23: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x24: Pop(5)
0x25: PushEmpty(int)
0x26: Stack[-1] = (int) 9
0x27: Call2 0x1b8

0x28: Pop(1)
0x29: Return(); Pop(4)

0x2a: Stack[-1] = 0
0x2b: Stack[-2] = 0
0x2c: PushEmpty(object, int, object, object, int, object, object, int, object, object, int, object)
0x2d: @ Trace(Stack[-13])
0x2e: Pop(0)
0x2f: Push("init_house_spi4ka")
0x30: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x32: Push("house_spi4ka")
0x33: @ GetSceneByName(Stack[-7], Stack[-1])
0x34: Pop(1)
0x35: Push("nospi4ka")
0x36: @ Trigger(Stack[-7], Stack[-1])
0x37: Pop(1)
0x38: PushEmpty(object, object, string, string, string)
0x39: Stack[-4] = Stack[-11]
0x3a: Stack[-3] = "pt_b9q03_doberman1"
0x3b: Stack[-2] = "pers_doberman"
0x3c: Stack[-1] = "b9q03_doberman.xml"
0x3d: Call2 0x1dc

0x3e: Pop(4)
0x3f: @@ add(Stack[-1])
0x40: Pop(1)
0x41: PushEmpty(object, object, string, string, string)
0x42: Stack[-4] = Stack[-11]
0x43: Stack[-3] = "pt_b9q03_doberman2"
0x44: Stack[-2] = "pers_doberman"
0x45: Stack[-1] = "b9q03_doberman.xml"
0x46: Call2 0x1dc

0x47: Pop(4)
0x48: @@ add(Stack[-1])
0x49: Pop(1)
0x4a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: Push("cleanup")
0x4d: @ Trigger(Stack[-0], Stack[-1])
0x4e: Pop(1)
0x4f: Push("sobor")
0x50: @ GetSceneByName(Stack[-7], Stack[-1])
0x51: Pop(1)
0x52: Push("aglaja")
0x53: @ Trigger(Stack[-7], Stack[-1])
0x54: Pop(1)
0x55: Stack[-6] = 0
0x56: GOTO 0x155

0x57: Push("doberman_attack")
0x58: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: GOTO 0x155

0x5b: Push("doberman_dead")
0x5c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x5e: Push((int) 1)
0x5f: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x60: @@ size(Stack[-5])
0x61: Pop(0)
0x62: Pop(0); Push((bool) Stack[-5] == Stack[6 + Tasks[-1].StackPointer])
0x63: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x64: PushEmpty(string, bool)
0x65: Stack[-2] = "ihouse_spi4ka@door1"
0x66: Stack[-1] = (bool) 0
0x67: Call2 0x1ee

0x68: Pop(2)
0x69: PushEmpty(string, bool)
0x6a: Stack[-2] = "ihouse_spi4ka@door2"
0x6b: Stack[-1] = (bool) 0
0x6c: Call2 0x1ee

0x6d: Pop(2)
0x6e: Push("door_open")
0x6f: @ PlaySound(Stack[-1])
0x70: Pop(1)
0x71: GOTO 0x155

0x72: Push("place_follower")
0x73: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x75: Push( Stack[7 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: Return(); Pop(12)

0x78: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x79: @ GetMainOutdoorScene(Stack[-4])
0x7a: Pop(0)
0x7b: PushEmpty(object, object, string, string, string)
0x7c: Stack[-4] = Stack[-9]
0x7d: Stack[-3] = "pt_b9q03_follower"
0x7e: Stack[-2] = "pers_boy"
0x7f: Stack[-1] = "b9q03_follower.xml"
0x80: Call2 0x1dc

0x81: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x82: Pop(5)
0x83: Stack[-4] = 0
0x84: GOTO 0x155

0x85: Push("init_bonefires")
0x86: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0x88: Push( Stack[8 + Tasks[-1].StackPointer] )
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(12)

0x8b: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x8c: @ GetMainOutdoorScene(Stack[-3])
0x8d: Pop(0)
0x8e: PushEmpty(object, object, string, string, string)
0x8f: Stack[-4] = Stack[-8]
0x90: Stack[-3] = "pt_b9q03_b1_doberman1"
0x91: Stack[-2] = "pers_karlik"
0x92: Stack[-1] = "b9q03_e_doberman.xml"
0x93: Call2 0x1dc

0x94: Pop(4)
0x95: @@ add(Stack[-1])
0x96: Pop(1)
0x97: PushEmpty(object, object, string, string, string)
0x98: Stack[-4] = Stack[-8]
0x99: Stack[-3] = "pt_b9q03_b1_morlok1"
0x9a: Stack[-2] = "pers_morlok"
0x9b: Stack[-1] = "b9q03_e_morlok.xml"
0x9c: Call2 0x1dc

0x9d: Pop(4)
0x9e: @@ add(Stack[-1])
0x9f: Pop(1)
0xa0: PushEmpty(object, object, string, string, string)
0xa1: Stack[-4] = Stack[-8]
0xa2: Stack[-3] = "pt_b9q03_b1_morlok2"
0xa3: Stack[-2] = "pers_morlok"
0xa4: Stack[-1] = "b9q03_e_morlok.xml"
0xa5: Call2 0x1dc

0xa6: Pop(4)
0xa7: @@ add(Stack[-1])
0xa8: Pop(1)
0xa9: PushEmpty(object, object, string, string, string)
0xaa: Stack[-4] = Stack[-8]
0xab: Stack[-3] = "pt_b9q03_b2_doberman1"
0xac: Stack[-2] = "pers_karlik"
0xad: Stack[-1] = "b9q03_e_doberman.xml"
0xae: Call2 0x1dc

0xaf: Pop(4)
0xb0: @@ add(Stack[-1])
0xb1: Pop(1)
0xb2: PushEmpty(object, object, string, string, string)
0xb3: Stack[-4] = Stack[-8]
0xb4: Stack[-3] = "pt_b9q03_b2_grabitel1"
0xb5: Stack[-2] = "pers_grabitel"
0xb6: Stack[-1] = "b9q03_e_grabitel.xml"
0xb7: Call2 0x1dc

0xb8: Pop(4)
0xb9: @@ add(Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(object, object, string, string, string)
0xbc: Stack[-4] = Stack[-8]
0xbd: Stack[-3] = "pt_b9q03_b2_grabitel2"
0xbe: Stack[-2] = "pers_grabitel"
0xbf: Stack[-1] = "b9q03_e_grabitel.xml"
0xc0: Call2 0x1dc

0xc1: Pop(4)
0xc2: @@ add(Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(object, object, string, string, string)
0xc5: Stack[-4] = Stack[-8]
0xc6: Stack[-3] = "pt_b9q03_b3_doberman1"
0xc7: Stack[-2] = "pers_karlik"
0xc8: Stack[-1] = "b9q03_e_doberman.xml"
0xc9: Call2 0x1dc

0xca: Pop(4)
0xcb: @@ add(Stack[-1])
0xcc: Pop(1)
0xcd: PushEmpty(object, object, string, string, string)
0xce: Stack[-4] = Stack[-8]
0xcf: Stack[-3] = "pt_b9q03_b3_wastedmale1"
0xd0: Stack[-2] = "pers_wasted_male"
0xd1: Stack[-1] = "b9q03_e_wasted_male.xml"
0xd2: Call2 0x1dc

0xd3: Pop(4)
0xd4: @@ add(Stack[-1])
0xd5: Pop(1)
0xd6: PushEmpty(object, object, string, string, string)
0xd7: Stack[-4] = Stack[-8]
0xd8: Stack[-3] = "pt_b9q03_b3_hunter1"
0xd9: Stack[-2] = "pers_hunter"
0xda: Stack[-1] = "b9q03_e_hunter.xml"
0xdb: Call2 0x1dc

0xdc: Pop(4)
0xdd: @@ add(Stack[-1])
0xde: Pop(1)
0xdf: PushEmpty(object, object, string, string, string)
0xe0: Stack[-4] = Stack[-8]
0xe1: Stack[-3] = "pt_b9q03_b4_doberman1"
0xe2: Stack[-2] = "pers_karlik"
0xe3: Stack[-1] = "b9q03_e_doberman.xml"
0xe4: Call2 0x1dc

0xe5: Pop(4)
0xe6: @@ add(Stack[-1])
0xe7: Pop(1)
0xe8: PushEmpty(object, object, string, string, string)
0xe9: Stack[-4] = Stack[-8]
0xea: Stack[-3] = "pt_b9q03_b4_doberman2"
0xeb: Stack[-2] = "pers_karlik"
0xec: Stack[-1] = "b9q03_e_doberman.xml"
0xed: Call2 0x1dc

0xee: Pop(4)
0xef: @@ add(Stack[-1])
0xf0: Pop(1)
0xf1: PushEmpty(object, object, string, string, string)
0xf2: Stack[-4] = Stack[-8]
0xf3: Stack[-3] = "pt_b9q03_b4_doberman3"
0xf4: Stack[-2] = "pers_karlik"
0xf5: Stack[-1] = "b9q03_e_doberman.xml"
0xf6: Call2 0x1dc

0xf7: Pop(4)
0xf8: @@ add(Stack[-1])
0xf9: Pop(1)
0xfa: Stack[-3] = 0
0xfb: GOTO 0x155

0xfc: Push("bonfire_burn")
0xfd: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0xff: Push("b9q03BonefiresCount")
0x100: @ GetVariable(Stack[-1], Stack[-3])
0x101: Pop(1)
0x102: Push((int) 0)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x105: PushEmpty()
0x106: Call2 0x22c

0x107: Pop(0)
0x108: GOTO 0x142

0x109: Push((int) 1)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10c: PushEmpty()
0x10d: Call2 0x21f

0x10e: Pop(0)
0x10f: GOTO 0x142

0x110: Push((int) 2)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x113: PushEmpty()
0x114: Call2 0x212

0x115: Pop(0)
0x116: GOTO 0x142

0x117: Push((int) 3)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x11a: PushEmpty()
0x11b: Call2 0x239

0x11c: Pop(0)
0x11d: @ GetMainOutdoorScene(Stack[-1])
0x11e: Pop(0)
0x11f: PushEmpty(object, object, string, string, string)
0x120: Stack[-4] = Stack[-6]
0x121: Stack[-3] = "pt_b9q03_girl"
0x122: Stack[-2] = "pers_girl"
0x123: Stack[-1] = "b9q03_girl.xml"
0x124: Call2 0x1dc

0x125: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x126: Pop(5)
0x127: Push("cot_kapella")
0x128: @ GetSceneByName(Stack[-2], Stack[-1])
0x129: Pop(1)
0x12a: PushEmpty(object, object, string, string, string)
0x12b: Stack[-4] = Stack[-6]
0x12c: Stack[-3] = "pt_b9q03_spi4ka"
0x12d: Stack[-2] = "NPC_Spi4ka"
0x12e: Stack[-1] = "b9q03_spi4ka.xml"
0x12f: Call2 0x1dc

0x130: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x131: Pop(5)
0x132: PushEmpty(string, bool)
0x133: Stack[-2] = "house_spi4ka@door1"
0x134: Stack[-1] = (bool) 1
0x135: Call2 0x1ee

0x136: Pop(2)
0x137: PushEmpty(string, bool)
0x138: Stack[-2] = "house_spi4ka@door2"
0x139: Stack[-1] = (bool) 1
0x13a: Call2 0x1ee

0x13b: Pop(2)
0x13c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13d: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13e: Push("cleanup")
0x13f: @ Trigger(Stack[-3], Stack[-1])
0x140: Pop(1)
0x141: Stack[-1] = 0
0x142: Push((int) 1)
0x143: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x144: Push("b9q03BonefiresCount")
0x145: @ SetVariable(Stack[-1], Stack[-3])
0x146: Pop(1)
0x147: GOTO 0x155

0x148: Push("fail")
0x149: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14b: PushEmpty()
0x14c: Call2 0x161

0x14d: Pop(0)
0x14e: GOTO 0x155

0x14f: Push("completed")
0x150: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x152: PushEmpty()
0x153: Call2 0x169

0x154: Pop(0)
0x155: Return(); Pop(12)

0x156: PushEmpty(int, int)
0x157: Push("b9q03")
0x158: @ GetVariable(Stack[-1], Stack[-2])
0x159: Pop(1)
0x15a: Push((int) 1000)
0x15b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15d: PushEmpty()
0x15e: Call2 0x161

0x15f: Pop(0)
0x160: Return(); Pop(2)

0x161: Push("b9q03")
0x162: Push((int) -1)
0x163: @ SetVariable(Stack[-2], Stack[-1])
0x164: Pop(2)
0x165: PushEmpty()
0x166: Call2 0x171

0x167: Pop(0)
0x168: Return(); Pop(0)

0x169: Push("b9q03")
0x16a: Push((int) 1000)
0x16b: @ SetVariable(Stack[-2], Stack[-1])
0x16c: Pop(2)
0x16d: PushEmpty()
0x16e: Call2 0x171

0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: PushEmpty(object, object)
0x172: EventDisable(26)
0x173: Push("sobor")
0x174: @ GetSceneByName(Stack[-2], Stack[-1])
0x175: Pop(1)
0x176: Push("aglaja")
0x177: @ Trigger(Stack[-2], Stack[-1])
0x178: Pop(1)
0x179: Push("house_spi4ka")
0x17a: @ GetSceneByName(Stack[-2], Stack[-1])
0x17b: Pop(1)
0x17c: Push("spi4ka")
0x17d: @ Trigger(Stack[-2], Stack[-1])
0x17e: Pop(1)
0x17f: PushEmpty(object, string)
0x180: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x181: Stack[-1] = "cleanup"
0x182: Call2 0x1ff

0x183: Pop(2)
0x184: PushEmpty(object, string)
0x185: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x186: Stack[-1] = "cleanup"
0x187: Call2 0x1ff

0x188: Pop(2)
0x189: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18b: Push("cleanup")
0x18c: @ Trigger(Stack[-3], Stack[-1])
0x18d: Pop(1)
0x18e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x18f: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x190: Push("cleanup")
0x191: @ Trigger(Stack[-0], Stack[-1])
0x192: Pop(1)
0x193: Push( Stack[4 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: Push("cleanup")
0x196: @ Trigger(Stack[-4], Stack[-1])
0x197: Pop(1)
0x198: Push( Stack[5 + Tasks[-1].StackPointer] )
0x199: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19a: Push("cleanup")
0x19b: @ Trigger(Stack[-5], Stack[-1])
0x19c: Pop(1)
0x19d: PushEmpty(string, bool)
0x19e: Stack[-2] = "ihouse_spi4ka@door1"
0x19f: Stack[-1] = (bool) 0
0x1a0: Call2 0x1ee

0x1a1: Pop(2)
0x1a2: PushEmpty(string, bool)
0x1a3: Stack[-2] = "ihouse_spi4ka@door2"
0x1a4: Stack[-1] = (bool) 0
0x1a5: Call2 0x1ee

0x1a6: Pop(2)
0x1a7: PushEmpty(string, bool)
0x1a8: Stack[-2] = "house_spi4ka@door1"
0x1a9: Stack[-1] = (bool) 0
0x1aa: Call2 0x1ee

0x1ab: Pop(2)
0x1ac: PushEmpty(string, bool)
0x1ad: Stack[-2] = "house_spi4ka@door2"
0x1ae: Stack[-1] = (bool) 0
0x1af: Call2 0x1ee

0x1b0: Pop(2)
0x1b1: PushEmpty(object)
0x1b2: Call2 0x1d0

0x1b3: Pop(0)
0x1b4: @ RemoveActor(Stack[-1])
0x1b5: Pop(1)
0x1b6: Return(); Pop(2)

0x1b7: Stack[-1] = 0
0x1b8: PushEmpty(float, float)
0x1b9: @ GetGameTime(Stack[-1])
0x1ba: Pop(0)
0x1bb: Push((int) 24)
0x1bc: Pop(1); Push(Stack[-4] * Stack[-1]);
0x1bd: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1bf: PushEmpty()
0x1c0: Call2 0x171

0x1c1: Pop(0)
0x1c2: GOTO 0x1ca

0x1c3: Push((int) 0)
0x1c4: Push((int) 24)
0x1c5: Pop(1); Push(Stack[-5] * Stack[-1]);
0x1c6: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: @ Hold()
0x1c9: Pop(0)
0x1ca: Return(); Pop(2)

0x1cb: PushEmpty()
0x1cc: PushEmpty()
0x1cd: Call2 0x156

0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(object, object)
0x1d1: @ self(Stack[-1])
0x1d2: Pop(0)
0x1d3: Stack[-3] = Stack[-1]
0x1d4: Return(); Pop(2)

0x1d5: Stack[-1] = 0
0x1d6: PushEmpty(object, object)
0x1d7: @ CreateObjectVector(Stack[-1])
0x1d8: Pop(0)
0x1d9: Stack[-3] = Stack[-1]
0x1da: Return(); Pop(2)

0x1db: Stack[-1] = 0
0x1dc: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1dd: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1de: Pop(0)
0x1df: Pop(0); Push((bool) Stack[-4] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e1: Push("Locator ")
0x1e2: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1e3: Push(" doesn't exist")
0x1e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e5: @ Trace(Stack[-1])
0x1e6: Pop(1)
0x1e7: Stack[-1] = 0
0x1e8: GOTO 0x1eb

0x1e9: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1ea: Pop(0)
0x1eb: Stack[-13] = Stack[-1]
0x1ec: Return(); Pop(8)

0x1ed: Stack[-1] = 0
0x1ee: PushEmpty(object, object)
0x1ef: @ FindActor(Stack[-1], Stack[-4])
0x1f0: Pop(0)
0x1f1: Pop(0); Push((bool) Stack[-1] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f3: Push("Door ")
0x1f4: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1f5: Push(" not found")
0x1f6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f7: @ Trace(Stack[-1])
0x1f8: Pop(1)
0x1f9: GOTO 0x1fd

0x1fa: Push("locked")
0x1fb: @@ SetProperty(Stack[-1], Stack[-4])
0x1fc: Pop(1)
0x1fd: Return(); Pop(2)

0x1fe: Stack[-1] = 0
0x1ff: PushEmpty(int, int, object, int, int, object)
0x200: Push(Stack[-8])
0x201: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x202: @@ size(Stack[-3])
0x203: Pop(0)
0x204: Stack[-2] = (int) 0
0x205: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x206: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x207: @@ get(Stack[-1], Stack[-2])
0x208: Pop(0)
0x209: Push(Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: @ Trigger(Stack[-1], Stack[-7])
0x20c: Pop(0)
0x20d: Stack[-1] = 0
0x20e: Push((int) 1)
0x20f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x210: GOTO 0x205

0x211: Return(); Pop(6)

0x212: PushEmpty(object, object)
0x213: Push((int) 538)
0x214: Push((int) 2)
0x215: Push((int) 530350)
0x216: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: PushEmpty(bool, object, int)
0x219: Stack[-2] = Stack[-4]
0x21a: Stack[-1] = (int) 532
0x21b: Call2 0x253

0x21c: Pop(3)
0x21d: Return(); Pop(2)

0x21e: Stack[-1] = 0
0x21f: PushEmpty(object, object)
0x220: Push((int) 537)
0x221: Push((int) 2)
0x222: Push((int) 530349)
0x223: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: PushEmpty(bool, object, int)
0x226: Stack[-2] = Stack[-4]
0x227: Stack[-1] = (int) 532
0x228: Call2 0x253

0x229: Pop(3)
0x22a: Return(); Pop(2)

0x22b: Stack[-1] = 0
0x22c: PushEmpty(object, object)
0x22d: Push((int) 536)
0x22e: Push((int) 2)
0x22f: Push((int) 530348)
0x230: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: PushEmpty(bool, object, int)
0x233: Stack[-2] = Stack[-4]
0x234: Stack[-1] = (int) 532
0x235: Call2 0x253

0x236: Pop(3)
0x237: Return(); Pop(2)

0x238: Stack[-1] = 0
0x239: PushEmpty(object, object)
0x23a: Push((int) 539)
0x23b: Push((int) 2)
0x23c: Push((int) 530351)
0x23d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: PushEmpty(bool, object, int)
0x240: Stack[-2] = Stack[-4]
0x241: Stack[-1] = (int) 532
0x242: Call2 0x253

0x243: Pop(3)
0x244: Return(); Pop(2)

0x245: Stack[-1] = 0
0x246: PushEmpty(object, object)
0x247: @ GetDiaryRoot(Stack[-1])
0x248: Pop(0)
0x249: Pop(0); Push((bool) Stack[-1] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: Push("Can't retrieve diary root")
0x24c: @ Trace(Stack[-1])
0x24d: Pop(1)
0x24e: Stack[-3] = (bool) 0
0x24f: Return(); Pop(2)

0x250: Stack[-3] = Stack[-1]
0x251: Return(); Pop(2)

0x252: Stack[-1] = 0
0x253: PushEmpty(object, object, int, object, object, int)
0x254: PushEmpty(object)
0x255: Call2 0x246

0x256: Stack[-4] = Stack[-1]
0x257: Pop(1)
0x258: @@ Find(Stack[-7], Stack[-2])
0x259: Pop(0)
0x25a: Pop(0); Push((bool) Stack[-2] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25c: Push("Can't find diary parent with id: ")
0x25d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x25e: @ Trace(Stack[-1])
0x25f: Pop(1)
0x260: Stack[-9] = (bool) 0
0x261: Return(); Pop(6)

0x262: @@ AddChild(Stack[-8])
0x263: Pop(0)
0x264: Push((int) 7)
0x265: @ SendWorldWndMessage(Stack[-1])
0x266: Pop(1)
0x267: @@ GetCategory(Stack[-1])
0x268: Pop(0)
0x269: @ SetDiarySection(Stack[-1])
0x26a: Pop(0)
0x26b: Stack[-9] = (bool) 0
0x26c: Return(); Pop(6)

0x26d: Stack[-2] = 0
0x26e: Stack[-3] = 0
