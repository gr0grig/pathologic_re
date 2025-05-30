GlobalVarCount = 0

Strings:
	activate
	deactivate
	quest_b11_01
	shaft_drop
	health
	SetProperty

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)
		EVENT_23 Op = 0xf Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Push("activate")
0x6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x9: GOTO 0xe

0xa: Push("deactivate")
0xb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xd: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xe: Return(); Pop(0)

0xf: PushEmpty(bool, bool)
0x10: @ IsPlayerActor(Stack[-3], Stack[-1])
0x11: Pop(0)
0x12: Push(Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: Push( Stack[0 + Tasks[-1].StackPointer] )
0x15: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x16: PushEmpty(bool, string, string)
0x17: Stack[-2] = "quest_b11_01"
0x18: Stack[-1] = "shaft_drop"
0x19: Call2 0x21

0x1a: Pop(3)
0x1b: GOTO 0x20

0x1c: Push("health")
0x1d: Push((int) 0)
0x1e: @@ SetProperty(Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: Return(); Pop(2)

0x21: PushEmpty(object, object)
0x22: @ FindActor(Stack[-1], Stack[-4])
0x23: Pop(0)
0x24: Pop(0); Push((bool) Stack[-1] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x26: Stack[-5] = (bool) 0
0x27: Return(); Pop(2)

0x28: @ Trigger(Stack[-1], Stack[-3])
0x29: Pop(0)
0x2a: Stack[-5] = (bool) 1
0x2b: Return(); Pop(2)

0x2c: Stack[-1] = 0
