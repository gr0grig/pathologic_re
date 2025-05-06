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
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(string, int, string, string, object, bool, cvector, cvector, string, int, string, string, object, bool, cvector, cvector)
0x8: PushEmpty(bool)
0x9: Call 0x5e

0xa: Pop(0)
0xb: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xc: Push("door_closed")
0xd: @ PlaySound(Stack[-1])
0xe: Pop(1)
0xf: Push("Door is locked")
0x10: @ Trace(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(16)

0x13: @ GetActorName(Stack[-8])
0x14: Pop(0)
0x15: PushEmpty(int, string, string)
0x16: Stack[-2] = Stack[-11]
0x17: Stack[-1] = "@"
0x18: Call 0x4f

0x19: Stack[-10] = Stack[-3]
0x1a: Pop(3)
0x1b: Push((int) -1)
0x1c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: Push("Wrong door name")
0x1f: @ Trace(Stack[-1])
0x20: Pop(1)
0x21: Return(); Pop(16)

0x22: PushEmpty(string, string, int, int)
0x23: Stack[-3] = Stack[-12]
0x24: Stack[-2] = (int) 0
0x25: Stack[-1] = Stack[-11]
0x26: Call 0x59

0x27: Stack[-10] = Stack[-4]
0x28: Pop(4)
0x29: Push("pt_")
0x2a: PushEmpty(string, string, int)
0x2b: Stack[-2] = Stack[-12]
0x2c: Push((int) 1)
0x2d: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x2e: Call 0x54

0x2f: Pop(2)
0x30: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x31: @ GetSceneByName(Stack[-4], Stack[-6])
0x32: Pop(0)
0x33: Pop(0); Push((bool) Stack[-4] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x35: Push("Destination scene '")
0x36: Pop(1); Push(Stack[-1] + Stack[-7]);
0x37: Push("' not found")
0x38: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39: @ Trace(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(16)

0x3c: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x3d: Pop(0)
0x3e: Push(Stack[-3])
0x3f: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x40: Push("door_open")
0x41: @ PlaySharedSound(Stack[-1])
0x42: Pop(1)
0x43: @ Teleport(Stack[-17], Stack[-4], Stack[-2], Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x4d

0x46: Push("Locator ")
0x47: Pop(1); Push(Stack[-1] + Stack[-6]);
0x48: Push(" not found in destination scene ")
0x49: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a: Pop(1); Push(Stack[-1] + Stack[-7]);
0x4b: @ Trace(Stack[-1])
0x4c: Pop(1)
0x4d: Return(); Pop(16)

0x4e: Stack[-4] = 0
0x4f: PushEmpty(int, int)
0x50: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x51: Pop(0)
0x52: Stack[-5] = Stack[-1]
0x53: Return(); Pop(2)

0x54: PushEmpty(string, string)
0x55: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x56: Pop(0)
0x57: Stack[-5] = Stack[-1]
0x58: Return(); Pop(2)

0x59: PushEmpty(string, string)
0x5a: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x5b: Pop(0)
0x5c: Stack[-6] = Stack[-1]
0x5d: Return(); Pop(2)

0x5e: PushEmpty(int, int)
0x5f: Push("locked")
0x60: @ GetProperty(Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Push((int) 0)
0x63: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x64: Return(); Pop(2)

