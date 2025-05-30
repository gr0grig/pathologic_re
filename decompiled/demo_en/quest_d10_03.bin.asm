GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_b10q04_bull
	pers_avrox
	b10q04_bull.xml
	pt_d10q03_morlok1
	pers_morlok
	d10q03_morlok.xml
	add
	pt_d10q03_morlok2
	pt_d10q03_morlok3
	pt_d10q03_salesman
	pers_salesman
	d10q03_salesman.xml
	pt_d10q03_people1
	pers_worker
	d10q03_worker.xml
	pt_d10q03_people2
	pers_dohodyaga
	d10q03_dohodyaga.xml
	pt_d10q03_people3
	pers_unosha
	d10q03_unosha.xml
	pt_d10q03_people4
	pers_alkash
	d10q03_alkash.xml
	place_sanitars
	cleanup
	pt_b11q04_sanitar
	GetLocator
	pers_sanitar
	b11q04_sanitar.xml
	pt_b11q04_corpse
	scripted
	b11q04_corpse.xml
	fail
	completed
	d10q03
	cleaunp
	Locator 
	 doesn't exist
	AddStationaryActor
	size
	get
	Remove
	clear

Import:
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x61 Vars = (string)
		EVENT_9 Op = 0xf4 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0xff

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call2 0xff

0x7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: @ GetMainOutdoorScene(Stack[-1])
0xa: Pop(0)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-4] = Stack[-6]
0xd: Stack[-3] = "pt_b10q04_bull"
0xe: Stack[-2] = "pers_avrox"
0xf: Stack[-1] = "b10q04_bull.xml"
0x10: Call2 0x105

0x11: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(object, object, string, string, string)
0x14: Stack[-4] = Stack[-6]
0x15: Stack[-3] = "pt_d10q03_morlok1"
0x16: Stack[-2] = "pers_morlok"
0x17: Stack[-1] = "d10q03_morlok.xml"
0x18: Call2 0x105

0x19: Pop(4)
0x1a: @@ add(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-4] = Stack[-6]
0x1e: Stack[-3] = "pt_d10q03_morlok2"
0x1f: Stack[-2] = "pers_morlok"
0x20: Stack[-1] = "d10q03_morlok.xml"
0x21: Call2 0x105

0x22: Pop(4)
0x23: @@ add(Stack[-1])
0x24: Pop(1)
0x25: PushEmpty(object, object, string, string, string)
0x26: Stack[-4] = Stack[-6]
0x27: Stack[-3] = "pt_d10q03_morlok3"
0x28: Stack[-2] = "pers_morlok"
0x29: Stack[-1] = "d10q03_morlok.xml"
0x2a: Call2 0x105

0x2b: Pop(4)
0x2c: @@ add(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(object, object, string, string, string)
0x2f: Stack[-4] = Stack[-6]
0x30: Stack[-3] = "pt_d10q03_salesman"
0x31: Stack[-2] = "pers_salesman"
0x32: Stack[-1] = "d10q03_salesman.xml"
0x33: Call2 0x105

0x34: Pop(4)
0x35: @@ add(Stack[-1])
0x36: Pop(1)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-4] = Stack[-6]
0x39: Stack[-3] = "pt_d10q03_people1"
0x3a: Stack[-2] = "pers_worker"
0x3b: Stack[-1] = "d10q03_worker.xml"
0x3c: Call2 0x105

0x3d: Pop(4)
0x3e: @@ add(Stack[-1])
0x3f: Pop(1)
0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-4] = Stack[-6]
0x42: Stack[-3] = "pt_d10q03_people2"
0x43: Stack[-2] = "pers_dohodyaga"
0x44: Stack[-1] = "d10q03_dohodyaga.xml"
0x45: Call2 0x105

0x46: Pop(4)
0x47: @@ add(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(object, object, string, string, string)
0x4a: Stack[-4] = Stack[-6]
0x4b: Stack[-3] = "pt_d10q03_people3"
0x4c: Stack[-2] = "pers_unosha"
0x4d: Stack[-1] = "d10q03_unosha.xml"
0x4e: Call2 0x105

0x4f: Pop(4)
0x50: @@ add(Stack[-1])
0x51: Pop(1)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-4] = Stack[-6]
0x54: Stack[-3] = "pt_d10q03_people4"
0x55: Stack[-2] = "pers_alkash"
0x56: Stack[-1] = "d10q03_alkash.xml"
0x57: Call2 0x105

