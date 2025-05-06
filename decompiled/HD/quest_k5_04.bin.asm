GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	sobor@door1
	pt_k5q04_sobor_patrol1
	pers_patrool
	k5q04_sobor_guard_patrol.xml
	add
	pt_k5q04_sobor_wasted
	pers_wasted_male
	k5q04_sobor_guard_wasted.xml
	pt_k5q04_sobor_patrol2
	cot_eva
	danko
	sobor_load
	k5q04SoborVisit
	sobor
	k5q04_crowd1
	static_keep.xml
	k5q04_crowd2
	pt_k5q04_people1
	pers_woman
	k5q04_sobor_woman.xml
	pt_k5q04_people2
	pers_nudegirl
	k5q04_sobor_nudegirl.xml
	pt_k5q04_people3
	pers_worker
	k5q04_sobor_worker.xml
	pt_k5q04_people4
	pers_boy
	k5q04_sobor_boy.xml
	pt_k5q04_people5
	pers_salesman
	k5q04_sobor_salesman.xml
	pt_k5q04_people6
	pt_k5q04_people7
	pt_k5q04_people8
	pers_unosha
	k5q04_sobor_unosha.xml
	pt_k5q04_people9
	pers_girl
	k5q04_sobor_girl.xml
	pt_k5q04_people10
	pt_k5q04_people11
	pt_k5q04_people12
	sobor_unload
	completed
	k5q04
	nodanko
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	size
	get
	clear
	Remove
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	Trace (1 args)
	SetVariable (2 args)
	AddActor (6 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x33 Vars = (string)
		EVENT_9 Op = 0x127 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "sobor@door1"
0x3: Stack[-1] = (bool) 1
0x4: Call2 0x156

0x5: Pop(2)
0x6: @ CreateObjectVector(Stack[-0])
0x7: Pop(0)
0x8: @ CreateObjectVector(Stack[-1])
0x9: Pop(0)
0xa: @ GetMainOutdoorScene(Stack[-1])
0xb: Pop(0)
0xc: PushEmpty(object, object, string, string, string)
0xd: Stack[-4] = Stack[-6]
0xe: Stack[-3] = "pt_k5q04_sobor_patrol1"
0xf: Stack[-2] = "pers_patrool"
0x10: Stack[-1] = "k5q04_sobor_guard_patrol.xml"
0x11: Call2 0x144

0x12: Pop(4)
0x13: @@ add(Stack[-1])
0x14: Pop(1)
0x15: PushEmpty(object, object, string, string, string)
0x16: Stack[-4] = Stack[-6]
0x17: Stack[-3] = "pt_k5q04_sobor_wasted"
0x18: Stack[-2] = "pers_wasted_male"
0x19: Stack[-1] = "k5q04_sobor_guard_wasted.xml"
0x1a: Call2 0x144

0x1b: Pop(4)
0x1c: @@ add(Stack[-1])
0x1d: Pop(1)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-4] = Stack[-6]
0x20: Stack[-3] = "pt_k5q04_sobor_patrol2"
0x21: Stack[-2] = "pers_patrool"
0x22: Stack[-1] = "k5q04_sobor_guard_patrol.xml"
0x23: Call2 0x144

