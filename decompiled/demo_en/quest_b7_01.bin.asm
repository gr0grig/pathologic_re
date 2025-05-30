GlobalVarCount = 0

Strings:
	sobor@door1
	sobor
	noaglaja
	init_sobor
	pt_b7q01_birdmask
	pers_birdmask
	b7q01_sobor_mbirdmask.xml
	add
	pt_b7q01_birdmask1
	b7q01_sobor_birdmask.xml
	pt_b7q01_birdmask2
	pt_b7q01_patrol1
	pers_patrool
	b7q01_sobor_patrol.xml
	pt_b7q01_patrol2
	init_prison
	uprava_prison
	b7q01_prison_patrol1.xml
	b7q01_prison_patrol2.xml
	pt_b7q01_prisoner1
	pers_worker
	b7q01_prisoner.xml
	pt_b7q01_prisoner2
	pers_unosha
	pt_b7q01_prisoner3
	pers_grabitel
	clear_prison
	cleanup
	init_gorbun_house
	lc_house6_05
	pt_b7q01_wastedmale
	pers_wasted_male
	b7q01_gorbun_mwastedmale.xml
	pt_b7q01_wastedmale1
	b7q01_gorbun_wastedmale.xml
	pt_b7q01_wastedmale2
	b7q01_corpse1
	actor_disp.bin
	b7q01_corpse2
	b7q01_corpse3
	clear_gorbun_house
	place_aglaja
	b7q01
	fail
	completed
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	size
	get

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x1d Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "sobor@door1"
0x3: Stack[-1] = (bool) 0
0x4: Call2 0x159

0x5: Pop(2)
0x6: PushEmpty(object)
0x7: Call2 0x139

0x8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9: Pop(1)
0xa: PushEmpty(object)
0xb: Call2 0x139

0xc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0xd: Pop(1)
0xe: PushEmpty(object)
0xf: Call2 0x139

0x10: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x11: Pop(1)
0x12: Push("sobor")
0x13: @ GetSceneByName(Stack[-2], Stack[-1])
0x14: Pop(1)
0x15: Push("noaglaja")
0x16: @ Trigger(Stack[-2], Stack[-1])
0x17: Pop(1)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(2)

0x1c: Stack[-1] = 0
0x1d: PushEmpty(object, object, object, object, int, object, object, object, object, int)
0x1e: @ Trace(Stack[-11])
0x1f: Pop(0)
0x20: Push("init_sobor")
0x21: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x23: Push("sobor")
0x24: @ GetSceneByName(Stack[-6], Stack[-1])
0x25: Pop(1)
0x26: PushEmpty(object, object, string, string, string)
0x27: Stack[-4] = Stack[-10]
0x28: Stack[-3] = "pt_b7q01_birdmask"
0x29: Stack[-2] = "pers_birdmask"
0x2a: Stack[-1] = "b7q01_sobor_mbirdmask.xml"
0x2b: Call2 0x13f

0x2c: Pop(4)
0x2d: @@ add(Stack[-1])
0x2e: Pop(1)
0x2f: PushEmpty(object, object, string, string, string)
0x30: Stack[-4] = Stack[-10]
0x31: Stack[-3] = "pt_b7q01_birdmask1"
0x32: Stack[-2] = "pers_birdmask"
0x33: Stack[-1] = "b7q01_sobor_birdmask.xml"
0x34: Call2 0x13f

0x35: Pop(4)
0x36: @@ add(Stack[-1])
0x37: Pop(1)
0x38: PushEmpty(object, object, string, string, string)
0x39: Stack[-4] = Stack[-10]
0x3a: Stack[-3] = "pt_b7q01_birdmask2"
0x3b: Stack[-2] = "pers_birdmask"
0x3c: Stack[-1] = "b7q01_sobor_birdmask.xml"
0x3d: Call2 0x13f

