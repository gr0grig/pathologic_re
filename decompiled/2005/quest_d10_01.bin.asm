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
	GTASK_0 Vars = (object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x16 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push("warehouse_rubin")
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Push("rubin")
0x5: @ Trigger(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(string, bool)
0x8: Stack[-2] = "house_petr@door1"
0x9: Stack[-1] = (bool) 0
0xa: Call2 0xf0

0xb: Pop(2)
0xc: PushEmpty(object)
0xd: Call2 0xc6

0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf: Pop(1)
0x10: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, int, int, int, object, int, int, int)
0x17: @ Trace(Stack[-9])
0x18: Pop(0)
0x19: Push("init_house")
0x1a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x1c: PushEmpty(bool, string)
0x1d: Stack[-1] = "NPC_Petr"
0x1e: Call2 0x101

0x1f: Pop(2)
0x20: Push("house_petr")
0x21: @ GetSceneByName(Stack[-5], Stack[-1])
0x22: Pop(1)
0x23: Stack[-3] = (int) 1
0x24: Push((int) 4)
0x25: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-9]
0x29: Push("pt_d10q01_soldier")
0x2a: Stack[-4] = Stack[-1] + Stack[-9]; Pop(1);
0x2b: Stack[-2] = "pers_soldat"
0x2c: Stack[-1] = "d10q01_soldier.xml"
0x2d: Call2 0xcc

0x2e: Pop(4)
0x2f: @@ add(Stack[-1])
0x30: Pop(1)
0x31: Push((int) 1)
0x32: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x33: GOTO 0x24

0x34: PushEmpty(object, object, string, string, string)
0x35: Stack[-4] = Stack[-9]
0x36: Stack[-3] = "pt_d10q01_msoldier"
0x37: Stack[-2] = "pers_soldat"
0x38: Stack[-1] = "d10q01_msoldier.xml"
0x39: Call2 0xcc

0x3a: Pop(4)
0x3b: @@ add(Stack[-1])
0x3c: Pop(1)
0x3d: PushEmpty(object, object, string, string, string)
0x3e: Stack[-4] = Stack[-9]
0x3f: Stack[-3] = "pt_d10q01_sketch"
0x40: Stack[-2] = "scripted_container"
0x41: Stack[-1] = "d10q01_blueprint.xml"
0x42: Call2 0xde

0x43: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x44: Pop(5)
0x45: @ GetMainOutdoorScene(Stack[-4])
0x46: Pop(0)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-4] = Stack[-9]
0x49: Stack[-3] = "pt_d10q01_petr"
0x4a: Stack[-2] = "pers_birdmask"
0x4b: Stack[-1] = "d10q01_petr.xml"
0x4c: Call2 0xcc

0x4d: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x4e: Pop(5)
0x4f: PushEmpty(object, object, string, string, string)
0x50: Stack[-4] = Stack[-9]
0x51: Stack[-3] = "pt_d10q01_fire"
0x52: Stack[-2] = "scripted"
0x53: Stack[-1] = "d10q01_fire.xml"
0x54: Call2 0xde

0x55: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x56: Pop(5)
0x57: Stack[-4] = 0
0x58: GOTO 0x8f

0x59: Push("soldier_fight")
0x5a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5c: PushEmpty(object, string)
0x5d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = "attack"
0x5f: Call2 0x10d

0x60: Pop(2)
0x61: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x62: GOTO 0x8f

0x63: Push("house_unload")
0x64: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x66: Push("d10q01SoldierTalk")
0x67: @ GetVariable(Stack[-1], Stack[-3])
0x68: Pop(1)
0x69: Push(Stack[-2])
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: PushEmpty(string, bool)
0x6c: Stack[-2] = "house_petr@door1"
0x6d: Stack[-1] = (bool) 1
0x6e: Call2 0xf0

0x6f: Pop(2)
0x70: GOTO 0x8f

