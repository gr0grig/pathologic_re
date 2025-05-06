GlobalVarCount = 0

Strings:
	Patrol location: 
	pt_d3q01_patrol
	pers_patrool
	d3q01_cpatrol.xml
	add
	d3q01_patrol.xml
	d3q01_corpse1
	actor_disp.bin
	d3q01_corpse2
	d3q01_corpse3
	pt_d3q01_gpatrol1
	d3q01_gpatrol.xml
	pt_d3q01_gpatrol2
	pt_d3q01_gpatrol3
	d3q01_graveyard_fire
	d3q01_graveyard_fire.xml
	place_butchers
	patrol_talk
	gpatrol_attack
	quest_d3_01_teleport
	size
	get
	GetActor
	kill_player
	put_item
	gpatrol_talk
	talk_player
	fail
	completed
	d3q01
	cleanup
	clear
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Remove

Import:
	Hold (0 args)
	GetMainOutdoorScene (1 args)
	irand (2 args)
	Trace (1 args)
	AddScriptedActor (5 args)
	AddActor (6 args)
	Trigger (2 args)
	SetVariable (2 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x85 Vars = (string)


0x0: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x1: PushEmpty(object)
0x2: Call 0x10d

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call 0x10d

0x7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: PushEmpty(object)
0xa: Call 0x10d

0xb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0xc: Pop(1)
0xd: @ Hold()
0xe: Pop(0)
0xf: GOTO 0xd

0x10: Return(); Pop(0)

0x11: PushEmpty(object, int, object, object, int, object)
0x12: @ GetMainOutdoorScene(Stack[-3])
0x13: Pop(0)
0x14: Push((int) 3)
0x15: @ irand(Stack[-3], Stack[-1])
0x16: Pop(1)
0x17: Push("Patrol location: ")
0x18: Pop(1); Push(Stack[-1] + Stack[-3]);
0x19: @ Trace(Stack[-1])
0x1a: Pop(1)
0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-4] = Stack[-8]
0x1d: Push("pt_d3q01_patrol")
0x1e: Push((int) 1)
0x1f: Pop(1); Push(Stack[-9] + Stack[-1]);
0x20: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x21: Stack[-2] = "pers_patrool"
0x22: Stack[-1] = "d3q01_cpatrol.xml"
0x23: Call 0x11e

0x24: Pop(4)
0x25: @@ add(Stack[-1])
0x26: Pop(1)
0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-8]
0x29: Push("pt_d3q01_patrol")
0x2a: Push((int) 1)
0x2b: Pop(1); Push(Stack[-9] + Stack[-1]);
0x2c: Push((int) 3)
0x2d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2e: Push((int) 1)
0x2f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x31: Stack[-2] = "pers_patrool"
0x32: Stack[-1] = "d3q01_patrol.xml"
0x33: Call 0x11e

0x34: Pop(4)
0x35: @@ add(Stack[-1])
0x36: Pop(1)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-4] = Stack[-8]
0x39: Push("pt_d3q01_patrol")
0x3a: Push((int) 2)
0x3b: Pop(1); Push(Stack[-9] + Stack[-1]);
0x3c: Push((int) 3)
0x3d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3e: Push((int) 1)
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41: Stack[-2] = "pers_patrool"
0x42: Stack[-1] = "d3q01_patrol.xml"
0x43: Call 0x11e

0x44: Pop(4)
0x45: @@ add(Stack[-1])
0x46: Pop(1)
0x47: Push("d3q01_corpse1")
0x48: Push("actor_disp.bin")
0x49: Push(CVector(0.0, 0.0, 0.0))
0x4a: @ AddScriptedActor(Stack[-4], Stack[-3], Stack[-2], Stack[-6], Stack[-1])
0x4b: Pop(3)
0x4c: @@ add(Stack[-1])
0x4d: Pop(0)
0x4e: Push("d3q01_corpse2")
0x4f: Push("actor_disp.bin")
0x50: Push(CVector(0.0, 0.0, 0.0))
0x51: @ AddScriptedActor(Stack[-4], Stack[-3], Stack[-2], Stack[-6], Stack[-1])
0x52: Pop(3)
0x53: @@ add(Stack[-1])
0x54: Pop(0)
0x55: Push("d3q01_corpse3")
0x56: Push("actor_disp.bin")
0x57: Push(CVector(0.0, 0.0, 0.0))
0x58: @ AddScriptedActor(Stack[-4], Stack[-3], Stack[-2], Stack[-6], Stack[-1])
0x59: Pop(3)
0x5a: @@ add(Stack[-1])
0x5b: Pop(0)
0x5c: Return(); Pop(6)