0x3e: Pop(4)
0x3f: @@ add(Stack[-1])
0x40: Pop(1)
0x41: PushEmpty(object, object, string, string, string)
0x42: Stack[-4] = Stack[-10]
0x43: Stack[-3] = "pt_b7q01_patrol1"
0x44: Stack[-2] = "pers_patrool"
0x45: Stack[-1] = "b7q01_sobor_patrol.xml"
0x46: Call2 0x13f

0x47: Pop(4)
0x48: @@ add(Stack[-1])
0x49: Pop(1)
0x4a: PushEmpty(object, object, string, string, string)
0x4b: Stack[-4] = Stack[-10]
0x4c: Stack[-3] = "pt_b7q01_patrol2"
0x4d: Stack[-2] = "pers_patrool"
0x4e: Stack[-1] = "b7q01_sobor_patrol.xml"
0x4f: Call2 0x13f

0x50: Pop(4)
0x51: @@ add(Stack[-1])
0x52: Pop(1)
0x53: Stack[-5] = 0
0x54: GOTO 0x105

0x55: Push("init_prison")
0x56: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x58: Push("uprava_prison")
0x59: @ GetSceneByName(Stack[-5], Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty(object, object, string, string, string)
0x5c: Stack[-4] = Stack[-9]
0x5d: Stack[-3] = "pt_b7q01_patrol1"
0x5e: Stack[-2] = "pers_patrool"
0x5f: Stack[-1] = "b7q01_prison_patrol1.xml"
0x60: Call2 0x13f

0x61: Pop(4)
0x62: @@ add(Stack[-1])
0x63: Pop(1)
0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-4] = Stack[-9]
0x66: Stack[-3] = "pt_b7q01_patrol2"
0x67: Stack[-2] = "pers_patrool"
0x68: Stack[-1] = "b7q01_prison_patrol2.xml"
0x69: Call2 0x13f

0x6a: Pop(4)
0x6b: @@ add(Stack[-1])
0x6c: Pop(1)
0x6d: PushEmpty(object, object, string, string, string)
0x6e: Stack[-4] = Stack[-9]
0x6f: Stack[-3] = "pt_b7q01_prisoner1"
0x70: Stack[-2] = "pers_worker"
0x71: Stack[-1] = "b7q01_prisoner.xml"
0x72: Call2 0x13f

0x73: Pop(4)
0x74: @@ add(Stack[-1])
0x75: Pop(1)
0x76: PushEmpty(object, object, string, string, string)
0x77: Stack[-4] = Stack[-9]
0x78: Stack[-3] = "pt_b7q01_prisoner2"
0x79: Stack[-2] = "pers_unosha"
0x7a: Stack[-1] = "b7q01_prisoner.xml"
0x7b: Call2 0x13f

0x7c: Pop(4)
0x7d: @@ add(Stack[-1])
0x7e: Pop(1)
0x7f: PushEmpty(object, object, string, string, string)
0x80: Stack[-4] = Stack[-9]
0x81: Stack[-3] = "pt_b7q01_prisoner3"
0x82: Stack[-2] = "pers_grabitel"
0x83: Stack[-1] = "b7q01_prisoner.xml"
0x84: Call2 0x13f

0x85: Pop(4)
0x86: @@ add(Stack[-1])
0x87: Pop(1)
0x88: Stack[-4] = 0
0x89: GOTO 0x105

0x8a: Push("clear_prison")
0x8b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(object, string)
0x8e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Stack[-1] = "cleanup"
0x90: Call2 0x16a

0x91: Pop(2)
0x92: GOTO 0x105

0x93: Push("init_gorbun_house")
0x94: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x95: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0x96: Push("lc_house6_05")
0x97: @ GetSceneByName(Stack[-4], Stack[-1])
0x98: Pop(1)
0x99: PushEmpty(object, object, string, string, string)
0x9a: Stack[-4] = Stack[-8]
0x9b: Stack[-3] = "pt_b7q01_wastedmale"
0x9c: Stack[-2] = "pers_wasted_male"
0x9d: Stack[-1] = "b7q01_gorbun_mwastedmale.xml"
0x9e: Call2 0x13f

