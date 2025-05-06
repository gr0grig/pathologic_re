GlobalVarCount = 0

Strings:
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
	house_petr@door1
	fail
	completed
	d10q01
	cleanup
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
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetMainOutdoorScene (1 args)
	SetVariable (2 args)
	Trigger (2 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddActorByType (6 args)
	FindActor (2 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)


0x0: PushEmpty(object)
0x1: Call 0x98

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(object, int, object, int)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("init_house")
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0xf: PushEmpty(bool, string)
0x10: Stack[-1] = "NPC_Petr"
0x11: Call 0xd2

0x12: Pop(2)
0x13: Push("house_petr")
0x14: @ GetSceneByName(Stack[-3], Stack[-1])
0x15: Pop(1)
0x16: Stack[-1] = (int) 1
0x17: Push((int) 4)
0x18: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x1a: PushEmpty(object, object, string, string, string)
0x1b: Stack[-4] = Stack[-7]
0x1c: Push("pt_d10q01_soldier")
0x1d: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x1e: Stack[-2] = "pers_soldat"
0x1f: Stack[-1] = "d10q01_soldier.xml"
0x20: Call 0x9e

0x21: Pop(4)
0x22: @@ add(Stack[-1])
0x23: Pop(1)
0x24: Push((int) 1)
0x25: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x26: GOTO 0x17

0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-7]
0x29: Stack[-3] = "pt_d10q01_msoldier"
0x2a: Stack[-2] = "pers_soldat"
0x2b: Stack[-1] = "d10q01_msoldier.xml"
0x2c: Call 0x9e

