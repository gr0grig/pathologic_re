GlobalVarCount = 1
	G_VAR_0 int 

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
	GetWindowSize (2 args)
	CreateStringVector (1 args)
	GetConversation (1 args)
	UITrace (1 args)
	_strupr (1 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)
	Print (7 args)
	GetFontHeight (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, int, int, int, object, object, string, string) Params = 0
		EVENT_0 Op = 0x85 Vars = ()
		EVENT_200 Op = 0xba Vars = (int, string, object)
		EVENT_15 Op = 0xd4 Vars = (int, int, float)


0x0: PushEmpty(object, object)
0x1: Stack[4 + Tasks[-1].StackPointer] = (int)-1
0x2: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x3: @ GetWindowSize(Stack[-6], Stack[-7])
0x4: Pop(0)
0x5: Push(GlobalVars[0])
0x6: Push((float)4.8)
0x7: Stack[-2] = Stack[6 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x8: GlobalVars[0] = Stack[-1]; Pop(1)
0x9: @ CreateStringVector(Stack[-8])
0xa: Pop(0)
0xb: @ CreateStringVector(Stack[-9])
0xc: Pop(0)
0xd: @ GetConversation(Stack[-1])
0xe: Pop(0)
0xf: Pop(0); Push((bool) Stack[-1] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x11: Push("null conversation")
0x12: @ UITrace(Stack[-1])
0x13: Pop(1)
0x14: Return(); Pop(2)

0x15: @@ GetNPCName(Stack[-10])
0x16: Pop(0)
0x17: @ _strupr(Stack[-10])
0x18: Pop(0)
0x19: @@ GetPlayerName(Stack[-11])
0x1a: Pop(0)
0x1b: @ _strupr(Stack[-11])
0x1c: Pop(0)
0x1d: PushEmpty()
0x1e: Call2 0x2b

0x1f: Pop(0)
0x20: Push((bool) 1)
0x21: @ EnableClipping(Stack[-1])
0x22: Pop(1)
0x23: Push((bool) 1)
0x24: @ SetOwnerDraw(Stack[-1])
0x25: Pop(1)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x27: @ ProcessEvents()
0x28: Pop(0)
0x29: Return(); Pop(2)

0x2a: Stack[-1] = 0
0x2b: PushEmpty(int)
0x2c: Call2 0x61

0x2d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e: Pop(1)
0x2f: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x30: Push((int) 0)
0x31: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x33: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x34: Push((int) 16484)
0x35: Push("h_scrollbar")
0x36: @ SendMessage(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: GOTO 0x3d

0x39: Push((int) 100)
0x3a: Push("h_scrollbar")
0x3b: @ SendMessage(Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: Stack[1 + Tasks[-1].StackPointer] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x3e: Return(); Pop(0)

0x3f: PushEmpty(int)
0x40: Call2 0x61

0x41: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x42: Pop(1)
0x43: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x44: Push((int) 0)
0x45: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x48: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x49: Pop(1); Push((bool) Stack[-1] > Stack[2 + Tasks[-1].StackPointer])
0x4a: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4b: Stack[1 + Tasks[-1].StackPointer] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x4c: GOTO 0x51

0x4d: Push((int) 0)
0x4e: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x51: Push((int) 0)
0x52: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x54: Push((int) 16384)
0x55: Push("h_scrollbar")
0x56: @ SendMessage(Stack[-2], Stack[-1])
0x57: Pop(2)
0x58: GOTO 0x60

0x59: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x5a: Push((int) 100)
0x5b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5c: Pop(1); Push(Stack[-1] / Stack[2 + StackPtr]);
0x5d: Push("h_scrollbar")
0x5e: @ SendMessage(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: Return(); Pop(0)

0x61: PushEmpty(int, int, int, int, string, string, int, int, int, int, string, string)
0x62: Stack[-4] = (int) 0
0x63: @@ size(Stack[-6])
0x64: Pop(0)
0x65: Stack[-3] = (int) 0
0x66: Pop(0); Push((bool) Stack[-3] < Stack[-6])
0x67: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x68: @@ get(Stack[-2], Stack[-3])
0x69: Pop(0)
0x6a: @@ get(Stack[-1], Stack[-3])
0x6b: Pop(0)
0x6c: Push("default")
0x6d: Push(GlobalVars[0])
0x6e: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x6f: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-4])
0x70: Pop(2)
0x71: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x72: Push((int) 10)
0x73: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x74: Push("default")
0x75: Push(GlobalVars[0])
0x76: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x77: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-3])
0x78: Pop(2)
0x79: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x7a: Push((int) 1)
0x7b: Pop(1); Push(Stack[-7] - Stack[-1]);
0x7c: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7e: Push((int) 10)
0x7f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x80: Push((int) 1)
0x81: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x82: GOTO 0x66

0x83: Stack[-13] = Stack[-4]
0x84: Return(); Pop(12)

0x85: PushEmpty(int, int, int, string, string, int, int, int, int, string, string, int)
0x86: Stack[-6] = Stack[1 + Tasks[-1].StackPointer]
0x87: @@ size(Stack[-5])
0x88: Pop(0)
0x89: Stack[-4] = (int) 0
0x8a: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x8b: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0x8c: @@ get(Stack[-3], Stack[-4])
0x8d: Pop(0)
0x8e: @@ get(Stack[-2], Stack[-4])
0x8f: Pop(0)
0x90: Push("default")
0x91: Push(GlobalVars[0])
0x92: Push(GlobalVars[0])
0x93: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0x94: Push((float)0.804)
0x95: Push((float)0.804)
0x96: Push((float)0.804)
0x97: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(6)
0x99: Push("default")
0x9a: Push((int) 0)
0x9b: Push((float)0.804)
0x9c: Push((float)0.804)
0x9d: Push((float)0.804)
0x9e: @ Print(Stack[-5], Stack[-4], Stack[-11], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(5)
0xa0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(0);
0xa1: Push((int) 10)
0xa2: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa3: Push("default")
0xa4: Push(GlobalVars[0])
0xa5: Push(GlobalVars[0])
0xa6: Pop(1); Push(Stack[6 + StackPtr] - Stack[-1]);
0xa7: Push((float)0.698)
0xa8: Push((float)0.659)
0xa9: Push((float)0.647)
0xaa: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(6)
0xac: Push("default")
0xad: Push((int) 0)
0xae: Push((float)0.698)
0xaf: Push((float)0.659)
0xb0: Push((float)0.647)
0xb1: @ Print(Stack[-5], Stack[-4], Stack[-11], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(5)
0xb3: Stack[-6] = Stack[-6] + Stack[-1]; Pop(0);
0xb4: Push((int) 10)
0xb5: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xb6: Push((int) 1)
0xb7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb8: GOTO 0x8a

0xb9: Return(); Pop(12)

0xba: PushEmpty(string, string, string, string)
0xbb: Push("h_scrollbar")
0xbc: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Pop(0); Push(( -Stack[2 + Tasks[-1].StackPointer])
0xbf: Pop(1); Push(Stack[-1] * Stack[-8]);
0xc0: Push((int) 100)
0xc1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xc2: GOTO 0xd3

0xc3: Push("dialog_text")
0xc4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc6: Push((int) 0)
0xc7: @@ get(Stack[-3], Stack[-1])
0xc8: Pop(1)
0xc9: Push((int) 1)
0xca: @@ get(Stack[-2], Stack[-1])
0xcb: Pop(1)
0xcc: @@ add(Stack[-2])
0xcd: Pop(0)
0xce: @@ add(Stack[-1])
0xcf: Pop(0)
0xd0: PushEmpty()
0xd1: Call2 0x2b

0xd2: Pop(0)
0xd3: Return(); Pop(4)

0xd4: PushEmpty(int, int, int, int)
0xd5: Push("default")
0xd6: @ GetFontHeight(Stack[-3], Stack[-1])
0xd7: Pop(1)
0xd8: Stack[-1] = Stack[-5] * Stack[-2]; Pop(0);
0xd9: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0xda: PushEmpty()
0xdb: Call2 0x3f

0xdc: Pop(0)
0xdd: Return(); Pop(4)

