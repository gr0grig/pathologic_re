GlobalVarCount = 0

Strings:
	null conversation
	GetNPCName
	GetPlayerName
	h_scrollbar
	size
	get
	default
	dialog_text
	add

Import:
	CreateStringVector (1 args)
	GetConversation (1 args)
	UITrace (1 args)
	_strupr (1 args)
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)
	Print (7 args)
	GetReplic (1 args)
	GetAnswer (4 args)
	SelectAnswer (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, int, int, int, object, object, string, string) Params = 0
		EVENT_0 Op = 0x5f Vars = ()
		EVENT_200 Op = 0x94 Vars = (int, string, object)


0x0: PushEmpty(object, object)
0x1: Stack[4 + Tasks[-1].StackPointer] = (int)-1
0x2: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x3: @ CreateStringVector(Stack[-8])
0x4: Pop(0)
0x5: @ CreateStringVector(Stack[-9])
0x6: Pop(0)
0x7: @ GetConversation(Stack[-1])
0x8: Pop(0)
0x9: Pop(0); Push((bool) Stack[-1] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xb: Push("null conversation")
0xc: @ UITrace(Stack[-1])
0xd: Pop(1)
0xe: Return(); Pop(2)

0xf: @@ GetNPCName(Stack[-10])
0x10: Pop(0)
0x11: @ _strupr(Stack[-10])
0x12: Pop(0)
0x13: @@ GetPlayerName(Stack[-11])
0x14: Pop(0)
0x15: @ _strupr(Stack[-11])
0x16: Pop(0)
0x17: @ GetWindowSize(Stack[-6], Stack[-7])
0x18: Pop(0)
0x19: PushEmpty()
0x1a: Call 0x27

0x1b: Pop(0)
0x1c: Push((bool) 1)
0x1d: @ EnableClipping(Stack[-1])
0x1e: Pop(1)
0x1f: Push((bool) 1)
0x20: @ SetOwnerDraw(Stack[-1])
0x21: Pop(1)
0x22: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x23: @ ProcessEvents()
0x24: Pop(0)
0x25: Return(); Pop(2)

0x26: Stack[-1] = 0
0x27: PushEmpty(int)
0x28: Call 0x3b

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2a: Pop(1)
0x2b: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x2c: Push((int) 0)
0x2d: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x30: Push((int) 16484)
0x31: Push("h_scrollbar")
0x32: @ SendMessage(Stack[-2], Stack[-1])
0x33: Pop(2)
0x34: GOTO 0x39

0x35: Push((int) 100)
0x36: Push("h_scrollbar")
0x37: @ SendMessage(Stack[-2], Stack[-1])
0x38: Pop(2)
0x39: Stack[1 + Tasks[-1].StackPointer] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x3a: Return(); Pop(0)

0x3b: PushEmpty(int, int, int, int, string, string, int, int, int, int, string, string)
0x3c: Stack[-4] = (int) 0
0x3d: @@ size(Stack[-6])
0x3e: Pop(0)
0x3f: Stack[-3] = (int) 0
0x40: Pop(0); Push((bool) Stack[-3] < Stack[-6])
0x41: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x42: @@ get(Stack[-2], Stack[-3])
0x43: Pop(0)
0x44: @@ get(Stack[-1], Stack[-3])
0x45: Pop(0)
0x46: Push("default")
0x47: Push((int) 159)
0x48: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x49: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-4])
0x4a: Pop(2)
0x4b: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x4c: Push((int) 10)
0x4d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4e: Push("default")
0x4f: Push((int) 159)
0x50: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x51: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-3])
0x52: Pop(2)
0x53: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x54: Push((int) 1)
0x55: Pop(1); Push(Stack[-7] - Stack[-1]);
0x56: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x58: Push((int) 10)
0x59: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5a: Push((int) 1)
0x5b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x5c: GOTO 0x40

0x5d: Stack[-13] = Stack[-4]
0x5e: Return(); Pop(12)

0x5f: PushEmpty(int, int, int, string, string, int, int, int, int, string, string, int)
0x60: Stack[-6] = Stack[1 + Tasks[-1].StackPointer]
0x61: @@ size(Stack[-5])
0x62: Pop(0)
0x63: Stack[-4] = (int) 0
0x64: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x65: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x66: @@ get(Stack[-3], Stack[-4])
0x67: Pop(0)
0x68: @@ get(Stack[-2], Stack[-4])
0x69: Pop(0)
0x6a: Push("default")
0x6b: Push((int) 159)
0x6c: Push((int) 159)
0x6d: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x6e: Push((float)0.804)
0x6f: Push((float)0.804)
0x70: Push((float)0.804)
0x71: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(6)
0x73: Push("default")
0x74: Push((int) 0)
0x75: Push((float)0.804)
0x76: Push((float)0.804)
0x77: Push((float)0.804)
0x78: @ Print(Stack[-5], Stack[-4], Stack[-11], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(5)
0x7a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(0);
0x7b: Push((int) 10)
0x7c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x7d: Push("default")
0x7e: Push((int) 159)
0x7f: Push((int) 159)
0x80: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x81: Push((float)0.698)
0x82: Push((float)0.659)
0x83: Push((float)0.647)
0x84: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(6)
0x86: Push("default")
0x87: Push((int) 0)
0x88: Push((float)0.698)
0x89: Push((float)0.659)
0x8a: Push((float)0.647)
0x8b: @ Print(Stack[-5], Stack[-4], Stack[-11], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(5)
0x8d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(0);
0x8e: Push((int) 10)
0x8f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x90: Push((int) 1)
0x91: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x92: GOTO 0x64

0x93: Return(); Pop(12)

0x94: PushEmpty(int, int, string, string, int, int, string, string)
0x95: Push("h_scrollbar")
0x96: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x98: Pop(0); Push(( -Stack[2 + Tasks[-1].StackPointer])
0x99: Pop(1); Push(Stack[-1] * Stack[-12]);
0x9a: Push((int) 100)
0x9b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x9c: GOTO 0xad

0x9d: Push("dialog_text")
0x9e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa0: @ GetReplic(Stack[-2])
0xa1: Pop(0)
0xa2: @ GetAnswer(Stack[-11], Stack[-1], Stack[-4], Stack[-3])
0xa3: Pop(0)
0xa4: @@ add(Stack[-2])
0xa5: Pop(0)
0xa6: @@ add(Stack[-1])
0xa7: Pop(0)
0xa8: PushEmpty()
0xa9: Call 0x27

0xaa: Pop(0)
0xab: @ SelectAnswer(Stack[-4], Stack[-3])
0xac: Pop(0)
0xad: Return(); Pop(8)

