GlobalVarCount = 0

Strings:
	pt_d5q01_sobor_guard1
	pers_wasted_male
	d5q01_sobor_guard1.xml
	add
	pt_d5q01_sobor_guard2
	d5q01_sobor_guard2.xml
	pt_d5q01_sobor_guard3
	d5q01_sobor_guard3.xml
	pt_d5q01_theater_guard
	pers_whitemask
	d5q01_theater_guard.xml
	factory
	factory@door1
	ifactory_grid_door
	pt_d5q01_Burah
	NPC_Burah
	d5q01_Burah.xml
	pt_d5q01_PatrolBoss
	pers_patrool
	d5q01_PatrolBoss.xml
	pt_d5q01_Patrol1
	d5q01_Patrol.xml
	pt_d5q01_Patrol2
	d5q01_trigger_factory
	d5q01PlayCutscene
	d5q01
	ifactory@door1
	quest_d5_01_cutscene
	cutscene_end
	pt_d5q01_patrol_corpse1
	dummy_dead_disp_b.xml
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
	d5q01_corpse_girl
	d5q01_girl_corpse.xml
	d5q01_corpse1
	d5q01_corpse.xml
	d5q01_corpse2
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
	Close
	reputation
	clear
	Remove

Import:
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Trigger (2 args)
	PlaySound (1 args)
	ReleaseTimeEvent (1 args)
	CameraSwitchToNormal (0 args)
	AddActor (6 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	AddBlankActor (4 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x30 Vars = (string)
		EVENT_9 Op = 0x146 Vars = (int, float)
		EVENT_24 Op = 0x14e Vars = (int)


0x0: PushEmpty(object, object)
0x1: @ CreateObjectVector(Stack[-1])
0x2: Pop(0)
0x3: @ CreateObjectVector(Stack[-5])
0x4: Pop(0)
0x5: @ GetMainOutdoorScene(Stack[-1])
0x6: Pop(0)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-4] = Stack[-6]
0x9: Stack[-3] = "pt_d5q01_sobor_guard1"
0xa: Stack[-2] = "pers_wasted_male"
0xb: Stack[-1] = "d5q01_sobor_guard1.xml"
0xc: Call2 0x1f7

0xd: Pop(4)
0xe: @@ add(Stack[-1])
0xf: Pop(1)
0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-4] = Stack[-6]
0x12: Stack[-3] = "pt_d5q01_sobor_guard2"
0x13: Stack[-2] = "pers_wasted_male"
0x14: Stack[-1] = "d5q01_sobor_guard2.xml"
0x15: Call2 0x1f7

0x16: Pop(4)
0x17: @@ add(Stack[-1])
0x18: Pop(1)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-4] = Stack[-6]
0x1b: Stack[-3] = "pt_d5q01_sobor_guard3"
0x1c: Stack[-2] = "pers_wasted_male"
0x1d: Stack[-1] = "d5q01_sobor_guard3.xml"
0x1e: Call2 0x1f7

0x1f: Pop(4)
0x20: @@ add(Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-4] = Stack[-6]
0x24: Stack[-3] = "pt_d5q01_theater_guard"
0x25: Stack[-2] = "pers_whitemask"
0x26: Stack[-1] = "d5q01_theater_guard.xml"
0x27: Call2 0x1f7

0x28: Pop(4)
0x29: @@ add(Stack[-1])
0x2a: Pop(1)
0x2b: @ Hold()
0x2c: Pop(0)
0x2d: GOTO 0x2b

0x2e: Return(); Pop(2)

0x2f: Stack[-1] = 0
0x30: PushEmpty(object, int, int, object, float, int, int, object, bool, int, object, int, int, object, float, int, int, object, bool, int)
0x31: @ Trace(Stack[-21])
0x32: Pop(0)
0x33: Push("factory")
0x34: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x36: PushEmpty(string, bool)
0x37: Stack[-2] = "factory@door1"
0x38: Stack[-1] = (bool) 0
0x39: Call2 0x209

0x3a: Pop(2)
0x3b: PushEmpty(string, bool)
0x3c: Stack[-2] = "ifactory_grid_door"
0x3d: Stack[-1] = (bool) 1
0x3e: Call2 0x21a

