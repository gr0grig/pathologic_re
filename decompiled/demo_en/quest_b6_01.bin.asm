GlobalVarCount = 1
	G_VAR_0 object Bull

Strings:
	b6q01KlaraVisit
	place_klara
	storojka
	pt_b6q01_klara
	NPC_Klara
	b6q01_klara.xml
	remove_klara
	cleanup
	cutscene
	cs_burah_danko_microscope
	cutscene_end
	b6q01MicroscopeCS
	init_termitnik
	termitnik2
	pt_b6q01_mat
	NPC_Mat
	b6q01_mat.xml
	pt_b6q01_agony
	GetLocator
	pers_worker
	agony1_man.xml
	pers_morlok
	agony1_morlok.xml
	pers_woman
	agony1_woman.xml
	pt_b6q01_butcher1
	pers_butcher
	b6q01_butcher.xml
	add
	pt_b6q01_butcher2
	pt_b6q01_butcher3
	clean_termitnik
	init_altar
	pt_b6q01_morlok1
	b6q01_morlok1.xml
	pt_b6q01_morlok2
	b6q01_morlok2.xml
	pt_b6q01_bull
	pers_bull
	b6q01_bull.xml
	sacrifice
	GetActor
	Remove
	quest_b6_01_cutscene
	sacrifice_end
	b6q01
	fail
	completed
	.bin
	Locator 
	 doesn't exist
	AddStationaryActor
	size
	get

Import:
	Hold (0 args)
	GetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	irand (2 args)
	AddActor (6 args)
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddMessage (4 args)
	SendWorldWndMessage (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object) Params = 0
		EVENT_9 Op = 0xc Vars = (int, float)
		EVENT_26 Op = 0x17 Vars = (string)


0x0: PushEmpty(object)
0x1: Call2 0x151

0x2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Call2 0x151

0x6: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: @ Hold()
0x9: Pop(0)
0xa: GOTO 0x8

0xb: Return(); Pop(0)

