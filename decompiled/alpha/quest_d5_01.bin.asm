GlobalVarCount = 0

Strings:
	factory
	factory@door1
	ifactory_grid_door
	pt_d5q01_Burah
	NPC_Burah
	d5q01_Burah.xml
	pt_d5q01_PatrolBoss
	pers_patrool
	d5q01_PatrolBoss.xml
	add
	pt_d5q01_Patrol1
	d5q01_Patrol.xml
	pt_d5q01_Patrol2
	d5q01_trigger_factory
	d5q01PlayCutscene
	d5q01
	ifactory@door1
	cs_factory_grabitel1
	cs_play_all.bin
	cs_factory_grabitel2
	cs_factory_patrol1
	cs_factory_patrol2
	cs_factory_patrol3
	ForceGeometryLoad
	player
	space
	cs_factory1.mot
	pt_d5q01_patrol_corpse1
	dummy_dead_b.xml
	pt_d5q01_patrol_corpse2
	pt_d5q01_grabitel_corpse1
	pers_grabitel
	pt_d5q01_grabitel_corpse2
	pt_d5q01_patrol_survived
	d5q01_PatrolCS.xml
	burah_free
	cleanup
	factory_fight
	attack
	door_close
	dead
	size
	get
	IsDead
	fail
	completed
	Girl location: 
	d5q01_girl_corpse
	d5q01_girl_corpse.xml
	clear
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	Close

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	AddScriptedActor (5 args)
	FindActor (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Trigger (2 args)
	PlaySound (1 args)
	ReleaseTimeEvent (1 args)
	GetMainOutdoorScene (1 args)
	irand (2 args)
	AddActor (6 args)
	CreateObjectVector (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x8 Vars = (string)
		EVENT_9 Op = 0x139 Vars = (int, float)
		EVENT_24 Op = 0x141 Vars = (int)


0x0: PushEmpty(object)
0x1: Call 0x1af

0x2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty(object, int, int, object, object, object, object, object, object, object, float, int, int, object, bool, object, int, int, object, object, object, object, object, object, object, float, int, int, object, bool)
0x9: @ Trace(Stack[-31])
0xa: Pop(0)
0xb: Push("factory")
0xc: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0xe: PushEmpty(string, bool)
0xf: Stack[-2] = "factory@door1"
0x10: Stack[-1] = (bool) 0
0x11: Call 0x1c7

0x12: Pop(2)
0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "ifactory_grid_door"
0x15: Stack[-1] = (bool) 1
0x16: Call 0x1d7

0x17: Pop(2)
0x18: Push("factory")
0x19: @ GetSceneByName(Stack[-16], Stack[-1])
0x1a: Pop(1)
0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-4] = Stack[-20]
0x1d: Stack[-3] = "pt_d5q01_Burah"
0x1e: Stack[-2] = "NPC_Burah"
0x1f: Stack[-1] = "d5q01_Burah.xml"
0x20: Call 0x1b5

0x21: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x22: Pop(5)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-4] = Stack[-20]
0x25: Stack[-3] = "pt_d5q01_PatrolBoss"
0x26: Stack[-2] = "pers_patrool"
0x27: Stack[-1] = "d5q01_PatrolBoss.xml"
0x28: Call 0x1b5

0x29: Pop(4)
0x2a: @@ add(Stack[-1])
0x2b: Pop(1)
0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-4] = Stack[-20]
0x2e: Stack[-3] = "pt_d5q01_Patrol1"
0x2f: Stack[-2] = "pers_patrool"
0x30: Stack[-1] = "d5q01_Patrol.xml"
0x31: Call 0x1b5

0x32: Pop(4)
0x33: @@ add(Stack[-1])
0x34: Pop(1)
0x35: PushEmpty(object, object, string, string, string)
0x36: Stack[-4] = Stack[-20]
0x37: Stack[-3] = "pt_d5q01_Patrol2"
0x38: Stack[-2] = "pers_patrool"
0x39: Stack[-1] = "d5q01_Patrol.xml"
0x3a: Call 0x1b5

0x3b: Pop(4)
0x3c: @@ add(Stack[-1])
0x3d: Pop(1)
0x3e: Stack[-15] = 0
0x3f: GOTO 0x128

