GlobalVarCount = 0

Strings:
	d4q03
	warehouse_gangster@door1
	iwarehouse_gangster@door1
	warehouse_gangster
	pt_gangster
	pers_grabitel
	d4q03_grabitel.xml
	add
	scene_load
	door
	gang_attack
	death
	size
	get
	IsDead
	d4q03_alldead
	completed
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty

Import:
	SetVariable (2 args)
	Trace (1 args)
	PlaySound (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	GetSceneByName (2 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int) Params = 0
		EVENT_26 Op = 0x31 Vars = (string)
		EVENT_9 Op = 0xc6 Vars = (int, float)


0x0: PushEmpty(object, int, object, int)
0x1: Push("d4q03")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(string, bool)
0x6: Stack[-2] = "warehouse_gangster@door1"
0x7: Stack[-1] = (bool) 0
0x8: Call2 0xef

0x9: Pop(2)
0xa: PushEmpty(string, bool)
0xb: Stack[-2] = "iwarehouse_gangster@door1"
0xc: Stack[-1] = (bool) 1
0xd: Call2 0xef

0xe: Pop(2)
0xf: PushEmpty(object)
0x10: Call2 0xd1

0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12: Pop(1)
0x13: PushEmpty(object, string)
0x14: Stack[-1] = "warehouse_gangster"
0x15: Call2 0xd7

0x16: Stack[-4] = Stack[-2]
0x17: Pop(2)
0x18: Stack[-1] = (int) 0
0x19: Push((int) 7)
0x1a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-4] = Stack[-7]
0x1e: Push("pt_gangster")
0x1f: Push((int) 1)
0x20: Pop(1); Push(Stack[-8] + Stack[-1]);
0x21: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x22: Stack[-2] = "pers_grabitel"
0x23: Stack[-1] = "d4q03_grabitel.xml"
0x24: Call2 0xdd

0x25: Pop(4)
0x26: @@ add(Stack[-1])
0x27: Pop(1)
0x28: Push((int) 1)
0x29: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2a: GOTO 0x19

0x2b: PushEmpty(int)
0x2c: Stack[-1] = (int) 4
0x2d: Call2 0xb3

0x2e: Pop(1)
0x2f: Return(); Pop(4)

0x30: Stack[-2] = 0
0x31: PushEmpty(int, int, object, bool, int, int, object, bool)
0x32: @ Trace(Stack[-9])
0x33: Pop(0)
0x34: Push("scene_load")
0x35: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x37: Push("door")
0x38: @ PlaySound(Stack[-1])
0x39: Pop(1)
0x3a: Push("gang_attack")
0x3b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x3d: Push((int) 1)
0x3e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3f: Push((int) 3)
0x40: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] >= Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x42: PushEmpty(object, string)
0x43: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x44: Stack[-1] = "attack"
0x45: Call2 0x100

0x46: Pop(2)
0x47: GOTO 0x72

0x48: Push("death")
0x49: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x4b: @@ size(Stack[-4])
0x4c: Pop(0)
0x4d: Stack[-3] = (int) 0
0x4e: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x4f: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x50: @@ get(Stack[-2], Stack[-3])
0x51: Pop(0)
0x52: @@ IsDead(Stack[-1])
0x53: Pop(0)
0x54: Pop(0); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x56: GOTO 0x5b

0x57: Stack[-2] = 0
0x58: Push((int) 1)
0x59: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x5a: GOTO 0x4e

