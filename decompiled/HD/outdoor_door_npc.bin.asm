GlobalVarCount = 0

Strings:
	door_closed
	Door is locked
	Door is disease locked
	Door is dead locked
	@
	Wrong door name
	pt_
	Destination scene '
	' not found
	GetLocator
	door_open
	Locator 
	 not found in destination scene 
	add
	dlocked

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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
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

0xd: PushEmpty(int, string, int, string, string, object, bool, cvector, cvector, int, string, int, string, string, object, bool, cvector, cvector)
0xe: PushEmpty(int)
0xf: Call2 0x97

0x10: Stack[-10] = Stack[-1]
0x11: Pop(1)
0x12: Push((int) 0)
0x13: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x15: PushEmpty(bool)
0x16: Call2 0x90

0x17: Pop(0)
0x18: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x19: Push("door_closed")
0x1a: @ PlaySound(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(int)
0x1d: Stack[-1] = (int) 403
0x1e: Call2 0x86

0x1f: Pop(1)
0x20: Push("Door is locked")
0x21: @ Trace(Stack[-1])
0x22: Pop(1)
0x23: Return(); Pop(18)

0x24: GOTO 0x3b

0x25: Push("door_closed")
0x26: @ PlaySound(Stack[-1])
0x27: Pop(1)
0x28: Push((int) 1)
0x29: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2b: Push("Door is disease locked")
0x2c: @ Trace(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(int)
0x2f: Stack[-1] = (int) 401
0x30: Call2 0x86

0x31: Pop(1)
0x32: GOTO 0x3a

0x33: Push("Door is dead locked")
0x34: @ Trace(Stack[-1])
0x35: Pop(1)
0x36: PushEmpty(int)
0x37: Stack[-1] = (int) 402
0x38: Call2 0x86

0x39: Pop(1)
0x3a: Return(); Pop(18)

0x3b: @ GetActorName(Stack[-8])
0x3c: Pop(0)
0x3d: PushEmpty(int, string, string)
0x3e: Stack[-2] = Stack[-11]
0x3f: Stack[-1] = "@"
0x40: Call2 0x77

0x41: Stack[-10] = Stack[-3]
0x42: Pop(3)
0x43: Push((int) -1)
0x44: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x46: Push("Wrong door name")
0x47: @ Trace(Stack[-1])
0x48: Pop(1)
0x49: Return(); Pop(18)

0x4a: PushEmpty(string, string, int, int)
0x4b: Stack[-3] = Stack[-12]
0x4c: Stack[-2] = (int) 0
0x4d: Stack[-1] = Stack[-11]
0x4e: Call2 0x81

0x4f: Stack[-10] = Stack[-4]
0x50: Pop(4)
0x51: Push("pt_")
0x52: PushEmpty(string, string, int)
0x53: Stack[-2] = Stack[-12]
0x54: Push((int) 1)
0x55: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x56: Call2 0x7c

0x57: Pop(2)
0x58: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x59: @ GetSceneByName(Stack[-4], Stack[-6])
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[-4] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5d: Push("Destination scene '")
0x5e: Pop(1); Push(Stack[-1] + Stack[-7]);
0x5f: Push("' not found")
0x60: Pop(2); Push(Stack[-2] + Stack[-1]);
0x61: @ Trace(Stack[-1])
0x62: Pop(1)
0x63: Return(); Pop(18)

0x64: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x65: Pop(0)
0x66: Push(Stack[-3])
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: Push("door_open")
0x69: @ PlaySharedSound(Stack[-1])
0x6a: Pop(1)
0x6b: @ Teleport(Stack[-19], Stack[-4], Stack[-2], Stack[-1])
0x6c: Pop(0)
0x6d: GOTO 0x75

0x6e: Push("Locator ")
0x6f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x70: Push(" not found in destination scene ")
0x71: Pop(2); Push(Stack[-2] + Stack[-1]);
0x72: Pop(1); Push(Stack[-1] + Stack[-7]);
0x73: @ Trace(Stack[-1])
0x74: Pop(1)
0x75: Return(); Pop(18)

0x76: Stack[-4] = 0
0x77: PushEmpty(int, int)
0x78: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x79: Pop(0)
0x7a: Stack[-5] = Stack[-1]
0x7b: Return(); Pop(2)

0x7c: PushEmpty(string, string)
0x7d: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x7e: Pop(0)
0x7f: Stack[-5] = Stack[-1]
0x80: Return(); Pop(2)

0x81: PushEmpty(string, string)
0x82: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x83: Pop(0)
0x84: Stack[-6] = Stack[-1]
0x85: Return(); Pop(2)

0x86: PushEmpty(object, object)
0x87: @ CreateIntVector(Stack[-1])
0x88: Pop(0)
0x89: @@ add(Stack[-3])
0x8a: Pop(0)
0x8b: Push((int) 200)
0x8c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: Return(); Pop(2)

0x8f: Stack[-1] = 0
0x90: PushEmpty(int, int)
0x91: Push("locked")
0x92: @ GetProperty(Stack[-1], Stack[-2])
0x93: Pop(1)
0x94: Push((int) 0)
0x95: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x96: Return(); Pop(2)

0x97: PushEmpty(int, int)
0x98: Push("dlocked")
0x99: @ GetProperty(Stack[-1], Stack[-2])
0x9a: Pop(1)
0x9b: Stack[-3] = Stack[-1]
0x9c: Return(); Pop(2)