0x40: Push("d5q01_trigger_factory")
0x41: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0x43: Push("d5q01PlayCutscene")
0x44: @ GetVariable(Stack[-1], Stack[-15])
0x45: Pop(1)
0x46: Push(Stack[-14])
0x47: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0x48: Push("d5q01")
0x49: @ GetVariable(Stack[-1], Stack[-14])
0x4a: Pop(1)
0x4b: PushEmpty(bool, int)
0x4c: Stack[-1] = Stack[-15]
0x4d: Call 0x20d

0x4e: Pop(1)
0x4f: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0x50: PushEmpty(string, bool)
0x51: Stack[-2] = "ifactory@door1"
0x52: Stack[-1] = (bool) 1
0x53: Call 0x1c7

0x54: Pop(2)
0x55: Push("factory")
0x56: @ GetSceneByName(Stack[-13], Stack[-1])
0x57: Pop(1)
0x58: Push("d5q01PlayCutscene")
0x59: Push((int) 0)
0x5a: @ SetVariable(Stack[-2], Stack[-1])
0x5b: Pop(2)
0x5c: PushEmpty(object)
0x5d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Call 0x1e9

0x5f: Pop(1)
0x60: Push("cs_factory_grabitel1")
0x61: Push("cs_play_all.bin")
0x62: Push(CVector(0.0, 0.0, 0.0))
0x63: @ AddScriptedActor(Stack[-14], Stack[-3], Stack[-2], Stack[-15], Stack[-1])
0x64: Pop(3)
0x65: Push("cs_factory_grabitel2")
0x66: Push("cs_play_all.bin")
0x67: Push(CVector(0.0, 0.0, 0.0))
0x68: @ AddScriptedActor(Stack[-13], Stack[-3], Stack[-2], Stack[-15], Stack[-1])
0x69: Pop(3)
0x6a: Push("cs_factory_patrol1")
0x6b: Push("cs_play_all.bin")
0x6c: Push(CVector(0.0, 0.0, 0.0))
0x6d: @ AddScriptedActor(Stack[-12], Stack[-3], Stack[-2], Stack[-15], Stack[-1])
0x6e: Pop(3)
0x6f: Push("cs_factory_patrol2")
0x70: Push("cs_play_all.bin")
0x71: Push(CVector(0.0, 0.0, 0.0))
0x72: @ AddScriptedActor(Stack[-11], Stack[-3], Stack[-2], Stack[-15], Stack[-1])
0x73: Pop(3)
0x74: Push("cs_factory_patrol3")
0x75: Push("cs_play_all.bin")
0x76: Push(CVector(0.0, 0.0, 0.0))
0x77: @ AddScriptedActor(Stack[-10], Stack[-3], Stack[-2], Stack[-15], Stack[-1])
0x78: Pop(3)
0x79: @@ ForceGeometryLoad()
0x7a: Pop(0)
0x7b: @@ ForceGeometryLoad()
0x7c: Pop(0)
0x7d: @@ ForceGeometryLoad()
0x7e: Pop(0)
0x7f: Push("player")
0x80: @ FindActor(Stack[-7], Stack[-1])
0x81: Pop(1)
0x82: PushEmpty(object)
0x83: Stack[-1] = Stack[-7]
0x84: Call 0x184

0x85: Pop(1)
0x86: Push("space")
0x87: @ RegisterKeyCallback(Stack[-1])
0x88: Pop(1)
0x89: Push("cs_factory1.mot")
0x8a: @ CameraPlay(Stack[-1])
0x8b: Pop(1)
0x8c: @ CameraWaitForPlayFinish()
0x8d: Pop(0)
0x8e: Push("space")
0x8f: @ UnregisterKeyCallback(Stack[-1])
0x90: Pop(1)
0x91: PushEmpty(object)
0x92: Stack[-1] = Stack[-7]
0x93: Call 0x19b

0x94: Pop(1)
0x95: @ RemoveActor(Stack[-11])
0x96: Pop(0)
0x97: @ RemoveActor(Stack[-10])
0x98: Pop(0)
0x99: @ RemoveActor(Stack[-9])
0x9a: Pop(0)
0x9b: @ RemoveActor(Stack[-8])
0x9c: Pop(0)
0x9d: @ RemoveActor(Stack[-7])
0x9e: Pop(0)
0x9f: PushEmpty(object, object, string, string, string)
0xa0: Stack[-4] = Stack[-17]
0xa1: Stack[-3] = "pt_d5q01_patrol_corpse1"
0xa2: Stack[-2] = "pers_patrool"
0xa3: Stack[-1] = "dummy_dead_b.xml"
0xa4: Call 0x1b5