0x2d: Pop(4)
0x2e: @@ add(Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(object, object, string, string, string)
0x31: Stack[-4] = Stack[-7]
0x32: Stack[-3] = "pt_d10q01_sketch"
0x33: Stack[-2] = "scripted_container"
0x34: Stack[-1] = "d10q01_blueprint.xml"
0x35: Call 0xb0

0x36: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x37: Pop(5)
0x38: @ GetMainOutdoorScene(Stack[-2])
0x39: Pop(0)
0x3a: PushEmpty(object, object, string, string, string)
0x3b: Stack[-4] = Stack[-7]
0x3c: Stack[-3] = "pt_d10q01_petr"
0x3d: Stack[-2] = "pers_birdmask"
0x3e: Stack[-1] = "d10q01_petr.xml"
0x3f: Call 0x9e

0x40: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x41: Pop(5)
0x42: PushEmpty(object, object, string, string, string)
0x43: Stack[-4] = Stack[-7]
0x44: Stack[-3] = "pt_d10q01_fire"
0x45: Stack[-2] = "scripted"
0x46: Stack[-1] = "d10q01_fire.xml"
0x47: Call 0xb0

0x48: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x49: Pop(5)
0x4a: Stack[-2] = 0
0x4b: GOTO 0x6c

0x4c: Push("soldier_fight")
0x4d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4f: PushEmpty(object, string)
0x50: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x51: Stack[-1] = "attack"
0x52: Call 0xde

0x53: Pop(2)
0x54: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x55: GOTO 0x6c

0x56: Push("house_unload")
0x57: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x59: PushEmpty(string, bool)
0x5a: Stack[-2] = "house_petr@door1"
0x5b: Stack[-1] = (bool) 1
0x5c: Call 0xc2

0x5d: Pop(2)
0x5e: GOTO 0x6c

0x5f: Push("fail")
0x60: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x62: PushEmpty()
0x63: Call 0x6d

0x64: Pop(0)
0x65: GOTO 0x6c

0x66: Push("completed")
0x67: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x69: PushEmpty()
0x6a: Call 0x75

0x6b: Pop(0)
0x6c: Return(); Pop(4)

0x6d: Push("d10q01")
0x6e: Push((int) -1)
0x6f: @ SetVariable(Stack[-2], Stack[-1])
0x70: Pop(2)
0x71: PushEmpty()
0x72: Call 0x7d

0x73: Pop(0)
0x74: Return(); Pop(0)

0x75: Push("d10q01")
0x76: Push((int) 1000)
0x77: @ SetVariable(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: PushEmpty()
0x7a: Call 0x7d

0x7b: Pop(0)
0x7c: Return(); Pop(0)

0x7d: EventDisable(26)
0x7e: PushEmpty(object, string)
0x7f: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x80: Stack[-1] = "cleanup"
0x81: Call 0xde

0x82: Pop(2)
0x83: Push( Stack[1 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x85: Push("cleanup")
0x86: @ Trigger(Stack[-1], Stack[-1])
0x87: Pop(1)
0x88: Push( Stack[2 + Tasks[-1].StackPointer] )
0x89: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8a: Push("cleanup")
0x8b: @ Trigger(Stack[-2], Stack[-1])
0x8c: Pop(1)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8f: Push("cleanup")
0x90: @ Trigger(Stack[-3], Stack[-1])
0x91: Pop(1)
0x92: PushEmpty(string, bool)
0x93: Stack[-2] = "house_petr@door1"
0x94: Stack[-1] = (bool) 0
0x95: Call 0xc2

0x96: Pop(2)
0x97: Return(); Pop(0)

0x98: PushEmpty(object, object)
0x99: @ CreateObjectVector(Stack[-1])
0x9a: Pop(0)
0x9b: Stack[-3] = Stack[-1]
0x9c: Return(); Pop(2)

0x9d: Stack[-1] = 0
0x9e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa0: Pop(0)
0xa1: Pop(0); Push((bool) Stack[-4] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa3: Push("Locator ")
0xa4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa5: Push(" doesn't exist")
0xa6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa7: @ Trace(Stack[-1])
0xa8: Pop(1)
0xa9: Stack[-1] = 0
0xaa: GOTO 0xad

0xab: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xac: Pop(0)
0xad: Stack[-13] = Stack[-1]
0xae: Return(); Pop(8)

0xaf: Stack[-1] = 0
0xb0: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb1: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xb2: Pop(0)
0xb3: Pop(0); Push((bool) Stack[-4] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb5: Push("Locator ")
0xb6: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb7: Push(" doesn't exist")
0xb8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb9: @ Trace(Stack[-1])
0xba: Pop(1)
0xbb: Stack[-1] = 0
0xbc: GOTO 0xbf

0xbd: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xbe: Pop(0)
0xbf: Stack[-13] = Stack[-1]
0xc0: Return(); Pop(8)

0xc1: Stack[-1] = 0
0xc2: PushEmpty(object, object)
0xc3: @ FindActor(Stack[-1], Stack[-4])
0xc4: Pop(0)
0xc5: Pop(0); Push((bool) Stack[-1] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc7: Push("Door ")
0xc8: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc9: Push(" not found")
0xca: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcb: @ Trace(Stack[-1])
0xcc: Pop(1)
0xcd: Push("locked")
0xce: @@ SetProperty(Stack[-1], Stack[-4])
0xcf: Pop(1)
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(object, object)
0xd3: @ FindActor(Stack[-1], Stack[-3])
0xd4: Pop(0)
0xd5: Pop(0); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: Stack[-4] = (bool) 0
0xd8: Return(); Pop(2)

0xd9: @ RemoveActor(Stack[-1])
0xda: Pop(0)
0xdb: Stack[-4] = (bool) 1
0xdc: Return(); Pop(2)

0xdd: Stack[-1] = 0
0xde: PushEmpty(int, int, object, int, int, object)
0xdf: @@ size(Stack[-3])
0xe0: Pop(0)
0xe1: Stack[-2] = (int) 0
0xe2: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xe3: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe4: @@ get(Stack[-1], Stack[-2])
0xe5: Pop(0)
0xe6: Push(Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: @ Trigger(Stack[-1], Stack[-7])
0xe9: Pop(0)
0xea: Stack[-1] = 0
0xeb: Push((int) 1)
0xec: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xed: GOTO 0xe2

0xee: Return(); Pop(6)

