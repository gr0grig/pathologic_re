GlobalVarCount = 0

Strings:
	quest_d4_03
	scene_load

Import:
	Hold (0 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x4 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, string, string)
0x5: Stack[-2] = "quest_d4_03"
0x6: Stack[-1] = "scene_load"
0x7: Call 0xa

0x8: Pop(3)
0x9: Return(); Pop(0)

0xa: PushEmpty(object, object)
0xb: @ FindActor(Stack[-1], Stack[-4])
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[-1] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xf: Stack[-5] = (bool) 0
0x10: Return(); Pop(2)

0x11: @ Trigger(Stack[-1], Stack[-3])
0x12: Pop(0)
0x13: Stack[-5] = (bool) 1
0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
