GlobalVarCount = 0

Strings:
	default
	money_slot
	size
	get
	cslot0
	ok
	cancel
	clear

Import:
	GetPlayerMoneyCount (1 args)
	SetCursor (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	CaptureKeyboard (0 args)
	ShowCursor (0 args)
	GetChooseItems (1 args)
	GetAdditionalData (1 args)
	GetReturnValue (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	SendMessage (3 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object) Params = 0
		EVENT_14 Op = 0x44 Vars = ()
		EVENT_100 Op = 0x45 Vars = (int)
		EVENT_200 Op = 0x49 Vars = (int, string, object)


0x0: @ GetPlayerMoneyCount(Stack[-0])
0x1: Pop(0)
0x2: Push("default")
0x3: @ SetCursor(Stack[-1])
0x4: Pop(1)
0x5: Push((bool) 0)
0x6: @ SetOwnerDraw(Stack[-1])
0x7: Pop(1)
0x8: Push((bool) 0)
0x9: @ SetNeedUpdate(Stack[-1])
0xa: Pop(1)
0xb: @ CaptureKeyboard()
0xc: Pop(0)
0xd: @ ShowCursor()
0xe: Pop(0)
0xf: @ GetChooseItems(Stack[-1])
0x10: Pop(0)
0x11: @ GetAdditionalData(Stack[-2])
0x12: Pop(0)
0x13: @ GetReturnValue(Stack[-3])
0x14: Pop(0)
0x15: PushEmpty()
0x16: Call2 0x1b

0x17: Pop(0)
0x18: @ ProcessEvents()
0x19: Pop(0)
0x1a: Return(); Pop(0)

0x1b: PushEmpty(int, int, object, int, int, int, object, int)
0x1c: Push("money_slot")
0x1d: @ SendMessage(Stack[-0], Stack[-1])
0x1e: Pop(1)
0x1f: @@ size(Stack[-4])
0x20: Pop(0)
0x21: Stack[-3] = (int) 0
0x22: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x23: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x24: Push((int) 4)
0x25: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: GOTO 0x35

0x28: @@ get(Stack[-2], Stack[-3])
0x29: Pop(0)
0x2a: Push((int) 0)
0x2b: Push("cslot0")
0x2c: Push((int) 1)
0x2d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0x30: Pop(2)
0x31: Stack[-2] = 0
0x32: Push((int) 1)
0x33: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x34: GOTO 0x22

0x35: Stack[-1] = Stack[-4]
0x36: Push((int) 4)
0x37: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x39: Push((int) 32768)
0x3a: Push("cslot0")
0x3b: Push((int) 1)
0x3c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e: @ SendMessage(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: Push((int) 1)
0x41: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x42: GOTO 0x36

0x43: Return(); Pop(8)

0x44: Return(); Pop(0)

0x45: PushEmpty()
0x46: @ DestroyWindow()
0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: PushEmpty(int, int)
0x4a: Push("ok")
0x4b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: @ DestroyWindow()
0x4e: Pop(0)
0x4f: GOTO 0x65

0x50: Push("cancel")
0x51: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x53: @@ clear()
0x54: Pop(0)
0x55: @ DestroyWindow()
0x56: Pop(0)
0x57: GOTO 0x65

0x58: Stack[-1] = (int) 0
0x59: Push((int) 4)
0x5a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5c: PushEmpty(string, int)
0x5d: Stack[-1] = Stack[-3]
0x5e: Call2 0x66

0x5f: Pop(1)
0x60: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x62: Push((int) 1)
0x63: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x64: GOTO 0x59

0x65: Return(); Pop(2)

0x66: PushEmpty()
0x67: Push((int) 1)
0x68: Pop(1); Push(Stack[-2] + Stack[-1]);
0x69: Push((int) 10)
0x6a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: Push("slot0")
0x6d: Push((int) 1)
0x6e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x70: Return(); Pop(0)

0x71: Push("slot")
0x72: Push((int) 1)
0x73: Pop(1); Push(Stack[-3] + Stack[-1]);
0x74: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x75: Return(); Pop(0)

