GlobalVarCount = 0

Strings:
	quest_k7_01
	termitnik2_load

Import:
	Hold (0 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x4 Vars = ()
		EVENT_6 Op = 0xa Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, string, string)
0x5: Stack[-2] = "quest_k7_01"
0x6: Stack[-1] = "termitnik2_load"
0x7: Call2 0xb

0x8: Pop(3)
0x9: Return(); Pop(0)

0xa: Return(); Pop(0)

0xb: PushEmpty(object, object)
0xc: @ FindActor(Stack[-1], Stack[-4])
0xd: Pop(0)
0xe: Pop(0); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-5] = (bool) 0
0x11: Return(); Pop(2)

0x12: @ Trigger(Stack[-1], Stack[-3])
0x13: Pop(0)
0x14: Stack[-5] = (bool) 1
0x15: Return(); Pop(2)

0x16: Stack[-1] = 0
