GlobalVarCount = 0

Strings:
	door_closed
	Door is locked
	@
	Wrong door name
	pt_
	Destination scene '
	' not found
	GetLocator
	door_open
	Locator 
	 not found in destination scene 

Import:
	DisableUpdate (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
	GetActorName (1 args)
	GetSceneByName (2 args)
	PlaySharedSound (1 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	_strsub (4 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xd Vars = (object)


0x0: @ DisableUpdate()
0x1: Pop(0)
0x2: PushEmpty()
0x3: Call2 0x6

0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: Push((bool) 1)
0x7: @ SetVisibility(Stack[-1])
0x8: Pop(1)
0x9: @ Hold()
0xa: Pop(0)
0xb: GOTO 0x9

0xc: Return(); Pop(0)

0xd: PushEmpty(string, int, string, string, object, bool, cvector, cvector, string, int, string, string, object, bool, cvector, cvector)
0xe: PushEmpty(bool)
0xf: Call2 0x64

0x10: Pop(0)
0x11: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x12: Push("door_closed")
0x13: @ PlaySound(Stack[-1])
0x14: Pop(1)
0x15: Push("Door is locked")
0x16: @ Trace(Stack[-1])
0x17: Pop(1)
0x18: Return(); Pop(16)

0x19: @ GetActorName(Stack[-8])
0x1a: Pop(0)
0x1b: PushEmpty(int, string, string)
0x1c: Stack[-2] = Stack[-11]
0x1d: Stack[-1] = "@"
0x1e: Call2 0x55

0x1f: Stack[-10] = Stack[-3]
0x20: Pop(3)
0x21: Push((int) -1)
0x22: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x24: Push("Wrong door name")
0x25: @ Trace(Stack[-1])
0x26: Pop(1)
0x27: Return(); Pop(16)

0x28: PushEmpty(string, string, int, int)
0x29: Stack[-3] = Stack[-12]
0x2a: Stack[-2] = (int) 0
0x2b: Stack[-1] = Stack[-11]
0x2c: Call2 0x5f

0x2d: Stack[-10] = Stack[-4]
0x2e: Pop(4)
0x2f: Push("pt_")
0x30: PushEmpty(string, string, int)
0x31: Stack[-2] = Stack[-12]
0x32: Push((int) 1)
0x33: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x34: Call2 0x5a

0x35: Pop(2)
0x36: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x37: @ GetSceneByName(Stack[-4], Stack[-6])
0x38: Pop(0)
0x39: Pop(0); Push((bool) Stack[-4] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3b: Push("Destination scene '")
0x3c: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3d: Push("' not found")
0x3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f: @ Trace(Stack[-1])
0x40: Pop(1)
0x41: Return(); Pop(16)

0x42: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x43: Pop(0)
0x44: Push(Stack[-3])
0x45: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x46: Push("door_open")
0x47: @ PlaySharedSound(Stack[-1])
0x48: Pop(1)
0x49: @ Teleport(Stack[-17], Stack[-4], Stack[-2], Stack[-1])
0x4a: Pop(0)
0x4b: GOTO 0x53

0x4c: Push("Locator ")
0x4d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4e: Push(" not found in destination scene ")
0x4f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x50: Pop(1); Push(Stack[-1] + Stack[-7]);
0x51: @ Trace(Stack[-1])
0x52: Pop(1)
0x53: Return(); Pop(16)

0x54: Stack[-4] = 0
0x55: PushEmpty(int, int)
0x56: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x57: Pop(0)
0x58: Stack[-5] = Stack[-1]
0x59: Return(); Pop(2)

0x5a: PushEmpty(string, string)
0x5b: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x5c: Pop(0)
0x5d: Stack[-5] = Stack[-1]
0x5e: Return(); Pop(2)

0x5f: PushEmpty(string, string)
0x60: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x61: Pop(0)
0x62: Stack[-6] = Stack[-1]
0x63: Return(); Pop(2)

0x64: PushEmpty(int, int)
0x65: Push("locked")
0x66: @ GetProperty(Stack[-1], Stack[-2])
0x67: Pop(1)
0x68: Push((int) 0)
0x69: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x6a: Return(); Pop(2)

