GlobalVarCount = 0

Strings:
	eat
	health
	immunity
	disease
	hunger
	tiredness
	add

Import:
	PlaySound (1 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push("eat")
0x1: @ PlaySound(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(bool, string, float, float, float)
0x4: Stack[-4] = "health"
0x5: Stack[-3] = (float) 0.0
0x6: Stack[-2] = (int) 0
0x7: Stack[-1] = (int) 1
0x8: Call2 0x3b

0x9: Pop(5)
0xa: PushEmpty(float)
0xb: Stack[-1] = (float) 0.0
0xc: Call2 0x81

0xd: Pop(1)
0xe: PushEmpty(bool, string, float, float, float)
0xf: Stack[-4] = "immunity"
0x10: Stack[-3] = (float) 0.05
0x11: Stack[-2] = (int) 0
0x12: Stack[-1] = (int) 1
0x13: Call2 0x3b

0x14: Pop(5)
0x15: PushEmpty(float)
0x16: Stack[-1] = (float) 0.05
0x17: Call2 0x6d

0x18: Pop(1)
0x19: PushEmpty(bool, string, float, float, float)
0x1a: Stack[-4] = "disease"
0x1b: Stack[-3] = (float) 0.0
0x1c: Stack[-2] = (int) 0
0x1d: Stack[-1] = (int) 1
0x1e: Call2 0x3b

0x1f: Pop(5)
0x20: PushEmpty(float)
0x21: Stack[-1] = (float) 0.0
0x22: Call2 0x77

0x23: Pop(1)
0x24: PushEmpty(bool, string, float, float, float)
0x25: Stack[-4] = "hunger"
0x26: Stack[-3] = (float) 0.1
0x27: Stack[-2] = (int) 0
0x28: Stack[-1] = (int) 1
0x29: Call2 0x3b

0x2a: Pop(5)
0x2b: PushEmpty(float)
0x2c: Stack[-1] = (float) 0.1
0x2d: Call2 0x63

0x2e: Pop(1)
0x2f: PushEmpty(bool, string, float, float, float)
0x30: Stack[-4] = "tiredness"
0x31: Stack[-3] = (float) -0.1
0x32: Stack[-2] = (int) 0
0x33: Stack[-1] = (int) 1
0x34: Call2 0x3b

0x35: Pop(5)
0x36: PushEmpty(float)
0x37: Stack[-1] = (float) -0.1
0x38: Call2 0x59

0x39: Pop(1)
0x3a: Return(); Pop(0)

0x3b: PushEmpty(bool, float, bool, float)
0x3c: @ HasProperty(Stack[-8], Stack[-2])
0x3d: Pop(0)
0x3e: Pop(0); Push((bool) Stack[-2] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-9] = (bool) 0
0x41: Return(); Pop(4)

0x42: @ GetProperty(Stack[-8], Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(float, float, float, float)
0x45: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x46: Stack[-2] = Stack[-10]
0x47: Stack[-1] = Stack[-9]
0x48: Call2 0x4e

0x49: Pop(3)
0x4a: @ SetProperty(Stack[-9], Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-9] = (bool) 1
0x4d: Return(); Pop(4)

0x4e: PushEmpty()
0x4f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-4] = Stack[-2]
0x52: Return(); Pop(0)

0x53: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x55: Stack[-4] = Stack[-1]
0x56: Return(); Pop(0)

0x57: Stack[-4] = Stack[-3]
0x58: Return(); Pop(0)

0x59: PushEmpty(object, object)
0x5a: @ CreateFloatVector(Stack[-1])
0x5b: Pop(0)
0x5c: @@ add(Stack[-3])
0x5d: Pop(0)
0x5e: Push((int) 11)
0x5f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x60: Pop(1)
0x61: Return(); Pop(2)

0x62: Stack[-1] = 0
0x63: PushEmpty(object, object)
0x64: @ CreateFloatVector(Stack[-1])
0x65: Pop(0)
0x66: @@ add(Stack[-3])
0x67: Pop(0)
0x68: Push((int) 12)
0x69: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: Stack[-1] = 0
0x6d: PushEmpty(object, object)
0x6e: @ CreateFloatVector(Stack[-1])
0x6f: Pop(0)
0x70: @@ add(Stack[-3])
0x71: Pop(0)
0x72: Push((int) 13)
0x73: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x74: Pop(1)
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(object, object)
0x78: @ CreateFloatVector(Stack[-1])
0x79: Pop(0)
0x7a: @@ add(Stack[-3])
0x7b: Pop(0)
0x7c: Push((int) 14)
0x7d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7e: Pop(1)
0x7f: Return(); Pop(2)

0x80: Stack[-1] = 0
0x81: PushEmpty(object, object)
0x82: @ CreateFloatVector(Stack[-1])
0x83: Pop(0)
0x84: @@ add(Stack[-3])
0x85: Pop(0)
0x86: Push((int) 15)
0x87: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x88: Pop(1)
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
