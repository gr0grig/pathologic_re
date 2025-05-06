GlobalVarCount = 0

Strings:
	warehouse_rubin
	house_petr@door1
	init_house
	NPC_Petr
	house_petr
	pt_d10q01_soldier
	pers_soldat
	d10q01_soldier.xml
	add
	pt_d10q01_msoldier
	d10q01_msoldier.xml
	pt_d10q01_sketch
	scripted_container
	d10q01_blueprint.xml
	pt_d10q01_petr
	pers_birdmask
	d10q01_petr.xml
	pt_d10q01_fire
	scripted
	d10q01_fire.xml
	soldier_fight
	attack
	house_unload
	d10q01SoldierTalk
	cleanup
	d10q01
	fail
	completed
	pt_petr
	NPC_Danko_Petr.xml
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
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddActorByType (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, bool, bool) Params = 0
		EVENT_26 Op = 0x17 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x2: Push("warehouse_rubin")
0x3: @ GetSceneByName(Stack[-2], Stack[-1])
0x4: Pop(1)
0x5: Push("rubin")
0x6: @ Trigger(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: PushEmpty(string, bool)
0x9: Stack[-2] = "house_petr@door1"
0xa: Stack[-1] = (bool) 0
0xb: Call2 0x100

0xc: Pop(2)
0xd: PushEmpty(object)
0xe: Call2 0xd6

0xf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x10: Pop(1)
0x11: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x12: @ Hold()
0x13: Pop(0)
0x14: GOTO 0x12

0x15: Return(); Pop(2)

0x16: Stack[-1] = 0
0x17: PushEmpty(object, int, int, int, object, int, int, int)
0x18: @ Trace(Stack[-9])
0x19: Pop(0)
0x1a: Push("init_house")
0x1b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x1d: PushEmpty(bool, string)
0x1e: Stack[-1] = "NPC_Petr"
0x1f: Call2 0x111

0x20: Pop(2)
0x21: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x22: Push("house_petr")
0x23: @ GetSceneByName(Stack[-5], Stack[-1])
0x24: Pop(1)
0x25: Stack[-3] = (int) 1
0x26: Push((int) 4)
0x27: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-4] = Stack[-9]
0x2b: Push("pt_d10q01_soldier")
0x2c: Stack[-4] = Stack[-1] + Stack[-9]; Pop(1);
0x2d: Stack[-2] = "pers_soldat"
0x2e: Stack[-1] = "d10q01_soldier.xml"
0x2f: Call2 0xdc

0x30: Pop(4)
0x31: @@ add(Stack[-1])
0x32: Pop(1)
0x33: Push((int) 1)
0x34: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x35: GOTO 0x26

0x36: PushEmpty(object, object, string, string, string)
0x37: Stack[-4] = Stack[-9]
0x38: Stack[-3] = "pt_d10q01_msoldier"
0x39: Stack[-2] = "pers_soldat"
0x3a: Stack[-1] = "d10q01_msoldier.xml"
0x3b: Call2 0xdc

0x3c: Pop(4)
0x3d: @@ add(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-9]
0x41: Stack[-3] = "pt_d10q01_sketch"
0x42: Stack[-2] = "scripted_container"
0x43: Stack[-1] = "d10q01_blueprint.xml"
0x44: Call2 0xee

0x45: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: @ GetMainOutdoorScene(Stack[-4])
0x48: Pop(0)
0x49: PushEmpty(object, object, string, string, string)
0x4a: Stack[-4] = Stack[-9]
0x4b: Stack[-3] = "pt_d10q01_petr"
0x4c: Stack[-2] = "pers_birdmask"
0x4d: Stack[-1] = "d10q01_petr.xml"
0x4e: Call2 0xdc

0x4f: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x50: Pop(5)
0x51: PushEmpty(object, object, string, string, string)
0x52: Stack[-4] = Stack[-9]
0x53: Stack[-3] = "pt_d10q01_fire"
0x54: Stack[-2] = "scripted"
0x55: Stack[-1] = "d10q01_fire.xml"
0x56: Call2 0xee

0x57: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x58: Pop(5)
0x59: Stack[-4] = 0
0x5a: GOTO 0x91

0x5b: Push("soldier_fight")
0x5c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(object, string)
0x5f: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x60: Stack[-1] = "attack"
0x61: Call2 0x11d

0x62: Pop(2)
0x63: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x64: GOTO 0x91

0x65: Push("house_unload")
0x66: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x68: Push("d10q01SoldierTalk")
0x69: @ GetVariable(Stack[-1], Stack[-3])
0x6a: Pop(1)
0x6b: Push(Stack[-2])
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: PushEmpty(string, bool)
0x6e: Stack[-2] = "house_petr@door1"
0x6f: Stack[-1] = (bool) 1
0x70: Call2 0x100

0x71: Pop(2)
0x72: GOTO 0x91

0x73: Push("cleanup")
0x74: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x76: Push("d10q01")
0x77: @ GetVariable(Stack[-1], Stack[-2])
0x78: Pop(1)
0x79: Push((int) 1000)
0x7a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7c: PushEmpty()
0x7d: Call2 0x92

0x7e: Pop(0)
0x7f: GOTO 0x83

0x80: PushEmpty()
0x81: Call2 0xa2

0x82: Pop(0)
0x83: GOTO 0x91

0x84: Push("fail")
0x85: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x92

0x89: Pop(0)
0x8a: GOTO 0x91

0x8b: Push("completed")
0x8c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8e: PushEmpty()
0x8f: Call2 0x9a