0x71: Push("cleanup")
0x72: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x74: Push("d10q01")
0x75: @ GetVariable(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Push((int) 1000)
0x78: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7a: PushEmpty()
0x7b: Call2 0x90

0x7c: Pop(0)
0x7d: GOTO 0x81

0x7e: PushEmpty()
0x7f: Call2 0xa0

0x80: Pop(0)
0x81: GOTO 0x8f

0x82: Push("fail")
0x83: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x85: PushEmpty()
0x86: Call2 0x90

0x87: Pop(0)
0x88: GOTO 0x8f

0x89: Push("completed")
0x8a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: PushEmpty()
0x8d: Call2 0x98

0x8e: Pop(0)
0x8f: Return(); Pop(8)

0x90: Push("d10q01")
0x91: Push((int) -1)
0x92: @ SetVariable(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: PushEmpty()
0x95: Call2 0xa0

0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: Push("d10q01")
0x99: Push((int) 1000)
0x9a: @ SetVariable(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: PushEmpty()
0x9d: Call2 0xa0

0x9e: Pop(0)
0x9f: Return(); Pop(0)

0xa0: EventDisable(26)
0xa1: PushEmpty(object, string)
0xa2: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xa3: Stack[-1] = "cleanup"
0xa4: Call2 0x10d

0xa5: Pop(2)
0xa6: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: Push("cleanup")
0xa9: @ Trigger(Stack[-1], Stack[-1])
0xaa: Pop(1)
0xab: Push( Stack[2 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push("cleanup")
0xae: @ Trigger(Stack[-2], Stack[-1])
0xaf: Pop(1)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb2: Push("cleanup")
0xb3: @ Trigger(Stack[-3], Stack[-1])
0xb4: Pop(1)
0xb5: PushEmpty(string, bool)
0xb6: Stack[-2] = "house_petr@door1"
0xb7: Stack[-1] = (bool) 0
0xb8: Call2 0xf0

0xb9: Pop(2)
0xba: PushEmpty(object)
0xbb: Call2 0xc0

0xbc: Pop(0)
0xbd: @ RemoveActor(Stack[-1])
0xbe: Pop(1)
0xbf: Return(); Pop(0)

0xc0: PushEmpty(object, object)
0xc1: @ self(Stack[-1])
0xc2: Pop(0)
0xc3: Stack[-3] = Stack[-1]
0xc4: Return(); Pop(2)

0xc5: Stack[-1] = 0
0xc6: PushEmpty(object, object)
0xc7: @ CreateObjectVector(Stack[-1])
0xc8: Pop(0)
0xc9: Stack[-3] = Stack[-1]
0xca: Return(); Pop(2)

0xcb: Stack[-1] = 0
0xcc: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xcd: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xce: Pop(0)
0xcf: Pop(0); Push((bool) Stack[-4] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd1: Push("Locator ")
0xd2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xd3: Push(" doesn't exist")
0xd4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd5: @ Trace(Stack[-1])
0xd6: Pop(1)
0xd7: Stack[-1] = 0
0xd8: GOTO 0xdb

0xd9: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xda: Pop(0)
0xdb: Stack[-13] = Stack[-1]
0xdc: Return(); Pop(8)

0xdd: Stack[-1] = 0
0xde: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdf: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe0: Pop(0)
0xe1: Pop(0); Push((bool) Stack[-4] == 0)
0xe2: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe3: Push("Locator ")
0xe4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe5: Push(" doesn't exist")
0xe6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe7: @ Trace(Stack[-1])
0xe8: Pop(1)
0xe9: Stack[-1] = 0
0xea: GOTO 0xed

0xeb: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xec: Pop(0)
0xed: Stack[-13] = Stack[-1]
0xee: Return(); Pop(8)

0xef: Stack[-1] = 0
0xf0: PushEmpty(object, object)
0xf1: @ FindActor(Stack[-1], Stack[-4])
0xf2: Pop(0)
0xf3: Pop(0); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf5: Push("Door ")
0xf6: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf7: Push(" not found")
0xf8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf9: @ Trace(Stack[-1])
0xfa: Pop(1)
0xfb: GOTO 0xff

0xfc: Push("locked")
0xfd: @@ SetProperty(Stack[-1], Stack[-4])
0xfe: Pop(1)
0xff: Return(); Pop(2)

0x100: Stack[-1] = 0
0x101: PushEmpty(object, object)
0x102: @ FindActor(Stack[-1], Stack[-3])
0x103: Pop(0)
0x104: Pop(0); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-4] = (bool) 0
0x107: Return(); Pop(2)

0x108: @ RemoveActor(Stack[-1])
0x109: Pop(0)
0x10a: Stack[-4] = (bool) 1
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(int, int, object, int, int, object)
0x10e: Push(Stack[-8])
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: @@ size(Stack[-3])
0x111: Pop(0)
0x112: Stack[-2] = (int) 0
0x113: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x114: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x115: @@ get(Stack[-1], Stack[-2])
0x116: Pop(0)
0x117: Push(Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: @ Trigger(Stack[-1], Stack[-7])
0x11a: Pop(0)
0x11b: Stack[-1] = 0
0x11c: Push((int) 1)
0x11d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11e: GOTO 0x113

0x11f: Return(); Pop(6)

