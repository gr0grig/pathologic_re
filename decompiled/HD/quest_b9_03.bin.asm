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
	ihouse_spi4ka@door1
	ihouse_spi4ka@door2
	door_close
	doberman_dead
	size
	door_open
	place_follower
	pt_b9q03_follower
	pers_boy
	b9q03_follower.xml
	init_bonefires
	pt_b9q03_b1_doberman1
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
		EVENT_9 Op = 0x1dd Vars = (int, float)


0x0: PushEmpty(object, object, object, object)
0x1: Stack[7 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[8 + Tasks[-1].StackPointer] = (bool)0
0x3: PushEmpty(object)
0x4: Call2 0x1e8

0x5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6: Pop(1)
0x7: PushEmpty(object)
0x8: Call2 0x1e8

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
0x22: Call2 0x1ee

0x23: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x24: Pop(5)
0x25: PushEmpty(int)
0x26: Stack[-1] = (int) 9
0x27: Call2 0x1ca

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
0x3d: Call2 0x1ee

0x3e: Pop(4)
0x3f: @@ add(Stack[-1])
0x40: Pop(1)
0x41: PushEmpty(object, object, string, string, string)
0x42: Stack[-4] = Stack[-11]
0x43: Stack[-3] = "pt_b9q03_doberman2"
0x44: Stack[-2] = "pers_doberman"
0x45: Stack[-1] = "b9q03_doberman.xml"
0x46: Call2 0x1ee

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
0x56: GOTO 0x167

0x57: Push("doberman_attack")
0x58: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5a: PushEmpty(object, string)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = "attack"
0x5d: Call2 0x211

0x5e: Pop(2)
0x5f: PushEmpty(string, bool)
0x60: Stack[-2] = "ihouse_spi4ka@door1"
0x61: Stack[-1] = (bool) 1
0x62: Call2 0x200

0x63: Pop(2)
0x64: PushEmpty(string, bool)
0x65: Stack[-2] = "ihouse_spi4ka@door2"
0x66: Stack[-1] = (bool) 1
0x67: Call2 0x200

0x68: Pop(2)
0x69: Push("door_close")
0x6a: @ PlaySound(Stack[-1])
0x6b: Pop(1)
0x6c: GOTO 0x167

0x6d: Push("doberman_dead")
0x6e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x70: Push((int) 1)
0x71: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x72: @@ size(Stack[-5])
0x73: Pop(0)
0x74: Pop(0); Push((bool) Stack[-5] == Stack[6 + Tasks[-1].StackPointer])
0x75: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x76: PushEmpty(string, bool)
0x77: Stack[-2] = "ihouse_spi4ka@door1"
0x78: Stack[-1] = (bool) 0
0x79: Call2 0x200

0x7a: Pop(2)
0x7b: PushEmpty(string, bool)
0x7c: Stack[-2] = "ihouse_spi4ka@door2"
0x7d: Stack[-1] = (bool) 0
0x7e: Call2 0x200

0x7f: Pop(2)
0x80: Push("door_open")
0x81: @ PlaySound(Stack[-1])
0x82: Pop(1)
0x83: GOTO 0x167

0x84: Push("place_follower")
0x85: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x87: Push( Stack[7 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Return(); Pop(12)

0x8a: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x8b: @ GetMainOutdoorScene(Stack[-4])
0x8c: Pop(0)
0x8d: PushEmpty(object, object, string, string, string)
0x8e: Stack[-4] = Stack[-9]
0x8f: Stack[-3] = "pt_b9q03_follower"
0x90: Stack[-2] = "pers_boy"
0x91: Stack[-1] = "b9q03_follower.xml"
0x92: Call2 0x1ee

0x93: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x94: Pop(5)
0x95: Stack[-4] = 0
0x96: GOTO 0x167

0x97: Push("init_bonefires")
0x98: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x9a: Push( Stack[8 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(12)

0x9d: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x9e: @ GetMainOutdoorScene(Stack[-3])
0x9f: Pop(0)
0xa0: PushEmpty(object, object, string, string, string)
0xa1: Stack[-4] = Stack[-8]
0xa2: Stack[-3] = "pt_b9q03_b1_doberman1"
0xa3: Stack[-2] = "pers_doberman"
0xa4: Stack[-1] = "b9q03_e_doberman.xml"
0xa5: Call2 0x1ee

0xa6: Pop(4)
0xa7: @@ add(Stack[-1])
0xa8: Pop(1)
0xa9: PushEmpty(object, object, string, string, string)
0xaa: Stack[-4] = Stack[-8]
0xab: Stack[-3] = "pt_b9q03_b1_morlok1"
0xac: Stack[-2] = "pers_morlok"
0xad: Stack[-1] = "b9q03_e_morlok.xml"
0xae: Call2 0x1ee

0xaf: Pop(4)
0xb0: @@ add(Stack[-1])
0xb1: Pop(1)
0xb2: PushEmpty(object, object, string, string, string)
0xb3: Stack[-4] = Stack[-8]
0xb4: Stack[-3] = "pt_b9q03_b1_morlok2"
0xb5: Stack[-2] = "pers_morlok"
0xb6: Stack[-1] = "b9q03_e_morlok.xml"
0xb7: Call2 0x1ee

0xb8: Pop(4)
0xb9: @@ add(Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(object, object, string, string, string)
0xbc: Stack[-4] = Stack[-8]
0xbd: Stack[-3] = "pt_b9q03_b2_doberman1"
0xbe: Stack[-2] = "pers_doberman"
0xbf: Stack[-1] = "b9q03_e_doberman.xml"
0xc0: Call2 0x1ee

0xc1: Pop(4)
0xc2: @@ add(Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(object, object, string, string, string)
0xc5: Stack[-4] = Stack[-8]
0xc6: Stack[-3] = "pt_b9q03_b2_grabitel1"
0xc7: Stack[-2] = "pers_grabitel"
0xc8: Stack[-1] = "b9q03_e_grabitel.xml"
0xc9: Call2 0x1ee

0xca: Pop(4)
0xcb: @@ add(Stack[-1])
0xcc: Pop(1)
0xcd: PushEmpty(object, object, string, string, string)
0xce: Stack[-4] = Stack[-8]
0xcf: Stack[-3] = "pt_b9q03_b2_grabitel2"
0xd0: Stack[-2] = "pers_grabitel"
0xd1: Stack[-1] = "b9q03_e_grabitel.xml"
0xd2: Call2 0x1ee

0xd3: Pop(4)
0xd4: @@ add(Stack[-1])
0xd5: Pop(1)
0xd6: PushEmpty(object, object, string, string, string)
0xd7: Stack[-4] = Stack[-8]
0xd8: Stack[-3] = "pt_b9q03_b3_doberman1"
0xd9: Stack[-2] = "pers_doberman"
0xda: Stack[-1] = "b9q03_e_doberman.xml"
0xdb: Call2 0x1ee

0xdc: Pop(4)
0xdd: @@ add(Stack[-1])
0xde: Pop(1)
0xdf: PushEmpty(object, object, string, string, string)
0xe0: Stack[-4] = Stack[-8]
0xe1: Stack[-3] = "pt_b9q03_b3_wastedmale1"
0xe2: Stack[-2] = "pers_wasted_male"
0xe3: Stack[-1] = "b9q03_e_wasted_male.xml"
0xe4: Call2 0x1ee

0xe5: Pop(4)
0xe6: @@ add(Stack[-1])
0xe7: Pop(1)
0xe8: PushEmpty(object, object, string, string, string)
0xe9: Stack[-4] = Stack[-8]
0xea: Stack[-3] = "pt_b9q03_b3_hunter1"
0xeb: Stack[-2] = "pers_hunter"
0xec: Stack[-1] = "b9q03_e_hunter.xml"
0xed: Call2 0x1ee

0xee: Pop(4)
0xef: @@ add(Stack[-1])
0xf0: Pop(1)
0xf1: PushEmpty(object, object, string, string, string)
0xf2: Stack[-4] = Stack[-8]
0xf3: Stack[-3] = "pt_b9q03_b4_doberman1"
0xf4: Stack[-2] = "pers_doberman"
0xf5: Stack[-1] = "b9q03_e_doberman.xml"
0xf6: Call2 0x1ee

0xf7: Pop(4)
0xf8: @@ add(Stack[-1])
0xf9: Pop(1)
0xfa: PushEmpty(object, object, string, string, string)
0xfb: Stack[-4] = Stack[-8]
0xfc: Stack[-3] = "pt_b9q03_b4_doberman2"
0xfd: Stack[-2] = "pers_doberman"
0xfe: Stack[-1] = "b9q03_e_doberman.xml"
0xff: Call2 0x1ee

0x100: Pop(4)
0x101: @@ add(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(object, object, string, string, string)
0x104: Stack[-4] = Stack[-8]
0x105: Stack[-3] = "pt_b9q03_b4_doberman3"
0x106: Stack[-2] = "pers_doberman"
0x107: Stack[-1] = "b9q03_e_doberman.xml"
0x108: Call2 0x1ee

0x109: Pop(4)
0x10a: @@ add(Stack[-1])
0x10b: Pop(1)
0x10c: Stack[-3] = 0
0x10d: GOTO 0x167

0x10e: Push("bonfire_burn")
0x10f: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x111: Push("b9q03BonefiresCount")
0x112: @ GetVariable(Stack[-1], Stack[-3])
0x113: Pop(1)
0x114: Push((int) 0)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x23e

0x119: Pop(0)
0x11a: GOTO 0x154

0x11b: Push((int) 1)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11e: PushEmpty()
0x11f: Call2 0x231

0x120: Pop(0)
0x121: GOTO 0x154

0x122: Push((int) 2)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x125: PushEmpty()
0x126: Call2 0x224

0x127: Pop(0)
0x128: GOTO 0x154

0x129: Push((int) 3)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x12c: PushEmpty()
0x12d: Call2 0x24b

0x12e: Pop(0)
0x12f: @ GetMainOutdoorScene(Stack[-1])
0x130: Pop(0)
0x131: PushEmpty(object, object, string, string, string)
0x132: Stack[-4] = Stack[-6]
0x133: Stack[-3] = "pt_b9q03_girl"
0x134: Stack[-2] = "pers_girl"
0x135: Stack[-1] = "b9q03_girl.xml"
0x136: Call2 0x1ee

0x137: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x138: Pop(5)
0x139: Push("cot_kapella")
0x13a: @ GetSceneByName(Stack[-2], Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(object, object, string, string, string)
0x13d: Stack[-4] = Stack[-6]
0x13e: Stack[-3] = "pt_b9q03_spi4ka"
0x13f: Stack[-2] = "NPC_Spi4ka"
0x140: Stack[-1] = "b9q03_spi4ka.xml"
0x141: Call2 0x1ee

0x142: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x143: Pop(5)
0x144: PushEmpty(string, bool)
0x145: Stack[-2] = "house_spi4ka@door1"
0x146: Stack[-1] = (bool) 1
0x147: Call2 0x200

0x148: Pop(2)
0x149: PushEmpty(string, bool)
0x14a: Stack[-2] = "house_spi4ka@door2"
0x14b: Stack[-1] = (bool) 1
0x14c: Call2 0x200

0x14d: Pop(2)
0x14e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x14f: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x150: Push("cleanup")
0x151: @ Trigger(Stack[-3], Stack[-1])
0x152: Pop(1)
0x153: Stack[-1] = 0
0x154: Push((int) 1)
0x155: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x156: Push("b9q03BonefiresCount")
0x157: @ SetVariable(Stack[-1], Stack[-3])
0x158: Pop(1)
0x159: GOTO 0x167

0x15a: Push("fail")
0x15b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15d: PushEmpty()
0x15e: Call2 0x173

0x15f: Pop(0)
0x160: GOTO 0x167

0x161: Push("completed")
0x162: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: PushEmpty()
0x165: Call2 0x17b

0x166: Pop(0)
0x167: Return(); Pop(12)

0x168: PushEmpty(int, int)
0x169: Push("b9q03")
0x16a: @ GetVariable(Stack[-1], Stack[-2])
0x16b: Pop(1)
0x16c: Push((int) 1000)
0x16d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: PushEmpty()
0x170: Call2 0x173

0x171: Pop(0)
0x172: Return(); Pop(2)

0x173: Push("b9q03")
0x174: Push((int) -1)
0x175: @ SetVariable(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: PushEmpty()
0x178: Call2 0x183

0x179: Pop(0)
0x17a: Return(); Pop(0)

0x17b: Push("b9q03")
0x17c: Push((int) 1000)
0x17d: @ SetVariable(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: PushEmpty()
0x180: Call2 0x183

0x181: Pop(0)
0x182: Return(); Pop(0)

0x183: PushEmpty(object, object)
0x184: EventDisable(26)
0x185: Push("sobor")
0x186: @ GetSceneByName(Stack[-2], Stack[-1])
0x187: Pop(1)
0x188: Push("aglaja")
0x189: @ Trigger(Stack[-2], Stack[-1])
0x18a: Pop(1)
0x18b: Push("house_spi4ka")
0x18c: @ GetSceneByName(Stack[-2], Stack[-1])
0x18d: Pop(1)
0x18e: Push("spi4ka")
0x18f: @ Trigger(Stack[-2], Stack[-1])
0x190: Pop(1)
0x191: PushEmpty(object, string)
0x192: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x193: Stack[-1] = "cleanup"
0x194: Call2 0x211

0x195: Pop(2)
0x196: PushEmpty(object, string)
0x197: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x198: Stack[-1] = "cleanup"
0x199: Call2 0x211

0x19a: Pop(2)
0x19b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: Push("cleanup")
0x19e: @ Trigger(Stack[-3], Stack[-1])
0x19f: Pop(1)
0x1a0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a2: Push("cleanup")
0x1a3: @ Trigger(Stack[-0], Stack[-1])
0x1a4: Pop(1)
0x1a5: Push( Stack[4 + Tasks[-1].StackPointer] )
0x1a6: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a7: Push("cleanup")
0x1a8: @ Trigger(Stack[-4], Stack[-1])
0x1a9: Pop(1)
0x1aa: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: Push("cleanup")
0x1ad: @ Trigger(Stack[-5], Stack[-1])
0x1ae: Pop(1)
0x1af: PushEmpty(string, bool)
0x1b0: Stack[-2] = "ihouse_spi4ka@door1"
0x1b1: Stack[-1] = (bool) 0
0x1b2: Call2 0x200

0x1b3: Pop(2)
0x1b4: PushEmpty(string, bool)
0x1b5: Stack[-2] = "ihouse_spi4ka@door2"
0x1b6: Stack[-1] = (bool) 0
0x1b7: Call2 0x200

0x1b8: Pop(2)
0x1b9: PushEmpty(string, bool)
0x1ba: Stack[-2] = "house_spi4ka@door1"
0x1bb: Stack[-1] = (bool) 0
0x1bc: Call2 0x200

0x1bd: Pop(2)
0x1be: PushEmpty(string, bool)
0x1bf: Stack[-2] = "house_spi4ka@door2"
0x1c0: Stack[-1] = (bool) 0
0x1c1: Call2 0x200

0x1c2: Pop(2)
0x1c3: PushEmpty(object)
0x1c4: Call2 0x1e2

0x1c5: Pop(0)
0x1c6: @ RemoveActor(Stack[-1])
0x1c7: Pop(1)
0x1c8: Return(); Pop(2)

0x1c9: Stack[-1] = 0
0x1ca: PushEmpty(float, float)
0x1cb: @ GetGameTime(Stack[-1])
0x1cc: Pop(0)
0x1cd: Push((int) 24)
0x1ce: Pop(1); Push(Stack[-4] * Stack[-1]);
0x1cf: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d1: PushEmpty()
0x1d2: Call2 0x183

0x1d3: Pop(0)
0x1d4: GOTO 0x1dc

0x1d5: Push((int) 0)
0x1d6: Push((int) 24)
0x1d7: Pop(1); Push(Stack[-5] * Stack[-1]);
0x1d8: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1d9: Pop(2)
0x1da: @ Hold()
0x1db: Pop(0)
0x1dc: Return(); Pop(2)

0x1dd: PushEmpty()
0x1de: PushEmpty()
0x1df: Call2 0x168

0x1e0: Pop(0)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty(object, object)
0x1e3: @ self(Stack[-1])
0x1e4: Pop(0)
0x1e5: Stack[-3] = Stack[-1]
0x1e6: Return(); Pop(2)

0x1e7: Stack[-1] = 0
0x1e8: PushEmpty(object, object)
0x1e9: @ CreateObjectVector(Stack[-1])
0x1ea: Pop(0)
0x1eb: Stack[-3] = Stack[-1]
0x1ec: Return(); Pop(2)

0x1ed: Stack[-1] = 0
0x1ee: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1ef: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1f0: Pop(0)
0x1f1: Pop(0); Push((bool) Stack[-4] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f3: Push("Locator ")
0x1f4: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1f5: Push(" doesn't exist")
0x1f6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f7: @ Trace(Stack[-1])
0x1f8: Pop(1)
0x1f9: Stack[-1] = 0
0x1fa: GOTO 0x1fd

0x1fb: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1fc: Pop(0)
0x1fd: Stack[-13] = Stack[-1]
0x1fe: Return(); Pop(8)

0x1ff: Stack[-1] = 0
0x200: PushEmpty(object, object)
0x201: @ FindActor(Stack[-1], Stack[-4])
0x202: Pop(0)
0x203: Pop(0); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x205: Push("Door ")
0x206: Pop(1); Push(Stack[-1] + Stack[-5]);
0x207: Push(" not found")
0x208: Pop(2); Push(Stack[-2] + Stack[-1]);
0x209: @ Trace(Stack[-1])
0x20a: Pop(1)
0x20b: GOTO 0x20f

0x20c: Push("locked")
0x20d: @@ SetProperty(Stack[-1], Stack[-4])
0x20e: Pop(1)
0x20f: Return(); Pop(2)

0x210: Stack[-1] = 0
0x211: PushEmpty(int, int, object, int, int, object)
0x212: Push(Stack[-8])
0x213: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x214: @@ size(Stack[-3])
0x215: Pop(0)
0x216: Stack[-2] = (int) 0
0x217: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x218: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x219: @@ get(Stack[-1], Stack[-2])
0x21a: Pop(0)
0x21b: Push(Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: @ Trigger(Stack[-1], Stack[-7])
0x21e: Pop(0)
0x21f: Stack[-1] = 0
0x220: Push((int) 1)
0x221: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x222: GOTO 0x217

0x223: Return(); Pop(6)

0x224: PushEmpty(object, object)
0x225: Push((int) 538)
0x226: Push((int) 2)
0x227: Push((int) 530350)
0x228: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: PushEmpty(bool, object, int)
0x22b: Stack[-2] = Stack[-4]
0x22c: Stack[-1] = (int) 532
0x22d: Call2 0x265

0x22e: Pop(3)
0x22f: Return(); Pop(2)

0x230: Stack[-1] = 0
0x231: PushEmpty(object, object)
0x232: Push((int) 537)
0x233: Push((int) 2)
0x234: Push((int) 530349)
0x235: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: PushEmpty(bool, object, int)
0x238: Stack[-2] = Stack[-4]
0x239: Stack[-1] = (int) 532
0x23a: Call2 0x265

0x23b: Pop(3)
0x23c: Return(); Pop(2)

0x23d: Stack[-1] = 0
0x23e: PushEmpty(object, object)
0x23f: Push((int) 536)
0x240: Push((int) 2)
0x241: Push((int) 530348)
0x242: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: PushEmpty(bool, object, int)
0x245: Stack[-2] = Stack[-4]
0x246: Stack[-1] = (int) 532
0x247: Call2 0x265

0x248: Pop(3)
0x249: Return(); Pop(2)

0x24a: Stack[-1] = 0
0x24b: PushEmpty(object, object)
0x24c: Push((int) 539)
0x24d: Push((int) 2)
0x24e: Push((int) 530351)
0x24f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: PushEmpty(bool, object, int)
0x252: Stack[-2] = Stack[-4]
0x253: Stack[-1] = (int) 532
0x254: Call2 0x265

0x255: Pop(3)
0x256: Return(); Pop(2)

0x257: Stack[-1] = 0
0x258: PushEmpty(object, object)
0x259: @ GetDiaryRoot(Stack[-1])
0x25a: Pop(0)
0x25b: Pop(0); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25d: Push("Can't retrieve diary root")
0x25e: @ Trace(Stack[-1])
0x25f: Pop(1)
0x260: Stack[-3] = (bool) 0
0x261: Return(); Pop(2)

0x262: Stack[-3] = Stack[-1]
0x263: Return(); Pop(2)

0x264: Stack[-1] = 0
0x265: PushEmpty(object, object, int, object, object, int)
0x266: PushEmpty(object)
0x267: Call2 0x258

0x268: Stack[-4] = Stack[-1]
0x269: Pop(1)
0x26a: @@ Find(Stack[-7], Stack[-2])
0x26b: Pop(0)
0x26c: Pop(0); Push((bool) Stack[-2] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26e: Push("Can't find diary parent with id: ")
0x26f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x270: @ Trace(Stack[-1])
0x271: Pop(1)
0x272: Stack[-9] = (bool) 0
0x273: Return(); Pop(6)

0x274: @@ AddChild(Stack[-8])
0x275: Pop(0)
0x276: Push((int) 7)
0x277: @ SendWorldWndMessage(Stack[-1])
0x278: Pop(1)
0x279: @@ GetCategory(Stack[-1])
0x27a: Pop(0)
0x27b: @ SetDiarySection(Stack[-1])
0x27c: Pop(0)
0x27d: Stack[-9] = (bool) 0
0x27e: Return(); Pop(6)

0x27f: Stack[-2] = 0
0x280: Stack[-3] = 0