0x24: Pop(4)
0x25: @@ add(Stack[-1])
0x26: Pop(1)
0x27: Push("cot_eva")
0x28: @ GetSceneByName(Stack[-2], Stack[-1])
0x29: Pop(1)
0x2a: Push("danko")
0x2b: @ Trigger(Stack[-2], Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty(int)
0x2e: Stack[-1] = (int) 5
0x2f: Call2 0x114

0x30: Pop(1)
0x31: Return(); Pop(2)

0x32: Stack[-1] = 0
0x33: PushEmpty(object, object)
0x34: @ Trace(Stack[-3])
0x35: Pop(0)
0x36: Push("sobor_load")
0x37: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0x39: PushEmpty()
0x3a: Call2 0x191

0x3b: Pop(0)
0x3c: Push("k5q04SoborVisit")
0x3d: Push((int) 1)
0x3e: @ SetVariable(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: Push("sobor")
0x41: @ GetSceneByName(Stack[-2], Stack[-1])
0x42: Pop(1)
0x43: Push("k5q04_crowd1")
0x44: Push(CVector(0.0, 0.0, 0.0))
0x45: Push(CVector(0.0, 0.0, 1.0))
0x46: Push("static_keep.xml")
0x47: @ AddActor(Stack[-2], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x48: Pop(4)
0x49: @ Trace(Stack[-2])
0x4a: Pop(0)
0x4b: Push("k5q04_crowd2")
0x4c: Push(CVector(0.0, 0.0, 0.0))
0x4d: Push(CVector(0.0, 0.0, 1.0))
0x4e: Push("static_keep.xml")
0x4f: @ AddActor(Stack[-3], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x50: Pop(4)
0x51: @ Trace(Stack[-3])
0x52: Pop(0)
0x53: PushEmpty(object, object, string, string, string)
0x54: Stack[-4] = Stack[-6]
0x55: Stack[-3] = "pt_k5q04_people1"
0x56: Stack[-2] = "pers_woman"
0x57: Stack[-1] = "k5q04_sobor_woman.xml"
0x58: Call2 0x132

0x59: Pop(4)
0x5a: @@ add(Stack[-1])
0x5b: Pop(1)
0x5c: PushEmpty(object, object, string, string, string)
0x5d: Stack[-4] = Stack[-6]
0x5e: Stack[-3] = "pt_k5q04_people2"
0x5f: Stack[-2] = "pers_nudegirl"
0x60: Stack[-1] = "k5q04_sobor_nudegirl.xml"
0x61: Call2 0x132

0x62: Pop(4)
0x63: @@ add(Stack[-1])
0x64: Pop(1)
0x65: PushEmpty(object, object, string, string, string)
0x66: Stack[-4] = Stack[-6]
0x67: Stack[-3] = "pt_k5q04_people3"
0x68: Stack[-2] = "pers_worker"
0x69: Stack[-1] = "k5q04_sobor_worker.xml"
0x6a: Call2 0x132

0x6b: Pop(4)
0x6c: @@ add(Stack[-1])
0x6d: Pop(1)
0x6e: PushEmpty(object, object, string, string, string)
0x6f: Stack[-4] = Stack[-6]
0x70: Stack[-3] = "pt_k5q04_people4"
0x71: Stack[-2] = "pers_boy"
0x72: Stack[-1] = "k5q04_sobor_boy.xml"
0x73: Call2 0x132

0x74: Pop(4)
0x75: @@ add(Stack[-1])
0x76: Pop(1)
0x77: PushEmpty(object, object, string, string, string)
0x78: Stack[-4] = Stack[-6]
0x79: Stack[-3] = "pt_k5q04_people5"
0x7a: Stack[-2] = "pers_salesman"
0x7b: Stack[-1] = "k5q04_sobor_salesman.xml"
0x7c: Call2 0x132

0x7d: Pop(4)
0x7e: @@ add(Stack[-1])
0x7f: Pop(1)
0x80: PushEmpty(object, object, string, string, string)
0x81: Stack[-4] = Stack[-6]
0x82: Stack[-3] = "pt_k5q04_people6"
0x83: Stack[-2] = "pers_woman"
0x84: Stack[-1] = "k5q04_sobor_woman.xml"
0x85: Call2 0x132

0x86: Pop(4)
0x87: @@ add(Stack[-1])
0x88: Pop(1)
0x89: PushEmpty(object, object, string, string, string)
0x8a: Stack[-4] = Stack[-6]
0x8b: Stack[-3] = "pt_k5q04_people7"
0x8c: Stack[-2] = "pers_worker"
0x8d: Stack[-1] = "k5q04_sobor_worker.xml"
0x8e: Call2 0x132

0x8f: Pop(4)
0x90: @@ add(Stack[-1])
0x91: Pop(1)
0x92: PushEmpty(object, object, string, string, string)
0x93: Stack[-4] = Stack[-6]
0x94: Stack[-3] = "pt_k5q04_people8"
0x95: Stack[-2] = "pers_unosha"
0x96: Stack[-1] = "k5q04_sobor_unosha.xml"
0x97: Call2 0x132

0x98: Pop(4)
0x99: @@ add(Stack[-1])
0x9a: Pop(1)
0x9b: PushEmpty(object, object, string, string, string)
0x9c: Stack[-4] = Stack[-6]
0x9d: Stack[-3] = "pt_k5q04_people9"
0x9e: Stack[-2] = "pers_girl"
0x9f: Stack[-1] = "k5q04_sobor_girl.xml"
0xa0: Call2 0x132

0xa1: Pop(4)
0xa2: @@ add(Stack[-1])
0xa3: Pop(1)
0xa4: PushEmpty(object, object, string, string, string)
0xa5: Stack[-4] = Stack[-6]
0xa6: Stack[-3] = "pt_k5q04_people10"
0xa7: Stack[-2] = "pers_worker"
0xa8: Stack[-1] = "k5q04_sobor_worker.xml"
0xa9: Call2 0x132

0xaa: Pop(4)
0xab: @@ add(Stack[-1])
0xac: Pop(1)
0xad: PushEmpty(object, object, string, string, string)
0xae: Stack[-4] = Stack[-6]
0xaf: Stack[-3] = "pt_k5q04_people11"
0xb0: Stack[-2] = "pers_woman"
0xb1: Stack[-1] = "k5q04_sobor_woman.xml"
0xb2: Call2 0x132

0xb3: Pop(4)
0xb4: @@ add(Stack[-1])
0xb5: Pop(1)
0xb6: PushEmpty(object, object, string, string, string)
0xb7: Stack[-4] = Stack[-6]
0xb8: Stack[-3] = "pt_k5q04_people12"
0xb9: Stack[-2] = "pers_unosha"
0xba: Stack[-1] = "k5q04_sobor_unosha.xml"
0xbb: Call2 0x132

0xbc: Pop(4)
0xbd: @@ add(Stack[-1])
0xbe: Pop(1)
0xbf: Stack[-1] = 0
0xc0: GOTO 0xdc

0xc1: Push("sobor_unload")
0xc2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc4: PushEmpty(object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x167

0xc7: Pop(1)
0xc8: PushEmpty(string, bool)
0xc9: Stack[-2] = "sobor@door1"
0xca: Stack[-1] = (bool) 1
0xcb: Call2 0x156

0xcc: Pop(2)
0xcd: @ Trace(Stack[-2])
0xce: Pop(0)
0xcf: @ RemoveActor(Stack[-2])
0xd0: Pop(0)
0xd1: @ Trace(Stack[-3])
0xd2: Pop(0)
0xd3: @ RemoveActor(Stack[-3])
0xd4: Pop(0)
0xd5: GOTO 0xdc

0xd6: Push("completed")
0xd7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0xf3

0xdb: Pop(0)
0xdc: Return(); Pop(2)

0xdd: PushEmpty(int, int)
0xde: Push("k5q04")
0xdf: @ GetVariable(Stack[-1], Stack[-2])
0xe0: Pop(1)
0xe1: Push((int) 1000)
0xe2: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe4: PushEmpty()
0xe5: Call2 0xeb

0xe6: Pop(0)
0xe7: PushEmpty()
0xe8: Call2 0xfc

0xe9: Pop(0)
0xea: Return(); Pop(2)

0xeb: Push("k5q04")
0xec: Push((int) -1)
0xed: @ SetVariable(Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: PushEmpty()
0xf0: Call2 0xfb

0xf1: Pop(0)
0xf2: Return(); Pop(0)

0xf3: Push("k5q04")
0xf4: Push((int) 1000)
0xf5: @ SetVariable(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: PushEmpty()
0xf8: Call2 0xfb

0xf9: Pop(0)
0xfa: Return(); Pop(0)

0xfb: Return(); Pop(0)

0xfc: PushEmpty(object, object)
0xfd: EventDisable(26)
0xfe: PushEmpty(object)
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x17c

0x101: Pop(1)
0x102: PushEmpty(string, bool)
0x103: Stack[-2] = "sobor@door1"
0x104: Stack[-1] = (bool) 1
0x105: Call2 0x156

0x106: Pop(2)
0x107: Push("cot_eva")
0x108: @ GetSceneByName(Stack[-2], Stack[-1])
0x109: Pop(1)
0x10a: Push("nodanko")
0x10b: @ Trigger(Stack[-2], Stack[-1])
0x10c: Pop(1)
0x10d: PushEmpty(object)
0x10e: Call2 0x12c

0x10f: Pop(0)
0x110: @ RemoveActor(Stack[-1])
0x111: Pop(1)
0x112: Return(); Pop(2)

0x113: Stack[-1] = 0
0x114: PushEmpty(float, float)
0x115: @ GetGameTime(Stack[-1])
0x116: Pop(0)
0x117: Push((int) 24)
0x118: Pop(1); Push(Stack[-4] * Stack[-1]);
0x119: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11b: PushEmpty()
0x11c: Call2 0xfc

0x11d: Pop(0)
0x11e: GOTO 0x126

0x11f: Push((int) 0)
0x120: Push((int) 24)
0x121: Pop(1); Push(Stack[-5] * Stack[-1]);
0x122: @ SetTimeEvent(Stack[-2], Stack[-1])
0x123: Pop(2)
0x124: @ Hold()
0x125: Pop(0)
0x126: Return(); Pop(2)

0x127: PushEmpty()
0x128: PushEmpty()
0x129: Call2 0xdd

0x12a: Pop(0)
0x12b: Return(); Pop(0)

0x12c: PushEmpty(object, object)
0x12d: @ self(Stack[-1])
0x12e: Pop(0)
0x12f: Stack[-3] = Stack[-1]
0x130: Return(); Pop(2)

0x131: Stack[-1] = 0
0x132: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x133: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x134: Pop(0)
0x135: Pop(0); Push((bool) Stack[-4] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x137: Push("Locator ")
0x138: Pop(1); Push(Stack[-1] + Stack[-12]);
0x139: Push(" doesn't exist")
0x13a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13b: @ Trace(Stack[-1])
0x13c: Pop(1)
0x13d: Stack[-1] = 0
0x13e: GOTO 0x141

0x13f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x140: Pop(0)
0x141: Stack[-13] = Stack[-1]
0x142: Return(); Pop(8)

0x143: Stack[-1] = 0
0x144: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x145: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x146: Pop(0)
0x147: Pop(0); Push((bool) Stack[-4] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: Push("Locator ")
0x14a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x14b: Push(" doesn't exist")
0x14c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14d: @ Trace(Stack[-1])
0x14e: Pop(1)
0x14f: Stack[-1] = 0
0x150: GOTO 0x153

0x151: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x152: Pop(0)
0x153: Stack[-13] = Stack[-1]
0x154: Return(); Pop(8)

0x155: Stack[-1] = 0
0x156: PushEmpty(object, object)
0x157: @ FindActor(Stack[-1], Stack[-4])
0x158: Pop(0)
0x159: Pop(0); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15b: Push("Door ")
0x15c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x15d: Push(" not found")
0x15e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15f: @ Trace(Stack[-1])
0x160: Pop(1)
0x161: GOTO 0x165

0x162: Push("locked")
0x163: @@ SetProperty(Stack[-1], Stack[-4])
0x164: Pop(1)
0x165: Return(); Pop(2)

0x166: Stack[-1] = 0
0x167: PushEmpty(int, int, object, int, int, object)
0x168: Push(Stack[-7])
0x169: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16a: @@ size(Stack[-3])
0x16b: Pop(0)
0x16c: Stack[-2] = (int) 0
0x16d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x16e: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x16f: @@ get(Stack[-1], Stack[-2])
0x170: Pop(0)
0x171: Push(Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x173: @ RemoveActor(Stack[-1])
0x174: Pop(0)
0x175: Stack[-1] = 0
0x176: Push((int) 1)
0x177: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x178: GOTO 0x16d

0x179: @@ clear()
0x17a: Pop(0)
0x17b: Return(); Pop(6)

0x17c: PushEmpty(int, int, object, int, int, object)
0x17d: Push(Stack[-7])
0x17e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17f: @@ size(Stack[-3])
0x180: Pop(0)
0x181: Stack[-2] = (int) 0
0x182: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x183: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x184: @@ get(Stack[-1], Stack[-2])
0x185: Pop(0)
0x186: Push(Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: @@ Remove()
0x189: Pop(0)
0x18a: Stack[-1] = 0
0x18b: Push((int) 1)
0x18c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x18d: GOTO 0x182

0x18e: @@ clear()
0x18f: Pop(0)
0x190: Return(); Pop(6)

0x191: PushEmpty(object, object)
0x192: Push((int) 746)
0x193: Push((int) 2)
0x194: Push((int) 539463)
0x195: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: PushEmpty(bool, object, int)
0x198: Stack[-2] = Stack[-4]
0x199: Stack[-1] = (int) 740
0x19a: Call2 0x1ab

0x19b: Pop(3)
0x19c: Return(); Pop(2)

0x19d: Stack[-1] = 0
0x19e: PushEmpty(object, object)
0x19f: @ GetDiaryRoot(Stack[-1])
0x1a0: Pop(0)
0x1a1: Pop(0); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: Push("Can't retrieve diary root")
0x1a4: @ Trace(Stack[-1])
0x1a5: Pop(1)
0x1a6: Stack[-3] = (bool) 0
0x1a7: Return(); Pop(2)

0x1a8: Stack[-3] = Stack[-1]
0x1a9: Return(); Pop(2)

0x1aa: Stack[-1] = 0
0x1ab: PushEmpty(object, object, int, object, object, int)
0x1ac: PushEmpty(object)
0x1ad: Call2 0x19e

0x1ae: Stack[-4] = Stack[-1]
0x1af: Pop(1)
0x1b0: @@ Find(Stack[-7], Stack[-2])
0x1b1: Pop(0)
0x1b2: Pop(0); Push((bool) Stack[-2] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b4: Push("Can't find diary parent with id: ")
0x1b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1b6: @ Trace(Stack[-1])
0x1b7: Pop(1)
0x1b8: Stack[-9] = (bool) 0
0x1b9: Return(); Pop(6)

0x1ba: @@ AddChild(Stack[-8])
0x1bb: Pop(0)
0x1bc: Push((int) 7)
0x1bd: @ SendWorldWndMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ GetCategory(Stack[-1])
0x1c0: Pop(0)
0x1c1: @ SetDiarySection(Stack[-1])
0x1c2: Pop(0)
0x1c3: Stack[-9] = (bool) 0
0x1c4: Return(); Pop(6)

0x1c5: Stack[-2] = 0
0x1c6: Stack[-3] = 0