0x3f: Pop(2)
0x40: Push("factory")
0x41: @ GetSceneByName(Stack[-11], Stack[-1])
0x42: Pop(1)
0x43: PushEmpty(object, object, string, string, string)
0x44: Stack[-4] = Stack[-15]
0x45: Stack[-3] = "pt_d5q01_Burah"
0x46: Stack[-2] = "NPC_Burah"
0x47: Stack[-1] = "d5q01_Burah.xml"
0x48: Call2 0x1e5

0x49: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x4a: Pop(5)
0x4b: PushEmpty(object, object, string, string, string)
0x4c: Stack[-4] = Stack[-15]
0x4d: Stack[-3] = "pt_d5q01_PatrolBoss"
0x4e: Stack[-2] = "pers_patrool"
0x4f: Stack[-1] = "d5q01_PatrolBoss.xml"
0x50: Call2 0x1e5

0x51: Pop(4)
0x52: @@ add(Stack[-1])
0x53: Pop(1)
0x54: PushEmpty(object, object, string, string, string)
0x55: Stack[-4] = Stack[-15]
0x56: Stack[-3] = "pt_d5q01_Patrol1"
0x57: Stack[-2] = "pers_patrool"
0x58: Stack[-1] = "d5q01_Patrol.xml"
0x59: Call2 0x1e5

0x5a: Pop(4)
0x5b: @@ add(Stack[-1])
0x5c: Pop(1)
0x5d: PushEmpty(object, object, string, string, string)
0x5e: Stack[-4] = Stack[-15]
0x5f: Stack[-3] = "pt_d5q01_Patrol2"
0x60: Stack[-2] = "pers_patrool"
0x61: Stack[-1] = "d5q01_Patrol.xml"
0x62: Call2 0x1e5

0x63: Pop(4)
0x64: @@ add(Stack[-1])
0x65: Pop(1)
0x66: Stack[-10] = 0
0x67: GOTO 0x135

0x68: Push("d5q01_trigger_factory")
0x69: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x6b: Push("d5q01PlayCutscene")
0x6c: @ GetVariable(Stack[-1], Stack[-10])
0x6d: Pop(1)
0x6e: Push(Stack[-9])
0x6f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x70: Push("d5q01")
0x71: @ GetVariable(Stack[-1], Stack[-9])
0x72: Pop(1)
0x73: PushEmpty(bool, int)
0x74: Stack[-1] = Stack[-10]
0x75: Call2 0x299

0x76: Pop(1)
0x77: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x78: PushEmpty(string, bool)
0x79: Stack[-2] = "ifactory@door1"
0x7a: Stack[-1] = (bool) 1
0x7b: Call2 0x209

