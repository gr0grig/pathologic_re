GlobalVarCount = 0

Strings:
	health
	immunity
	disease
	hunger
	tiredness
	add

Import:
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


0x0: PushEmpty(bool, string, float, float, float)
0x1: Stack[-4] = "health"
0x2: Stack[-3] = (float) -0.015
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call2 0x38

0x6: Pop(5)
0x7: PushEmpty(float)
0x8: Stack[-1] = (float) -0.015
0x9: Call2 0x7e

0xa: Pop(1)
0xb: PushEmpty(bool, string, float, float, float)
0xc: Stack[-4] = "immunity"
0xd: Stack[-3] = (float) 0.3
0xe: Stack[-2] = (int) 0
0xf: Stack[-1] = (int) 1
0x10: Call2 0x38

0x11: Pop(5)
0x12: PushEmpty(float)
0x13: Stack[-1] = (float) 0.3
0x14: Call2 0x6a

0x15: Pop(1)
0x16: PushEmpty(bool, string, float, float, float)
0x17: Stack[-4] = "disease"
0x18: Stack[-3] = (float) 0.0
0x19: Stack[-2] = (int) 0
0x1a: Stack[-1] = (int) 1
0x1b: Call2 0x38

0x1c: Pop(5)
0x1d: PushEmpty(float)
0x1e: Stack[-1] = (float) 0.0
0x1f: Call2 0x74

0x20: Pop(1)
0x21: PushEmpty(bool, string, float, float, float)
0x22: Stack[-4] = "hunger"
0x23: Stack[-3] = (float) 0.0
0x24: Stack[-2] = (int) 0
0x25: Stack[-1] = (int) 1
0x26: Call2 0x38

0x27: Pop(5)
0x28: PushEmpty(float)
0x29: Stack[-1] = (float) 0.0
0x2a: Call2 0x60

0x2b: Pop(1)
0x2c: PushEmpty(bool, string, float, float, float)
0x2d: Stack[-4] = "tiredness"
0x2e: Stack[-3] = (float) 0.0
0x2f: Stack[-2] = (int) 0
0x30: Stack[-1] = (int) 1
0x31: Call2 0x38

0x32: Pop(5)
0x33: PushEmpty(float)
0x34: Stack[-1] = (float) 0.0
0x35: Call2 0x56

0x36: Pop(1)
0x37: Return(); Pop(0)

0x38: PushEmpty(bool, float, bool, float)
0x39: @ HasProperty(Stack[-8], Stack[-2])
0x3a: Pop(0)
0x3b: Pop(0); Push((bool) Stack[-2] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: Stack[-9] = (bool) 0
0x3e: Return(); Pop(4)

0x3f: @ GetProperty(Stack[-8], Stack[-1])
0x40: Pop(0)
0x41: PushEmpty(float, float, float, float)
0x42: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x43: Stack[-2] = Stack[-10]
0x44: Stack[-1] = Stack[-9]
0x45: Call2 0x4b

0x46: Pop(3)
0x47: @ SetProperty(Stack[-9], Stack[-1])
0x48: Pop(1)
0x49: Stack[-9] = (bool) 1
0x4a: Return(); Pop(4)

0x4b: PushEmpty()
0x4c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x4d: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4e: Stack[-4] = Stack[-2]
0x4f: Return(); Pop(0)

0x50: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: Stack[-4] = Stack[-1]
0x53: Return(); Pop(0)

0x54: Stack[-4] = Stack[-3]
0x55: Return(); Pop(0)

0x56: PushEmpty(object, object)
0x57: @ CreateFloatVector(Stack[-1])
0x58: Pop(0)
0x59: @@ add(Stack[-3])
0x5a: Pop(0)
0x5b: Push((int) 11)
0x5c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5d: Pop(1)
0x5e: Return(); Pop(2)

0x5f: Stack[-1] = 0
0x60: PushEmpty(object, object)
0x61: @ CreateFloatVector(Stack[-1])
0x62: Pop(0)
0x63: @@ add(Stack[-3])
0x64: Pop(0)
0x65: Push((int) 12)
0x66: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x67: Pop(1)
0x68: Return(); Pop(2)

0x69: Stack[-1] = 0
0x6a: PushEmpty(object, object)
0x6b: @ CreateFloatVector(Stack[-1])
0x6c: Pop(0)
0x6d: @@ add(Stack[-3])
0x6e: Pop(0)
0x6f: Push((int) 13)
0x70: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x71: Pop(1)
0x72: Return(); Pop(2)

0x73: Stack[-1] = 0
0x74: PushEmpty(object, object)
0x75: @ CreateFloatVector(Stack[-1])
0x76: Pop(0)
0x77: @@ add(Stack[-3])
0x78: Pop(0)
0x79: Push((int) 14)
0x7a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: Return(); Pop(2)

0x7d: Stack[-1] = 0
0x7e: PushEmpty(object, object)
0x7f: @ CreateFloatVector(Stack[-1])
0x80: Pop(0)
0x81: @@ add(Stack[-3])
0x82: Pop(0)
0x83: Push((int) 0)
0x84: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x86: Push((float)0.7)
0x87: Push((int) 500)
0x88: @ RumblePlay(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: Push((int) 15)
0x8b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8c: Pop(1)
0x8d: Return(); Pop(2)

0x8e: Stack[-1] = 0
