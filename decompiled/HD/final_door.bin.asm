GlobalVarCount = 0

Strings:
	on use
	open
	trigger 
	player
	door_closed
	Door is locked

Import:
	Trace (1 args)
	TriggerWorld (1 args)
	FindActor (2 args)
	Hold (0 args)
	PlaySound (1 args)
	ClassifyActor (2 args)
	GetOpenSide (1 args)
	Open (1 args)
	Close (0 args)
	GetProperty (2 args)

RunOp = 0x1a
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_38 Op = 0x4c Vars = (object)


0x0: PushEmpty()
0x1: EventDisable(0)
0x2: Push("on use")
0x3: @ Trace(Stack[-1])
0x4: Pop(1)
0x5: Push("open")
0x6: @ TriggerWorld(Stack[-1])
0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: Push("trigger ")
0xb: Pop(1); Push(Stack[-1] + Stack[-4]);
0xc: @ Trace(Stack[-1])
0xd: Pop(1)
0xe: Push("open")
0xf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x11: Push("player")
0x12: @ FindActor(Stack[-2], Stack[-1])
0x13: Pop(1)
0x14: PushEmpty(object)
0x15: Stack[-1] = Stack[-2]
0x16: Call2 0x1e

0x17: Pop(1)
0x18: Stack[-1] = 0
0x19: Return(); Pop(2)

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: GOTO 0x1a

0x1d: Return(); Pop(0)

0x1e: PushEmpty(bool, int, bool, int)
0x1f: Pop(0); Push((bool) Stack[-5] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Return(); Pop(4)

0x22: PushEmpty(bool, object)
0x23: Stack[-1] = Stack[-7]
0x24: Call2 0x60

0x25: Pop(1)
0x26: Pop(1); Push((bool) Stack[-1] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x28: Push("door_closed")
0x29: @ PlaySound(Stack[-1])
0x2a: Pop(1)
0x2b: Push("Door is locked")
0x2c: @ Trace(Stack[-1])
0x2d: Pop(1)
0x2e: Return(); Pop(4)

0x2f: @ ClassifyActor(Stack[-2], Stack[-5])
0x30: Pop(0)
0x31: Stack[-2] = !Stack[-2]; Pop(0);
0x32: @ GetOpenSide(Stack[-1])
0x33: Pop(0)
0x34: Pop(0); Push((bool) Stack[-1] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: @ Open(Stack[-2])
0x37: Pop(0)
0x38: GOTO 0x4b

0x39: Push((int) 0)
0x3a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3c: Push(Stack[-2])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: @ Close()
0x3f: Pop(0)
0x40: GOTO 0x43

0x41: @ Open(Stack[-2])
0x42: Pop(0)
0x43: GOTO 0x4b

0x44: Push(Stack[-2])
0x45: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x46: @ Open(Stack[-2])
0x47: Pop(0)
0x48: GOTO 0x4b

0x49: @ Close()
0x4a: Pop(0)
0x4b: Return(); Pop(4)

0x4c: PushEmpty(bool, bool)
0x4d: PushEmpty(bool)
0x4e: Stack[-1] = (bool) 1
0x4f: Pop(0); Push((bool) Stack[-4] == 0)
0x50: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x51: PushEmpty(bool, object)
0x52: Stack[-1] = Stack[-6]
0x53: Call2 0x60

0x54: Pop(1)
0x55: Pop(1); Push((bool) Stack[-1] == 0)
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Stack[-1] = (bool) 0
0x58: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x59: Return(); Pop(2)

0x5a: @ ClassifyActor(Stack[-1], Stack[-3])
0x5b: Pop(0)
0x5c: Pop(0); Push((bool) Stack[-1] == 0)
0x5d: @ Open(Stack[-1])
0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: PushEmpty()
0x61: PushEmpty(bool)
0x62: Call2 0x66

0x63: Pop(0)
0x64: Stack[-3] = !Stack[-1]; Pop(1);
0x65: Return(); Pop(0)

0x66: PushEmpty(int, int)
0x67: Push("locked")
0x68: @ GetProperty(Stack[-1], Stack[-2])
0x69: Pop(1)
0x6a: Push((int) 0)
0x6b: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x6c: Return(); Pop(2)

