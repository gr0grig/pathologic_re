GlobalVarCount = 0

Strings:
	pt_rat
	pers_rat
	rat_indoor.xml
	add
	size
	get
	clear

Import:
	Hold (0 args)
	sync (0 args)
	GetLocator (4 args)
	AddActor (6 args)
	self (1 args)
	CreateObjectVector (1 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x7 Vars = ()
		EVENT_6 Op = 0xe Vars = ()


0x0: PushEmpty()
0x1: Call2 0x1a

0x2: Pop(0)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(string)
0x8: Stack[-1] = "pt_rat"
0x9: Call2 0x24

0xa: Pop(1)
0xb: @ sync()
0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: Call2 0x1f

0x10: Pop(0)
0x11: @ sync()
0x12: Pop(0)
0x13: Return(); Pop(0)

0x14: PushEmpty()
0x15: Stack[-2] = "pers_rat"
0x16: Return(); Pop(0)

0x17: PushEmpty()
0x18: Stack[-2] = "rat_indoor.xml"
0x19: Return(); Pop(0)

0x1a: PushEmpty(object)
0x1b: Call2 0x52

0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1d: Pop(1)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(object)
0x20: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21: Call2 0x58

0x22: Pop(1)
0x23: Return(); Pop(0)

0x24: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x25: PushEmpty()
0x26: Call2 0x1f

0x27: Pop(0)
0x28: Stack[-4] = (int) 1
0x29: Pop(0); Push(Stack[-9] + Stack[-4]);
0x2a: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x2b: Pop(1)
0x2c: Pop(0); Push((bool) Stack[-3] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2e: GOTO 0x3a

0x2f: PushEmpty(object, int, cvector, cvector)
0x30: Stack[-3] = Stack[-8]
0x31: Stack[-2] = Stack[-6]
0x32: Stack[-1] = Stack[-5]
0x33: Call2 0x3b

0x34: Pop(3)
0x35: @@ add(Stack[-1])
0x36: Pop(1)
0x37: Push((int) 1)
0x38: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x39: GOTO 0x29

0x3a: Return(); Pop(8)

0x3b: PushEmpty(object, object)
0x3c: PushEmpty(string, int)
0x3d: Stack[-1] = Stack[-7]
0x3e: Call2 0x14

0x3f: Pop(1)
0x40: PushEmpty(object)
0x41: Call2 0x4c

0x42: Pop(0)
0x43: PushEmpty(string, int)
0x44: Stack[-1] = Stack[-9]
0x45: Call2 0x17

0x46: Pop(1)
0x47: @ AddActor(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x48: Pop(3)
0x49: Stack[-6] = Stack[-1]
0x4a: Return(); Pop(2)

0x4b: Stack[-1] = 0
0x4c: PushEmpty(object, object)
0x4d: @ self(Stack[-1])
0x4e: Pop(0)
0x4f: Stack[-3] = Stack[-1]
0x50: Return(); Pop(2)

0x51: Stack[-1] = 0
0x52: PushEmpty(object, object)
0x53: @ CreateObjectVector(Stack[-1])
0x54: Pop(0)
0x55: Stack[-3] = Stack[-1]
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: PushEmpty(int, int, object, int, int, object)
0x59: Push(Stack[-7])
0x5a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5b: @@ size(Stack[-3])
0x5c: Pop(0)
0x5d: Stack[-2] = (int) 0
0x5e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x5f: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x60: @@ get(Stack[-1], Stack[-2])
0x61: Pop(0)
0x62: Push(Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: @ RemoveActor(Stack[-1])
0x65: Pop(0)
0x66: Stack[-1] = 0
0x67: Push((int) 1)
0x68: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x69: GOTO 0x5e

0x6a: @@ clear()
0x6b: Pop(0)
0x6c: Return(); Pop(6)

