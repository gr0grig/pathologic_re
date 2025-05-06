GlobalVarCount = 0

Strings:
	door_closed
	Door is locked
	@
	Wrong door name
	No main outdoor scene
	GetName
	pt_
	GetLocator
	lp
	GetProperty
	Outdoor door was unlocked
	SetProperty
	door_open
	HasProperty
	HasProperty

Import:
	DisableUpdate (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
	GetActorName (1 args)
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	FindActor (2 args)
	PlaySharedSound (1 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x9 Vars = (object)


0x0: @ DisableUpdate()
0x1: Pop(0)
0x2: Push((bool) 1)
0x3: @ SetVisibility(Stack[-1])
0x4: Pop(1)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(string, int, object, object, string, string, string, bool, cvector, cvector, object, bool, string, int, object, object, string, string, string, bool, cvector, cvector, object, bool)
0xa: PushEmpty(bool)
0xb: Call2 0x7a

0xc: Pop(0)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: Push("door_closed")
0xf: @ PlaySound(Stack[-1])
0x10: Pop(1)
0x11: Push("Door is locked")
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: Return(); Pop(24)

0x15: @ GetActorName(Stack[-12])
0x16: Pop(0)
0x17: PushEmpty(int, string, string)
0x18: Stack[-2] = Stack[-15]
0x19: Stack[-1] = "@"
0x1a: Call2 0x70

0x1b: Stack[-14] = Stack[-3]
0x1c: Pop(3)
0x1d: Push((int) -1)
0x1e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x20: Push("Wrong door name")
0x21: @ Trace(Stack[-1])
0x22: Pop(1)
0x23: Return(); Pop(24)

0x24: @ GetMainOutdoorScene(Stack[-10])
0x25: Pop(0)
0x26: Pop(0); Push((bool) Stack[-10] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x28: Push("No main outdoor scene")
0x29: @ Trace(Stack[-1])
0x2a: Pop(1)
0x2b: Return(); Pop(24)

0x2c: @ GetScene(Stack[-9])
0x2d: Pop(0)
0x2e: @@ GetName(Stack[-8])
0x2f: Pop(0)
0x30: PushEmpty(string, string, int)
0x31: Stack[-2] = Stack[-15]
0x32: Push((int) 1)
0x33: Stack[-2] = Stack[-15] + Stack[-1]; Pop(1);
0x34: Call2 0x75

0x35: Stack[-10] = Stack[-3]
0x36: Pop(3)
0x37: Push("pt_")
0x38: Pop(1); Push(Stack[-1] + Stack[-9]);
0x39: Push("@")
0x3a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b: Stack[-7] = Stack[-1] + Stack[-8]; Pop(1);
0x3c: @ Trace(Stack[-6])
0x3d: Pop(0)
0x3e: @@ GetLocator(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x3f: Pop(0)
0x40: Push(Stack[-5])
0x41: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x42: Push("@")
0x43: Pop(1); Push(Stack[-9] + Stack[-1]);
0x44: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45: @ FindActor(Stack[-3], Stack[-1])
0x46: Pop(1)
0x47: Push(Stack[-2])
0x48: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x49: PushEmpty(bool, object, string)
0x4a: Stack[-2] = Stack[-5]
0x4b: Stack[-1] = "lp"
0x4c: Call2 0x64

0x4d: Pop(2)
0x4e: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x4f: Push("lp")
0x50: @@ GetProperty(Stack[-1], Stack[-2])
0x51: Pop(1)
0x52: Push(Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x54: Push("Outdoor door was unlocked")
0x55: @ Trace(Stack[-1])
0x56: Pop(1)
0x57: Push("locked")
0x58: Push((bool) 0)
0x59: @@ SetProperty(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: Push("door_open")
0x5c: @ PlaySharedSound(Stack[-1])
0x5d: Pop(1)
0x5e: @ Teleport(Stack[-25], Stack[-10], Stack[-4], Stack[-3])
0x5f: Pop(0)
0x60: Stack[-2] = 0
0x61: Return(); Pop(24)

0x62: Stack[-9] = 0
0x63: Stack[-10] = 0
0x64: PushEmpty(bool, bool)
0x65: Push("HasProperty")
0x66: Push((int) 2)
0x67: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-5] = (bool) 0
0x6b: Return(); Pop(2)

0x6c: @@ HasProperty(Stack[-3], Stack[-1])
0x6d: Pop(0)
0x6e: Stack[-5] = Stack[-1]
0x6f: Return(); Pop(2)

0x70: PushEmpty(int, int)
0x71: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x72: Pop(0)
0x73: Stack[-5] = Stack[-1]
0x74: Return(); Pop(2)

0x75: PushEmpty(string, string)
0x76: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x77: Pop(0)
0x78: Stack[-5] = Stack[-1]
0x79: Return(); Pop(2)

0x7a: PushEmpty(int, int)
0x7b: Push("locked")
0x7c: @ GetProperty(Stack[-1], Stack[-2])
0x7d: Pop(1)
0x7e: Push((int) 0)
0x7f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x80: Return(); Pop(2)

