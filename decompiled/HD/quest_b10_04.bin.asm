GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_b10q04_bull
	pers_avrox
	b10q04_bull.xml
	termitnik_mat
	b8q03MladVladIsVictim
	pt_b10q04_prisoner
	NPC_MladVlad
	b10q04_mladvlad.xml
	NPC_BigVlad
	b10q04_bigvlad.xml
	place_morloks
	pt_b10q04_morlok
	pers_morlok
	b10q04_morlok.xml
	add
	pt_b10q04_morlok_mishka
	b10q04_morlok_mishka.xml
	pt_b10q04_morlok_laska
	b10q04_morlok_laska.xml
	pt_b10q04_morlok_spi4ka
	b10q04_morlok_spi4ka.xml
	init_storojka
	nolaska
	pt_b10q04_girl
	pers_girl
	b10q04_girl_laska.xml
	uprava_admin
	pt_b10q04_klara
	NPC_Klara
	b10q04_klara.xml
	vagon_army@door1
	vagon_army
	pt_b10q04_laska
	NPC_Laska
	b10q04_laska.xml
	pt_b10q04_officer
	pers_soldat
	b10q04_officer.xml
	restore_laska
	cleanup
	fail
	completed
	b10q04
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
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	Trace (1 args)
	Trigger (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x34 Vars = (string)
		EVENT_9 Op = 0x126 Vars = (int, float)


0x0: PushEmpty(object, object, object, int, object, object, object, int)
0x1: PushEmpty(object)
0x2: Call2 0x131

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: @ GetMainOutdoorScene(Stack[-4])
0x6: Pop(0)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-4] = Stack[-9]
0x9: Stack[-3] = "pt_b10q04_bull"
0xa: Stack[-2] = "pers_avrox"
0xb: Stack[-1] = "b10q04_bull.xml"
0xc: Call2 0x137

0xd: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0xe: Pop(5)
0xf: @ GetScene(Stack[-2])
0x10: Pop(0)
0x11: Push("termitnik_mat")
0x12: @ GetSceneByName(Stack[-4], Stack[-1])
0x13: Pop(1)
0x14: Pop(0); Push((bool) Stack[-2] != Stack[-3])
0x15: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x16: Push("b8q03MladVladIsVictim")
0x17: @ GetVariable(Stack[-1], Stack[-2])
0x18: Pop(1)
0x19: Push(Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-4] = Stack[-8]
0x1d: Stack[-3] = "pt_b10q04_prisoner"
0x1e: Stack[-2] = "NPC_MladVlad"
0x1f: Stack[-1] = "b10q04_mladvlad.xml"
0x20: Call2 0x137

0x21: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x22: Pop(5)
0x23: GOTO 0x2c

0x24: PushEmpty(object, object, string, string, string)
0x25: Stack[-4] = Stack[-8]
0x26: Stack[-3] = "pt_b10q04_prisoner"
0x27: Stack[-2] = "NPC_BigVlad"
0x28: Stack[-1] = "b10q04_bigvlad.xml"
0x29: Call2 0x137

0x2a: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x2b: Pop(5)
0x2c: PushEmpty(int)
0x2d: Stack[-1] = (int) 10
0x2e: Call2 0x113

0x2f: Pop(1)
0x30: Return(); Pop(8)

0x31: Stack[-2] = 0
0x32: Stack[-3] = 0
0x33: Stack[-4] = 0
0x34: PushEmpty(object, object, object, object, object, object)
0x35: @ Trace(Stack[-7])
0x36: Pop(0)
0x37: Push("place_morloks")
0x38: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x3a: @ GetMainOutdoorScene(Stack[-3])
0x3b: Pop(0)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-4] = Stack[-8]
0x3e: Stack[-3] = "pt_b10q04_morlok"
0x3f: Stack[-2] = "pers_morlok"
0x40: Stack[-1] = "b10q04_morlok.xml"
0x41: Call2 0x137

0x42: Pop(4)
0x43: @@ add(Stack[-1])
0x44: Pop(1)
0x45: PushEmpty(object, object, string, string, string)
0x46: Stack[-4] = Stack[-8]
0x47: Stack[-3] = "pt_b10q04_morlok_mishka"
0x48: Stack[-2] = "pers_morlok"
0x49: Stack[-1] = "b10q04_morlok_mishka.xml"
0x4a: Call2 0x137

0x4b: Pop(4)
0x4c: @@ add(Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-4] = Stack[-8]
0x50: Stack[-3] = "pt_b10q04_morlok_laska"
0x51: Stack[-2] = "pers_morlok"
0x52: Stack[-1] = "b10q04_morlok_laska.xml"
0x53: Call2 0x137

0x54: Pop(4)
0x55: @@ add(Stack[-1])
0x56: Pop(1)
0x57: PushEmpty(object, object, string, string, string)
0x58: Stack[-4] = Stack[-8]
0x59: Stack[-3] = "pt_b10q04_morlok_spi4ka"
0x5a: Stack[-2] = "pers_morlok"
0x5b: Stack[-1] = "b10q04_morlok_spi4ka.xml"
0x5c: Call2 0x137