0x90: Pop(0)
0x91: Return(); Pop(8)

0x92: Push("d10q01")
0x93: Push((int) -1)
0x94: @ SetVariable(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: PushEmpty()
0x97: Call2 0xa2

0x98: Pop(0)
0x99: Return(); Pop(0)

0x9a: Push("d10q01")
0x9b: Push((int) 1000)
0x9c: @ SetVariable(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: PushEmpty()
0x9f: Call2 0xa2

0xa0: Pop(0)
0xa1: Return(); Pop(0)

0xa2: PushEmpty(object, object)
0xa3: EventDisable(26)
0xa4: PushEmpty(object, string)
0xa5: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Stack[-1] = "cleanup"
0xa7: Call2 0x11d

0xa8: Pop(2)
0xa9: Push( Stack[1 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: Push("cleanup")
0xac: @ Trigger(Stack[-1], Stack[-1])
0xad: Pop(1)
0xae: Push( Stack[2 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: Push("cleanup")
0xb1: @ Trigger(Stack[-2], Stack[-1])
0xb2: Pop(1)
0xb3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb4: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb5: Push("cleanup")
0xb6: @ Trigger(Stack[-3], Stack[-1])
0xb7: Pop(1)
0xb8: PushEmpty(string, bool)
0xb9: Stack[-2] = "house_petr@door1"
0xba: Stack[-1] = (bool) 0
0xbb: Call2 0x100

0xbc: Pop(2)
0xbd: Push( Stack[5 + Tasks[-1].StackPointer] )
0xbe: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xbf: Push("house_petr")
0xc0: @ GetSceneByName(Stack[-2], Stack[-1])
0xc1: Pop(1)
0xc2: PushEmpty(object, object, string, string, string)
0xc3: Stack[-4] = Stack[-6]
0xc4: Stack[-3] = "pt_petr"
0xc5: Stack[-2] = "NPC_Petr"
0xc6: Stack[-1] = "NPC_Danko_Petr.xml"
0xc7: Call2 0xdc

0xc8: Pop(5)
0xc9: Stack[-1] = 0
0xca: PushEmpty(object)
0xcb: Call2 0xd0

0xcc: Pop(0)
0xcd: @ RemoveActor(Stack[-1])
0xce: Pop(1)
0xcf: Return(); Pop(2)

0xd0: PushEmpty(object, object)
0xd1: @ self(Stack[-1])
0xd2: Pop(0)
0xd3: Stack[-3] = Stack[-1]
0xd4: Return(); Pop(2)

0xd5: Stack[-1] = 0
0xd6: PushEmpty(object, object)
0xd7: @ CreateObjectVector(Stack[-1])
0xd8: Pop(0)
0xd9: Stack[-3] = Stack[-1]
0xda: Return(); Pop(2)

0xdb: Stack[-1] = 0
0xdc: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdd: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xde: Pop(0)
0xdf: Pop(0); Push((bool) Stack[-4] == 0)
0xe0: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe1: Push("Locator ")
0xe2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe3: Push(" doesn't exist")
0xe4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe5: @ Trace(Stack[-1])
0xe6: Pop(1)
0xe7: Stack[-1] = 0
0xe8: GOTO 0xeb

0xe9: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xea: Pop(0)
0xeb: Stack[-13] = Stack[-1]
0xec: Return(); Pop(8)

0xed: Stack[-1] = 0
0xee: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xef: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xf0: Pop(0)
0xf1: Pop(0); Push((bool) Stack[-4] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf3: Push("Locator ")
0xf4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf5: Push(" doesn't exist")
0xf6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf7: @ Trace(Stack[-1])
0xf8: Pop(1)
0xf9: Stack[-1] = 0
0xfa: GOTO 0xfd

0xfb: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xfc: Pop(0)
0xfd: Stack[-13] = Stack[-1]
0xfe: Return(); Pop(8)

0xff: Stack[-1] = 0
0x100: PushEmpty(object, object)
0x101: @ FindActor(Stack[-1], Stack[-4])
0x102: Pop(0)
0x103: Pop(0); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x105: Push("Door ")
0x106: Pop(1); Push(Stack[-1] + Stack[-5]);
0x107: Push(" not found")
0x108: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109: @ Trace(Stack[-1])
0x10a: Pop(1)
0x10b: GOTO 0x10f

0x10c: Push("locked")
0x10d: @@ SetProperty(Stack[-1], Stack[-4])
0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: Stack[-1] = 0
0x111: PushEmpty(object, object)
0x112: @ FindActor(Stack[-1], Stack[-3])
0x113: Pop(0)
0x114: Pop(0); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-4] = (bool) 0
0x117: Return(); Pop(2)

0x118: @ RemoveActor(Stack[-1])
0x119: Pop(0)
0x11a: Stack[-4] = (bool) 1
0x11b: Return(); Pop(2)

0x11c: Stack[-1] = 0
0x11d: PushEmpty(int, int, object, int, int, object)
0x11e: Push(Stack[-8])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: @@ size(Stack[-3])
0x121: Pop(0)
0x122: Stack[-2] = (int) 0
0x123: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x124: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x125: @@ get(Stack[-1], Stack[-2])
0x126: Pop(0)
0x127: Push(Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x129: @ Trigger(Stack[-1], Stack[-7])
0x12a: Pop(0)
0x12b: Stack[-1] = 0
0x12c: Push((int) 1)
0x12d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12e: GOTO 0x123

0x12f: Return(); Pop(6)