0xa5: Pop(4)
0xa6: @@ add(Stack[-1])
0xa7: Pop(1)
0xa8: PushEmpty(object, object, string, string, string)
0xa9: Stack[-4] = Stack[-17]
0xaa: Stack[-3] = "pt_d5q01_patrol_corpse2"
0xab: Stack[-2] = "pers_patrool"
0xac: Stack[-1] = "dummy_dead_b.xml"
0xad: Call 0x1b5

0xae: Pop(4)
0xaf: @@ add(Stack[-1])
0xb0: Pop(1)
0xb1: PushEmpty(object, object, string, string, string)
0xb2: Stack[-4] = Stack[-17]
0xb3: Stack[-3] = "pt_d5q01_grabitel_corpse1"
0xb4: Stack[-2] = "pers_grabitel"
0xb5: Stack[-1] = "dummy_dead_b.xml"
0xb6: Call 0x1b5

0xb7: Pop(4)
0xb8: @@ add(Stack[-1])
0xb9: Pop(1)
0xba: PushEmpty(object, object, string, string, string)
0xbb: Stack[-4] = Stack[-17]
0xbc: Stack[-3] = "pt_d5q01_grabitel_corpse2"
0xbd: Stack[-2] = "pers_grabitel"
0xbe: Stack[-1] = "dummy_dead_b.xml"
0xbf: Call 0x1b5

0xc0: Pop(4)
0xc1: @@ add(Stack[-1])
0xc2: Pop(1)
0xc3: PushEmpty(object, object, string, string, string)
0xc4: Stack[-4] = Stack[-17]
0xc5: Stack[-3] = "pt_d5q01_patrol_survived"
0xc6: Stack[-2] = "pers_patrool"
0xc7: Stack[-1] = "d5q01_PatrolCS.xml"
0xc8: Call 0x1b5

0xc9: Pop(4)
0xca: @@ add(Stack[-1])
0xcb: Pop(1)
0xcc: @ CameraSwitchToNormal()
0xcd: Pop(0)
0xce: Stack[-6] = 0
0xcf: Stack[-7] = 0
0xd0: Stack[-8] = 0
0xd1: Stack[-9] = 0
0xd2: Stack[-10] = 0
0xd3: Stack[-11] = 0
0xd4: Stack[-12] = 0
0xd5: GOTO 0x128

0xd6: Push("burah_free")
0xd7: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xd9: @ GetGameTime(Stack[-5])
0xda: Pop(0)
0xdb: Push((int) 117)
0xdc: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xde: PushEmpty()
0xdf: Call 0x145

0xe0: Pop(0)
0xe1: GOTO 0xe6

0xe2: Push((int) 0)
0xe3: Push((int) 117)
0xe4: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe5: Pop(2)
0xe6: Push("cleanup")
0xe7: @ Trigger(Stack[-0], Stack[-1])
0xe8: Pop(1)
0xe9: PushEmpty(string, bool)
0xea: Stack[-2] = "factory@door1"
0xeb: Stack[-1] = (bool) 1
0xec: Call 0x1c7

0xed: Pop(2)
0xee: GOTO 0x128

0xef: Push("factory_fight")
0xf0: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf2: PushEmpty(string, bool)
0xf3: Stack[-2] = "ifactory@door1"
0xf4: Stack[-1] = (bool) 1
0xf5: Call 0x1c7

0xf6: Pop(2)
0xf7: PushEmpty(object, string)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = "attack"
0xfa: Call 0x1fc

0xfb: Pop(2)
0xfc: Push("door_close")
0xfd: @ PlaySound(Stack[-1])
0xfe: Pop(1)
0xff: GOTO 0x128