0x5d: Pop(4)
0x5e: @@ add(Stack[-1])
0x5f: Pop(1)
0x60: Stack[-3] = 0
0x61: Push("init_storojka")
0x62: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x64: Push("storojka")
0x65: @ GetSceneByName(Stack[-3], Stack[-1])
0x66: Pop(1)
0x67: Push("nolaska")
0x68: @ Trigger(Stack[-3], Stack[-1])
0x69: Pop(1)
0x6a: PushEmpty(object, object, string, string, string)
0x6b: Stack[-4] = Stack[-7]
0x6c: Stack[-3] = "pt_b10q04_girl"
0x6d: Stack[-2] = "pers_girl"
0x6e: Stack[-1] = "b10q04_girl_laska.xml"
0x6f: Call2 0x137

0x70: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x71: Pop(5)
0x72: Push("uprava_admin")
0x73: @ GetSceneByName(Stack[-3], Stack[-1])
0x74: Pop(1)
0x75: PushEmpty(object, object, string, string, string)
0x76: Stack[-4] = Stack[-7]
0x77: Stack[-3] = "pt_b10q04_klara"
0x78: Stack[-2] = "NPC_Klara"
0x79: Stack[-1] = "b10q04_klara.xml"
0x7a: Call2 0x137

0x7b: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x7c: Pop(5)
0x7d: PushEmpty(string, bool)
0x7e: Stack[-2] = "vagon_army@door1"
0x7f: Stack[-1] = (bool) 0
0x80: Call2 0x149

0x81: Pop(2)
0x82: Push("vagon_army")
0x83: @ GetSceneByName(Stack[-3], Stack[-1])
0x84: Pop(1)
0x85: PushEmpty(object, object, string, string, string)
0x86: Stack[-4] = Stack[-7]
0x87: Stack[-3] = "pt_b10q04_laska"
0x88: Stack[-2] = "NPC_Laska"
0x89: Stack[-1] = "b10q04_laska.xml"
0x8a: Call2 0x137

0x8b: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x8c: Pop(5)
0x8d: PushEmpty(object, object, string, string, string)
0x8e: Stack[-4] = Stack[-7]
0x8f: Stack[-3] = "pt_b10q04_officer"
0x90: Stack[-2] = "pers_soldat"
0x91: Stack[-1] = "b10q04_officer.xml"
0x92: Call2 0x137

0x93: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x94: Pop(5)
0x95: Stack[-2] = 0
0x96: GOTO 0xb9

0x97: Push("restore_laska")
0x98: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: Push("cleanup")
0x9d: @ Trigger(Stack[-3], Stack[-1])
0x9e: Pop(1)
0x9f: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa1: Push("cleanup")
0xa2: @ Trigger(Stack[-2], Stack[-1])
0xa3: Pop(1)
0xa4: Push("storojka")
0xa5: @ GetSceneByName(Stack[-2], Stack[-1])
0xa6: Pop(1)
0xa7: Push("laska")
0xa8: @ Trigger(Stack[-2], Stack[-1])
0xa9: Pop(1)
0xaa: Stack[-1] = 0
0xab: GOTO 0xb9

0xac: Push("fail")
0xad: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xaf: PushEmpty()
0xb0: Call2 0xc8

0xb1: Pop(0)
0xb2: GOTO 0xb9

0xb3: Push("completed")
0xb4: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0xd0

0xb8: Pop(0)
0xb9: Return(); Pop(6)

0xba: PushEmpty(int, int)
0xbb: Push("b10q04")
0xbc: @ GetVariable(Stack[-1], Stack[-2])
0xbd: Pop(1)
0xbe: Push((int) 1000)
0xbf: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc1: PushEmpty()
0xc2: Call2 0xc8

0xc3: Pop(0)
0xc4: PushEmpty()
0xc5: Call2 0xfa

0xc6: Pop(0)
0xc7: Return(); Pop(2)

