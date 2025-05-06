GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	place_sanitar
	pt_b11q04_sanitar
	pers_sanitar
	b11q04_sanitar_main.xml
	GetLocator
	b11q04_sanitar.xml
	add
	pt_b11q04_corpse
	scripted
	b11q04_corpse.xml
	place_officer
	vagon_army
	vagon_army@door1
	pt_b11q04_officer
	pers_soldat
	b11q04_officer.xml
	fail
	completed
	b11q04
	cleanup
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	size
	get
	Remove
	clear

Import:
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddActorByType (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0xaf Vars = (int, float)


0x0: PushEmpty(object)
0x1: Call2 0xba

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 11
0x6: Call2 0x9c

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, int, bool, cvector, cvector, object, object, int, bool, cvector, cvector, object)
0xa: @ Trace(Stack[-13])
0xb: Pop(0)
0xc: Push("place_sanitar")
0xd: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0xf: @ GetMainOutdoorScene(Stack[-6])
0x10: Pop(0)
0x11: PushEmpty(object, object, string, string, string)
0x12: Stack[-4] = Stack[-11]
0x13: Stack[-3] = "pt_b11q04_sanitar"
0x14: Stack[-2] = "pers_sanitar"
0x15: Stack[-1] = "b11q04_sanitar_main.xml"
0x16: Call2 0xc0

