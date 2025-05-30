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
	Performance
	NightMasks
	.wmv

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
	GetGameTime (1 args)
	GetProperty (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	PlayMovie (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x6 Vars = (object)


0x0: @ DisableUpdate()
0x1: Pop(0)
0x2: PushEmpty()
0x3: Call2 0x13

0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty(bool)
0x8: Call2 0x89

0x9: Pop(0)
0xa: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xb: PushEmpty()
0xc: Call2 0xa1

0xd: Pop(0)
0xe: PushEmpty(object)
0xf: Stack[-1] = Stack[-2]
0x10: Call2 0x1a

0x11: Pop(1)
0x12: Return(); Pop(0)

0x13: Push((bool) 1)
0x14: @ SetVisibility(Stack[-1])
0x15: Pop(1)
0x16: @ Hold()
0x17: Pop(0)
0x18: GOTO 0x16

0x19: Return(); Pop(0)

0x1a: PushEmpty(string, int, string, string, object, bool, cvector, cvector, string, int, string, string, object, bool, cvector, cvector)
0x1b: PushEmpty(bool)
0x1c: Call2 0x82

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1f: Push("door_closed")
0x20: @ PlaySound(Stack[-1])
0x21: Pop(1)
0x22: Push("Door is locked")
0x23: @ Trace(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(16)

0x26: @ GetActorName(Stack[-8])
0x27: Pop(0)
0x28: PushEmpty(int, string, string)
0x29: Stack[-2] = Stack[-11]
0x2a: Stack[-1] = "@"
0x2b: Call2 0x62

0x2c: Stack[-10] = Stack[-3]
0x2d: Pop(3)
0x2e: Push((int) -1)
0x2f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x31: Push("Wrong door name")
0x32: @ Trace(Stack[-1])
0x33: Pop(1)
0x34: Return(); Pop(16)

0x35: PushEmpty(string, string, int, int)
0x36: Stack[-3] = Stack[-12]
0x37: Stack[-2] = (int) 0
0x38: Stack[-1] = Stack[-11]
0x39: Call2 0x6c

0x3a: Stack[-10] = Stack[-4]
0x3b: Pop(4)
0x3c: Push("pt_")
0x3d: PushEmpty(string, string, int)
0x3e: Stack[-2] = Stack[-12]
0x3f: Push((int) 1)
0x40: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x41: Call2 0x67

0x42: Pop(2)
0x43: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x44: @ GetSceneByName(Stack[-4], Stack[-6])
0x45: Pop(0)
0x46: Pop(0); Push((bool) Stack[-4] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x48: Push("Destination scene '")
0x49: Pop(1); Push(Stack[-1] + Stack[-7]);
0x4a: Push("' not found")
0x4b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c: @ Trace(Stack[-1])
0x4d: Pop(1)
0x4e: Return(); Pop(16)

0x4f: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x53: Push("door_open")
0x54: @ PlaySharedSound(Stack[-1])
0x55: Pop(1)
0x56: @ Teleport(Stack[-17], Stack[-4], Stack[-2], Stack[-1])
0x57: Pop(0)
0x58: GOTO 0x60

0x59: Push("Locator ")
0x5a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5b: Push(" not found in destination scene ")
0x5c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d: Pop(1); Push(Stack[-1] + Stack[-7]);
0x5e: @ Trace(Stack[-1])
0x5f: Pop(1)
0x60: Return(); Pop(16)

0x61: Stack[-4] = 0
0x62: PushEmpty(int, int)
0x63: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x64: Pop(0)
0x65: Stack[-5] = Stack[-1]
0x66: Return(); Pop(2)

0x67: PushEmpty(string, string)
0x68: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x69: Pop(0)
0x6a: Stack[-5] = Stack[-1]
0x6b: Return(); Pop(2)

0x6c: PushEmpty(string, string)
0x6d: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x6e: Pop(0)
0x6f: Stack[-6] = Stack[-1]
0x70: Return(); Pop(2)

0x71: PushEmpty(float, float)
0x72: @ GetGameTime(Stack[-1])
0x73: Pop(0)
0x74: Push((int) 1)
0x75: PushEmpty(int)
0x76: Push((int) 24)
0x77: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x78: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x79: Return(); Pop(2)

0x7a: PushEmpty(float, float)
0x7b: @ GetGameTime(Stack[-1])
0x7c: Pop(0)
0x7d: PushEmpty(int)
0x7e: Stack[-1] = Stack[-2]
0x7f: Push((int) 24)
0x80: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x81: Return(); Pop(2)

0x82: PushEmpty(int, int)
0x83: Push("locked")
0x84: @ GetProperty(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Push((int) 0)
0x87: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x88: Return(); Pop(2)

0x89: PushEmpty(int, int, int, int, int, int)
0x8a: PushEmpty(int)
0x8b: Call2 0x7a

0x8c: Stack[-4] = Stack[-1]
0x8d: Pop(1)
0x8e: Push((int) 6)
0x8f: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x91: PushEmpty(int)
0x92: Call2 0x71

0x93: Stack[-3] = Stack[-1]
0x94: Pop(1)
0x95: Push((int) 1)
0x96: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x98: Push("Performance")
0x99: Pop(1); Push(Stack[-1] + Stack[-3]);
0x9a: @ GetVariable(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: Push((int) 0)
0x9d: Stack[-8] = Stack[-2] == Stack[-1]; Pop(1);
0x9e: Return(); Pop(6)

0x9f: Stack[-7] = (bool) 0
0xa0: Return(); Pop(6)

0xa1: PushEmpty(int, int, int, int)
0xa2: PushEmpty(int)
0xa3: Call2 0x71

0xa4: Stack[-3] = Stack[-1]
0xa5: Pop(1)
0xa6: Push("Performance")
0xa7: Pop(1); Push(Stack[-1] + Stack[-3]);
0xa8: Push((int) 1)
0xa9: @ SetVariable(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: Push("NightMasks")
0xac: Push((int) 1)
0xad: Pop(1); Push(Stack[-4] - Stack[-1]);
0xae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf: Push(".wmv")
0xb0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb1: @ PlayMovie(Stack[-1])
0xb2: Pop(1)
0xb3: Return(); Pop(4)