0x7c: Pop(2)
0x7d: Push("d5q01PlayCutscene")
0x7e: Push((int) 0)
0x7f: @ SetVariable(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: PushEmpty(object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0x25c

0x84: Pop(1)
0x85: PushEmpty(object, string)
0x86: Stack[-1] = "quest_d5_01_cutscene"
0x87: Call2 0x1da

0x88: Pop(2)
0x89: GOTO 0x135

0x8a: Push("cutscene_end")
0x8b: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0x8d: Push("factory")
0x8e: @ GetSceneByName(Stack[-8], Stack[-1])
0x8f: Pop(1)
0x90: PushEmpty(object, object, string, string, string)
0x91: Stack[-4] = Stack[-12]
0x92: Stack[-3] = "pt_d5q01_patrol_corpse1"
0x93: Stack[-2] = "pers_patrool"
0x94: Stack[-1] = "dummy_dead_disp_b.xml"
0x95: Call2 0x1e5

0x96: Pop(4)
0x97: @@ add(Stack[-1])
0x98: Pop(1)
0x99: PushEmpty(object, object, string, string, string)
0x9a: Stack[-4] = Stack[-12]
0x9b: Stack[-3] = "pt_d5q01_patrol_corpse2"
0x9c: Stack[-2] = "pers_patrool"
0x9d: Stack[-1] = "dummy_dead_disp_b.xml"
0x9e: Call2 0x1e5

0x9f: Pop(4)
0xa0: @@ add(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(object, object, string, string, string)
0xa3: Stack[-4] = Stack[-12]
0xa4: Stack[-3] = "pt_d5q01_grabitel_corpse1"
0xa5: Stack[-2] = "pers_grabitel"
0xa6: Stack[-1] = "dummy_dead_disp_b.xml"
0xa7: Call2 0x1e5

0xa8: Pop(4)
0xa9: @@ add(Stack[-1])
0xaa: Pop(1)
0xab: PushEmpty(object, object, string, string, string)
0xac: Stack[-4] = Stack[-12]
0xad: Stack[-3] = "pt_d5q01_grabitel_corpse2"
0xae: Stack[-2] = "pers_grabitel"
0xaf: Stack[-1] = "dummy_dead_disp_b.xml"
0xb0: Call2 0x1e5

0xb1: Pop(4)
0xb2: @@ add(Stack[-1])
0xb3: Pop(1)
0xb4: PushEmpty(object, object, string, string, string)
0xb5: Stack[-4] = Stack[-12]
0xb6: Stack[-3] = "pt_d5q01_patrol_survived"
0xb7: Stack[-2] = "pers_patrool"
0xb8: Stack[-1] = "d5q01_PatrolCS.xml"
0xb9: Call2 0x1e5

0xba: Pop(4)
0xbb: @@ add(Stack[-1])
0xbc: Pop(1)
0xbd: Stack[-7] = 0
0xbe: GOTO 0x135

0xbf: Push("burah_free")
0xc0: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc2: @ GetGameTime(Stack[-6])
0xc3: Pop(0)
0xc4: Push((int) 116)
0xc5: Pop(1); Push((bool) Stack[-7] >= Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0x152

0xc9: Pop(0)
0xca: GOTO 0xcf

0xcb: Push((int) 0)
0xcc: Push((int) 116)
0xcd: @ SetTimeEvent(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: Push("cleanup")
0xd0: @ Trigger(Stack[-0], Stack[-1])
0xd1: Pop(1)
0xd2: PushEmpty(string, bool)
0xd3: Stack[-2] = "factory@door1"
0xd4: Stack[-1] = (bool) 1
0xd5: Call2 0x209

0xd6: Pop(2)
0xd7: GOTO 0x135

0xd8: Push("factory_fight")
0xd9: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdb: PushEmpty(string, bool)
0xdc: Stack[-2] = "ifactory@door1"
0xdd: Stack[-1] = (bool) 1
0xde: Call2 0x209

0xdf: Pop(2)
0xe0: PushEmpty(object, string)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = "attack"
0xe3: Call2 0x286

0xe4: Pop(2)
0xe5: Push("door_close")
0xe6: @ PlaySound(Stack[-1])
0xe7: Pop(1)
0xe8: PushEmpty(bool, object, float)
0xe9: PushEmpty(object)
0xea: Call2 0x1a0

0xeb: Stack[-3] = Stack[-1]
0xec: Pop(1)
0xed: Stack[-1] = (float) -0.25
0xee: Call2 0x22f

0xef: Pop(3)
0xf0: GOTO 0x135

0xf1: Push("dead")
0xf2: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0xf4: PushEmpty(bool, object, float)
0xf5: PushEmpty(object)
0xf6: Call2 0x1a0

0xf7: Stack[-3] = Stack[-1]
0xf8: Pop(1)
0xf9: Stack[-1] = (float) -0.25
0xfa: Call2 0x22f

0xfb: Pop(3)
0xfc: @@ size(Stack[-5])
0xfd: Pop(0)
0xfe: Stack[-4] = (int) 0
0xff: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x100: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x101: @@ get(Stack[-3], Stack[-4])
0x102: Pop(0)
0x103: @@ IsDead(Stack[-2])
0x104: Pop(0)
0x105: Pop(0); Push((bool) Stack[-2] == 0)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: GOTO 0x10c

0x108: Stack[-3] = 0
0x109: Push((int) 1)
0x10a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x10b: GOTO 0xff

0x10c: Pop(0); Push((bool) Stack[-4] == Stack[-5])
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: PushEmpty(string, bool)
0x10f: Stack[-2] = "ifactory@door1"
0x110: Stack[-1] = (bool) 0
0x111: Call2 0x209

0x112: Pop(2)
0x113: GOTO 0x135

0x114: Push("cleanup")
0x115: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x117: Push("d5q01")
0x118: @ GetVariable(Stack[-1], Stack[-2])
0x119: Pop(1)
0x11a: Push((int) 1000)
0x11b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11d: PushEmpty()
0x11e: Call2 0x136

0x11f: Pop(0)
0x120: GOTO 0x124

0x121: PushEmpty()
0x122: Call2 0x169

0x123: Pop(0)
0x124: PushEmpty()
0x125: Call2 0x194

0x126: Pop(0)
0x127: GOTO 0x135

0x128: Push("fail")
0x129: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12b: PushEmpty()
0x12c: Call2 0x136

0x12d: Pop(0)
0x12e: GOTO 0x135

0x12f: Push("completed")
0x130: Pop(1); Push((bool) Stack[-22] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x132: PushEmpty()
0x133: Call2 0x13e

0x134: Pop(0)
0x135: Return(); Pop(20)

0x136: Push("d5q01")
0x137: Push((int) -1)
0x138: @ SetVariable(Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: PushEmpty()
0x13b: Call2 0x169

0x13c: Pop(0)
0x13d: Return(); Pop(0)

0x13e: Push("d5q01")
0x13f: Push((int) 1000)
0x140: @ SetVariable(Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: PushEmpty()
0x143: Call2 0x169

0x144: Pop(0)
0x145: Return(); Pop(0)

0x146: PushEmpty()
0x147: Push((int) 0)
0x148: @ ReleaseTimeEvent(Stack[-1])
0x149: Pop(1)
0x14a: PushEmpty()
0x14b: Call2 0x152

0x14c: Pop(0)
0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: @ CameraSwitchToNormal()
0x150: Pop(0)
0x151: Return(); Pop(0)

0x152: PushEmpty(object, object)
0x153: @ GetMainOutdoorScene(Stack[-1])
0x154: Pop(0)
0x155: Push("d5q01_corpse_girl")
0x156: Push(CVector(0.0, 0.0, 0.0))
0x157: Push(CVector(0.0, 0.0, 1.0))
0x158: Push("d5q01_girl_corpse.xml")
0x159: @ AddActor(Stack[-2], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(4)
0x15b: Push("d5q01_corpse1")
0x15c: Push(CVector(0.0, 0.0, 0.0))
0x15d: Push(CVector(0.0, 0.0, 1.0))
0x15e: Push("d5q01_corpse.xml")
0x15f: @ AddActor(Stack[-3], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(4)
0x161: Push("d5q01_corpse2")
0x162: Push(CVector(0.0, 0.0, 0.0))
0x163: Push(CVector(0.0, 0.0, 1.0))
0x164: Push("d5q01_corpse.xml")
0x165: @ AddActor(Stack[-4], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(4)
0x167: Return(); Pop(2)

0x168: Stack[-1] = 0
0x169: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: Push("cleanup")
0x16c: @ Trigger(Stack[-0], Stack[-1])
0x16d: Pop(1)
0x16e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16f: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x170: Push("cleanup")
0x171: @ Trigger(Stack[-2], Stack[-1])
0x172: Pop(1)
0x173: Push( Stack[3 + Tasks[-1].StackPointer] )
0x174: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x175: Push("cleanup")
0x176: @ Trigger(Stack[-3], Stack[-1])
0x177: Pop(1)
0x178: Push( Stack[4 + Tasks[-1].StackPointer] )
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: Push("cleanup")
0x17b: @ Trigger(Stack[-4], Stack[-1])
0x17c: Pop(1)
0x17d: PushEmpty(string, bool)
0x17e: Stack[-2] = "ifactory_grid_door"
0x17f: Stack[-1] = (bool) 0
0x180: Call2 0x21a

0x181: Pop(2)
0x182: PushEmpty(object, string)
0x183: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x184: Stack[-1] = "cleanup"
0x185: Call2 0x286

0x186: Pop(2)
0x187: PushEmpty(string, bool)
0x188: Stack[-2] = "factory@door1"
0x189: Stack[-1] = (bool) 1
0x18a: Call2 0x209

0x18b: Pop(2)
0x18c: Push("d5q01PlayCutscene")
0x18d: Push((int) 0)
0x18e: @ SetVariable(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: Push((int) 0)
0x191: @ ReleaseTimeEvent(Stack[-1])
0x192: Pop(1)
0x193: Return(); Pop(0)

0x194: EventDisable(26)
0x195: EventDisable(9)
0x196: PushEmpty(object)
0x197: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x198: Call2 0x271

0x199: Pop(1)
0x19a: PushEmpty(object)
0x19b: Call2 0x1c9

0x19c: Pop(0)
0x19d: @ RemoveActor(Stack[-1])
0x19e: Pop(1)
0x19f: Return(); Pop(0)

0x1a0: PushEmpty(object, object)
0x1a1: Push("player")
0x1a2: @ FindActor(Stack[-2], Stack[-1])
0x1a3: Pop(1)
0x1a4: Stack[-3] = Stack[-1]
0x1a5: Return(); Pop(2)

0x1a6: Stack[-1] = 0
0x1a7: PushEmpty(bool, bool)
0x1a8: Push("HasProperty")
0x1a9: Push((int) 2)
0x1aa: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1ab: Pop(1); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: Stack[-5] = (bool) 0
0x1ae: Return(); Pop(2)

0x1af: @@ HasProperty(Stack[-3], Stack[-1])
0x1b0: Pop(0)
0x1b1: Stack[-5] = Stack[-1]
0x1b2: Return(); Pop(2)

0x1b3: PushEmpty(float, float)
0x1b4: PushEmpty(bool, object, string)
0x1b5: Stack[-2] = Stack[-10]
0x1b6: Stack[-1] = Stack[-9]
0x1b7: Call2 0x1a7

0x1b8: Pop(2)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Stack[-8] = (bool) 0
0x1bc: Return(); Pop(2)

0x1bd: @@ GetProperty(Stack[-6], Stack[-1])
0x1be: Pop(0)
0x1bf: PushEmpty(float, float, float, float)
0x1c0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x1c1: Stack[-2] = Stack[-8]
0x1c2: Stack[-1] = Stack[-7]
0x1c3: Call2 0x1cf

0x1c4: Pop(3)
0x1c5: @@ SetProperty(Stack[-7], Stack[-1])
0x1c6: Pop(1)
0x1c7: Stack[-8] = (bool) 1
0x1c8: Return(); Pop(2)

0x1c9: PushEmpty(object, object)
0x1ca: @ self(Stack[-1])
0x1cb: Pop(0)
0x1cc: Stack[-3] = Stack[-1]
0x1cd: Return(); Pop(2)

0x1ce: Stack[-1] = 0
0x1cf: PushEmpty()
0x1d0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: Stack[-4] = Stack[-2]
0x1d3: Return(); Pop(0)

0x1d4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-4] = Stack[-1]
0x1d7: Return(); Pop(0)

0x1d8: Stack[-4] = Stack[-3]
0x1d9: Return(); Pop(0)

0x1da: PushEmpty(object, object, object, object)
0x1db: @ GetMainOutdoorScene(Stack[-2])
0x1dc: Pop(0)
0x1dd: Push(".bin")
0x1de: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1df: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1e0: Pop(1)
0x1e1: Stack[-6] = Stack[-1]
0x1e2: Return(); Pop(4)

0x1e3: Stack[-1] = 0
0x1e4: Stack[-2] = 0
0x1e5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1e6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1e7: Pop(0)
0x1e8: Pop(0); Push((bool) Stack[-4] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ea: Push("Locator ")
0x1eb: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1ec: Push(" doesn't exist")
0x1ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ee: @ Trace(Stack[-1])
0x1ef: Pop(1)
0x1f0: Stack[-1] = 0
0x1f1: GOTO 0x1f4

0x1f2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1f3: Pop(0)
0x1f4: Stack[-13] = Stack[-1]
0x1f5: Return(); Pop(8)

0x1f6: Stack[-1] = 0
0x1f7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1f8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1f9: Pop(0)
0x1fa: Pop(0); Push((bool) Stack[-4] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1fc: Push("Locator ")
0x1fd: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1fe: Push(" doesn't exist")
0x1ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x200: @ Trace(Stack[-1])
0x201: Pop(1)
0x202: Stack[-1] = 0
0x203: GOTO 0x206

0x204: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x205: Pop(0)
0x206: Stack[-13] = Stack[-1]
0x207: Return(); Pop(8)

0x208: Stack[-1] = 0
0x209: PushEmpty(object, object)
0x20a: @ FindActor(Stack[-1], Stack[-4])
0x20b: Pop(0)
0x20c: Pop(0); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20e: Push("Door ")
0x20f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x210: Push(" not found")
0x211: Pop(2); Push(Stack[-2] + Stack[-1]);
0x212: @ Trace(Stack[-1])
0x213: Pop(1)
0x214: GOTO 0x218

0x215: Push("locked")
0x216: @@ SetProperty(Stack[-1], Stack[-4])
0x217: Pop(1)
0x218: Return(); Pop(2)

0x219: Stack[-1] = 0
0x21a: PushEmpty(object, object)
0x21b: @ FindActor(Stack[-1], Stack[-4])
0x21c: Pop(0)
0x21d: Pop(0); Push((bool) Stack[-1] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21f: Push("Door ")
0x220: Pop(1); Push(Stack[-1] + Stack[-5]);
0x221: Push(" not found")
0x222: Pop(2); Push(Stack[-2] + Stack[-1]);
0x223: @ Trace(Stack[-1])
0x224: Pop(1)
0x225: GOTO 0x22d

0x226: Push(Stack[-3])
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: @@ Close()
0x229: Pop(0)
0x22a: Push("locked")
0x22b: @@ SetProperty(Stack[-1], Stack[-4])
0x22c: Pop(1)
0x22d: Return(); Pop(2)

0x22e: Stack[-1] = 0
0x22f: PushEmpty()
0x230: Pop(0); Push((bool) Stack[-2] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: Stack[-3] = (bool) 0
0x233: Return(); Pop(0)

0x234: Push((int) 0)
0x235: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x237: Push((int) 8)
0x238: @ SendWorldWndMessage(Stack[-1])
0x239: Pop(1)
0x23a: GOTO 0x244

0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23e: Push((int) 9)
0x23f: @ SendWorldWndMessage(Stack[-1])
0x240: Pop(1)
0x241: GOTO 0x244

0x242: Stack[-3] = (bool) 0
0x243: Return(); Pop(0)

0x244: PushEmpty(float)
0x245: Stack[-1] = Stack[-2]
0x246: Call2 0x252

0x247: Pop(1)
0x248: PushEmpty(bool, object, string, float, float, float)
0x249: Stack[-5] = Stack[-8]
0x24a: Stack[-4] = "reputation"
0x24b: Stack[-3] = Stack[-7]
0x24c: Stack[-2] = (int) 0
0x24d: Stack[-1] = (int) 1
0x24e: Call2 0x1b3

0x24f: Pop(6)
0x250: Stack[-3] = (bool) 1
0x251: Return(); Pop(0)

0x252: PushEmpty(object, object)
0x253: @ CreateFloatVector(Stack[-1])
0x254: Pop(0)
0x255: @@ add(Stack[-3])
0x256: Pop(0)
0x257: Push((int) 16)
0x258: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x259: Pop(1)
0x25a: Return(); Pop(2)

0x25b: Stack[-1] = 0
0x25c: PushEmpty(int, int, object, int, int, object)
0x25d: Push(Stack[-7])
0x25e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25f: @@ size(Stack[-3])
0x260: Pop(0)
0x261: Stack[-2] = (int) 0
0x262: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x263: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x264: @@ get(Stack[-1], Stack[-2])
0x265: Pop(0)
0x266: Push(Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: @ RemoveActor(Stack[-1])
0x269: Pop(0)
0x26a: Stack[-1] = 0
0x26b: Push((int) 1)
0x26c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26d: GOTO 0x262

0x26e: @@ clear()
0x26f: Pop(0)
0x270: Return(); Pop(6)

0x271: PushEmpty(int, int, object, int, int, object)
0x272: Push(Stack[-7])
0x273: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x274: @@ size(Stack[-3])
0x275: Pop(0)
0x276: Stack[-2] = (int) 0
0x277: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x278: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x279: @@ get(Stack[-1], Stack[-2])
0x27a: Pop(0)
0x27b: Push(Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: @@ Remove()
0x27e: Pop(0)
0x27f: Stack[-1] = 0
0x280: Push((int) 1)
0x281: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x282: GOTO 0x277

0x283: @@ clear()
0x284: Pop(0)
0x285: Return(); Pop(6)

0x286: PushEmpty(int, int, object, int, int, object)
0x287: Push(Stack[-8])
0x288: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x289: @@ size(Stack[-3])
0x28a: Pop(0)
0x28b: Stack[-2] = (int) 0
0x28c: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x28d: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x28e: @@ get(Stack[-1], Stack[-2])
0x28f: Pop(0)
0x290: Push(Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x292: @ Trigger(Stack[-1], Stack[-7])
0x293: Pop(0)
0x294: Stack[-1] = 0
0x295: Push((int) 1)
0x296: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x297: GOTO 0x28c

0x298: Return(); Pop(6)

0x299: PushEmpty()
0x29a: Stack[-2] = (bool) 0
0x29b: Push((int) 1)
0x29c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29e: Push((int) 1000)
0x29f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Stack[-2] = (bool) 1
0x2a2: Return(); Pop(0)

