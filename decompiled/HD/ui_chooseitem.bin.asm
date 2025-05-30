GlobalVarCount = 0

Strings:
	default
	size
	get
	cslot0
	clear
	add

Import:
	SetCursor (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	CaptureKeyboard (0 args)
	ShowCursor (0 args)
	GetChooseItems (1 args)
	ProcessEvents (0 args)
	SendMessage (3 args)
	SendMessage (2 args)
	DestroyWindow (0 args)
	GetReturnValue (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_14 Op = 0x3b Vars = ()
		EVENT_100 Op = 0x3c Vars = (int)
		EVENT_200 Op = 0x40 Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetCursor(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 0)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: Push((bool) 0)
0x7: @ SetNeedUpdate(Stack[-1])
0x8: Pop(1)
0x9: @ CaptureKeyboard()
0xa: Pop(0)
0xb: @ ShowCursor()
0xc: Pop(0)
0xd: @ GetChooseItems(Stack[-0])
0xe: Pop(0)
0xf: PushEmpty()
0x10: Call2 0x15

0x11: Pop(0)
0x12: @ ProcessEvents()
0x13: Pop(0)
0x14: Return(); Pop(0)

0x15: PushEmpty(int, int, object, int, int, int, object, int)
0x16: @@ size(Stack[-4])
0x17: Pop(0)
0x18: Stack[-3] = (int) 0
0x19: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x1b: Push((int) 4)
0x1c: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: GOTO 0x2c

0x1f: @@ get(Stack[-2], Stack[-3])
0x20: Pop(0)
0x21: Push((int) 0)
0x22: Push("cslot0")
0x23: Push((int) 1)
0x24: Pop(1); Push(Stack[-6] + Stack[-1]);
0x25: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0x27: Pop(2)
0x28: Stack[-2] = 0
0x29: Push((int) 1)
0x2a: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2b: GOTO 0x19

0x2c: Stack[-1] = Stack[-4]
0x2d: Push((int) 4)
0x2e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x30: Push((int) 32768)
0x31: Push("cslot0")
0x32: Push((int) 1)
0x33: Pop(1); Push(Stack[-4] + Stack[-1]);
0x34: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35: @ SendMessage(Stack[-2], Stack[-1])
0x36: Pop(2)
0x37: Push((int) 1)
0x38: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x39: GOTO 0x2d

0x3a: Return(); Pop(8)

0x3b: Return(); Pop(0)

0x3c: PushEmpty()
0x3d: @ DestroyWindow()
0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int, object, int, int, object)
0x41: Stack[-3] = (int) 0
0x42: Push((int) 4)
0x43: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x45: Push("cslot0")
0x46: Push((int) 1)
0x47: Pop(1); Push(Stack[-5] + Stack[-1]);
0x48: Pop(2); Push(Stack[-2] + Stack[-1]);
0x49: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4b: @@ size(Stack[-2])
0x4c: Pop(0)
0x4d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x4e: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4f: @ GetReturnValue(Stack[-1])
0x50: Pop(0)
0x51: @@ clear()
0x52: Pop(0)
0x53: @@ add(Stack[-3])
0x54: Pop(0)
0x55: @ DestroyWindow()
0x56: Pop(0)
0x57: Stack[-1] = 0
0x58: Push((int) 1)
0x59: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x5a: GOTO 0x42

0x5b: Return(); Pop(6)