0x17: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x18: Pop(5)
0x19: Stack[-5] = (int) 1
0x1a: Push("pt_b11q04_sanitar")
0x1b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1c: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x1d: Pop(1)
0x1e: Pop(0); Push((bool) Stack[-4] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: GOTO 0x2e

0x21: PushEmpty(object, object, string, string, string)
0x22: Stack[-4] = Stack[-11]
0x23: Push("pt_b11q04_sanitar")
0x24: Stack[-4] = Stack[-1] + Stack[-11]; Pop(1);
0x25: Stack[-2] = "pers_sanitar"
0x26: Stack[-1] = "b11q04_sanitar.xml"
0x27: Call2 0xe4

0x28: Pop(4)
0x29: @@ add(Stack[-1])
0x2a: Pop(1)
0x2b: Push((int) 1)
0x2c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2d: GOTO 0x1a

0x2e: PushEmpty(object, object, string, string, string)
0x2f: Stack[-4] = Stack[-11]
0x30: Stack[-3] = "pt_b11q04_corpse"
0x31: Stack[-2] = "scripted"
0x32: Stack[-1] = "b11q04_corpse.xml"
0x33: Call2 0xd2

0x34: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x35: Pop(5)
0x36: Stack[-6] = 0
0x37: GOTO 0x5a

0x38: Push("place_officer")
0x39: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x3b: Push("vagon_army")
0x3c: @ GetSceneByName(Stack[-2], Stack[-1])
0x3d: Pop(1)
0x3e: PushEmpty(string, bool)
0x3f: Stack[-2] = "vagon_army@door1"
0x40: Stack[-1] = (bool) 0
0x41: Call2 0xf6

0x42: Pop(2)
0x43: PushEmpty(object, object, string, string, string)
0x44: Stack[-4] = Stack[-6]
0x45: Stack[-3] = "pt_b11q04_officer"
0x46: Stack[-2] = "pers_soldat"
0x47: Stack[-1] = "b11q04_officer.xml"
0x48: Call2 0xc0

0x49: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x4a: Pop(5)
0x4b: Stack[-1] = 0
0x4c: GOTO 0x5a

0x4d: Push("fail")
0x4e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: PushEmpty()
0x51: Call2 0x69

0x52: Pop(0)
0x53: GOTO 0x5a

0x54: Push("completed")
0x55: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: PushEmpty()
0x58: Call2 0x71

0x59: Pop(0)
0x5a: Return(); Pop(12)

0x5b: PushEmpty(int, int)
0x5c: Push("b11q04")
0x5d: @ GetVariable(Stack[-1], Stack[-2])
0x5e: Pop(1)
0x5f: Push((int) 1000)
0x60: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x62: PushEmpty()
0x63: Call2 0x69

0x64: Pop(0)
0x65: PushEmpty()
0x66: Call2 0x84

0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: Push("b11q04")
0x6a: Push((int) -1)
0x6b: @ SetVariable(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: PushEmpty()
0x6e: Call2 0x79

0x6f: Pop(0)
0x70: Return(); Pop(0)

0x71: Push("b11q04")
0x72: Push((int) 1000)
0x73: @ SetVariable(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: PushEmpty()
0x76: Call2 0x79

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: Push( Stack[1 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7b: Push("cleanup")
0x7c: @ Trigger(Stack[-1], Stack[-1])
0x7d: Pop(1)
0x7e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x80: Push("cleanup")
0x81: @ Trigger(Stack[-2], Stack[-1])
0x82: Pop(1)
0x83: Return(); Pop(0)

0x84: EventDisable(26)
0x85: PushEmpty()
0x86: Call2 0x79

0x87: Pop(0)
0x88: PushEmpty(object)
0x89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a: Call2 0x107

0x8b: Pop(1)
0x8c: PushEmpty(string, bool)
0x8d: Stack[-2] = "vagon_army@door1"
0x8e: Stack[-1] = (bool) 1
0x8f: Call2 0xf6

0x90: Pop(2)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x93: Push("cleanup")
0x94: @ Trigger(Stack[-3], Stack[-1])
0x95: Pop(1)
0x96: PushEmpty(object)
0x97: Call2 0xb4

0x98: Pop(0)
0x99: @ RemoveActor(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(0)

0x9c: PushEmpty(float, float)
0x9d: @ GetGameTime(Stack[-1])
0x9e: Pop(0)
0x9f: Push((int) 24)
0xa0: Pop(1); Push(Stack[-4] * Stack[-1]);
0xa1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0x84

0xa5: Pop(0)
0xa6: GOTO 0xae

0xa7: Push((int) 0)
0xa8: Push((int) 24)
0xa9: Pop(1); Push(Stack[-5] * Stack[-1]);
0xaa: @ SetTimeEvent(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: @ Hold()
0xad: Pop(0)
0xae: Return(); Pop(2)

0xaf: PushEmpty()
0xb0: PushEmpty()
0xb1: Call2 0x5b

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(object, object)
0xb5: @ self(Stack[-1])
0xb6: Pop(0)
0xb7: Stack[-3] = Stack[-1]
0xb8: Return(); Pop(2)

0xb9: Stack[-1] = 0
0xba: PushEmpty(object, object)
0xbb: @ CreateObjectVector(Stack[-1])
0xbc: Pop(0)
0xbd: Stack[-3] = Stack[-1]
0xbe: Return(); Pop(2)

0xbf: Stack[-1] = 0
0xc0: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc1: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xc2: Pop(0)
0xc3: Pop(0); Push((bool) Stack[-4] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc5: Push("Locator ")
0xc6: Pop(1); Push(Stack[-1] + Stack[-12]);
0xc7: Push(" doesn't exist")
0xc8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc9: @ Trace(Stack[-1])
0xca: Pop(1)
0xcb: Stack[-1] = 0
0xcc: GOTO 0xcf

0xcd: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xce: Pop(0)
0xcf: Stack[-13] = Stack[-1]
0xd0: Return(); Pop(8)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xd3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xd4: Pop(0)
0xd5: Pop(0); Push((bool) Stack[-4] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd7: Push("Locator ")
0xd8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xd9: Push(" doesn't exist")
0xda: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdb: @ Trace(Stack[-1])
0xdc: Pop(1)
0xdd: Stack[-1] = 0
0xde: GOTO 0xe1

0xdf: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xe0: Pop(0)
0xe1: Stack[-13] = Stack[-1]
0xe2: Return(); Pop(8)

0xe3: Stack[-1] = 0
0xe4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe6: Pop(0)
0xe7: Pop(0); Push((bool) Stack[-4] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe9: Push("Locator ")
0xea: Pop(1); Push(Stack[-1] + Stack[-12]);
0xeb: Push(" doesn't exist")
0xec: Pop(2); Push(Stack[-2] + Stack[-1]);
0xed: @ Trace(Stack[-1])
0xee: Pop(1)
0xef: Stack[-1] = 0
0xf0: GOTO 0xf3

0xf1: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xf2: Pop(0)
0xf3: Stack[-13] = Stack[-1]
0xf4: Return(); Pop(8)

0xf5: Stack[-1] = 0
0xf6: PushEmpty(object, object)
0xf7: @ FindActor(Stack[-1], Stack[-4])
0xf8: Pop(0)
0xf9: Pop(0); Push((bool) Stack[-1] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfb: Push("Door ")
0xfc: Pop(1); Push(Stack[-1] + Stack[-5]);
0xfd: Push(" not found")
0xfe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xff: @ Trace(Stack[-1])
0x100: Pop(1)
0x101: GOTO 0x105

0x102: Push("locked")
0x103: @@ SetProperty(Stack[-1], Stack[-4])
0x104: Pop(1)
0x105: Return(); Pop(2)

0x106: Stack[-1] = 0
0x107: PushEmpty(int, int, object, int, int, object)
0x108: Push(Stack[-7])
0x109: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10a: @@ size(Stack[-3])
0x10b: Pop(0)
0x10c: Stack[-2] = (int) 0
0x10d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x10e: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10f: @@ get(Stack[-1], Stack[-2])
0x110: Pop(0)
0x111: Push(Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x113: @@ Remove()
0x114: Pop(0)
0x115: Stack[-1] = 0
0x116: Push((int) 1)
0x117: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x118: GOTO 0x10d

0x119: @@ clear()
0x11a: Pop(0)
0x11b: Return(); Pop(6)

