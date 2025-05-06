GlobalVarCount = 0

Strings:
	Trigger is locked
	@
	Wrong door name
	pt_
	Destination scene '
	' not found
	GetLocator
	Locator 
	 not found in destination scene 

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	Trace (1 args)
	GetActorName (1 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	_strsub (4 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_23 Op = 0x4 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, string, int, string, string, object, bool, cvector, cvector, bool, string, int, string, string, object, bool, cvector, cvector)
0x5: @ IsPlayerActor(Stack[-19], Stack[-9])
0x6: Pop(0)
0x7: Pop(0); Push((bool) Stack[-9] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x9: Return(); Pop(18)

0xa: PushEmpty(bool)
0xb: Call 0x5a

0xc: Pop(0)
0xd: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xe: Push("Trigger is locked")
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: Return(); Pop(18)

0x12: @ GetActorName(Stack[-8])
0x13: Pop(0)
0x14: PushEmpty(int, string, string)
0x15: Stack[-2] = Stack[-11]
0x16: Stack[-1] = "@"
0x17: Call 0x4b

0x18: Stack[-10] = Stack[-3]
0x19: Pop(3)
0x1a: Push((int) -1)
0x1b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push("Wrong door name")
0x1e: @ Trace(Stack[-1])
0x1f: Pop(1)
0x20: Return(); Pop(18)

0x21: PushEmpty(string, string, int, int)
0x22: Stack[-3] = Stack[-12]
0x23: Stack[-2] = (int) 0
0x24: Stack[-1] = Stack[-11]
0x25: Call 0x55

0x26: Stack[-10] = Stack[-4]
0x27: Pop(4)
0x28: Push("pt_")
0x29: PushEmpty(string, string, int)
0x2a: Stack[-2] = Stack[-12]
0x2b: Push((int) 1)
0x2c: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x2d: Call 0x50

0x2e: Pop(2)
0x2f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x30: @ GetSceneByName(Stack[-4], Stack[-6])
0x31: Pop(0)
0x32: Pop(0); Push((bool) Stack[-4] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x34: Push("Destination scene '")
0x35: Pop(1); Push(Stack[-1] + Stack[-7]);
0x36: Push("' not found")
0x37: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38: @ Trace(Stack[-1])
0x39: Pop(1)
0x3a: Return(); Pop(18)

0x3b: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: @ Teleport(Stack[-19], Stack[-4], Stack[-2], Stack[-1])
0x40: Pop(0)
0x41: GOTO 0x49

0x42: Push("Locator ")
0x43: Pop(1); Push(Stack[-1] + Stack[-6]);
0x44: Push(" not found in destination scene ")
0x45: Pop(2); Push(Stack[-2] + Stack[-1]);
0x46: Pop(1); Push(Stack[-1] + Stack[-7]);
0x47: @ Trace(Stack[-1])
0x48: Pop(1)
0x49: Return(); Pop(18)

0x4a: Stack[-4] = 0
0x4b: PushEmpty(int, int)
0x4c: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x4d: Pop(0)
0x4e: Stack[-5] = Stack[-1]
0x4f: Return(); Pop(2)

0x50: PushEmpty(string, string)
0x51: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x52: Pop(0)
0x53: Stack[-5] = Stack[-1]
0x54: Return(); Pop(2)

0x55: PushEmpty(string, string)
0x56: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x57: Pop(0)
0x58: Stack[-6] = Stack[-1]
0x59: Return(); Pop(2)

0x5a: PushEmpty(int, int)
0x5b: Push("locked")
0x5c: @ GetProperty(Stack[-1], Stack[-2])
0x5d: Pop(1)
0x5e: Push((int) 0)
0x5f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x60: Return(); Pop(2)