0x58: Pop(4)
0x59: @@ add(Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty(int)
0x5c: Stack[-1] = (int) 10
0x5d: Call2 0xe1

0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: Stack[-1] = 0
0x61: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector)
0x62: @ Trace(Stack[-11])
0x63: Pop(0)
0x64: Push("place_sanitars")
0x65: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x67: PushEmpty(object, string)
0x68: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x69: Stack[-1] = "cleanup"
0x6a: Call2 0x150

0x6b: Pop(2)
0x6c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6e: Push("cleanup")
0x6f: @ Trigger(Stack[-1], Stack[-1])
0x70: Pop(1)
0x71: @ GetMainOutdoorScene(Stack[-5])
0x72: Pop(0)
0x73: Stack[-4] = (int) 1
0x74: Push("pt_b11q04_sanitar")
0x75: Pop(1); Push(Stack[-1] + Stack[-5]);
0x76: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x77: Pop(1)
0x78: Pop(0); Push((bool) Stack[-3] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x88

0x7b: PushEmpty(object, object, string, string, string)
0x7c: Stack[-4] = Stack[-10]
0x7d: Push("pt_b11q04_sanitar")
0x7e: Stack[-4] = Stack[-1] + Stack[-10]; Pop(1);
0x7f: Stack[-2] = "pers_sanitar"
0x80: Stack[-1] = "b11q04_sanitar.xml"
0x81: Call2 0x129

0x82: Pop(4)
0x83: @@ add(Stack[-1])
0x84: Pop(1)
0x85: Push((int) 1)
0x86: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x87: GOTO 0x74

0x88: PushEmpty(object, object, string, string, string)
0x89: Stack[-4] = Stack[-10]
0x8a: Stack[-3] = "pt_b11q04_corpse"
0x8b: Stack[-2] = "scripted"
0x8c: Stack[-1] = "b11q04_corpse.xml"
0x8d: Call2 0x117

0x8e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x8f: Pop(5)
0x90: Stack[-5] = 0
0x91: GOTO 0x9f

0x92: Push("fail")
0x93: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x95: PushEmpty()
0x96: Call2 0xae

0x97: Pop(0)
0x98: GOTO 0x9f

0x99: Push("completed")
0x9a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: PushEmpty()
0x9d: Call2 0xb6

0x9e: Pop(0)
0x9f: Return(); Pop(10)

0xa0: PushEmpty(int, int)
0xa1: Push("d10q03")
0xa2: @ GetVariable(Stack[-1], Stack[-2])
0xa3: Pop(1)
0xa4: Push((int) 1000)
0xa5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0xae

0xa9: Pop(0)
0xaa: PushEmpty()
0xab: Call2 0xc9

0xac: Pop(0)
0xad: Return(); Pop(2)

0xae: Push("d10q03")
0xaf: Push((int) -1)
0xb0: @ SetVariable(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: PushEmpty()
0xb3: Call2 0xbe

0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: Push("d10q03")
0xb7: Push((int) 1000)
0xb8: @ SetVariable(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: PushEmpty()
0xbb: Call2 0xbe

0xbc: Pop(0)
0xbd: Return(); Pop(0)

0xbe: PushEmpty(object, string)
0xbf: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = "cleanup"
0xc1: Call2 0x150

0xc2: Pop(2)
0xc3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc5: Push("cleanup")
0xc6: @ Trigger(Stack[-1], Stack[-1])
0xc7: Pop(1)
0xc8: Return(); Pop(0)

0xc9: EventDisable(26)
0xca: PushEmpty()
0xcb: Call2 0xbe

0xcc: Pop(0)
0xcd: PushEmpty(object)
0xce: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcf: Call2 0x13b

0xd0: Pop(1)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: Push("cleaunp")
0xd4: @ Trigger(Stack[-3], Stack[-1])
0xd5: Pop(1)
0xd6: Push( Stack[1 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: Push("cleanup")
0xd9: @ Trigger(Stack[-1], Stack[-1])
0xda: Pop(1)
0xdb: PushEmpty(object)
0xdc: Call2 0xf9

0xdd: Pop(0)
0xde: @ RemoveActor(Stack[-1])
0xdf: Pop(1)
0xe0: Return(); Pop(0)

0xe1: PushEmpty(float, float)
0xe2: @ GetGameTime(Stack[-1])
0xe3: Pop(0)
0xe4: Push((int) 24)
0xe5: Pop(1); Push(Stack[-4] * Stack[-1]);
0xe6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe8: PushEmpty()
0xe9: Call2 0xc9

0xea: Pop(0)
0xeb: GOTO 0xf3

0xec: Push((int) 0)
0xed: Push((int) 24)
0xee: Pop(1); Push(Stack[-5] * Stack[-1]);
0xef: @ SetTimeEvent(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: @ Hold()
0xf2: Pop(0)
0xf3: Return(); Pop(2)

0xf4: PushEmpty()
0xf5: PushEmpty()
0xf6: Call2 0xa0

0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, object)
0xfa: @ self(Stack[-1])
0xfb: Pop(0)
0xfc: Stack[-3] = Stack[-1]
0xfd: Return(); Pop(2)

0xfe: Stack[-1] = 0
0xff: PushEmpty(object, object)
0x100: @ CreateObjectVector(Stack[-1])
0x101: Pop(0)
0x102: Stack[-3] = Stack[-1]
0x103: Return(); Pop(2)

0x104: Stack[-1] = 0
0x105: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x106: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x107: Pop(0)
0x108: Pop(0); Push((bool) Stack[-4] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10a: Push("Locator ")
0x10b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x10c: Push(" doesn't exist")
0x10d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10e: @ Trace(Stack[-1])
0x10f: Pop(1)
0x110: Stack[-1] = 0
0x111: GOTO 0x114

0x112: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x113: Pop(0)
0x114: Stack[-13] = Stack[-1]
0x115: Return(); Pop(8)

0x116: Stack[-1] = 0
0x117: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x118: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x119: Pop(0)
0x11a: Pop(0); Push((bool) Stack[-4] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11c: Push("Locator ")
0x11d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x11e: Push(" doesn't exist")
0x11f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x120: @ Trace(Stack[-1])
0x121: Pop(1)
0x122: Stack[-1] = 0
0x123: GOTO 0x126

0x124: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x125: Pop(0)
0x126: Stack[-13] = Stack[-1]
0x127: Return(); Pop(8)

0x128: Stack[-1] = 0
0x129: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x12b: Pop(0)
0x12c: Pop(0); Push((bool) Stack[-4] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12e: Push("Locator ")
0x12f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x130: Push(" doesn't exist")
0x131: Pop(2); Push(Stack[-2] + Stack[-1]);
0x132: @ Trace(Stack[-1])
0x133: Pop(1)
0x134: Stack[-1] = 0
0x135: GOTO 0x138

0x136: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x137: Pop(0)
0x138: Stack[-13] = Stack[-1]
0x139: Return(); Pop(8)

0x13a: Stack[-1] = 0
0x13b: PushEmpty(int, int, object, int, int, object)
0x13c: Push(Stack[-7])
0x13d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13e: @@ size(Stack[-3])
0x13f: Pop(0)
0x140: Stack[-2] = (int) 0
0x141: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x142: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x143: @@ get(Stack[-1], Stack[-2])
0x144: Pop(0)
0x145: Push(Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: @@ Remove()
0x148: Pop(0)
0x149: Stack[-1] = 0
0x14a: Push((int) 1)
0x14b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x14c: GOTO 0x141

0x14d: @@ clear()
0x14e: Pop(0)
0x14f: Return(); Pop(6)

0x150: PushEmpty(int, int, object, int, int, object)
0x151: Push(Stack[-8])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: @@ size(Stack[-3])
0x154: Pop(0)
0x155: Stack[-2] = (int) 0
0x156: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x157: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x158: @@ get(Stack[-1], Stack[-2])
0x159: Pop(0)
0x15a: Push(Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15c: @ Trigger(Stack[-1], Stack[-7])
0x15d: Pop(0)
0x15e: Stack[-1] = 0
0x15f: Push((int) 1)
0x160: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x161: GOTO 0x156

0x162: Return(); Pop(6)

