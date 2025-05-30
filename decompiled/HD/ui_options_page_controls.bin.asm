GlobalVarCount = 0

Strings:
	default
	get

Import:
	GetTextWidth (3 args)
	GetMouseSensivity (1 args)
	GetGamepadSensivity (1 args)
	GetGamepadUISensivity (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (4 args)
	GetStringByID (2 args)

RunOp = 0x32
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, string, int, int, int) Params = 0
		EVENT_0 Op = 0x3b Vars = ()
		EVENT_200 Op = 0x7e Vars = (int, string, object)


0x0: PushEmpty(int, int)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x2: Push("default")
0x3: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-0])
0x4: Pop(1)
0x5: Push((int) 305)
0x6: Push((int) 2)
0x7: Pop(1); Push(Stack[-3] / Stack[-1]);
0x8: Stack[3 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x9: Return(); Pop(2)

0xa: PushEmpty(int, int)
0xb: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0xc: Push("default")
0xd: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-1])
0xe: Pop(1)
0xf: Push((int) 305)
0x10: Push((int) 2)
0x11: Pop(1); Push(Stack[-3] / Stack[-1]);
0x12: Stack[4 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x13: Return(); Pop(2)

0x14: PushEmpty(int, int)
0x15: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x16: Push("default")
0x17: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-2])
0x18: Pop(1)
0x19: Push((int) 305)
0x1a: Push((int) 2)
0x1b: Pop(1); Push(Stack[-3] / Stack[-1]);
0x1c: Stack[5 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x1d: Return(); Pop(2)

0x1e: PushEmpty(float, float, float, float, float, float)
0x1f: @ GetMouseSensivity(Stack[-3])
0x20: Pop(0)
0x21: @ GetGamepadSensivity(Stack[-2])
0x22: Pop(0)
0x23: @ GetGamepadUISensivity(Stack[-1])
0x24: Pop(0)
0x25: PushEmpty(float)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x0

0x28: Pop(1)
0x29: PushEmpty(float)
0x2a: Stack[-1] = Stack[-3]
0x2b: Call2 0xa

0x2c: Pop(1)
0x2d: PushEmpty(float)
0x2e: Stack[-1] = Stack[-2]
0x2f: Call2 0x14

0x30: Pop(1)
0x31: Return(); Pop(6)

0x32: Push((bool) 1)
0x33: @ SetOwnerDraw(Stack[-1])
0x34: Pop(1)
0x35: PushEmpty()
0x36: Call2 0x1e

0x37: Pop(0)
0x38: @ ProcessEvents()
0x39: Pop(0)
0x3a: Return(); Pop(0)

0x3b: Push("default")
0x3c: Push((int) 15)
0x3d: Push((int) 12)
0x3e: PushEmpty(string, int)
0x3f: Stack[-1] = (int) 101
0x40: Call2 0x9c

0x41: Pop(1)
0x42: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43: Pop(4)
0x44: Push("default")
0x45: Push((int) 12)
0x46: @ Print(Stack[-2], Stack[-3], Stack[-1], Stack[-0])
0x47: Pop(2)
0x48: Push("default")
0x49: Push((int) 15)
0x4a: Push((int) 64)
0x4b: PushEmpty(string, int)
0x4c: Stack[-1] = (int) 120
0x4d: Call2 0x9c

0x4e: Pop(1)
0x4f: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x50: Pop(4)
0x51: Push("default")
0x52: Push((int) 64)
0x53: @ Print(Stack[-2], Stack[-4], Stack[-1], Stack[-1])
0x54: Pop(2)
0x55: Push("default")
0x56: Push((int) 15)
0x57: Push((int) 112)
0x58: PushEmpty(string, int)
0x59: Stack[-1] = (int) 121
0x5a: Call2 0x9c

0x5b: Pop(1)
0x5c: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(4)
0x5e: Push("default")
0x5f: Push((int) 112)
0x60: @ Print(Stack[-2], Stack[-5], Stack[-1], Stack[-2])
0x61: Pop(2)
0x62: Push("default")
0x63: Push((int) 15)
0x64: Push((int) 164)
0x65: PushEmpty(string, int)
0x66: Stack[-1] = (int) 100
0x67: Call2 0x9c

0x68: Pop(1)
0x69: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(4)
0x6b: Push("default")
0x6c: Push((int) 15)
0x6d: Push((int) 186)
0x6e: PushEmpty(string, int)
0x6f: Stack[-1] = (int) 122
0x70: Call2 0x9c

0x71: Pop(1)
0x72: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(4)
0x74: Push("default")
0x75: Push((int) 15)
0x76: Push((int) 210)
0x77: PushEmpty(string, int)
0x78: Stack[-1] = (int) 123
0x79: Call2 0x9c

0x7a: Pop(1)
0x7b: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(4)
0x7d: Return(); Pop(0)

0x7e: PushEmpty(float, float)
0x7f: Pop(0); Push(( Stack[-3] != 0 )
0x80: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x81: Push((int) 0)
0x82: @@ get(Stack[-2], Stack[-1])
0x83: Pop(1)
0x84: Push((int) 109)
0x85: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x87: PushEmpty(float)
0x88: Stack[-1] = Stack[-2]
0x89: Call2 0x0

0x8a: Pop(1)
0x8b: GOTO 0x9b

0x8c: Push((int) 110)
0x8d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: PushEmpty(float)
0x90: Stack[-1] = Stack[-2]
0x91: Call2 0xa

0x92: Pop(1)
0x93: GOTO 0x9b

0x94: Push((int) 111)
0x95: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x97: PushEmpty(float)
0x98: Stack[-1] = Stack[-2]
0x99: Call2 0x14

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(string, string)
0x9d: @ GetStringByID(Stack[-1], Stack[-3])
0x9e: Pop(0)
0x9f: Stack[-4] = Stack[-1]
0xa0: Return(); Pop(2)

