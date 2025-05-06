GlobalVarCount = 0

Strings:
	watch
	bottle_empty
	razor
	gold_ring
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	rand (2 args)
	GameSleep (1 args)
	RemoveAllItems (0 args)
	irand (2 args)
	AddItem (3 args)
	AddItem (4 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x50 Vars = (object)


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
0x20: Push((int) 18)
0x21: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: Push("watch")
0x24: Push((int) 0)
0x25: @ AddItem(Stack[-3], Stack[-2], Stack[-1])
0x26: Pop(2)
0x27: GOTO 0x39

0x28: Push((int) 10)
0x29: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2b: Push("bottle_empty")
0x2c: Push((int) 0)
0x2d: Push((int) 2)
0x2e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f: Pop(3)
0x30: GOTO 0x39

0x31: Push((int) 3)
0x32: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: Push("bottle_empty")
0x35: Push((int) 0)
0x36: Push((int) 1)
0x37: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x38: Pop(3)
0x39: Push((int) 20)
0x3a: @ irand(Stack[-3], Stack[-1])
0x3b: Pop(1)
0x3c: Push((int) 16)
0x3d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3f: Push("razor")
0x40: Push((int) 0)
0x41: Push((int) 1)
0x42: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43: Pop(3)
0x44: Push((int) 60)
0x45: @ irand(Stack[-3], Stack[-1])
0x46: Pop(1)
0x47: Push((int) 0)
0x48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4a: Push("gold_ring")
0x4b: Push((int) 0)
0x4c: Push((int) 1)
0x4d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e: Pop(3)
0x4f: Return(); Pop(4)

0x50: PushEmpty(bool, bool, bool, bool)
0x51: PushEmpty(bool)
0x52: Call 0x64

0x53: Pop(0)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x56: Return(); Pop(4)

0x57: @@ IsOnGround(Stack[-2])
0x58: Pop(0)
0x59: Push(Stack[-2])
0x5a: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5b: EventDisable(0)
0x5c: @ IsOverrideActive(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: @ Barter(Stack[-5])
0x61: Pop(0)
0x62: EventEnable(0)
0x63: Return(); Pop(4)

0x64: PushEmpty(int, int)
0x65: Push("nouse_container")
0x66: @ GetVariable(Stack[-1], Stack[-2])
0x67: Pop(1)
0x68: Stack[-3] = !Stack[-1]; Pop(0);
0x69: Return(); Pop(2)

