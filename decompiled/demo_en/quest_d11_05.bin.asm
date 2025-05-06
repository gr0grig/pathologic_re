GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_d9q01_doberman1
	pers_doberman
	d11q05_doberman.xml
	add
	pt_d9q01_doberman2
	pt_d9q01_doberman3
	d8q01MladVladIsVictim
	termitnik_mat
	pt_d11q05_mladvlad
	NPC_MladVlad
	d11q05_mladvlad.xml
	teleport
	player
	mnogogrannik_han
	pt_d9q01_teleport
	GetLocator
	place_enemy_before
	pt_d11q05_grabitel_before1
	pers_grabitel
	d11q05_grabitel.xml
	pt_d11q05_grabitel_before2
	pt_d11q05_worker_before1
	pers_worker
	d11q05_worker.xml
	pt_d11q05_worker_before2
	place_enemy_after
	pt_d11q05_grabitel_after1
	d11q05_grabitel_serum.xml
	pt_d11q05_grabitel_after2
	pt_d11q05_unosha_after1
	pers_unosha
	pt_d11q05_unosha_after2
	fail
	completed
	d11q05
	cleanup
	Locator 
	 doesn't exist
	AddStationaryActor
	size
	get
	Remove
	clear

Import:
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	FindActor (2 args)
	Teleport (4 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, bool) Params = 0
		EVENT_26 Op = 0x3c Vars = (string)
		EVENT_9 Op = 0xff Vars = (int, float)


0x0: PushEmpty(object, int, object, object, int, object)
0x1: @ CreateObjectVector(Stack[-1])
0x2: Pop(0)
0x3: @ GetMainOutdoorScene(Stack[-3])
0x4: Pop(0)
0x5: PushEmpty(object, object, string, string, string)
0x6: Stack[-4] = Stack[-8]
0x7: Stack[-3] = "pt_d9q01_doberman1"
0x8: Stack[-2] = "pers_doberman"
0x9: Stack[-1] = "d11q05_doberman.xml"
0xa: Call2 0x122

0xb: Pop(4)
0xc: @@ add(Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-4] = Stack[-8]
0x10: Stack[-3] = "pt_d9q01_doberman2"
0x11: Stack[-2] = "pers_doberman"
0x12: Stack[-1] = "d11q05_doberman.xml"
0x13: Call2 0x122

0x14: Pop(4)
0x15: @@ add(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-4] = Stack[-8]
0x19: Stack[-3] = "pt_d9q01_doberman3"
0x1a: Stack[-2] = "pers_doberman"
0x1b: Stack[-1] = "d11q05_doberman.xml"
0x1c: Call2 0x122

0x1d: Pop(4)
0x1e: @@ add(Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object)
0x21: Call2 0x10a

