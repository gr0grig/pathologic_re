GlobalVarCount = 0

Strings:
	quest_d4_02
	survived

Import:
	GameSleep (1 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push((float)1.0)
0x1: @ GameSleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_d4_02"
0x5: Stack[-1] = "survived"
0x6: Call2 0x14

0x7: Pop(3)
0x8: PushEmpty(object)
0x9: Call2 0xe

0xa: Pop(0)
0xb: @ RemoveActor(Stack[-1])
0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ self(Stack[-1])
0x10: Pop(0)
0x11: Stack[-3] = Stack[-1]
0x12: Return(); Pop(2)

0x13: Stack[-1] = 0
0x14: PushEmpty(object, object)
0x15: @ FindActor(Stack[-1], Stack[-4])
0x16: Pop(0)
0x17: Pop(0); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x19: Stack[-5] = (bool) 0
0x1a: Return(); Pop(2)

0x1b: @ Trigger(Stack[-1], Stack[-3])
0x1c: Pop(0)
0x1d: Stack[-5] = (bool) 1
0x1e: Return(); Pop(2)

0x1f: Stack[-1] = 0
