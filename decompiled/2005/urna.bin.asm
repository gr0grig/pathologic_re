GlobalVarCount = 0

Strings:
	bottle_empty
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	rand (2 args)
	GameSleep (1 args)
	RemoveAllItems (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	irand (2 args)
	AddItem (4 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x24 Vars = (object)


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
0x20: Stack[-1] = (int) 2
0x21: Call2 0x38

0x22: Pop(4)
0x23: Return(); Pop(0)

0x24: PushEmpty(bool, bool, bool, bool)
0x25: PushEmpty(bool)
0x26: Call2 0x4c

0x27: Pop(0)
0x28: Pop(1); Push((bool) Stack[-1] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: Return(); Pop(4)

0x2b: @@ IsOnGround(Stack[-2])
0x2c: Pop(0)
0x2d: Push(Stack[-2])
0x2e: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x2f: EventDisable(0)
0x30: @ IsOverrideActive(Stack[-1])
0x31: Pop(0)
0x32: Pop(0); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: @ Barter(Stack[-5])
0x35: Pop(0)
0x36: EventEnable(0)
0x37: Return(); Pop(4)

0x38: PushEmpty(int, bool, int, bool)
0x39: PushEmpty(bool, int, int)
0x3a: Stack[-2] = Stack[-10]
0x3b: Stack[-1] = Stack[-9]
0x3c: Call2 0x47

0x3d: Pop(2)
0x3e: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x3f: @ irand(Stack[-2], Stack[-5])
0x40: Pop(0)
0x41: Push((int) 0)
0x42: Push((int) 1)
0x43: Pop(1); Push(Stack[-4] + Stack[-1]);
0x44: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x45: Pop(2)
0x46: Return(); Pop(4)

0x47: PushEmpty(int, int)
0x48: @ irand(Stack[-1], Stack[-3])
0x49: Pop(0)
0x4a: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x4b: Return(); Pop(2)

0x4c: PushEmpty(int, int)
0x4d: Push("nouse_container")
0x4e: @ GetVariable(Stack[-1], Stack[-2])
0x4f: Pop(1)
0x50: Stack[-3] = !Stack[-1]; Pop(0);
0x51: Return(); Pop(2)

