GlobalVarCount = 0

Strings:
	theater@door1
	termitnik_load
	clear
	termitnik
	pt_d8q04_morlok
	pers_morlok
	d8q04_morlok.xml
	add
	death
	attack
	fail
	completed
	d8q04
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
	CreateObjectVector (1 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_9 Op = 0x8a Vars = (int, float)


0x0: Stack[1 + Tasks[-1].StackPointer] = (int)3
0x1: @ CreateObjectVector(Stack[-0])
0x2: Pop(0)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "theater@door1"
0x5: Stack[-1] = (bool) 0
0x6: Call2 0xa7

0x7: Pop(2)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 8
0xa: Call2 0x77

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, int, object, int)
0xe: @ Trace(Stack[-5])
0xf: Pop(0)
0x10: Push("termitnik_load")
0x11: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x13: PushEmpty(object)
0x14: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15: Call2 0xb8

0x16: Pop(1)
0x17: @@ clear()
0x18: Pop(0)
0x19: Push("termitnik")
0x1a: @ GetSceneByName(Stack[-3], Stack[-1])
0x1b: Pop(1)
0x1c: Stack[-1] = (int) 0
0x1d: Pop(0); Push((bool) Stack[-1] < Stack[1 + Tasks[-1].StackPointer])
0x1e: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x1f: PushEmpty(object, object, string, string, string)
0x20: Stack[-4] = Stack[-7]
0x21: Push("pt_d8q04_morlok")
0x22: Push((int) 1)
0x23: Pop(1); Push(Stack[-8] + Stack[-1]);
0x24: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x25: Stack[-2] = "pers_morlok"
0x26: Stack[-1] = "d8q04_morlok.xml"
0x27: Call2 0x95

0x28: Pop(4)
0x29: @@ add(Stack[-1])
0x2a: Pop(1)
0x2b: Push((int) 1)
0x2c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2d: GOTO 0x1d

0x2e: Stack[-2] = 0
0x2f: GOTO 0x4c

0x30: Push("death")
0x31: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x33: Push((int) -1)
0x34: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x35: GOTO 0x4c

0x36: Push("attack")
0x37: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x39: PushEmpty(object, string)
0x3a: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x3b: Stack[-1] = "attack"
0x3c: Call2 0xcd

0x3d: Pop(2)
0x3e: GOTO 0x4c

0x3f: Push("fail")
0x40: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x42: PushEmpty()
0x43: Call2 0x5b

0x44: Pop(0)
0x45: GOTO 0x4c

0x46: Push("completed")
0x47: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: PushEmpty()
0x4a: Call2 0x63

0x4b: Pop(0)
0x4c: Return(); Pop(4)

0x4d: PushEmpty(int, int)
0x4e: Push("d8q04")
0x4f: @ GetVariable(Stack[-1], Stack[-2])
0x50: Pop(1)
0x51: Push((int) 1000)
0x52: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x54: PushEmpty()
0x55: Call2 0x5b

0x56: Pop(0)
0x57: PushEmpty()
0x58: Call2 0x6c

0x59: Pop(0)
0x5a: Return(); Pop(2)

0x5b: Push("d8q04")
0x5c: Push((int) -1)
0x5d: @ SetVariable(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: PushEmpty()
0x60: Call2 0x6b

0x61: Pop(0)
0x62: Return(); Pop(0)

0x63: Push("d8q04")
0x64: Push((int) 1000)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call2 0x6b

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: Return(); Pop(0)

0x6c: EventDisable(26)
0x6d: PushEmpty(object)
0x6e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f: Call2 0xb8

0x70: Pop(1)
0x71: PushEmpty(object)
0x72: Call2 0x8f

0x73: Pop(0)
0x74: @ RemoveActor(Stack[-1])
0x75: Pop(1)
0x76: Return(); Pop(0)

0x77: PushEmpty(float, float)
0x78: @ GetGameTime(Stack[-1])
0x79: Pop(0)
0x7a: Push((int) 24)
0x7b: Pop(1); Push(Stack[-4] * Stack[-1]);
0x7c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7e: PushEmpty()
0x7f: Call2 0x6c

0x80: Pop(0)
0x81: GOTO 0x89

0x82: Push((int) 0)
0x83: Push((int) 24)
0x84: Pop(1); Push(Stack[-5] * Stack[-1]);
0x85: @ SetTimeEvent(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: @ Hold()
0x88: Pop(0)
0x89: Return(); Pop(2)

0x8a: PushEmpty()
0x8b: PushEmpty()
0x8c: Call2 0x4d

0x8d: Pop(0)
0x8e: Return(); Pop(0)

0x8f: PushEmpty(object, object)
0x90: @ self(Stack[-1])
0x91: Pop(0)
0x92: Stack[-3] = Stack[-1]
0x93: Return(); Pop(2)

0x94: Stack[-1] = 0
0x95: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x96: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x97: Pop(0)
0x98: Pop(0); Push((bool) Stack[-4] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9a: Push("Locator ")
0x9b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x9c: Push(" doesn't exist")
0x9d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9e: @ Trace(Stack[-1])
0x9f: Pop(1)
0xa0: Stack[-1] = 0
0xa1: GOTO 0xa4

0xa2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa3: Pop(0)
0xa4: Stack[-13] = Stack[-1]
0xa5: Return(); Pop(8)

0xa6: Stack[-1] = 0
0xa7: PushEmpty(object, object)
0xa8: @ FindActor(Stack[-1], Stack[-4])
0xa9: Pop(0)
0xaa: Pop(0); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xac: Push("Door ")
0xad: Pop(1); Push(Stack[-1] + Stack[-5]);
0xae: Push(" not found")
0xaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: GOTO 0xb6

0xb3: Push("locked")
0xb4: @@ SetProperty(Stack[-1], Stack[-4])
0xb5: Pop(1)
0xb6: Return(); Pop(2)

0xb7: Stack[-1] = 0
0xb8: PushEmpty(int, int, object, int, int, object)
0xb9: Push(Stack[-7])
0xba: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xbb: @@ size(Stack[-3])
0xbc: Pop(0)
0xbd: Stack[-2] = (int) 0
0xbe: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xbf: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc0: @@ get(Stack[-1], Stack[-2])
0xc1: Pop(0)
0xc2: Push(Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc4: @ RemoveActor(Stack[-1])
0xc5: Pop(0)
0xc6: Stack[-1] = 0
0xc7: Push((int) 1)
0xc8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc9: GOTO 0xbe

0xca: @@ clear()
0xcb: Pop(0)
0xcc: Return(); Pop(6)

0xcd: PushEmpty(int, int, object, int, int, object)
0xce: Push(Stack[-8])
0xcf: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd0: @@ size(Stack[-3])
0xd1: Pop(0)
0xd2: Stack[-2] = (int) 0
0xd3: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xd4: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd5: @@ get(Stack[-1], Stack[-2])
0xd6: Pop(0)
0xd7: Push(Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: @ Trigger(Stack[-1], Stack[-7])
0xda: Pop(0)
0xdb: Stack[-1] = 0
0xdc: Push((int) 1)
0xdd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xde: GOTO 0xd3

0xdf: Return(); Pop(6)

