GlobalVarCount = 0

Strings:
	quest_d4_03
	scene_load
	quest_b4_01
	wg_unload

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
0x5: Stack[-2] = "quest_d4_03"
0x6: Stack[-1] = "scene_load"
0x7: Call2 0x10

0x8: Pop(3)
0x9: Return(); Pop(0)

0xa: PushEmpty(bool, string, string)
0xb: Stack[-2] = "quest_b4_01"
0xc: Stack[-1] = "wg_unload"
0xd: Call2 0x10

0xe: Pop(3)
0xf: Return(); Pop(0)

0x10: PushEmpty(object, object)
0x11: @ FindActor(Stack[-1], Stack[-4])
0x12: Pop(0)
0x13: Pop(0); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x15: Stack[-5] = (bool) 0
0x16: Return(); Pop(2)

0x17: @ Trigger(Stack[-1], Stack[-3])
0x18: Pop(0)
0x19: Stack[-5] = (bool) 1
0x1a: Return(); Pop(2)

0x1b: Stack[-1] = 0
