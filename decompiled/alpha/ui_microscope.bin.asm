GlobalVarCount = 0

Strings:
	default
	player
	GetItemCount
	GetItem
	Microscope
	add
	size
	get
	video
	microscope_
	slot0
	slot
	GetItemID

Import:
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	CreateObjectVector (1 args)
	CreateIntVector (1 args)
	FindActor (2 args)
	DestroyWindow (0 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	SendMessage (3 args)
	SendMessage (2 args)
	SetVariable (2 args)
	GetInvItemName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object) Params = 0
		EVENT_100 Op = 0x41 Vars = (int)
		EVENT_200 Op = 0x83 Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetCursor(Stack[-1])
0x2: Pop(1)
0x3: @ ShowCursor()
0x4: Pop(0)
0x5: @ CaptureKeyboard()
0x6: Pop(0)
0x7: Push((bool) 0)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: PushEmpty()
0xb: Call 0x13

0xc: Pop(0)
0xd: PushEmpty()
0xe: Call 0x45

0xf: Pop(0)
0x10: @ ProcessEvents()
0x11: Pop(0)
0x12: Return(); Pop(0)

0x13: PushEmpty(int, int, object, int, bool, int, int, int, object, int, bool, int)
0x14: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x15: @ CreateObjectVector(Stack[-1])
0x16: Pop(0)
0x17: @ CreateIntVector(Stack[-2])
0x18: Pop(0)
0x19: Push("player")
0x1a: @ FindActor(Stack[-3], Stack[-1])
0x1b: Pop(1)
0x1c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1e: @ DestroyWindow()
0x1f: Pop(0)
0x20: Return(); Pop(12)

0x21: Push((int) 4)
0x22: @@ GetItemCount(Stack[-7], Stack[-1])
0x23: Pop(1)
0x24: Stack[-5] = (int) 0
0x25: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x26: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x27: Push((int) 4)
0x28: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(int, object)
0x2b: Stack[-1] = Stack[-6]
0x2c: Call 0xa7

0x2d: Stack[-5] = Stack[-2]
0x2e: Pop(2)
0x2f: Push("Microscope")
0x30: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x31: Pop(1)
0x32: Pop(0); Push((bool) Stack[-2] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: GOTO 0x3d

0x35: Push("Microscope")
0x36: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x37: Pop(1)
0x38: @@ add(Stack[-4])
0x39: Pop(0)
0x3a: @@ add(Stack[-1])
0x3b: Pop(0)
0x3c: Stack[-4] = 0
0x3d: Push((int) 1)
0x3e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3f: GOTO 0x25

0x40: Return(); Pop(12)

0x41: PushEmpty()
0x42: @ DestroyWindow()
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(int, int, object, int, int, int, object, int)
0x46: @@ size(Stack[-4])
0x47: Pop(0)
0x48: Stack[-3] = (int) 0
0x49: Push((int) 12)
0x4a: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x4c: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x4d: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x4e: @@ get(Stack[-2], Stack[-3])
0x4f: Pop(0)
0x50: @@ get(Stack[-1], Stack[-3])
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-3])
0x53: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x54: Push((int) 16384)
0x55: PushEmpty(string, int)
0x56: Stack[-1] = Stack[-6]
0x57: Call 0x97

0x58: Pop(1)
0x59: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0x5a: Pop(2)
0x5b: Push("video")
0x5c: @ SendMessage(Stack[-2], Stack[-1])
0x5d: Pop(1)
0x5e: Push("microscope_")
0x5f: PushEmpty(string, object)
0x60: Stack[-1] = Stack[-5]
0x61: Call 0xac

0x62: Pop(1)
0x63: Pop(2); Push(Stack[-2] + Stack[-1]);
0x64: Push((int) 1)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: GOTO 0x6f

0x68: Push((int) 0)
0x69: PushEmpty(string, int)
0x6a: Stack[-1] = Stack[-6]
0x6b: Call 0x97

0x6c: Pop(1)
0x6d: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0x6e: Pop(2)
0x6f: Push((int) 65537)
0x70: PushEmpty(string, int)
0x71: Stack[-1] = Stack[-6]
0x72: Call 0x97

0x73: Pop(1)
0x74: @ SendMessage(Stack[-2], Stack[-1])
0x75: Pop(2)
0x76: Stack[-2] = 0
0x77: GOTO 0x7f

0x78: Push((int) 32768)
0x79: PushEmpty(string, int)
0x7a: Stack[-1] = Stack[-6]
0x7b: Call 0x97

0x7c: Pop(1)
0x7d: @ SendMessage(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: Push((int) 1)
0x80: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x81: GOTO 0x49

0x82: Return(); Pop(8)

0x83: PushEmpty(int, int)
0x84: Stack[-1] = (int) 0
0x85: Push((int) 12)
0x86: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x88: PushEmpty(string, int)
0x89: Stack[-1] = Stack[-3]
0x8a: Call 0x97

0x8b: Pop(1)
0x8c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8f: PushEmpty()
0x90: Call 0x45

0x91: Pop(0)
0x92: GOTO 0x96

0x93: Push((int) 1)
0x94: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x95: GOTO 0x85

0x96: Return(); Pop(2)

0x97: PushEmpty()
0x98: Push((int) 1)
0x99: Pop(1); Push(Stack[-2] + Stack[-1]);
0x9a: Push((int) 10)
0x9b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: Push("slot0")
0x9e: Push((int) 1)
0x9f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa0: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xa1: Return(); Pop(0)

0xa2: Push("slot")
0xa3: Push((int) 1)
0xa4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa5: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xa6: Return(); Pop(0)

0xa7: PushEmpty(int, int)
0xa8: @@ GetItemID(Stack[-1])
0xa9: Pop(0)
0xaa: Stack[-4] = Stack[-1]
0xab: Return(); Pop(2)

0xac: PushEmpty(int, string, int, string)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-7]
0xaf: Call 0xa7

0xb0: Stack[-4] = Stack[-2]
0xb1: Pop(2)
0xb2: @ GetInvItemName(Stack[-1], Stack[-2])
0xb3: Pop(0)
0xb4: Stack[-6] = Stack[-1]
0xb5: Return(); Pop(4)