0xc8: Push("b10q04")
0xc9: Push((int) -1)
0xca: @ SetVariable(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: PushEmpty()
0xcd: Call2 0xd8

0xce: Pop(0)
0xcf: Return(); Pop(0)

0xd0: Push("b10q04")
0xd1: Push((int) 1000)
0xd2: @ SetVariable(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: PushEmpty()
0xd5: Call2 0xd8

0xd6: Pop(0)
0xd7: Return(); Pop(0)

0xd8: PushEmpty(object, object)
0xd9: Push( Stack[2 + Tasks[-1].StackPointer] )
0xda: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdb: Push("cleanup")
0xdc: @ Trigger(Stack[-2], Stack[-1])
0xdd: Pop(1)
0xde: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe0: Push("cleanup")
0xe1: @ Trigger(Stack[-3], Stack[-1])
0xe2: Pop(1)
0xe3: Push( Stack[4 + Tasks[-1].StackPointer] )
0xe4: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe5: Push("cleanup")
0xe6: @ Trigger(Stack[-4], Stack[-1])
0xe7: Pop(1)
0xe8: Push( Stack[5 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: Push("cleanup")
0xeb: @ Trigger(Stack[-5], Stack[-1])
0xec: Pop(1)
0xed: Push( Stack[6 + Tasks[-1].StackPointer] )
0xee: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xef: Push("cleanup")
0xf0: @ Trigger(Stack[-6], Stack[-1])
0xf1: Pop(1)
0xf2: Push("storojka")
0xf3: @ GetSceneByName(Stack[-2], Stack[-1])
0xf4: Pop(1)
0xf5: Push("laska")
0xf6: @ Trigger(Stack[-2], Stack[-1])
0xf7: Pop(1)
0xf8: Return(); Pop(2)

0xf9: Stack[-1] = 0
0xfa: EventDisable(26)
0xfb: PushEmpty()
0xfc: Call2 0xd8

0xfd: Pop(0)
0xfe: PushEmpty(object, string)
0xff: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x100: Stack[-1] = "cleanup"
0x101: Call2 0x15a

0x102: Pop(2)
0x103: PushEmpty(string, bool)
0x104: Stack[-2] = "vagon_army@door1"
0x105: Stack[-1] = (bool) 1
0x106: Call2 0x149

0x107: Pop(2)
0x108: Push( Stack[1 + Tasks[-1].StackPointer] )
0x109: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10a: Push("cleanup")
0x10b: @ Trigger(Stack[-1], Stack[-1])
0x10c: Pop(1)
0x10d: PushEmpty(object)
0x10e: Call2 0x12b

0x10f: Pop(0)
0x110: @ RemoveActor(Stack[-1])
0x111: Pop(1)
0x112: Return(); Pop(0)

0x113: PushEmpty(float, float)
0x114: @ GetGameTime(Stack[-1])
0x115: Pop(0)
0x116: Push((int) 24)
0x117: Pop(1); Push(Stack[-4] * Stack[-1]);
0x118: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11a: PushEmpty()
0x11b: Call2 0xfa

0x11c: Pop(0)
0x11d: GOTO 0x125

0x11e: Push((int) 0)
0x11f: Push((int) 24)
0x120: Pop(1); Push(Stack[-5] * Stack[-1]);
0x121: @ SetTimeEvent(Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: @ Hold()
0x124: Pop(0)
0x125: Return(); Pop(2)

0x126: PushEmpty()
0x127: PushEmpty()
0x128: Call2 0xba

0x129: Pop(0)
0x12a: Return(); Pop(0)

0x12b: PushEmpty(object, object)
0x12c: @ self(Stack[-1])
0x12d: Pop(0)
0x12e: Stack[-3] = Stack[-1]
0x12f: Return(); Pop(2)

0x130: Stack[-1] = 0
0x131: PushEmpty(object, object)
0x132: @ CreateObjectVector(Stack[-1])
0x133: Pop(0)
0x134: Stack[-3] = Stack[-1]
0x135: Return(); Pop(2)

0x136: Stack[-1] = 0
0x137: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x138: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x139: Pop(0)
0x13a: Pop(0); Push((bool) Stack[-4] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13c: Push("Locator ")
0x13d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x13e: Push(" doesn't exist")
0x13f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x140: @ Trace(Stack[-1])
0x141: Pop(1)
0x142: Stack[-1] = 0
0x143: GOTO 0x146

0x144: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x145: Pop(0)
0x146: Stack[-13] = Stack[-1]
0x147: Return(); Pop(8)

0x148: Stack[-1] = 0
0x149: PushEmpty(object, object)
0x14a: @ FindActor(Stack[-1], Stack[-4])
0x14b: Pop(0)
0x14c: Pop(0); Push((bool) Stack[-1] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14e: Push("Door ")
0x14f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x150: Push(" not found")
0x151: Pop(2); Push(Stack[-2] + Stack[-1]);
0x152: @ Trace(Stack[-1])
0x153: Pop(1)
0x154: GOTO 0x158

0x155: Push("locked")
0x156: @@ SetProperty(Stack[-1], Stack[-4])
0x157: Pop(1)
0x158: Return(); Pop(2)

0x159: Stack[-1] = 0
0x15a: PushEmpty(int, int, object, int, int, object)
0x15b: Push(Stack[-8])
0x15c: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15d: @@ size(Stack[-3])
0x15e: Pop(0)
0x15f: Stack[-2] = (int) 0
0x160: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x161: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x162: @@ get(Stack[-1], Stack[-2])
0x163: Pop(0)
0x164: Push(Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x166: @ Trigger(Stack[-1], Stack[-7])
0x167: Pop(0)
0x168: Stack[-1] = 0
0x169: Push((int) 1)
0x16a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x16b: GOTO 0x160

0x16c: Return(); Pop(6)

