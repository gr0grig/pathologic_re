GlobalVarCount = 0

Strings:
	pt_spawn
	Not enough spawn points
	add
	get
	remove
	pers_butcher
	termitnik_butcher.xml
	GetLocator
	Locator 
	 doesn't exist
	size
	clear

Import:
	Hold (0 args)
	GetLocator (2 args)
	Trace (1 args)
	CreateIntVector (1 args)
	irand (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x8 Vars = ()
		EVENT_6 Op = 0x45 Vars = ()


0x0: PushEmpty(object)
0x1: Call2 0x50

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty(int, bool, object, int, int, int, int, int, bool, object, int, int, int, int)
0x9: Stack[-7] = (int) 0
0xa: Push("pt_spawn")
0xb: Push((int) 1)
0xc: Pop(1); Push(Stack[-9] + Stack[-1]);
0xd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe: @ GetLocator(Stack[-1], Stack[-7])
0xf: Pop(1)
0x10: Pop(0); Push((bool) Stack[-6] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: GOTO 0x16

0x13: Push((int) 1)
0x14: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x15: GOTO 0xa

0x16: Push((int) 2)
0x17: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x19: Push("Not enough spawn points")
0x1a: @ Trace(Stack[-1])
0x1b: Pop(1)
0x1c: GOTO 0x44

0x1d: @ CreateIntVector(Stack[-5])
0x1e: Pop(0)
0x1f: Stack[-4] = (int) 1
0x20: Pop(0); Push((bool) Stack[-4] <= Stack[-7])
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: @@ add(Stack[-4])
0x23: Pop(0)
0x24: Push((int) 1)
0x25: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x26: GOTO 0x20

0x27: Stack[-3] = (int) 0
0x28: Push((int) 2)
0x29: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x2b: @ irand(Stack[-2], Stack[-7])
0x2c: Pop(0)
0x2d: @@ get(Stack[-1], Stack[-2])
0x2e: Pop(0)
0x2f: @@ remove(Stack[-2])
0x30: Pop(0)
0x31: Push((int) -1)
0x32: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x33: PushEmpty(object, object, string, string, string)
0x34: PushEmpty(object)
0x35: Call2 0x4a

0x36: Stack[-5] = Stack[-1]
0x37: Pop(1)
0x38: Push("pt_spawn")
0x39: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x3a: Stack[-2] = "pers_butcher"
0x3b: Stack[-1] = "termitnik_butcher.xml"
0x3c: Call2 0x56

0x3d: Pop(4)
0x3e: @@ add(Stack[-1])
0x3f: Pop(1)
0x40: Push((int) 1)
0x41: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x42: GOTO 0x28

0x43: Stack[-5] = 0
0x44: Return(); Pop(14)

0x45: PushEmpty(object)
0x46: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47: Call2 0x68

0x48: Pop(1)
0x49: Return(); Pop(0)

0x4a: PushEmpty(object, object)
0x4b: @ self(Stack[-1])
0x4c: Pop(0)
0x4d: Stack[-3] = Stack[-1]
0x4e: Return(); Pop(2)

0x4f: Stack[-1] = 0
0x50: PushEmpty(object, object)
0x51: @ CreateObjectVector(Stack[-1])
0x52: Pop(0)
0x53: Stack[-3] = Stack[-1]
0x54: Return(); Pop(2)

0x55: Stack[-1] = 0
0x56: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x57: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x58: Pop(0)
0x59: Pop(0); Push((bool) Stack[-4] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5b: Push("Locator ")
0x5c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x5d: Push(" doesn't exist")
0x5e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f: @ Trace(Stack[-1])
0x60: Pop(1)
0x61: Stack[-1] = 0
0x62: GOTO 0x65

0x63: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x64: Pop(0)
0x65: Stack[-13] = Stack[-1]
0x66: Return(); Pop(8)

0x67: Stack[-1] = 0
0x68: PushEmpty(int, int, object, int, int, object)
0x69: Push(Stack[-7])
0x6a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x6b: @@ size(Stack[-3])
0x6c: Pop(0)
0x6d: Stack[-2] = (int) 0
0x6e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x6f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x70: @@ get(Stack[-1], Stack[-2])
0x71: Pop(0)
0x72: Push(Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x74: @ RemoveActor(Stack[-1])
0x75: Pop(0)
0x76: Stack[-1] = 0
0x77: Push((int) 1)
0x78: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x79: GOTO 0x6e

0x7a: @@ clear()
0x7b: Pop(0)
0x7c: Return(); Pop(6)