0x9f: Pop(4)
0xa0: @@ add(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(object, object, string, string, string)
0xa3: Stack[-4] = Stack[-8]
0xa4: Stack[-3] = "pt_b7q01_wastedmale1"
0xa5: Stack[-2] = "pers_wasted_male"
0xa6: Stack[-1] = "b7q01_gorbun_wastedmale.xml"
0xa7: Call2 0x13f

0xa8: Pop(4)
0xa9: @@ add(Stack[-1])
0xaa: Pop(1)
0xab: PushEmpty(object, object, string, string, string)
0xac: Stack[-4] = Stack[-8]
0xad: Stack[-3] = "pt_b7q01_wastedmale2"
0xae: Stack[-2] = "pers_wasted_male"
0xaf: Stack[-1] = "b7q01_gorbun_wastedmale.xml"
0xb0: Call2 0x13f

0xb1: Pop(4)
0xb2: @@ add(Stack[-1])
0xb3: Pop(1)
0xb4: PushEmpty(object, object, string, string)
0xb5: Stack[-3] = Stack[-7]
0xb6: Stack[-2] = "b7q01_corpse1"
0xb7: Stack[-1] = "actor_disp.bin"
0xb8: Call2 0x151

0xb9: Pop(3)
0xba: @@ add(Stack[-1])
0xbb: Pop(1)
0xbc: PushEmpty(object, object, string, string)
0xbd: Stack[-3] = Stack[-7]
0xbe: Stack[-2] = "b7q01_corpse2"
0xbf: Stack[-1] = "actor_disp.bin"
0xc0: Call2 0x151

0xc1: Pop(3)
0xc2: @@ add(Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(object, object, string, string)
0xc5: Stack[-3] = Stack[-7]
0xc6: Stack[-2] = "b7q01_corpse3"
0xc7: Stack[-1] = "actor_disp.bin"
0xc8: Call2 0x151

0xc9: Pop(3)
0xca: @@ add(Stack[-1])
0xcb: Pop(1)
0xcc: Stack[-3] = 0
0xcd: GOTO 0x105

0xce: Push("clear_gorbun_house")
0xcf: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd1: PushEmpty(object, string)
0xd2: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = "cleanup"
0xd4: Call2 0x16a

0xd5: Pop(2)
0xd6: GOTO 0x105

0xd7: Push("place_aglaja")
0xd8: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xda: Push("sobor")
0xdb: @ GetSceneByName(Stack[-3], Stack[-1])
0xdc: Pop(1)
0xdd: Push("aglaja")
0xde: @ Trigger(Stack[-3], Stack[-1])
0xdf: Pop(1)
0xe0: PushEmpty(object, string)
0xe1: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = "cleanup"
0xe3: Call2 0x16a

0xe4: Pop(2)
0xe5: Stack[-2] = 0
0xe6: GOTO 0x105

0xe7: Push("cleanup")
0xe8: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xea: Push("b7q01")
0xeb: @ GetVariable(Stack[-1], Stack[-2])
0xec: Pop(1)
0xed: Push((int) 1000)
0xee: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0x106

0xf2: Pop(0)
0xf3: GOTO 0xf7

0xf4: PushEmpty()
0xf5: Call2 0x116

0xf6: Pop(0)
0xf7: GOTO 0x105

0xf8: Push("fail")
0xf9: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfb: PushEmpty()
0xfc: Call2 0x106

0xfd: Pop(0)
0xfe: GOTO 0x105

0xff: Push("completed")
0x100: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x10e

0x104: Pop(0)
0x105: Return(); Pop(10)

0x106: Push("b7q01")
0x107: Push((int) -1)
0x108: @ SetVariable(Stack[-2], Stack[-1])
0x109: Pop(2)
0x10a: PushEmpty()
0x10b: Call2 0x116

0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: Push("b7q01")
0x10f: Push((int) 1000)
0x110: @ SetVariable(Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: PushEmpty()
0x113: Call2 0x116

0x114: Pop(0)
0x115: Return(); Pop(0)

0x116: PushEmpty(object, object)
0x117: PushEmpty(object, string)
0x118: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x119: Stack[-1] = "cleanup"
0x11a: Call2 0x16a

0x11b: Pop(2)
0x11c: PushEmpty(object, string)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = "cleanup"
0x11f: Call2 0x16a

0x120: Pop(2)
0x121: PushEmpty(object, string)
0x122: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x123: Stack[-1] = "cleanup"
0x124: Call2 0x16a

0x125: Pop(2)
0x126: Push("sobor")
0x127: @ GetSceneByName(Stack[-2], Stack[-1])
0x128: Pop(1)
0x129: Push("aglaja")
0x12a: @ Trigger(Stack[-2], Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(object)
0x12d: Call2 0x133

0x12e: Pop(0)
0x12f: @ RemoveActor(Stack[-1])
0x130: Pop(1)
0x131: Return(); Pop(2)

0x132: Stack[-1] = 0
0x133: PushEmpty(object, object)
0x134: @ self(Stack[-1])
0x135: Pop(0)
0x136: Stack[-3] = Stack[-1]
0x137: Return(); Pop(2)

0x138: Stack[-1] = 0
0x139: PushEmpty(object, object)
0x13a: @ CreateObjectVector(Stack[-1])
0x13b: Pop(0)
0x13c: Stack[-3] = Stack[-1]
0x13d: Return(); Pop(2)

0x13e: Stack[-1] = 0
0x13f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x140: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-4] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x144: Push("Locator ")
0x145: Pop(1); Push(Stack[-1] + Stack[-12]);
0x146: Push(" doesn't exist")
0x147: Pop(2); Push(Stack[-2] + Stack[-1]);
0x148: @ Trace(Stack[-1])
0x149: Pop(1)
0x14a: Stack[-1] = 0
0x14b: GOTO 0x14e

0x14c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x14d: Pop(0)
0x14e: Stack[-13] = Stack[-1]
0x14f: Return(); Pop(8)

0x150: Stack[-1] = 0
0x151: PushEmpty(object, object)
0x152: Push(CVector(0.0, 0.0, 0.0))
0x153: Push(CVector(0.0, 0.0, 1.0))
0x154: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: Stack[-6] = Stack[-1]
0x157: Return(); Pop(2)

0x158: Stack[-1] = 0
0x159: PushEmpty(object, object)
0x15a: @ FindActor(Stack[-1], Stack[-4])
0x15b: Pop(0)
0x15c: Pop(0); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15e: Push("Door ")
0x15f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x160: Push(" not found")
0x161: Pop(2); Push(Stack[-2] + Stack[-1]);
0x162: @ Trace(Stack[-1])
0x163: Pop(1)
0x164: GOTO 0x168

0x165: Push("locked")
0x166: @@ SetProperty(Stack[-1], Stack[-4])
0x167: Pop(1)
0x168: Return(); Pop(2)

0x169: Stack[-1] = 0
0x16a: PushEmpty(int, int, object, int, int, object)
0x16b: Push(Stack[-8])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: @@ size(Stack[-3])
0x16e: Pop(0)
0x16f: Stack[-2] = (int) 0
0x170: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x171: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x172: @@ get(Stack[-1], Stack[-2])
0x173: Pop(0)
0x174: Push(Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: @ Trigger(Stack[-1], Stack[-7])
0x177: Pop(0)
0x178: Stack[-1] = 0
0x179: Push((int) 1)
0x17a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x17b: GOTO 0x170

0x17c: Return(); Pop(6)

