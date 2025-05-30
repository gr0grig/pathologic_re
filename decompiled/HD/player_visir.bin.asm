GlobalVarCount = 0

Strings:
	visir
	vcharge
	sleeping

Import:
	sync (1 args)
	IsVisirOn (1 args)
	GetProperty (2 args)
	SetProperty (2 args)
	SwitchVisir (1 args)
	SendWorldWndMessage (1 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float, bool, bool, int, int, float, float, bool, bool, int, int)
0x1: Stack[-6] = (int) 0
0x2: @ sync(Stack[-5])
0x3: Pop(0)
0x4: @ IsVisirOn(Stack[-4])
0x5: Pop(0)
0x6: Push(Stack[-4])
0x7: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x8: PushEmpty(bool)
0x9: Call2 0x73

0xa: Pop(0)
0xb: Pop(1); Push((bool) Stack[-1] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: PushEmpty()
0xe: Call2 0x30

0xf: Pop(0)
0x10: Stack[-6] = (int) 0
0x11: GOTO 0x2e

0x12: Push("visir")
0x13: @ GetProperty(Stack[-1], Stack[-4])
0x14: Pop(1)
0x15: Push(Stack[-3])
0x16: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x17: Stack[-6] = Stack[-6] + Stack[-5]; Pop(0);
0x18: PushEmpty(int)
0x19: Stack[-1] = Stack[-7]
0x1a: Push((int) 3)
0x1b: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x1c: Push(Stack[-2])
0x1d: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x1e: Push("vcharge")
0x1f: @ GetProperty(Stack[-1], Stack[-2])
0x20: Pop(1)
0x21: Push("vcharge")
0x22: PushEmpty(int, int, int, int)
0x23: Stack[-3] = Stack[-6] + Stack[-7]; Pop(0);
0x24: Stack[-2] = (int) 0
0x25: Stack[-1] = (int) 100
0x26: Call2 0x80

0x27: Pop(3)
0x28: @ SetProperty(Stack[-2], Stack[-1])
0x29: Pop(2)
0x2a: Push((int) 3)
0x2b: Stack[-7] = Stack[-7] % Stack[-1]; Pop(1);
0x2c: GOTO 0x2e

0x2d: Stack[-6] = (int) 0
0x2e: GOTO 0x2

0x2f: Return(); Pop(12)

0x30: PushEmpty(float, float, bool, int, float, float, bool, int)
0x31: PushEmpty(bool, int)
0x32: Stack[-1] = (int) 5
0x33: Call2 0x63

0x34: Pop(1)
0x35: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x36: Stack[-4] = (int) 0
0x37: @ sync(Stack[-3])
0x38: Pop(0)
0x39: @ IsVisirOn(Stack[-2])
0x3a: Pop(0)
0x3b: PushEmpty(bool)
0x3c: Stack[-1] = (bool) 1
0x3d: Pop(0); Push((bool) Stack[-3] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3f: PushEmpty(bool)
0x40: Call2 0x73

0x41: Pop(0)
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: Stack[-1] = (bool) 0
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: Return(); Pop(8)

0x46: Stack[-4] = Stack[-4] + Stack[-3]; Pop(0);
0x47: PushEmpty(int)
0x48: Stack[-1] = Stack[-5]
0x49: Push((int) 1)
0x4a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: GOTO 0x4e

0x4d: GOTO 0x37

0x4e: PushEmpty(int)
0x4f: Stack[-1] = Stack[-5]
0x50: Stack[-2] = Stack[-1]
0x51: Pop(1)
0x52: PushEmpty(bool, int)
0x53: Stack[-1] = Stack[-3]
0x54: Call2 0x63

0x55: Pop(1)
0x56: Pop(1); Push((bool) Stack[-1] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: GOTO 0x5c

0x59: Push((int) 1)
0x5a: Stack[-5] = Stack[-5] % Stack[-1]; Pop(1);
0x5b: GOTO 0x37

0x5c: Push((bool) 0)
0x5d: @ SwitchVisir(Stack[-1])
0x5e: Pop(1)
0x5f: Push((int) 2)
0x60: @ SendWorldWndMessage(Stack[-1])
0x61: Pop(1)
0x62: Return(); Pop(8)

0x63: PushEmpty(int, int)
0x64: Push("vcharge")
0x65: @ GetProperty(Stack[-1], Stack[-2])
0x66: Pop(1)
0x67: PushEmpty(int, int, int, int)
0x68: Stack[-3] = Stack[-5] - Stack[-7]; Pop(0);
0x69: Stack[-2] = (int) 0
0x6a: Stack[-1] = (int) 100
0x6b: Call2 0x80

0x6c: Stack[-5] = Stack[-4]
0x6d: Pop(4)
0x6e: Push("vcharge")
0x6f: @ SetProperty(Stack[-1], Stack[-2])
0x70: Pop(1)
0x71: Stack[-4] = Stack[-1]
0x72: Return(); Pop(2)

0x73: PushEmpty(bool, bool, bool, bool)
0x74: Push("sleeping")
0x75: @ HasProperty(Stack[-1], Stack[-3])
0x76: Pop(1)
0x77: Pop(0); Push((bool) Stack[-2] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-5] = (bool) 0
0x7a: Return(); Pop(4)

0x7b: Push("sleeping")
0x7c: @ GetProperty(Stack[-1], Stack[-2])
0x7d: Pop(1)
0x7e: Stack[-5] = Stack[-1]
0x7f: Return(); Pop(4)

0x80: PushEmpty()
0x81: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x82: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x83: Stack[-4] = Stack[-2]
0x84: Return(); Pop(0)

0x85: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: Stack[-4] = Stack[-1]
0x88: Return(); Pop(0)

0x89: Stack[-4] = Stack[-3]
0x8a: Return(); Pop(0)