0xc: PushEmpty(int, int)
0xd: Push("b6q01KlaraVisit")
0xe: @ GetVariable(Stack[-1], Stack[-2])
0xf: Pop(1)
0x10: Pop(0); Push((bool) Stack[-1] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x12: PushEmpty(int, float)
0x13: Stack[-1] = Stack[-5]
0x14: Call2 0x1ac

0x15: Pop(2)
0x16: Return(); Pop(2)

0x17: PushEmpty(object, float, object, int, bool, cvector, cvector, string, string, int, object, object, object, object, int, object, float, object, int, bool, cvector, cvector, string, string, int, object, object, object, object, int)
0x18: @ Trace(Stack[-31])
0x19: Pop(0)
0x1a: Push("place_klara")
0x1b: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x1d: Push("storojka")
0x1e: @ GetSceneByName(Stack[-16], Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-4] = Stack[-20]
0x22: Stack[-3] = "pt_b6q01_klara"
0x23: Stack[-2] = "NPC_Klara"
0x24: Stack[-1] = "b6q01_klara.xml"
0x25: Call2 0x162

0x26: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: @ GetGameTime(Stack[-14])
0x29: Pop(0)
0x2a: Push((float)0.4)
0x2b: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x2c: Push((int) 0)
0x2d: @ SetTimeEvent(Stack[-1], Stack[-15])
0x2e: Pop(1)
0x2f: Stack[-15] = 0
0x30: GOTO 0x111

0x31: Push("remove_klara")
0x32: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: Push("cleanup")
0x35: @ Trigger(Stack[-0], Stack[-1])
0x36: Pop(1)
0x37: GOTO 0x111

0x38: Push("cutscene")
0x39: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: PushEmpty(object, string)
0x3c: Stack[-1] = "cs_burah_danko_microscope"
0x3d: Call2 0x157

0x3e: Pop(2)
0x3f: GOTO 0x111

0x40: Push("cutscene_end")
0x41: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: Push("b6q01MicroscopeCS")
0x44: Push((int) 1)
0x45: @ SetVariable(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: GOTO 0x111

0x48: Push("init_termitnik")
0x49: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x4b: Push("termitnik2")
0x4c: @ GetSceneByName(Stack[-14], Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-4] = Stack[-18]
0x50: Stack[-3] = "pt_b6q01_mat"
0x51: Stack[-2] = "NPC_Mat"
0x52: Stack[-1] = "b6q01_mat.xml"
0x53: Call2 0x162

0x54: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x55: Pop(5)
0x56: Stack[-12] = (int) 1
0x57: Push("pt_b6q01_agony")
0x58: Pop(1); Push(Stack[-1] + Stack[-13]);
0x59: @@ GetLocator(Stack[-1], Stack[-12], Stack[-11], Stack[-10])
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-11] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: GOTO 0x75

0x5e: Push((int) 3)
0x5f: @ irand(Stack[-7], Stack[-1])
0x60: Pop(1)
0x61: Push((int) 0)
0x62: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: Stack[-8] = "pers_worker"
0x65: Stack[-7] = "agony1_man.xml"
0x66: GOTO 0x6f

0x67: Push((int) 1)
0x68: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6a: Stack[-8] = "pers_morlok"
0x6b: Stack[-7] = "agony1_morlok.xml"
0x6c: GOTO 0x6f

0x6d: Stack[-8] = "pers_woman"
0x6e: Stack[-7] = "agony1_woman.xml"
0x6f: @ AddActor(Stack[-5], Stack[-8], Stack[-13], Stack[-10], Stack[-9], Stack[-7])
0x70: Pop(0)
0x71: Stack[-5] = 0
0x72: Push((int) 1)
0x73: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x74: GOTO 0x57

0x75: PushEmpty(object, object, string, string, string)
0x76: Stack[-4] = Stack[-18]
0x77: Stack[-3] = "pt_b6q01_butcher1"
0x78: Stack[-2] = "pers_butcher"
0x79: Stack[-1] = "b6q01_butcher.xml"
0x7a: Call2 0x162

0x7b: Pop(4)
0x7c: @@ add(Stack[-1])
0x7d: Pop(1)
0x7e: PushEmpty(object, object, string, string, string)
0x7f: Stack[-4] = Stack[-18]
0x80: Stack[-3] = "pt_b6q01_butcher2"
0x81: Stack[-2] = "pers_butcher"
0x82: Stack[-1] = "b6q01_butcher.xml"
0x83: Call2 0x162

0x84: Pop(4)
0x85: @@ add(Stack[-1])
0x86: Pop(1)
0x87: PushEmpty(object, object, string, string, string)
0x88: Stack[-4] = Stack[-18]
0x89: Stack[-3] = "pt_b6q01_butcher3"
0x8a: Stack[-2] = "pers_butcher"
0x8b: Stack[-1] = "b6q01_butcher.xml"
0x8c: Call2 0x162

0x8d: Pop(4)
0x8e: @@ add(Stack[-1])
0x8f: Pop(1)
0x90: Stack[-13] = 0
0x91: GOTO 0x111

0x92: Push("clean_termitnik")
0x93: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x95: Push("cleanup")
0x96: @ Trigger(Stack[-1], Stack[-1])
0x97: Pop(1)
0x98: PushEmpty(object, string)
0x99: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x9a: Stack[-1] = "cleanup"
0x9b: Call2 0x199

0x9c: Pop(2)
0x9d: PushEmpty(object, string)
0x9e: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x9f: Stack[-1] = "cleanup"
0xa0: Call2 0x199

0xa1: Pop(2)
0xa2: GOTO 0x111

0xa3: Push("init_altar")
0xa4: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xa6: @ GetMainOutdoorScene(Stack[-4])
0xa7: Pop(0)
0xa8: PushEmpty(object, object, string, string, string)
0xa9: Stack[-4] = Stack[-9]
0xaa: Stack[-3] = "pt_b6q01_morlok1"
0xab: Stack[-2] = "pers_morlok"
0xac: Stack[-1] = "b6q01_morlok1.xml"
0xad: Call2 0x174

0xae: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0xaf: Pop(5)
0xb0: PushEmpty(object, object, string, string, string)
0xb1: Stack[-4] = Stack[-9]
0xb2: Stack[-3] = "pt_b6q01_morlok2"
0xb3: Stack[-2] = "pers_morlok"
0xb4: Stack[-1] = "b6q01_morlok2.xml"
0xb5: Call2 0x174

0xb6: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xb7: Pop(5)
0xb8: Push(GlobalVars[0])
0xb9: PushEmpty(object, object, string, string, string)
0xba: Stack[-4] = Stack[-10]
0xbb: Stack[-3] = "pt_b6q01_bull"
0xbc: Stack[-2] = "pers_bull"
0xbd: Stack[-1] = "b6q01_bull.xml"
0xbe: Call2 0x162

0xbf: Stack[-6] = Stack[-5]
0xc0: Pop(5)
0xc1: GlobalVars[0] = Stack[-1]; Pop(1)
0xc2: Stack[-4] = 0
0xc3: GOTO 0x111

0xc4: Push("sacrifice")
0xc5: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xc7: Push(GlobalVars[0])
0xc8: @ RemoveActor(Stack[-1])
0xc9: Pop(1)
0xca: @@ GetActor(Stack[-3])
0xcb: Pop(0)
0xcc: @ RemoveActor(Stack[-3])
0xcd: Pop(0)
0xce: @@ Remove()
0xcf: Pop(0)
0xd0: @@ GetActor(Stack[-3])
0xd1: Pop(0)
0xd2: @ RemoveActor(Stack[-3])
0xd3: Pop(0)
0xd4: @@ Remove()
0xd5: Pop(0)
0xd6: PushEmpty(object, string)
0xd7: Stack[-1] = "quest_b6_01_cutscene"
0xd8: Call2 0x157

0xd9: Pop(2)
0xda: Stack[-3] = 0
0xdb: GOTO 0x111

0xdc: Push("sacrifice_end")
0xdd: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xdf: @ GetMainOutdoorScene(Stack[-2])
0xe0: Pop(0)
0xe1: PushEmpty(object, object, string, string, string)
0xe2: Stack[-4] = Stack[-7]
0xe3: Stack[-3] = "pt_b6q01_morlok1"
0xe4: Stack[-2] = "pers_morlok"
0xe5: Stack[-1] = "b6q01_morlok1.xml"
0xe6: Call2 0x186

0xe7: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0xe8: Pop(5)
0xe9: PushEmpty(object, object, string, string, string)
0xea: Stack[-4] = Stack[-7]
0xeb: Stack[-3] = "pt_b6q01_morlok2"
0xec: Stack[-2] = "pers_morlok"
0xed: Stack[-1] = "b6q01_morlok2.xml"
0xee: Call2 0x186

0xef: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xf0: Pop(5)
0xf1: Stack[-2] = 0
0xf2: GOTO 0x111

0xf3: Push("cleanup")
0xf4: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf6: Push("b6q01")
0xf7: @ GetVariable(Stack[-1], Stack[-2])
0xf8: Pop(1)
0xf9: Push((int) 1000)
0xfa: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x112

0xfe: Pop(0)
0xff: GOTO 0x103

0x100: PushEmpty()
0x101: Call2 0x122

0x102: Pop(0)
0x103: GOTO 0x111

0x104: Push("fail")
0x105: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x112

0x109: Pop(0)
0x10a: GOTO 0x111

0x10b: Push("completed")
0x10c: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10e: PushEmpty()
0x10f: Call2 0x11a

0x110: Pop(0)
0x111: Return(); Pop(30)

0x112: Push("b6q01")
0x113: Push((int) -1)
0x114: @ SetVariable(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: PushEmpty()
0x117: Call2 0x122

0x118: Pop(0)
0x119: Return(); Pop(0)

0x11a: Push("b6q01")
0x11b: Push((int) 1000)
0x11c: @ SetVariable(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: PushEmpty()
0x11f: Call2 0x122

0x120: Pop(0)
0x121: Return(); Pop(0)

0x122: EventDisable(9)
0x123: PushEmpty(object, string)
0x124: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x125: Stack[-1] = "cleanup"
0x126: Call2 0x199

0x127: Pop(2)
0x128: PushEmpty(object, string)
0x129: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x12a: Stack[-1] = "cleanup"
0x12b: Call2 0x199

0x12c: Pop(2)
0x12d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: Push("cleanup")
0x130: @ Trigger(Stack[-1], Stack[-1])
0x131: Pop(1)
0x132: Push( Stack[4 + Tasks[-1].StackPointer] )
0x133: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x134: @@ Remove()
0x135: Pop(0)
0x136: Push( Stack[5 + Tasks[-1].StackPointer] )
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: @@ Remove()
0x139: Pop(0)
0x13a: Push(GlobalVars[0])
0x13b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13c: Push(GlobalVars[0])
0x13d: Push("cleanup")
0x13e: @ Trigger(Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: Push( Stack[0 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: Push("cleanup")
0x143: @ Trigger(Stack[-0], Stack[-1])
0x144: Pop(1)
0x145: PushEmpty(object)
0x146: Call2 0x14b

0x147: Pop(0)
0x148: @ RemoveActor(Stack[-1])
0x149: Pop(1)
0x14a: Return(); Pop(0)

0x14b: PushEmpty(object, object)
0x14c: @ self(Stack[-1])
0x14d: Pop(0)
0x14e: Stack[-3] = Stack[-1]
0x14f: Return(); Pop(2)

0x150: Stack[-1] = 0
0x151: PushEmpty(object, object)
0x152: @ CreateObjectVector(Stack[-1])
0x153: Pop(0)
0x154: Stack[-3] = Stack[-1]
0x155: Return(); Pop(2)

0x156: Stack[-1] = 0
0x157: PushEmpty(object, object, object, object)
0x158: @ GetMainOutdoorScene(Stack[-2])
0x159: Pop(0)
0x15a: Push(".bin")
0x15b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x15c: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x15d: Pop(1)
0x15e: Stack[-6] = Stack[-1]
0x15f: Return(); Pop(4)

0x160: Stack[-1] = 0
0x161: Stack[-2] = 0
0x162: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x163: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x164: Pop(0)
0x165: Pop(0); Push((bool) Stack[-4] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x167: Push("Locator ")
0x168: Pop(1); Push(Stack[-1] + Stack[-12]);
0x169: Push(" doesn't exist")
0x16a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16b: @ Trace(Stack[-1])
0x16c: Pop(1)
0x16d: Stack[-1] = 0
0x16e: GOTO 0x171

0x16f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x170: Pop(0)
0x171: Stack[-13] = Stack[-1]
0x172: Return(); Pop(8)

0x173: Stack[-1] = 0
0x174: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x175: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x176: Pop(0)
0x177: Pop(0); Push((bool) Stack[-4] == 0)
0x178: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x179: Push("Locator ")
0x17a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x17b: Push(" doesn't exist")
0x17c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17d: @ Trace(Stack[-1])
0x17e: Pop(1)
0x17f: Stack[-1] = 0
0x180: GOTO 0x183

0x181: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x182: Pop(0)
0x183: Stack[-13] = Stack[-1]
0x184: Return(); Pop(8)

0x185: Stack[-1] = 0
0x186: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x187: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x188: Pop(0)
0x189: Pop(0); Push((bool) Stack[-4] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18b: Push("Locator ")
0x18c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x18d: Push(" doesn't exist")
0x18e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18f: @ Trace(Stack[-1])
0x190: Pop(1)
0x191: Stack[-1] = 0
0x192: GOTO 0x196

0x193: Push((bool) 1)
0x194: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1])
0x195: Pop(1)
0x196: Stack[-13] = Stack[-1]
0x197: Return(); Pop(8)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int, object, int, int, object)
0x19a: Push(Stack[-8])
0x19b: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19c: @@ size(Stack[-3])
0x19d: Pop(0)
0x19e: Stack[-2] = (int) 0
0x19f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a1: @@ get(Stack[-1], Stack[-2])
0x1a2: Pop(0)
0x1a3: Push(Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: @ Trigger(Stack[-1], Stack[-7])
0x1a6: Pop(0)
0x1a7: Stack[-1] = 0
0x1a8: Push((int) 1)
0x1a9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1aa: GOTO 0x19f

0x1ab: Return(); Pop(6)

0x1ac: PushEmpty()
0x1ad: PushEmpty(int, int, int, float)
0x1ae: Stack[-3] = (int) 525670
0x1af: Stack[-2] = (int) 525669
0x1b0: Stack[-1] = Stack[-5]
0x1b1: Call2 0x1b5

0x1b2: Stack[-6] = Stack[-4]
0x1b3: Pop(4)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(int, int)
0x1b6: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x1b7: Pop(0)
0x1b8: Push((int) 6)
0x1b9: @ SendWorldWndMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: Stack[-6] = Stack[-1]
0x1bc: Return(); Pop(2)

