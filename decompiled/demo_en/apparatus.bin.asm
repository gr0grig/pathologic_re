GlobalVarCount = 0

Strings:
	apparatus.xml
	branch

Import:
	SetVisibility (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	ShowWindow (4 args)
	self (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(bool, bool)
0x8: PushEmpty(int)
0x9: Call2 0x24

0xa: Pop(0)
0xb: Push((int) 1)
0xc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: Return(); Pop(2)

0xf: EventDisable(0)
0x10: @ IsOverrideActive(Stack[-1])
0x11: Pop(0)
0x12: Pop(0); Push((bool) Stack[-1] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x14: Push("apparatus.xml")
0x15: Push((bool) 0)
0x16: Push((bool) 0)
0x17: PushEmpty(object)
0x18: Call2 0x1e

0x19: Pop(0)
0x1a: @ ShowWindow(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b: Pop(4)
0x1c: EventEnable(0)
0x1d: Return(); Pop(2)

0x1e: PushEmpty(object, object)
0x1f: @ self(Stack[-1])
0x20: Pop(0)
0x21: Stack[-3] = Stack[-1]
0x22: Return(); Pop(2)

0x23: Stack[-1] = 0
0x24: PushEmpty(int, int)
0x25: Push("branch")
0x26: @ GetVariable(Stack[-1], Stack[-2])
0x27: Pop(1)
0x28: Stack[-3] = Stack[-1]
0x29: Return(); Pop(2)