0x100: Push("dead")
0x101: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x103: @@ size(Stack[-4])
0x104: Pop(0)
0x105: Stack[-3] = (int) 0
0x106: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x107: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x108: @@ get(Stack[-2], Stack[-3])
0x109: Pop(0)
0x10a: @@ IsDead(Stack[-1])
0x10b: Pop(0)
0x10c: Pop(0); Push((bool) Stack[-1] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10e: GOTO 0x113

0x10f: Stack[-2] = 0
0x110: Push((int) 1)
0x111: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x112: GOTO 0x106

0x113: Pop(0); Push((bool) Stack[-3] == Stack[-4])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(string, bool)
0x116: Stack[-2] = "ifactory@door1"
0x117: Stack[-1] = (bool) 0
0x118: Call 0x1c7

0x119: Pop(2)
0x11a: GOTO 0x128

0x11b: Push("fail")
0x11c: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11e: PushEmpty()
0x11f: Call 0x129

0x120: Pop(0)
0x121: GOTO 0x128

0x122: Push("completed")
0x123: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: PushEmpty()
0x126: Call 0x131

0x127: Pop(0)
0x128: Return(); Pop(30)

0x129: Push("d5q01")
0x12a: Push((int) -1)
0x12b: @ SetVariable(Stack[-2], Stack[-1])
0x12c: Pop(2)
0x12d: PushEmpty()
0x12e: Call 0x15f

0x12f: Pop(0)
0x130: Return(); Pop(0)

0x131: Push("d5q01")
0x132: Push((int) 1000)
0x133: @ SetVariable(Stack[-2], Stack[-1])
0x134: Pop(2)
0x135: PushEmpty()
0x136: Call 0x15f

0x137: Pop(0)
0x138: Return(); Pop(0)

0x139: PushEmpty()
0x13a: Push((int) 0)
0x13b: @ ReleaseTimeEvent(Stack[-1])
0x13c: Pop(1)
0x13d: PushEmpty()
0x13e: Call 0x145

0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: PushEmpty()
0x142: @ CameraSwitchToNormal()
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: PushEmpty(object, int, object, int)
0x146: @ GetMainOutdoorScene(Stack[-2])
0x147: Pop(0)
0x148: Push((int) 2)
0x149: @ irand(Stack[-2], Stack[-1])
0x14a: Pop(1)
0x14b: Push("Girl location: ")
0x14c: Push((int) 1)
0x14d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x14e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14f: @ Trace(Stack[-1])
0x150: Pop(1)
0x151: Push("d5q01_girl_corpse")
0x152: Push((int) 1)
0x153: Pop(1); Push(Stack[-3] + Stack[-1]);
0x154: Pop(2); Push(Stack[-2] + Stack[-1]);
0x155: Push(CVector(0.0, 0.0, 0.0))
0x156: Push(CVector(0.0, 0.0, 1.0))
0x157: Push("d5q01_girl_corpse.xml")
0x158: @ AddActor(Stack[-2], Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(4)
0x15a: Push("cleanup")
0x15b: @ Trigger(Stack[-2], Stack[-1])
0x15c: Pop(1)
0x15d: Return(); Pop(4)

0x15e: Stack[-2] = 0
0x15f: EventDisable(26)
0x160: EventDisable(9)
0x161: Push( Stack[0 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x163: Push("cleanup")
0x164: @ Trigger(Stack[-0], Stack[-1])
0x165: Pop(1)
0x166: Push( Stack[2 + Tasks[-1].StackPointer] )
0x167: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x168: Push("cleanup")
0x169: @ Trigger(Stack[-2], Stack[-1])
0x16a: Pop(1)
0x16b: PushEmpty(string, bool)
0x16c: Stack[-2] = "ifactory_grid_door"
0x16d: Stack[-1] = (bool) 0
0x16e: Call 0x1d7

0x16f: Pop(2)
0x170: PushEmpty(object, string)
0x171: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x172: Stack[-1] = "cleanup"
0x173: Call 0x1fc

0x174: Pop(2)
0x175: @@ clear()
0x176: Pop(0)
0x177: PushEmpty(string, bool)
0x178: Stack[-2] = "factory@door1"
0x179: Stack[-1] = (bool) 1
0x17a: Call 0x1c7

0x17b: Pop(2)
0x17c: Push("d5q01PlayCutscene")
0x17d: Push((int) 0)
0x17e: @ SetVariable(Stack[-2], Stack[-1])
0x17f: Pop(2)
0x180: Push((int) 0)
0x181: @ ReleaseTimeEvent(Stack[-1])
0x182: Pop(1)
0x183: Return(); Pop(0)

0x184: PushEmpty(bool, int, bool, int)
0x185: Pop(0); Push((bool) Stack[-5] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Return(); Pop(4)

0x188: Push("noaccess")
0x189: @@ HasProperty(Stack[-1], Stack[-3])
0x18a: Pop(1)
0x18b: Push(Stack[-2])
0x18c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18d: Push("noaccess")
0x18e: @@ GetProperty(Stack[-1], Stack[-2])
0x18f: Pop(1)
0x190: Push("noaccess")
0x191: Push((int) 1)
0x192: Pop(1); Push(Stack[-3] + Stack[-1]);
0x193: @@ SetProperty(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: GOTO 0x19a

0x196: Push("noaccess")
0x197: Push((int) 1)
0x198: @@ SetProperty(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: Return(); Pop(4)

0x19b: PushEmpty(int, int)
0x19c: Pop(0); Push((bool) Stack[-3] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Return(); Pop(2)

0x19f: Push("noaccess")
0x1a0: @@ GetProperty(Stack[-1], Stack[-2])
0x1a1: Pop(1)
0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a5: Push("noaccess")
0x1a6: Push((int) 1)
0x1a7: Pop(1); Push(Stack[-3] - Stack[-1]);
0x1a8: @@ SetProperty(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: GOTO 0x1ae

0x1ab: Push("noaccess")
0x1ac: @@ RemoveProperty(Stack[-1])
0x1ad: Pop(1)
0x1ae: Return(); Pop(2)

0x1af: PushEmpty(object, object)
0x1b0: @ CreateObjectVector(Stack[-1])
0x1b1: Pop(0)
0x1b2: Stack[-3] = Stack[-1]
0x1b3: Return(); Pop(2)

0x1b4: Stack[-1] = 0
0x1b5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1b6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1b7: Pop(0)
0x1b8: Pop(0); Push((bool) Stack[-4] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ba: Push("Locator ")
0x1bb: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1bc: Push(" doesn't exist")
0x1bd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1be: @ Trace(Stack[-1])
0x1bf: Pop(1)
0x1c0: Stack[-1] = 0
0x1c1: GOTO 0x1c4

0x1c2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1c3: Pop(0)
0x1c4: Stack[-13] = Stack[-1]
0x1c5: Return(); Pop(8)

0x1c6: Stack[-1] = 0
0x1c7: PushEmpty(object, object)
0x1c8: @ FindActor(Stack[-1], Stack[-4])
0x1c9: Pop(0)
0x1ca: Pop(0); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: Push("Door ")
0x1cd: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1ce: Push(" not found")
0x1cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d0: @ Trace(Stack[-1])
0x1d1: Pop(1)
0x1d2: Push("locked")
0x1d3: @@ SetProperty(Stack[-1], Stack[-4])
0x1d4: Pop(1)
0x1d5: Return(); Pop(2)

0x1d6: Stack[-1] = 0
0x1d7: PushEmpty(object, object)
0x1d8: @ FindActor(Stack[-1], Stack[-4])
0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[-1] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dc: Push("Door ")
0x1dd: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1de: Push(" not found")
0x1df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e0: @ Trace(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ Close()
0x1e3: Pop(0)
0x1e4: Push("locked")
0x1e5: @@ SetProperty(Stack[-1], Stack[-4])
0x1e6: Pop(1)
0x1e7: Return(); Pop(2)

0x1e8: Stack[-1] = 0
0x1e9: PushEmpty(int, int, object, int, int, object)
0x1ea: @@ size(Stack[-3])
0x1eb: Pop(0)
0x1ec: Stack[-2] = (int) 0
0x1ed: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ef: @@ get(Stack[-1], Stack[-2])
0x1f0: Pop(0)
0x1f1: Push(Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: @ RemoveActor(Stack[-1])
0x1f4: Pop(0)
0x1f5: Stack[-1] = 0
0x1f6: Push((int) 1)
0x1f7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1f8: GOTO 0x1ed

0x1f9: @@ clear()
0x1fa: Pop(0)
0x1fb: Return(); Pop(6)

0x1fc: PushEmpty(int, int, object, int, int, object)
0x1fd: @@ size(Stack[-3])
0x1fe: Pop(0)
0x1ff: Stack[-2] = (int) 0
0x200: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x201: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x202: @@ get(Stack[-1], Stack[-2])
0x203: Pop(0)
0x204: Push(Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x206: @ Trigger(Stack[-1], Stack[-7])
0x207: Pop(0)
0x208: Stack[-1] = 0
0x209: Push((int) 1)
0x20a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x20b: GOTO 0x200

0x20c: Return(); Pop(6)

0x20d: PushEmpty()
0x20e: Stack[-2] = (bool) 0
0x20f: Push((int) 1)
0x210: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x212: Push((int) 1000)
0x213: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Stack[-2] = (bool) 1
0x216: Return(); Pop(0)

