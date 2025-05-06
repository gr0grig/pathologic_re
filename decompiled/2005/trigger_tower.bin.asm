GlobalVarCount = 0

Strings:
	sound1
	sound2

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	PlaySound (1 args)
	irand (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	rand (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_23 Op = 0x4 Vars = (object)
	GTASK_1 Vars = (object) Params = 1
		EVENT_6 Op = 0x2e Vars = ()
		EVENT_27 Op = 0x31 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, bool)
0x5: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6: Pop(0)
0x7: Push(Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x9: PushEmpty(object)
0xa: Stack[-1] = Stack[-4]
0xb: Push(-1, 1); TaskCall(1)
0xc: Call2 0x10

0xd: Pop(-1, 1); TaskReturn
0xe: Pop(1)
0xf: Return(); Pop(2)

0x10: PushEmpty(int, bool, int, bool)
0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x12: PushEmpty(bool, float)
0x13: Stack[-1] = (float) 0.5
0x14: Call2 0x37

0x15: Pop(1)
0x16: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x17: Push("sound1")
0x18: GOTO 0x1a

0x19: Push("sound2")
0x1a: @ PlaySound(Stack[-1])
0x1b: Pop(1)
0x1c: Push((int) 15)
0x1d: @ irand(Stack[-3], Stack[-1])
0x1e: Pop(1)
0x1f: Push((int) 15)
0x20: Pop(1); Push(Stack[-3] + Stack[-1]);
0x21: @ Sleep(Stack[-1], Stack[-2])
0x22: Pop(1)
0x23: PushEmpty(bool)
0x24: Stack[-1] = (bool) 1
0x25: Pop(0); Push((bool) Stack[-2] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x27: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x29: Stack[-1] = (bool) 0
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: GOTO 0x2d

0x2c: GOTO 0x12

0x2d: Return(); Pop(4)

0x2e: @ StopGroup0()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty()
0x32: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: @ StopGroup0()
0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty(float, float)
0x38: @ rand(Stack[-1])
0x39: Pop(0)
0x3a: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x3b: Return(); Pop(2)