0x5d: Stack[-1] = 0
0x5e: Stack[-3] = 0
0x5f: PushEmpty(object, object)
0x60: @ GetMainOutdoorScene(Stack[-1])
0x61: Pop(0)
0x62: PushEmpty(object, object, string, string, string)
0x63: Stack[-4] = Stack[-6]
0x64: Stack[-3] = "pt_d3q01_gpatrol1"
0x65: Stack[-2] = "pers_patrool"
0x66: Stack[-1] = "d3q01_gpatrol.xml"
0x67: Call 0x11e

0x68: Pop(4)
0x69: @@ add(Stack[-1])
0x6a: Pop(1)
0x6b: PushEmpty(object, object, string, string, string)
0x6c: Stack[-4] = Stack[-6]
0x6d: Stack[-3] = "pt_d3q01_gpatrol2"
0x6e: Stack[-2] = "pers_patrool"
0x6f: Stack[-1] = "d3q01_gpatrol.xml"
0x70: Call 0x11e

0x71: Pop(4)
0x72: @@ add(Stack[-1])
0x73: Pop(1)
0x74: PushEmpty(object, object, string, string, string)
0x75: Stack[-4] = Stack[-6]
0x76: Stack[-3] = "pt_d3q01_gpatrol3"
0x77: Stack[-2] = "pers_patrool"
0x78: Stack[-1] = "d3q01_gpatrol.xml"
0x79: Call 0x11e

