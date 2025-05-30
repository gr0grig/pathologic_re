GlobalVarCount = 3
	G_VAR_0 int ItemID1
	G_VAR_1 int ItemID2
	G_VAR_2 int Container

Strings:
	error: 
	DiseaseRate
	GetProperty
	HealthIncrease
	health
	disease
	GC: 
	add

Import:
	GetItemPosByID (4 args)
	Trace (1 args)
	GetItem (3 args)
	GetProperty (2 args)
	SetProperty (2 args)
	RemoveItem (3 args)
	HasProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	RumblePlay (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(int, object, float, float, float, int, object, float, float, float)
0x1: Push(GlobalVars[0])
0x2: Push(GlobalVars[1])
0x3: Push(GlobalVars[2])
0x4: @ GetItemPosByID(Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x5: Pop(3)
0x6: Push((int) -1)
0x7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x9: Push("error: ")
0xa: Push(GlobalVars[0])
0xb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc: Push(" ")
0xd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe: Push(GlobalVars[1])
0xf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10: @ Trace(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(10)

0x13: Push(GlobalVars[2])
0x14: @ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x15: Pop(1)
0x16: Push("DiseaseRate")
0x17: @@ GetProperty(Stack[-4], Stack[-1])
0x18: Pop(1)
0x19: Push("HealthIncrease")
0x1a: @@ GetProperty(Stack[-3], Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(bool, string, float, float, float)
0x1d: Stack[-4] = "health"
0x1e: Stack[-3] = Stack[-7]
0x1f: Stack[-2] = (int) 0
0x20: Stack[-1] = (int) 1
0x21: Call2 0x40

0x22: Pop(5)
0x23: PushEmpty(float)
0x24: Stack[-1] = Stack[-3]
0x25: Call2 0x68

0x26: Pop(1)
0x27: Push("disease")
0x28: @ GetProperty(Stack[-1], Stack[-2])
0x29: Pop(1)
0x2a: Push("disease")
0x2b: Pop(0); Push(Stack[-2] * Stack[-4]);
0x2c: @ SetProperty(Stack[-2], Stack[-1])
0x2d: Pop(2)
0x2e: PushEmpty(float)
0x2f: Pop(0); Push(Stack[-2] * Stack[-4]);
0x30: Stack[-2] = Stack[-3] - Stack[-1]; Pop(1);
0x31: Call2 0x5e

0x32: Pop(1)
0x33: Push("GC: ")
0x34: Pop(1); Push(Stack[-1] + Stack[-3]);
0x35: Push(" ")
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Pop(1); Push(Stack[-1] + Stack[-4]);
0x38: @ Trace(Stack[-1])
0x39: Pop(1)
0x3a: Push((int) 1)
0x3b: Push(GlobalVars[2])
0x3c: @ RemoveItem(Stack[-7], Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: Return(); Pop(10)

0x3f: Stack[-4] = 0
0x40: PushEmpty(bool, float, bool, float)
0x41: @ HasProperty(Stack[-8], Stack[-2])
0x42: Pop(0)
0x43: Pop(0); Push((bool) Stack[-2] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x45: Stack[-9] = (bool) 0
0x46: Return(); Pop(4)

0x47: @ GetProperty(Stack[-8], Stack[-1])
0x48: Pop(0)
0x49: PushEmpty(float, float, float, float)
0x4a: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x4b: Stack[-2] = Stack[-10]
0x4c: Stack[-1] = Stack[-9]
0x4d: Call2 0x53

0x4e: Pop(3)
0x4f: @ SetProperty(Stack[-9], Stack[-1])
0x50: Pop(1)
0x51: Stack[-9] = (bool) 1
0x52: Return(); Pop(4)

0x53: PushEmpty()
0x54: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: Stack[-4] = Stack[-2]
0x57: Return(); Pop(0)

0x58: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: Stack[-4] = Stack[-1]
0x5b: Return(); Pop(0)

0x5c: Stack[-4] = Stack[-3]
0x5d: Return(); Pop(0)

0x5e: PushEmpty(object, object)
0x5f: @ CreateFloatVector(Stack[-1])
0x60: Pop(0)
0x61: @@ add(Stack[-3])
0x62: Pop(0)
0x63: Push((int) 14)
0x64: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x65: Pop(1)
0x66: Return(); Pop(2)

0x67: Stack[-1] = 0
0x68: PushEmpty(object, object)
0x69: @ CreateFloatVector(Stack[-1])
0x6a: Pop(0)
0x6b: @@ add(Stack[-3])
0x6c: Pop(0)
0x6d: Push((int) 0)
0x6e: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x70: Push((float)0.7)
0x71: Push((int) 500)
0x72: @ RumblePlay(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: Push((int) 15)
0x75: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Return(); Pop(2)

0x78: Stack[-1] = 0
