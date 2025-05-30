GlobalVarCount = 0

Strings:
	player
	storojka
	birth
	GetLocator
	pt_d11q01_teleport
	health
	GetProperty
	SetProperty
	tiredness
	pt_d11q01_dog1
	pers_dog
	d11q01_dog.xml
	pt_d11q01_dog2
	pt_d11q01_dog3
	d11q01SoldierAttack
	Locator 
	 doesn't exist
	add

Import:
	GetMainOutdoorScene (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	sync (0 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	ModDarkenLevel (1 args)
	sync (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(object, object, bool, object, cvector, cvector, float, float, object, object, bool, object, cvector, cvector, float, float)
0x1: @ GetMainOutdoorScene(Stack[-8])
0x2: Pop(0)
0x3: PushEmpty(float, float, float)
0x4: Stack[-3] = (int) 0
0x5: Stack[-2] = (int) 1
0x6: Stack[-1] = (float) 1.0
0x7: Call2 0x82

0x8: Pop(3)
0x9: Push("player")
0xa: @ FindActor(Stack[-8], Stack[-1])
0xb: Pop(1)
0xc: Push(Stack[-7])
0xd: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0xe: Push("storojka")
0xf: @ GetSceneByName(Stack[-6], Stack[-1])
0x10: Pop(1)
0x11: Push("birth")
0x12: @@ GetLocator(Stack[-1], Stack[-7], Stack[-5], Stack[-4])
0x13: Pop(1)
0x14: @ Teleport(Stack[-7], Stack[-5], Stack[-4], Stack[-3])
0x15: Pop(0)
0x16: @ sync()
0x17: Pop(0)
0x18: Push("pt_d11q01_teleport")
0x19: @@ GetLocator(Stack[-1], Stack[-7], Stack[-5], Stack[-4])
0x1a: Pop(1)
0x1b: @ Teleport(Stack[-7], Stack[-8], Stack[-4], Stack[-3])
0x1c: Pop(0)
0x1d: Push("health")
0x1e: @@ GetProperty(Stack[-1], Stack[-3])
0x1f: Pop(1)
0x20: Push((float)0.2)
0x21: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("health")
0x24: Push((float)0.2)
0x25: @@ SetProperty(Stack[-2], Stack[-1])
0x26: Pop(2)
0x27: Push("tiredness")
0x28: @@ GetProperty(Stack[-1], Stack[-2])
0x29: Pop(1)
0x2a: Push((float)0.6)
0x2b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2d: Push("tiredness")
0x2e: Push((float)0.6)
0x2f: @@ SetProperty(Stack[-2], Stack[-1])
0x30: Pop(2)
0x31: PushEmpty(float)
0x32: Push((float)0.6)
0x33: Stack[-2] = Stack[-1] - Stack[-3]; Pop(1);
0x34: Call2 0x78

0x35: Pop(1)
0x36: Stack[-5] = 0
0x37: @ sync()
0x38: Pop(0)
0x39: PushEmpty(object, object, string, string, string)
0x3a: Stack[-4] = Stack[-13]
0x3b: Stack[-3] = "pt_d11q01_dog1"
0x3c: Stack[-2] = "pers_dog"
0x3d: Stack[-1] = "d11q01_dog.xml"
0x3e: Call2 0x66

0x3f: Pop(5)
0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-4] = Stack[-13]
0x42: Stack[-3] = "pt_d11q01_dog2"
0x43: Stack[-2] = "pers_dog"
0x44: Stack[-1] = "d11q01_dog.xml"
0x45: Call2 0x66

0x46: Pop(5)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-4] = Stack[-13]
0x49: Stack[-3] = "pt_d11q01_dog3"
0x4a: Stack[-2] = "pers_dog"
0x4b: Stack[-1] = "d11q01_dog.xml"
0x4c: Call2 0x66

0x4d: Pop(5)
0x4e: PushEmpty(float, float, float)
0x4f: Stack[-3] = (int) 1
0x50: Stack[-2] = (int) 0
0x51: Stack[-1] = (float) 5.0
0x52: Call2 0x82

0x53: Pop(3)
0x54: Push("d11q01SoldierAttack")
0x55: Push((int) 1)
0x56: @ SetVariable(Stack[-2], Stack[-1])
0x57: Pop(2)
0x58: PushEmpty(object)
0x59: Call2 0x60

0x5a: Pop(0)
0x5b: @ RemoveActor(Stack[-1])
0x5c: Pop(1)
0x5d: Return(); Pop(16)

0x5e: Stack[-7] = 0
0x5f: Stack[-8] = 0
0x60: PushEmpty(object, object)
0x61: @ self(Stack[-1])
0x62: Pop(0)
0x63: Stack[-3] = Stack[-1]
0x64: Return(); Pop(2)

0x65: Stack[-1] = 0
0x66: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x67: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x68: Pop(0)
0x69: Pop(0); Push((bool) Stack[-4] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6b: Push("Locator ")
0x6c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x6d: Push(" doesn't exist")
0x6e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f: @ Trace(Stack[-1])
0x70: Pop(1)
0x71: Stack[-1] = 0
0x72: GOTO 0x75

0x73: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x74: Pop(0)
0x75: Stack[-13] = Stack[-1]
0x76: Return(); Pop(8)

0x77: Stack[-1] = 0
0x78: PushEmpty(object, object)
0x79: @ CreateFloatVector(Stack[-1])
0x7a: Pop(0)
0x7b: @@ add(Stack[-3])
0x7c: Pop(0)
0x7d: Push((int) 11)
0x7e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7f: Pop(1)
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
0x82: PushEmpty(bool, float, float, bool, float, float)
0x83: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x84: Pop(0); Push(Stack[-8] - Stack[-9]);
0x85: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x86: Push(Stack[-3])
0x87: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x88: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x89: GOTO 0x8b

0x8a: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x8b: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8c: @ ModDarkenLevel(Stack[-9])
0x8d: Pop(0)
0x8e: @ sync(Stack[-1])
0x8f: Pop(0)
0x90: Pop(0); Push(Stack[-1] * Stack[-2]);
0x91: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x92: GOTO 0x86

0x93: @ ModDarkenLevel(Stack[-8])
0x94: Pop(0)
0x95: Return(); Pop(6)

