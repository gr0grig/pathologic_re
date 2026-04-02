GlobalVarCount = 0

Strings:
	W:quest_b10_01_cutscene
	W:enable_use
	W:disable_use
	W:.bin
// @pool_raw:710075006500730074005f006200310030005f00300031005f006300750074007300630065006e006500000065006e00610062006c0065005f007500730065000000640069007300610062006c0065005f0075007300650000002e00620069006e000000

Import:
	SetVisibility (1 args)
	Hold (0 args)
	SetUsable (1 args)
	StopGroup0 (0 args)
	SetUsable (0 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_0 Op = 0xc Vars = (object)
		EVENT_26 Op = 0x1a Vars = (string)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x3

0x8: Push((bool) 0)
0x9: @ SetUsable(Stack[-1])
0xa: Pop(1)
0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: PushEmpty(object, string)
0xe: Stack[-1] = "quest_b10_01_cutscene" // @poff=0
0xf: Call2 0x28

0x10: Pop(2)
0x11: PushEmpty()
0x12: Call2 0x15

0x13: Pop(0)
0x14: Return(); Pop(0)

0x15: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x16: @ StopGroup0()
0x17: Pop(0)
0x18: EventDisable(0)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: Push("enable_use") // @poff=44
0x1c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1e: @ SetUsable()
0x1f: Pop(0)
0x20: GOTO 0x27

0x21: Push("disable_use") // @poff=66
0x22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: PushEmpty()
0x25: Call2 0x15

0x26: Pop(0)
0x27: Return(); Pop(0)

0x28: PushEmpty(object, object, object, object)
0x29: @ GetMainOutdoorScene(Stack[-2])
0x2a: Pop(0)
0x2b: Push(".bin") // @poff=90
0x2c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x2e: Pop(1)
0x2f: Stack[-1] = Stack[-6]
0x30: Return(); Pop(4)

0x31: Stack[-1] = 0
0x32: Stack[-2] = 0
