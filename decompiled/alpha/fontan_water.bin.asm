GlobalVarCount = 0

Strings:
	hunger
	drink
	HasProperty
	HasProperty
	GetProperty
	SetProperty

Import:
	SetVisibility (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	SetUsable (1 args)
	StopGroup0 (0 args)
	PlaySound (1 args)
	Sleep (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_9 Op = 0x10 Vars = (int, float)
		EVENT_0 Op = 0x18 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: Push((int) 0)
0x4: Push((int) 24)
0x5: @ SetTimeEvent(Stack[-2], Stack[-1])
0x6: Pop(2)
0x7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8: @ Hold()
0x9: Pop(0)
0xa: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0xc: Push((bool) 0)
0xd: @ SetUsable(Stack[-1])
0xe: Pop(1)
0xf: Return(); Pop(0)

0x10: PushEmpty()
0x11: Push((int) 0)
0x12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x14: @ StopGroup0()
0x15: Pop(0)
0x16: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: EventDisable(0)
0x1a: PushEmpty(bool, object, string, float, float, float)
0x1b: Stack[-5] = Stack[-7]
0x1c: Stack[-4] = "hunger"
0x1d: Stack[-3] = (float) -0.05
0x1e: Stack[-2] = (int) 0
0x1f: Stack[-1] = (int) 1
0x20: Call 0x36

0x21: Pop(6)
0x22: Push("drink")
0x23: @ PlaySound(Stack[-1])
0x24: Pop(1)
0x25: Push((int) 1)
0x26: @ Sleep(Stack[-1])
0x27: Pop(1)
0x28: EventEnable(0)
0x29: Return(); Pop(0)

0x2a: PushEmpty(bool, bool)
0x2b: Push("HasProperty")
0x2c: Push((int) 2)
0x2d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2e: Pop(1); Push((bool) Stack[-1] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x30: Stack[-5] = (bool) 0
0x31: Return(); Pop(2)

0x32: @@ HasProperty(Stack[-3], Stack[-1])
0x33: Pop(0)
0x34: Stack[-5] = Stack[-1]
0x35: Return(); Pop(2)

0x36: PushEmpty(float, float)
0x37: PushEmpty(bool, object, string)
0x38: Stack[-2] = Stack[-10]
0x39: Stack[-1] = Stack[-9]
0x3a: Call 0x2a

0x3b: Pop(2)
0x3c: Pop(1); Push((bool) Stack[-1] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3e: Stack[-8] = (bool) 0
0x3f: Return(); Pop(2)

0x40: @@ GetProperty(Stack[-6], Stack[-1])
0x41: Pop(0)
0x42: PushEmpty(float, float, float, float)
0x43: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x44: Stack[-2] = Stack[-8]
0x45: Stack[-1] = Stack[-7]
0x46: Call 0x4c

0x47: Pop(3)
0x48: @@ SetProperty(Stack[-7], Stack[-1])
0x49: Pop(1)
0x4a: Stack[-8] = (bool) 1
0x4b: Return(); Pop(2)

0x4c: PushEmpty()
0x4d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x4e: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4f: Stack[-4] = Stack[-2]
0x50: Return(); Pop(0)

0x51: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-4] = Stack[-1]
0x54: Return(); Pop(0)

0x55: Stack[-4] = Stack[-3]
0x56: Return(); Pop(0)

