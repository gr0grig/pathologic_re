GlobalVarCount = 3
	G_VAR_0 int ItemID1
	G_VAR_1 int ItemID2
	G_VAR_2 int Container

Strings:
	error: 
	hl_inc
	GetProperty
	im_inc
	GC: 
	health
	immunity
	add

Import:
	GetItemPosByID (4 args)
	Trace (1 args)
	GetItem (3 args)
	RemoveItem (3 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
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
0x16: Push("hl_inc")
0x17: @@ GetProperty(Stack[-4], Stack[-1])
0x18: Pop(1)
0x19: Push("im_inc")
0x1a: @@ GetProperty(Stack[-3], Stack[-1])
0x1b: Pop(1)
0x1c: Push("GC: ")
0x1d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1e: Push(" ")
0x1f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20: Pop(1); Push(Stack[-1] + Stack[-3]);
0x21: Push(" ")
0x22: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23: Pop(1); Push(Stack[-1] + Stack[-2]);
0x24: @ Trace(Stack[-1])
0x25: Pop(1)
0x26: PushEmpty(bool, string, float, float, float)
0x27: Stack[-4] = "health"
0x28: Stack[-3] = Stack[-8]
0x29: Stack[-2] = (int) 0
0x2a: Stack[-1] = (int) 1
0x2b: Call2 0x42

0x2c: Pop(5)
0x2d: PushEmpty(float)
0x2e: Stack[-1] = Stack[-4]
0x2f: Call2 0x6a

0x30: Pop(1)
0x31: PushEmpty(bool, string, float, float, float)
0x32: Stack[-4] = "immunity"
0x33: Stack[-3] = Stack[-7]
0x34: Stack[-2] = (int) 0
0x35: Stack[-1] = (int) 1
0x36: Call2 0x42

0x37: Pop(5)
0x38: PushEmpty(float)
0x39: Stack[-1] = Stack[-3]
0x3a: Call2 0x60

0x3b: Pop(1)
0x3c: Push((int) 1)
0x3d: Push(GlobalVars[2])
0x3e: @ RemoveItem(Stack[-7], Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: Return(); Pop(10)

0x41: Stack[-4] = 0
0x42: PushEmpty(bool, float, bool, float)
0x43: @ HasProperty(Stack[-8], Stack[-2])
0x44: Pop(0)
0x45: Pop(0); Push((bool) Stack[-2] == 0)
0x46: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x47: Stack[-9] = (bool) 0
0x48: Return(); Pop(4)

0x49: @ GetProperty(Stack[-8], Stack[-1])
0x4a: Pop(0)
0x4b: PushEmpty(float, float, float, float)
0x4c: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x4d: Stack[-2] = Stack[-10]
0x4e: Stack[-1] = Stack[-9]
0x4f: Call2 0x55

0x50: Pop(3)
0x51: @ SetProperty(Stack[-9], Stack[-1])
0x52: Pop(1)
0x53: Stack[-9] = (bool) 1
0x54: Return(); Pop(4)

0x55: PushEmpty()
0x56: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x57: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x58: Stack[-4] = Stack[-2]
0x59: Return(); Pop(0)

0x5a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5c: Stack[-4] = Stack[-1]
0x5d: Return(); Pop(0)

0x5e: Stack[-4] = Stack[-3]
0x5f: Return(); Pop(0)

0x60: PushEmpty(object, object)
0x61: @ CreateFloatVector(Stack[-1])
0x62: Pop(0)
0x63: @@ add(Stack[-3])
0x64: Pop(0)
0x65: Push((int) 13)
0x66: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x67: Pop(1)
0x68: Return(); Pop(2)

0x69: Stack[-1] = 0
0x6a: PushEmpty(object, object)
0x6b: @ CreateFloatVector(Stack[-1])
0x6c: Pop(0)
0x6d: @@ add(Stack[-3])
0x6e: Pop(0)
0x6f: Push((int) 0)
0x70: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x72: Push((float)0.7)
0x73: Push((int) 500)
0x74: @ RumblePlay(Stack[-2], Stack[-1])
0x75: Pop(2)
0x76: Push((int) 15)
0x77: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x78: Pop(1)
0x79: Return(); Pop(2)

0x7a: Stack[-1] = 0