0x22: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x23: Pop(1)
0x24: Push("d8q01MladVladIsVictim")
0x25: @ GetVariable(Stack[-1], Stack[-3])
0x26: Pop(1)
0x27: Push(Stack[-2])
0x28: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x29: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a: Push("termitnik_mat")
0x2b: @ GetSceneByName(Stack[-2], Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty(object, object, string, string, string)
0x2e: Stack[-4] = Stack[-6]
0x2f: Stack[-3] = "pt_d11q05_mladvlad"
0x30: Stack[-2] = "NPC_MladVlad"
0x31: Stack[-1] = "d11q05_mladvlad.xml"
0x32: Call2 0x110

0x33: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x34: Pop(5)
0x35: Stack[-1] = 0
0x36: PushEmpty(int)
0x37: Stack[-1] = (int) 11
0x38: Call2 0xec

0x39: Pop(1)
0x3a: Return(); Pop(6)

0x3b: Stack[-3] = 0
0x3c: PushEmpty(object, object, cvector, cvector, bool, object, object, object, object, cvector, cvector, bool, object, object)
0x3d: @ Trace(Stack[-15])
0x3e: Pop(0)
0x3f: Push("teleport")
0x40: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x42: Push("player")
0x43: @ FindActor(Stack[-8], Stack[-1])
0x44: Pop(1)
0x45: Push(Stack[-7])
0x46: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x47: Push("mnogogrannik_han")
0x48: @ GetSceneByName(Stack[-7], Stack[-1])
0x49: Pop(1)
0x4a: Push("pt_d9q01_teleport")
0x4b: @@ GetLocator(Stack[-1], Stack[-4], Stack[-6], Stack[-5])
0x4c: Pop(1)
0x4d: @ Teleport(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x4e: Pop(0)
0x4f: Stack[-6] = 0
0x50: Stack[-7] = 0
0x51: GOTO 0xb5

0x52: Push("place_enemy_before")
0x53: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x55: @ GetMainOutdoorScene(Stack[-2])
0x56: Pop(0)
0x57: PushEmpty(object, object, string, string, string)
0x58: Stack[-4] = Stack[-7]
0x59: Stack[-3] = "pt_d11q05_grabitel_before1"
0x5a: Stack[-2] = "pers_grabitel"
0x5b: Stack[-1] = "d11q05_grabitel.xml"
0x5c: Call2 0x122

0x5d: Pop(4)
0x5e: @@ add(Stack[-1])
0x5f: Pop(1)
0x60: PushEmpty(object, object, string, string, string)
0x61: Stack[-4] = Stack[-7]
0x62: Stack[-3] = "pt_d11q05_grabitel_before2"
0x63: Stack[-2] = "pers_grabitel"
0x64: Stack[-1] = "d11q05_grabitel.xml"
0x65: Call2 0x122

0x66: Pop(4)
0x67: @@ add(Stack[-1])
0x68: Pop(1)
0x69: PushEmpty(object, object, string, string, string)
0x6a: Stack[-4] = Stack[-7]
0x6b: Stack[-3] = "pt_d11q05_worker_before1"
0x6c: Stack[-2] = "pers_worker"
0x6d: Stack[-1] = "d11q05_worker.xml"
0x6e: Call2 0x122

0x6f: Pop(4)
0x70: @@ add(Stack[-1])
0x71: Pop(1)
0x72: PushEmpty(object, object, string, string, string)
0x73: Stack[-4] = Stack[-7]
0x74: Stack[-3] = "pt_d11q05_worker_before2"
0x75: Stack[-2] = "pers_worker"
0x76: Stack[-1] = "d11q05_worker.xml"
0x77: Call2 0x122

0x78: Pop(4)
0x79: @@ add(Stack[-1])
0x7a: Pop(1)
0x7b: Stack[-2] = 0
0x7c: GOTO 0xb5

0x7d: Push("place_enemy_after")
0x7e: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x80: @ GetMainOutdoorScene(Stack[-1])
0x81: Pop(0)
0x82: PushEmpty(object, object, string, string, string)
0x83: Stack[-4] = Stack[-6]
0x84: Stack[-3] = "pt_d11q05_grabitel_after1"
0x85: Stack[-2] = "pers_grabitel"
0x86: Stack[-1] = "d11q05_grabitel_serum.xml"
0x87: Call2 0x122

0x88: Pop(4)
0x89: @@ add(Stack[-1])
0x8a: Pop(1)
0x8b: PushEmpty(object, object, string, string, string)
0x8c: Stack[-4] = Stack[-6]
0x8d: Stack[-3] = "pt_d11q05_grabitel_after2"
0x8e: Stack[-2] = "pers_grabitel"
0x8f: Stack[-1] = "d11q05_grabitel.xml"
0x90: Call2 0x122

0x91: Pop(4)
0x92: @@ add(Stack[-1])
0x93: Pop(1)
0x94: PushEmpty(object, object, string, string, string)
0x95: Stack[-4] = Stack[-6]
0x96: Stack[-3] = "pt_d11q05_unosha_after1"
0x97: Stack[-2] = "pers_unosha"
0x98: Stack[-1] = "d11q05_worker.xml"
0x99: Call2 0x122

0x9a: Pop(4)
0x9b: @@ add(Stack[-1])
0x9c: Pop(1)
0x9d: PushEmpty(object, object, string, string, string)
0x9e: Stack[-4] = Stack[-6]
0x9f: Stack[-3] = "pt_d11q05_unosha_after2"
0xa0: Stack[-2] = "pers_unosha"
0xa1: Stack[-1] = "d11q05_worker.xml"
0xa2: Call2 0x122

0xa3: Pop(4)
0xa4: @@ add(Stack[-1])
0xa5: Pop(1)
0xa6: Stack[-1] = 0
0xa7: GOTO 0xb5

0xa8: Push("fail")
0xa9: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xab: PushEmpty()
0xac: Call2 0xc4

0xad: Pop(0)
0xae: GOTO 0xb5

0xaf: Push("completed")
0xb0: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb2: PushEmpty()
0xb3: Call2 0xcc

0xb4: Pop(0)
0xb5: Return(); Pop(14)

0xb6: PushEmpty(int, int)
0xb7: Push("d11q05")
0xb8: @ GetVariable(Stack[-1], Stack[-2])
0xb9: Pop(1)
0xba: Push((int) 1000)
0xbb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0xc4

0xbf: Pop(0)
0xc0: PushEmpty()
0xc1: Call2 0xda

0xc2: Pop(0)
0xc3: Return(); Pop(2)

0xc4: Push("d11q05")
0xc5: Push((int) -1)
0xc6: @ SetVariable(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: PushEmpty()
0xc9: Call2 0xd4

0xca: Pop(0)
0xcb: Return(); Pop(0)

0xcc: Push("d11q05")
0xcd: Push((int) 1000)
0xce: @ SetVariable(Stack[-2], Stack[-1])
0xcf: Pop(2)
0xd0: PushEmpty()
0xd1: Call2 0xd4

0xd2: Pop(0)
0xd3: Return(); Pop(0)

0xd4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd5: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd6: Push("cleanup")
0xd7: @ Trigger(Stack[-2], Stack[-1])
0xd8: Pop(1)
0xd9: Return(); Pop(0)

0xda: EventDisable(26)
0xdb: PushEmpty()
0xdc: Call2 0xd4

0xdd: Pop(0)
0xde: PushEmpty(object)
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x134

0xe1: Pop(1)
0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x134

0xe5: Pop(1)
0xe6: PushEmpty(object)
0xe7: Call2 0x104

0xe8: Pop(0)
0xe9: @ RemoveActor(Stack[-1])
0xea: Pop(1)
0xeb: Return(); Pop(0)

0xec: PushEmpty(float, float)
0xed: @ GetGameTime(Stack[-1])
0xee: Pop(0)
0xef: Push((int) 24)
0xf0: Pop(1); Push(Stack[-4] * Stack[-1]);
0xf1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf3: PushEmpty()
0xf4: Call2 0xda

0xf5: Pop(0)
0xf6: GOTO 0xfe

0xf7: Push((int) 0)
0xf8: Push((int) 24)
0xf9: Pop(1); Push(Stack[-5] * Stack[-1]);
0xfa: @ SetTimeEvent(Stack[-2], Stack[-1])
0xfb: Pop(2)
0xfc: @ Hold()
0xfd: Pop(0)
0xfe: Return(); Pop(2)

0xff: PushEmpty()
0x100: PushEmpty()
0x101: Call2 0xb6

0x102: Pop(0)
0x103: Return(); Pop(0)

0x104: PushEmpty(object, object)
0x105: @ self(Stack[-1])
0x106: Pop(0)
0x107: Stack[-3] = Stack[-1]
0x108: Return(); Pop(2)

0x109: Stack[-1] = 0
0x10a: PushEmpty(object, object)
0x10b: @ CreateObjectVector(Stack[-1])
0x10c: Pop(0)
0x10d: Stack[-3] = Stack[-1]
0x10e: Return(); Pop(2)

0x10f: Stack[-1] = 0
0x110: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x111: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x112: Pop(0)
0x113: Pop(0); Push((bool) Stack[-4] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x115: Push("Locator ")
0x116: Pop(1); Push(Stack[-1] + Stack[-12]);
0x117: Push(" doesn't exist")
0x118: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119: @ Trace(Stack[-1])
0x11a: Pop(1)
0x11b: Stack[-1] = 0
0x11c: GOTO 0x11f

0x11d: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x11e: Pop(0)
0x11f: Stack[-13] = Stack[-1]
0x120: Return(); Pop(8)

0x121: Stack[-1] = 0
0x122: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x123: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x124: Pop(0)
0x125: Pop(0); Push((bool) Stack[-4] == 0)
0x126: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x127: Push("Locator ")
0x128: Pop(1); Push(Stack[-1] + Stack[-12]);
0x129: Push(" doesn't exist")
0x12a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12b: @ Trace(Stack[-1])
0x12c: Pop(1)
0x12d: Stack[-1] = 0
0x12e: GOTO 0x131

0x12f: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x130: Pop(0)
0x131: Stack[-13] = Stack[-1]
0x132: Return(); Pop(8)

0x133: Stack[-1] = 0
0x134: PushEmpty(int, int, object, int, int, object)
0x135: Push(Stack[-7])
0x136: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x137: @@ size(Stack[-3])
0x138: Pop(0)
0x139: Stack[-2] = (int) 0
0x13a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x13b: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13c: @@ get(Stack[-1], Stack[-2])
0x13d: Pop(0)
0x13e: Push(Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x140: @@ Remove()
0x141: Pop(0)
0x142: Stack[-1] = 0
0x143: Push((int) 1)
0x144: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x145: GOTO 0x13a

0x146: @@ clear()
0x147: Pop(0)
0x148: Return(); Pop(6)

