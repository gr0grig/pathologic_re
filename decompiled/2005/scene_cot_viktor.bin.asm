GlobalVarCount = 0

Strings:
	pt_fireplace
	scripted
	fireplace.xml
	add
	clear
	size
	get

Import:
	CreateObjectVector (1 args)
	Hold (0 args)
	GetLocator (3 args)
	AddActorByType (6 args)
	self (1 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x39 Vars = ()
		EVENT_6 Op = 0x40 Vars = ()


0x0: PushEmpty()
0x1: Call2 0x6

0x2: Pop(0)
0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Return(); Pop(0)

0x6: @ CreateObjectVector(Stack[-0])
0x7: Pop(0)
0x8: @ CreateObjectVector(Stack[-1])
0x9: Pop(0)
0xa: @ Hold()
0xb: Pop(0)
0xc: GOTO 0xa

0xd: Return(); Pop(0)

0xe: PushEmpty(int, string, bool, cvector, object, int, string, bool, cvector, object)
0xf: Stack[-5] = (int) 1
0x10: Push("pt_fireplace")
0x11: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0x12: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0x13: Pop(0)
0x14: Pop(0); Push((bool) Stack[-3] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x16: GOTO 0x25

0x17: Push("scripted")
0x18: PushEmpty(object)
0x19: Call2 0x47

0x1a: Pop(0)
0x1b: Push(CVector(0.0, 0.0, 1.0))
0x1c: Push("fireplace.xml")
0x1d: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0x1e: Pop(4)
0x1f: @@ add(Stack[-1])
0x20: Pop(0)
0x21: Stack[-1] = 0
0x22: Push((int) 1)
0x23: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x24: GOTO 0x10

0x25: Return(); Pop(10)

0x26: PushEmpty(object)
0x27: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28: Call2 0x4

0x29: Pop(1)
0x2a: Return(); Pop(0)

0x2b: PushEmpty(object)
0x2c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d: Call2 0x4d

0x2e: Pop(1)
0x2f: @@ clear()
0x30: Pop(0)
0x31: Return(); Pop(0)

0x32: PushEmpty(object)
0x33: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34: Call2 0x4d

0x35: Pop(1)
0x36: @@ clear()
0x37: Pop(0)
0x38: Return(); Pop(0)

0x39: PushEmpty()
0x3a: Call2 0xe

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call2 0x26

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty()
0x41: Call2 0x2b

0x42: Pop(0)
0x43: PushEmpty()
0x44: Call2 0x32

0x45: Pop(0)
0x46: Return(); Pop(0)

0x47: PushEmpty(object, object)
0x48: @ self(Stack[-1])
0x49: Pop(0)
0x4a: Stack[-3] = Stack[-1]
0x4b: Return(); Pop(2)

0x4c: Stack[-1] = 0
0x4d: PushEmpty(int, int, object, int, int, object)
0x4e: Push(Stack[-7])
0x4f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x50: @@ size(Stack[-3])
0x51: Pop(0)
0x52: Stack[-2] = (int) 0
0x53: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x54: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x55: @@ get(Stack[-1], Stack[-2])
0x56: Pop(0)
0x57: Push(Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x59: @ RemoveActor(Stack[-1])
0x5a: Pop(0)
0x5b: Stack[-1] = 0
0x5c: Push((int) 1)
0x5d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5e: GOTO 0x53

0x5f: @@ clear()
0x60: Pop(0)
0x61: Return(); Pop(6)

