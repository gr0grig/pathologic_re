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
	irand (2 args)
	AddItem (4 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x32 Vars = (object)


0x0: PushEmpty(float, float)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty()
0x5: Call 0x1a

0x6: Pop(0)
0x7: Push((int) 13)
0x8: @ rand(Stack[-2], Stack[-1])
0x9: Pop(1)
0xa: Push((int) 1)
0xb: Pop(1); Push(Stack[-2] + Stack[-1]);
0xc: @ GameSleep(Stack[-1])
0xd: Pop(1)
0xe: PushEmpty()
0xf: Call 0x1a

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

0x1a: PushEmpty(int, bool, int, bool)
0x1b: @ RemoveAllItems()
0x1c: Pop(0)
0x1d: Push((int) 20)
0x1e: @ irand(Stack[-3], Stack[-1])
0x1f: Pop(1)
0x20: Push((int) 15)
0x21: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x23: Push("bottle_empty")
0x24: Push((int) 0)
0x25: Push((int) 2)
0x26: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x27: Pop(3)
0x28: GOTO 0x31

0x29: Push((int) 3)
0x2a: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push("bottle_empty")
0x2d: Push((int) 0)
0x2e: Push((int) 1)
0x2f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x30: Pop(3)
0x31: Return(); Pop(4)

0x32: PushEmpty(bool, bool, bool, bool)
0x33: PushEmpty(bool)
0x34: Call 0x46

0x35: Pop(0)
0x36: Pop(1); Push((bool) Stack[-1] == 0)
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Return(); Pop(4)

0x39: @@ IsOnGround(Stack[-2])
0x3a: Pop(0)
0x3b: Push(Stack[-2])
0x3c: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3d: EventDisable(0)
0x3e: @ IsOverrideActive(Stack[-1])
0x3f: Pop(0)
0x40: Pop(0); Push((bool) Stack[-1] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: @ Barter(Stack[-5])
0x43: Pop(0)
0x44: EventEnable(0)
0x45: Return(); Pop(4)

0x46: PushEmpty(int, int)
0x47: Push("nouse_container")
0x48: @ GetVariable(Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Stack[-3] = !Stack[-1]; Pop(0);
0x4b: Return(); Pop(2)

