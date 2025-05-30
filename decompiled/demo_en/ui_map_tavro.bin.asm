GlobalVarCount = 0

Strings:
	map
	to_map_h
	to_quest_h
	to_map
	to_quest

Import:
	ProcessEvents (0 args)
	SendMessageToParent (1 args)
	SetBackground (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_2 Op = 0x6 Vars = (int, int)
		EVENT_200 Op = 0xf Vars = (int, string, object)
		EVENT_9 Op = 0x1f Vars = ()
		EVENT_10 Op = 0x24 Vars = ()


0x0: PushEmpty()
0x1: Call2 0x33

0x2: Pop(0)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Push((int) 1)
0xa: GOTO 0xc

0xb: Push((int) 0)
0xc: @ SendMessageToParent(Stack[-1])
0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Push("map")
0x11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x13: Push((int) 0)
0x14: Stack[0 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0x15: Push( Stack[1 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x17: PushEmpty()
0x18: Call2 0x29

0x19: Pop(0)
0x1a: GOTO 0x1e

0x1b: PushEmpty()
0x1c: Call2 0x33

0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty()
0x20: Call2 0x29

0x21: Pop(0)
0x22: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x23: Return(); Pop(0)

0x24: PushEmpty()
0x25: Call2 0x33

0x26: Pop(0)
0x27: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x28: Return(); Pop(0)

0x29: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2b: Push("to_map_h")
0x2c: @ SetBackground(Stack[-1])
0x2d: Pop(1)
0x2e: GOTO 0x32

0x2f: Push("to_quest_h")
0x30: @ SetBackground(Stack[-1])
0x31: Pop(1)
0x32: Return(); Pop(0)

0x33: Push( Stack[0 + Tasks[-1].StackPointer] )
0x34: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x35: Push("to_map")
0x36: @ SetBackground(Stack[-1])
0x37: Pop(1)
0x38: GOTO 0x3c

0x39: Push("to_quest")
0x3a: @ SetBackground(Stack[-1])
0x3b: Pop(1)
0x3c: Return(); Pop(0)

