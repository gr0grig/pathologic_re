GlobalVarCount = 0

Strings:
	null conversation
	GetNPCName
	GetNPCDescription
	default

Import:
	GetConversation (1 args)
	UITrace (1 args)
	_strupr (1 args)
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, int, int) Params = 0
		EVENT_0 Op = 0x18 Vars = ()


0x0: PushEmpty(object, int, int, object, int, int)
0x1: @ GetConversation(Stack[-3])
0x2: Pop(0)
0x3: Pop(0); Push((bool) Stack[-3] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x5: Push("null conversation")
0x6: @ UITrace(Stack[-1])
0x7: Pop(1)
0x8: Return(); Pop(6)

0x9: @@ GetNPCName(Stack[-0])
0xa: Pop(0)
0xb: @ _strupr(Stack[-0])
0xc: Pop(0)
0xd: @@ GetNPCDescription(Stack[-1])
0xe: Pop(0)
0xf: @ GetWindowSize(Stack[-2], Stack[-3])
0x10: Pop(0)
0x11: Push((bool) 1)
0x12: @ SetOwnerDraw(Stack[-1])
0x13: Pop(1)
0x14: @ ProcessEvents()
0x15: Pop(0)
0x16: Return(); Pop(6)

0x17: Stack[-3] = 0
0x18: PushEmpty(int, int, int, int, int, int)
0x19: Stack[-2] = (int) 0
0x1a: Push("default")
0x1b: Push((int) 50)
0x1c: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x1d: @ GetTextHeightInWidth(Stack[-5], Stack[-2], Stack[-1], Stack[-0])
0x1e: Pop(2)
0x1f: Push((int) 18)
0x20: Pop(1); Push(Stack[-4] + Stack[-1]);
0x21: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x22: Push("default")
0x23: Push((int) 50)
0x24: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x25: @ GetTextHeightInWidth(Stack[-5], Stack[-2], Stack[-1], Stack[-1])
0x26: Pop(2)
0x27: Stack[-2] = Stack[-2] + Stack[-3]; Pop(0);
0x28: Pop(0); Push(Stack[3 + StackPtr] - Stack[-2]);
0x29: Push((int) 2)
0x2a: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x2b: Stack[-2] = Stack[-1]
0x2c: Push("default")
0x2d: Push((int) 25)
0x2e: Push((int) 50)
0x2f: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x30: Push((float)1.0)
0x31: Push((float)1.0)
0x32: Push((float)1.0)
0x33: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-8], Stack[-4], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x34: Pop(6)
0x35: Push((int) 18)
0x36: Pop(1); Push(Stack[-4] + Stack[-1]);
0x37: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38: Push("default")
0x39: Push((int) 25)
0x3a: Push((int) 50)
0x3b: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x3c: Push((float)0.8)
0x3d: Push((float)0.8)
0x3e: Push((float)0.8)
0x3f: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-8], Stack[-4], Stack[-1], Stack[-3], Stack[-2], Stack[-1])
0x40: Pop(6)
0x41: Return(); Pop(6)

