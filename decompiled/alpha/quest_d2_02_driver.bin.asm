GlobalVarCount = 0

Strings:
	quest_d2_02
	driver_unload

Import:
	Hold (0 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x4 Vars = ()

Events:
EVENT_6 Op = 0x11 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: @ FindActor(Stack[-1], Stack[-4])
0x7: Pop(0)
0x8: Pop(0); Push((bool) Stack[-1] == 0)
0x9: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xa: Stack[-5] = (bool) 0
0xb: Return(); Pop(2)

0xc: @ Trigger(Stack[-1], Stack[-3])
0xd: Pop(0)
0xe: Stack[-5] = (bool) 1
0xf: Return(); Pop(2)

0x10: Stack[-1] = 0
0x11: PushEmpty(bool, string, string)
0x12: Stack[-2] = "quest_d2_02"
0x13: Stack[-1] = "driver_unload"
0x14: Call 0x5

0x15: Pop(3)
0x16: Return(); Pop(0)

