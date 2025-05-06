GlobalVarCount = 0

Strings:
	@
	Wrong door name
	No main outdoor scene
	GetName
	pt_
	GetLocator
	locked

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	GetActorName (1 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
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

0x4: PushEmpty(bool, string, int, object, object, string, string, bool, cvector, cvector, bool, string, int, object, object, string, string, bool, cvector, cvector)
0x5: @ IsPlayerActor(Stack[-21], Stack[-10])
0x6: Pop(0)
0x7: Pop(0); Push((bool) Stack[-10] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x9: Return(); Pop(20)

0xa: PushEmpty(bool)
0xb: Call 0x4a

0xc: Pop(0)
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: Return(); Pop(20)

0xf: @ GetActorName(Stack[-9])
0x10: Pop(0)
0x11: PushEmpty(int, string, string)
0x12: Stack[-2] = Stack[-12]
0x13: Stack[-1] = "@"
0x14: Call 0x40

0x15: Stack[-11] = Stack[-3]
0x16: Pop(3)
0x17: Push((int) -1)
0x18: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1a: Push("Wrong door name")
0x1b: @ Trace(Stack[-1])
0x1c: Pop(1)
0x1d: Return(); Pop(20)

0x1e: @ GetMainOutdoorScene(Stack[-7])
0x1f: Pop(0)
0x20: Pop(0); Push((bool) Stack[-7] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x22: Push("No main outdoor scene")
0x23: @ Trace(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(20)

0x26: @ GetScene(Stack[-6])
0x27: Pop(0)
0x28: @@ GetName(Stack[-5])
0x29: Pop(0)
0x2a: Push("pt_")
0x2b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2c: Push("@")
0x2d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e: PushEmpty(string, string, int)
0x2f: Stack[-2] = Stack[-13]
0x30: Push((int) 1)
0x31: Stack[-2] = Stack[-13] + Stack[-1]; Pop(1);
0x32: Call 0x45

0x33: Pop(2)
0x34: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0x35: @ Trace(Stack[-4])
0x36: Pop(0)
0x37: @@ GetLocator(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x38: Pop(0)
0x39: Push(Stack[-3])
0x3a: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3b: @ Teleport(Stack[-21], Stack[-7], Stack[-2], Stack[-1])
0x3c: Pop(0)
0x3d: Return(); Pop(20)

0x3e: Stack[-6] = 0
0x3f: Stack[-7] = 0
0x40: PushEmpty(int, int)
0x41: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x42: Pop(0)
0x43: Stack[-5] = Stack[-1]
0x44: Return(); Pop(2)

0x45: PushEmpty(string, string)
0x46: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x47: Pop(0)
0x48: Stack[-5] = Stack[-1]
0x49: Return(); Pop(2)

0x4a: PushEmpty(int, int)
0x4b: Push("locked")
0x4c: @ GetProperty(Stack[-1], Stack[-2])
0x4d: Pop(1)
0x4e: Push((int) 0)
0x4f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x50: Return(); Pop(2)

