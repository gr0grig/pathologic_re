GlobalVarCount = 0

Strings:
	Knife
	Tvirin
	Lemon
	Funduk
	Peanut
	Walnut
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	AddItem (3 args)
	irand (2 args)
	AddItem (4 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x30 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(string, int, int)
0x4: Stack[-3] = "Knife"
0x5: Stack[-2] = (int) 1
0x6: Stack[-1] = (int) 10
0x7: Call 0x44

0x8: Pop(3)
0x9: PushEmpty(string, int, int)
0xa: Stack[-3] = "Tvirin"
0xb: Stack[-2] = (int) 1
0xc: Stack[-1] = (int) 7
0xd: Call 0x44

0xe: Pop(3)
0xf: PushEmpty(string, int, int, int)
0x10: Stack[-4] = "Lemon"
0x11: Stack[-3] = (int) 1
0x12: Stack[-2] = (int) 5
0x13: Stack[-1] = (int) 2
0x14: Call 0x4f

0x15: Pop(4)
0x16: PushEmpty(string, int, int)
0x17: Stack[-3] = "Funduk"
0x18: Stack[-2] = (int) 1
0x19: Stack[-1] = (int) 30
0x1a: Call 0x44

0x1b: Pop(3)
0x1c: PushEmpty(string, int, int)
0x1d: Stack[-3] = "Peanut"
0x1e: Stack[-2] = (int) 1
0x1f: Stack[-1] = (int) 30
0x20: Call 0x44

0x21: Pop(3)
0x22: PushEmpty(string, int, int)
0x23: Stack[-3] = "Walnut"
0x24: Stack[-2] = (int) 1
0x25: Stack[-1] = (int) 30
0x26: Call 0x44

0x27: Pop(3)
0x28: PushEmpty()
0x29: Call 0x2c

0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: @ Hold()
0x2d: Pop(0)
0x2e: GOTO 0x2c

0x2f: Return(); Pop(0)

0x30: PushEmpty(bool, bool, bool, bool)
0x31: PushEmpty(bool)
0x32: Call 0x63

0x33: Pop(0)
0x34: Pop(1); Push((bool) Stack[-1] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: Return(); Pop(4)

0x37: @@ IsOnGround(Stack[-2])
0x38: Pop(0)
0x39: Push(Stack[-2])
0x3a: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3b: EventDisable(0)
0x3c: @ IsOverrideActive(Stack[-1])
0x3d: Pop(0)
0x3e: Pop(0); Push((bool) Stack[-1] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: @ Barter(Stack[-5])
0x41: Pop(0)
0x42: EventEnable(0)
0x43: Return(); Pop(4)

0x44: PushEmpty(bool, bool)
0x45: PushEmpty(bool, int, int)
0x46: Stack[-2] = Stack[-7]
0x47: Stack[-1] = Stack[-6]
0x48: Call 0x5e

0x49: Pop(2)
0x4a: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4b: Push((int) 0)
0x4c: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x4d: Pop(1)
0x4e: Return(); Pop(2)

0x4f: PushEmpty(int, bool, int, bool)
0x50: PushEmpty(bool, int, int)
0x51: Stack[-2] = Stack[-10]
0x52: Stack[-1] = Stack[-9]
0x53: Call 0x5e

0x54: Pop(2)
0x55: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x56: @ irand(Stack[-2], Stack[-5])
0x57: Pop(0)
0x58: Push((int) 0)
0x59: Push((int) 1)
0x5a: Pop(1); Push(Stack[-7] + Stack[-1]);
0x5b: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: Return(); Pop(4)

0x5e: PushEmpty(int, int)
0x5f: @ irand(Stack[-1], Stack[-3])
0x60: Pop(0)
0x61: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x62: Return(); Pop(2)

0x63: PushEmpty(int, int)
0x64: Push("nouse_container")
0x65: @ GetVariable(Stack[-1], Stack[-2])
0x66: Pop(1)
0x67: Stack[-3] = !Stack[-1]; Pop(0);
0x68: Return(); Pop(2)

