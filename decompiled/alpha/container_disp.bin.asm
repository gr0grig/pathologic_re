GlobalVarCount = 0

Strings:
	IsOnGround
	undisposable
	HasProperty
	GetProperty
	nouse_container

Import:
	SetVisibility (1 args)
	Sleep (2 args)
	IsLoaded (1 args)
	SetDeathState (0 args)
	Hold (0 args)
	StopGroup0 (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetItemCount (1 args)
	Trace (1 args)
	GetItem (2 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_0 Op = 0x17 Vars = (object)
		EVENT_33 Op = 0x30 Vars = (object, int, int, int)
		EVENT_34 Op = 0x35 Vars = (object, int, int, int)
		EVENT_6 Op = 0x43 Vars = ()


0x0: PushEmpty(bool, bool, bool, bool)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5: Push((float)900.0)
0x6: @ Sleep(Stack[-1], Stack[-3])
0x7: Pop(1)
0x8: Pop(0); Push((bool) Stack[-2] == 0)
0x9: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0xa: GOTO 0x5

0xb: @ IsLoaded(Stack[-1])
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[-1] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xf: @ SetDeathState()
0x10: Pop(0)
0x11: Return(); Pop(4)

0x12: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x4

0x16: Return(); Pop(4)

0x17: PushEmpty(bool, bool, bool, bool)
0x18: PushEmpty()
0x19: Call 0x5f

0x1a: Pop(0)
0x1b: PushEmpty(bool)
0x1c: Call 0x62

0x1d: Pop(0)
0x1e: Pop(1); Push((bool) Stack[-1] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: Return(); Pop(4)

0x21: @ StopGroup0()
0x22: Pop(0)
0x23: @@ IsOnGround(Stack[-2])
0x24: Pop(0)
0x25: Push(Stack[-2])
0x26: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x27: EventDisable(0)
0x28: @ IsOverrideActive(Stack[-1])
0x29: Pop(0)
0x2a: Pop(0); Push((bool) Stack[-1] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2c: @ Barter(Stack[-5])
0x2d: Pop(0)
0x2e: EventEnable(0)
0x2f: Return(); Pop(4)

0x30: PushEmpty()
0x31: PushEmpty()
0x32: Call 0x5f

0x33: Pop(0)
0x34: Return(); Pop(0)

0x35: PushEmpty(bool, bool)
0x36: @ GetItemCount(Stack[-1])
0x37: Pop(0)
0x38: @ Trace(Stack[-1])
0x39: Pop(0)
0x3a: Pop(0); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: @ SetDeathState()
0x3d: Pop(0)
0x3e: GOTO 0x42

0x3f: PushEmpty()
0x40: Call 0x5f

0x41: Pop(0)
0x42: Return(); Pop(2)

0x43: PushEmpty(int, int, object, bool, bool, int, int, object, bool, bool)
0x44: Push( Stack[0 + Tasks[-1].StackPointer] )
0x45: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x46: @ GetItemCount(Stack[-5])
0x47: Pop(0)
0x48: Stack[-4] = (int) 0
0x49: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x4a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x4b: @ GetItem(Stack[-3], Stack[-4])
0x4c: Pop(0)
0x4d: Push("undisposable")
0x4e: @@ HasProperty(Stack[-3], Stack[-1])
0x4f: Pop(1)
0x50: Push(Stack[-2])
0x51: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x52: Push("undisposable")
0x53: @@ GetProperty(Stack[-2], Stack[-1])
0x54: Pop(1)
0x55: Push(Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Return(); Pop(10)

0x58: Stack[-3] = 0
0x59: Push((int) 1)
0x5a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5b: GOTO 0x49

0x5c: @ SetDeathState()
0x5d: Pop(0)
0x5e: Return(); Pop(10)

0x5f: @ StopGroup0()
0x60: Pop(0)
0x61: Return(); Pop(0)

0x62: PushEmpty(int, int)
0x63: Push("nouse_container")
0x64: @ GetVariable(Stack[-1], Stack[-2])
0x65: Pop(1)
0x66: Stack[-3] = !Stack[-1]; Pop(0);
0x67: Return(); Pop(2)