0x7a: Pop(4)
0x7b: @@ add(Stack[-1])
0x7c: Pop(1)
0x7d: Push("d3q01_graveyard_fire")
0x7e: Push(CVector(0.0, 0.0, 0.0))
0x7f: Push(CVector(0.0, 0.0, 1.0))
0x80: Push("d3q01_graveyard_fire.xml")
0x81: @ AddActor(Stack[-3], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(4)
0x83: Return(); Pop(2)

0x84: Stack[-1] = 0
0x85: PushEmpty(int, int, object, object, int, int, object, object, int, int, object, object, int, int, object, object)
0x86: @ Trace(Stack[-17])
0x87: Pop(0)
0x88: Push("place_butchers")
0x89: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: PushEmpty()
0x8c: Call 0x11

0x8d: Pop(0)
0x8e: GOTO 0xe4

0x8f: Push("patrol_talk")
0x90: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x92: PushEmpty()
0x93: Call 0x5f

0x94: Pop(0)
0x95: GOTO 0xe4

0x96: Push("gpatrol_attack")
0x97: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x99: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x9c: PushEmpty(object, string)
0x9d: Stack[-1] = "quest_d3_01_teleport"
0x9e: Call 0x113

0x9f: Pop(2)
0xa0: @@ size(Stack[-8])
0xa1: Pop(0)
0xa2: Stack[-7] = (int) 0
0xa3: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0xa4: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xa5: @@ get(Stack[-6], Stack[-7])
0xa6: Pop(0)
0xa7: @@ GetActor(Stack[-5])
0xa8: Pop(0)
0xa9: Push(Stack[-5])
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: Push("kill_player")
0xac: @ Trigger(Stack[-6], Stack[-1])
0xad: Pop(1)
0xae: Stack[-5] = 0
0xaf: Stack[-6] = 0
0xb0: Push((int) 1)
0xb1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb2: GOTO 0xa3

0xb3: Push("put_item")
0xb4: @ Trigger(Stack[-3], Stack[-1])
0xb5: Pop(1)
0xb6: PushEmpty()
0xb7: Call 0xf5

0xb8: Pop(0)
0xb9: GOTO 0xe4

0xba: Push("gpatrol_talk")
0xbb: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xbd: Push("put_item")
0xbe: @ Trigger(Stack[-3], Stack[-1])
0xbf: Pop(1)
0xc0: @@ size(Stack[-4])
0xc1: Pop(0)
0xc2: Stack[-3] = (int) 0
0xc3: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xc4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc5: @@ get(Stack[-2], Stack[-3])
0xc6: Pop(0)
0xc7: @@ GetActor(Stack[-1])
0xc8: Pop(0)
0xc9: Push(Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcb: Push("talk_player")
0xcc: @ Trigger(Stack[-2], Stack[-1])
0xcd: Pop(1)
0xce: Stack[-1] = 0
0xcf: Stack[-2] = 0
0xd0: Push((int) 1)
0xd1: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xd2: GOTO 0xc3

0xd3: PushEmpty()
0xd4: Call 0xf5

0xd5: Pop(0)
0xd6: GOTO 0xe4

0xd7: Push("fail")
0xd8: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xda: PushEmpty()
0xdb: Call 0xe5

0xdc: Pop(0)
0xdd: GOTO 0xe4

0xde: Push("completed")
0xdf: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe1: PushEmpty()
0xe2: Call 0xed

0xe3: Pop(0)
0xe4: Return(); Pop(16)

0xe5: Push("d3q01")
0xe6: Push((int) -1)
0xe7: @ SetVariable(Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: PushEmpty()
0xea: Call 0x108

0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: Push("d3q01")
0xee: Push((int) 1000)
0xef: @ SetVariable(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: PushEmpty()
0xf2: Call 0x108

0xf3: Pop(0)
0xf4: Return(); Pop(0)

0xf5: PushEmpty(object)
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call 0x130

0xf8: Pop(1)
0xf9: PushEmpty(object, string)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = "cleanup"
0xfc: Call 0x143

0xfd: Pop(2)
0xfe: @@ clear()
0xff: Pop(0)
0x100: PushEmpty(object)
0x101: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x102: Call 0x130

0x103: Pop(1)
0x104: Push("cleanup")
0x105: @ Trigger(Stack[-3], Stack[-1])
0x106: Pop(1)
0x107: Return(); Pop(0)

0x108: EventDisable(26)
0x109: PushEmpty()
0x10a: Call 0xf5

0x10b: Pop(0)
0x10c: Return(); Pop(0)

0x10d: PushEmpty(object, object)
0x10e: @ CreateObjectVector(Stack[-1])
0x10f: Pop(0)
0x110: Stack[-3] = Stack[-1]
0x111: Return(); Pop(2)

0x112: Stack[-1] = 0
0x113: PushEmpty(object, object, object, object)
0x114: @ GetMainOutdoorScene(Stack[-2])
0x115: Pop(0)
0x116: Push(".bin")
0x117: Pop(1); Push(Stack[-6] + Stack[-1]);
0x118: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x119: Pop(1)
0x11a: Stack[-6] = Stack[-1]
0x11b: Return(); Pop(4)

0x11c: Stack[-1] = 0
0x11d: Stack[-2] = 0
0x11e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x11f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-4] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x123: Push("Locator ")
0x124: Pop(1); Push(Stack[-1] + Stack[-12]);
0x125: Push(" doesn't exist")
0x126: Pop(2); Push(Stack[-2] + Stack[-1]);
0x127: @ Trace(Stack[-1])
0x128: Pop(1)
0x129: Stack[-1] = 0
0x12a: GOTO 0x12d

0x12b: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x12c: Pop(0)
0x12d: Stack[-13] = Stack[-1]
0x12e: Return(); Pop(8)

0x12f: Stack[-1] = 0
0x130: PushEmpty(int, int, object, int, int, object)
0x131: @@ size(Stack[-3])
0x132: Pop(0)
0x133: Stack[-2] = (int) 0
0x134: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x135: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x136: @@ get(Stack[-1], Stack[-2])
0x137: Pop(0)
0x138: Push(Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: @@ Remove()
0x13b: Pop(0)
0x13c: Stack[-1] = 0
0x13d: Push((int) 1)
0x13e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13f: GOTO 0x134

0x140: @@ clear()
0x141: Pop(0)
0x142: Return(); Pop(6)

0x143: PushEmpty(int, int, object, int, int, object)
0x144: @@ size(Stack[-3])
0x145: Pop(0)
0x146: Stack[-2] = (int) 0
0x147: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x148: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x149: @@ get(Stack[-1], Stack[-2])
0x14a: Pop(0)
0x14b: Push(Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14d: @ Trigger(Stack[-1], Stack[-7])
0x14e: Pop(0)
0x14f: Stack[-1] = 0
0x150: Push((int) 1)
0x151: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x152: GOTO 0x147

0x153: Return(); Pop(6)