0x5b: Pop(0); Push((bool) Stack[-3] == Stack[-4])
0x5c: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x5d: Push("d4q03_alldead")
0x5e: Push((int) 1)
0x5f: @ SetVariable(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: PushEmpty(string, bool)
0x62: Stack[-2] = "iwarehouse_gangster@door1"
0x63: Stack[-1] = (bool) 0
0x64: Call2 0xef

0x65: Pop(2)
0x66: PushEmpty(string, bool)
0x67: Stack[-2] = "warehouse_gangster@door1"
0x68: Stack[-1] = (bool) 1
0x69: Call2 0xef

0x6a: Pop(2)
0x6b: GOTO 0x72

0x6c: Push("completed")
0x6d: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6f: PushEmpty()
0x70: Call2 0x86

0x71: Pop(0)
0x72: Return(); Pop(8)

0x73: PushEmpty(int, int)
0x74: Push("d4q03")
0x75: @ GetVariable(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Push((int) 1000)
0x78: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7a: PushEmpty()
0x7b: Call2 0x7e

0x7c: Pop(0)
0x7d: Return(); Pop(2)

0x7e: Push("d4q03")
0x7f: Push((int) -1)
0x80: @ SetVariable(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: PushEmpty()
0x83: Call2 0x9c

0x84: Pop(0)
0x85: Return(); Pop(0)

0x86: PushEmpty(int, int)
0x87: Push("d4q03")
0x88: @ GetVariable(Stack[-1], Stack[-2])
0x89: Pop(1)
0x8a: PushEmpty(bool)
0x8b: Stack[-1] = (bool) 0
0x8c: Push((int) 1000)
0x8d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8f: Push((int) -1)
0x90: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x94: Push("d4q03")
0x95: Push((int) 1000)
0x96: @ SetVariable(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: PushEmpty()
0x99: Call2 0x9c

0x9a: Pop(0)
0x9b: Return(); Pop(2)

0x9c: EventDisable(26)
0x9d: PushEmpty(object, string)
0x9e: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x9f: Stack[-1] = "cleanup"
0xa0: Call2 0x100

0xa1: Pop(2)
0xa2: Stack[0 + Tasks[-1].StackPointer] = 0
0xa3: PushEmpty(string, bool)
0xa4: Stack[-2] = "iwarehouse_gangster@door1"
0xa5: Stack[-1] = (bool) 0
0xa6: Call2 0xef

0xa7: Pop(2)
0xa8: PushEmpty(string, bool)
0xa9: Stack[-2] = "warehouse_gangster@door1"
0xaa: Stack[-1] = (bool) 1
0xab: Call2 0xef

0xac: Pop(2)
0xad: PushEmpty(object)
0xae: Call2 0xcb

0xaf: Pop(0)
0xb0: @ RemoveActor(Stack[-1])
0xb1: Pop(1)
0xb2: Return(); Pop(0)

0xb3: PushEmpty(float, float)
0xb4: @ GetGameTime(Stack[-1])
0xb5: Pop(0)
0xb6: Push((int) 24)
0xb7: Pop(1); Push(Stack[-4] * Stack[-1]);
0xb8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xba: PushEmpty()
0xbb: Call2 0x9c

0xbc: Pop(0)
0xbd: GOTO 0xc5

0xbe: Push((int) 0)
0xbf: Push((int) 24)
0xc0: Pop(1); Push(Stack[-5] * Stack[-1]);
0xc1: @ SetTimeEvent(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: @ Hold()
0xc4: Pop(0)
0xc5: Return(); Pop(2)

0xc6: PushEmpty()
0xc7: PushEmpty()
0xc8: Call2 0x73

0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: PushEmpty(object, object)
0xcc: @ self(Stack[-1])
0xcd: Pop(0)
0xce: Stack[-3] = Stack[-1]
0xcf: Return(); Pop(2)

0xd0: Stack[-1] = 0
0xd1: PushEmpty(object, object)
0xd2: @ CreateObjectVector(Stack[-1])
0xd3: Pop(0)
0xd4: Stack[-3] = Stack[-1]
0xd5: Return(); Pop(2)

0xd6: Stack[-1] = 0
0xd7: PushEmpty(object, object)
0xd8: @ GetSceneByName(Stack[-1], Stack[-3])
0xd9: Pop(0)
0xda: Stack[-4] = Stack[-1]
0xdb: Return(); Pop(2)

0xdc: Stack[-1] = 0
0xdd: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xde: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xdf: Pop(0)
0xe0: Pop(0); Push((bool) Stack[-4] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe2: Push("Locator ")
0xe3: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe4: Push(" doesn't exist")
0xe5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe6: @ Trace(Stack[-1])
0xe7: Pop(1)
0xe8: Stack[-1] = 0
0xe9: GOTO 0xec

0xea: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xeb: Pop(0)
0xec: Stack[-13] = Stack[-1]
0xed: Return(); Pop(8)

0xee: Stack[-1] = 0
0xef: PushEmpty(object, object)
0xf0: @ FindActor(Stack[-1], Stack[-4])
0xf1: Pop(0)
0xf2: Pop(0); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf4: Push("Door ")
0xf5: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf6: Push(" not found")
0xf7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf8: @ Trace(Stack[-1])
0xf9: Pop(1)
0xfa: GOTO 0xfe

0xfb: Push("locked")
0xfc: @@ SetProperty(Stack[-1], Stack[-4])
0xfd: Pop(1)
0xfe: Return(); Pop(2)

0xff: Stack[-1] = 0
0x100: PushEmpty(int, int, object, int, int, object)
0x101: Push(Stack[-8])
0x102: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x103: @@ size(Stack[-3])
0x104: Pop(0)
0x105: Stack[-2] = (int) 0
0x106: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x107: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x108: @@ get(Stack[-1], Stack[-2])
0x109: Pop(0)
0x10a: Push(Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: @ Trigger(Stack[-1], Stack[-7])
0x10d: Pop(0)
0x10e: Stack[-1] = 0
0x10f: Push((int) 1)
0x110: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x111: GOTO 0x106

0x112: Return(); Pop(6)

