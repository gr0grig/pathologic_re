GlobalVarCount = 0

Strings:
	hunger
	tiredness
	drink
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	add

Import:
	SetVisibility (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	SetUsable (1 args)
	StopGroup0 (0 args)
	PlaySound (1 args)
	Sleep (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

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
0x1d: Stack[-3] = (float) -0.01
0x1e: Stack[-2] = (int) 0
0x1f: Stack[-1] = (int) 1
0x20: Call2 0x46

0x21: Pop(6)
0x22: PushEmpty(float)
0x23: Stack[-1] = (float) -0.01
0x24: Call2 0x71

0x25: Pop(1)
0x26: PushEmpty(bool, object, string, float, float, float)
0x27: Stack[-5] = Stack[-7]
0x28: Stack[-4] = "tiredness"
0x29: Stack[-3] = (float) 0.03
0x2a: Stack[-2] = (int) 0
0x2b: Stack[-1] = (int) 1
0x2c: Call2 0x46

0x2d: Pop(6)
0x2e: PushEmpty(float)
0x2f: Stack[-1] = (float) 0.03
0x30: Call2 0x67

0x31: Pop(1)
0x32: Push("drink")
0x33: @ PlaySound(Stack[-1])
0x34: Pop(1)
0x35: Push((int) 1)
0x36: @ Sleep(Stack[-1])
0x37: Pop(1)
0x38: EventEnable(0)
0x39: Return(); Pop(0)

0x3a: PushEmpty(bool, bool)
0x3b: Push("HasProperty")
0x3c: Push((int) 2)
0x3d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3e: Pop(1); Push((bool) Stack[-1] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-5] = (bool) 0
0x41: Return(); Pop(2)

0x42: @@ HasProperty(Stack[-3], Stack[-1])
0x43: Pop(0)
0x44: Stack[-5] = Stack[-1]
0x45: Return(); Pop(2)

0x46: PushEmpty(float, float)
0x47: PushEmpty(bool, object, string)
0x48: Stack[-2] = Stack[-10]
0x49: Stack[-1] = Stack[-9]
0x4a: Call2 0x3a

0x4b: Pop(2)
0x4c: Pop(1); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4e: Stack[-8] = (bool) 0
0x4f: Return(); Pop(2)

0x50: @@ GetProperty(Stack[-6], Stack[-1])
0x51: Pop(0)
0x52: PushEmpty(float, float, float, float)
0x53: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x54: Stack[-2] = Stack[-8]
0x55: Stack[-1] = Stack[-7]
0x56: Call2 0x5c

0x57: Pop(3)
0x58: @@ SetProperty(Stack[-7], Stack[-1])
0x59: Pop(1)
0x5a: Stack[-8] = (bool) 1
0x5b: Return(); Pop(2)

0x5c: PushEmpty()
0x5d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-4] = Stack[-2]
0x60: Return(); Pop(0)

0x61: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x63: Stack[-4] = Stack[-1]
0x64: Return(); Pop(0)

0x65: Stack[-4] = Stack[-3]
0x66: Return(); Pop(0)

0x67: PushEmpty(object, object)
0x68: @ CreateFloatVector(Stack[-1])
0x69: Pop(0)
0x6a: @@ add(Stack[-3])
0x6b: Pop(0)
0x6c: Push((int) 11)
0x6d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6e: Pop(1)
0x6f: Return(); Pop(2)

0x70: Stack[-1] = 0
0x71: PushEmpty(object, object)
0x72: @ CreateFloatVector(Stack[-1])
0x73: Pop(0)
0x74: @@ add(Stack[-3])
0x75: Pop(0)
0x76: Push((int) 12)
0x77: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x78: Pop(1)
0x79: Return(); Pop(2)

0x7a: Stack[-1] = 0
