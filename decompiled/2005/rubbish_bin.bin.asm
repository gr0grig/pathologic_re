GlobalVarCount = 0

Strings:
	bottle_empty
	watch
	razor
	needle
	gold_ring
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	rand (2 args)
	GameSleep (1 args)
	RemoveAllItems (0 args)
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
		EVENT_0 Op = 0x3c Vars = (object)


0x0: PushEmpty(float, float)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty()
0x5: Call2 0x1a

0x6: Pop(0)
0x7: Push((int) 13)
0x8: @ rand(Stack[-2], Stack[-1])
0x9: Pop(1)
0xa: Push((int) 1)
0xb: Pop(1); Push(Stack[-2] + Stack[-1]);
0xc: @ GameSleep(Stack[-1])
0xd: Pop(1)
0xe: PushEmpty()
0xf: Call2 0x1a

0x10: Pop(0)
0x11: Push((int) 2)
0x12: @ rand(Stack[-2], Stack[-1])
0x13: Pop(1)
0x14: Push((int) 12)
0x15: Pop(1); Push(Stack[-2] + Stack[-1]);
0x16: @ GameSleep(Stack[-1])
0x17: Pop(1)
0x18: GOTO 0xe

0x19: Return(); Pop(2)

0x1a: @ RemoveAllItems()
0x1b: Pop(0)
0x1c: PushEmpty(string, int, int, int)
0x1d: Stack[-4] = "bottle_empty"
0x1e: Stack[-3] = (int) 1
0x1f: Stack[-2] = (int) 2
0x20: Stack[-1] = (int) 1
0x21: Call2 0x5b

0x22: Pop(4)
0x23: PushEmpty(string, int, int)
0x24: Stack[-3] = "watch"
0x25: Stack[-2] = (int) 1
0x26: Stack[-1] = (int) 20
0x27: Call2 0x50

0x28: Pop(3)
0x29: PushEmpty(string, int, int)
0x2a: Stack[-3] = "razor"
0x2b: Stack[-2] = (int) 1
0x2c: Stack[-1] = (int) 12
0x2d: Call2 0x50

0x2e: Pop(3)
0x2f: PushEmpty(string, int, int)
0x30: Stack[-3] = "needle"
0x31: Stack[-2] = (int) 1
0x32: Stack[-1] = (int) 12
0x33: Call2 0x50

0x34: Pop(3)
0x35: PushEmpty(string, int, int)
0x36: Stack[-3] = "gold_ring"
0x37: Stack[-2] = (int) 1
0x38: Stack[-1] = (int) 60
0x39: Call2 0x50

0x3a: Pop(3)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(bool, bool, bool, bool)
0x3d: PushEmpty(bool)
0x3e: Call2 0x6f

0x3f: Pop(0)
0x40: Pop(1); Push((bool) Stack[-1] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: Return(); Pop(4)

0x43: @@ IsOnGround(Stack[-2])
0x44: Pop(0)
0x45: Push(Stack[-2])
0x46: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x47: EventDisable(0)
0x48: @ IsOverrideActive(Stack[-1])
0x49: Pop(0)
0x4a: Pop(0); Push((bool) Stack[-1] == 0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4c: @ Barter(Stack[-5])
0x4d: Pop(0)
0x4e: EventEnable(0)
0x4f: Return(); Pop(4)

0x50: PushEmpty(bool, bool)
0x51: PushEmpty(bool, int, int)
0x52: Stack[-2] = Stack[-7]
0x53: Stack[-1] = Stack[-6]
0x54: Call2 0x6a

0x55: Pop(2)
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: Push((int) 0)
0x58: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x59: Pop(1)
0x5a: Return(); Pop(2)

0x5b: PushEmpty(int, bool, int, bool)
0x5c: PushEmpty(bool, int, int)
0x5d: Stack[-2] = Stack[-10]
0x5e: Stack[-1] = Stack[-9]
0x5f: Call2 0x6a

0x60: Pop(2)
0x61: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x62: @ irand(Stack[-2], Stack[-5])
0x63: Pop(0)
0x64: Push((int) 0)
0x65: Push((int) 1)
0x66: Pop(1); Push(Stack[-4] + Stack[-1]);
0x67: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: Return(); Pop(4)

0x6a: PushEmpty(int, int)
0x6b: @ irand(Stack[-1], Stack[-3])
0x6c: Pop(0)
0x6d: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x6e: Return(); Pop(2)

0x6f: PushEmpty(int, int)
0x70: Push("nouse_container")
0x71: @ GetVariable(Stack[-1], Stack[-2])
0x72: Pop(1)
0x73: Stack[-3] = !Stack[-1]; Pop(0);
0x74: Return(); Pop(2)

