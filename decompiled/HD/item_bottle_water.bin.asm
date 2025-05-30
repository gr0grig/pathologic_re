GlobalVarCount = 0

Strings:
	drink
	hunger
	tiredness
	health
	bottle_empty
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName

Import:
	PlaySound (1 args)
	GetProperty (2 args)
	HasProperty (2 args)
	SetProperty (2 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float, float, float)
0x1: Push("drink")
0x2: @ PlaySound(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(bool, string, float, float, float)
0x5: Stack[-4] = "hunger"
0x6: Stack[-3] = (float) -0.01
0x7: Stack[-2] = (int) 0
0x8: Stack[-1] = (int) 1
0x9: Call2 0x3b

0xa: Pop(5)
0xb: PushEmpty(float)
0xc: Stack[-1] = (float) -0.01
0xd: Call2 0x95

0xe: Pop(1)
0xf: Push("tiredness")
0x10: @ GetProperty(Stack[-1], Stack[-3])
0x11: Pop(1)
0x12: Push((float)0.03)
0x13: Pop(1); Push(Stack[-3] + Stack[-1]);
0x14: Push((int) 1)
0x15: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x17: Push((float)0.03)
0x18: Pop(1); Push(Stack[-3] + Stack[-1]);
0x19: Push((int) 1)
0x1a: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x1b: PushEmpty(bool, string, float, float, float)
0x1c: Stack[-4] = "health"
0x1d: Stack[-3] = -Stack[-6]; Pop(0);
0x1e: Stack[-2] = (int) 0
0x1f: Stack[-1] = (int) 1
0x20: Call2 0x3b

0x21: Pop(5)
0x22: PushEmpty(float)
0x23: Stack[-1] = -Stack[-2]; Pop(0);
0x24: Call2 0x9f

0x25: Pop(1)
0x26: PushEmpty(bool, string, float, float, float)
0x27: Stack[-4] = "tiredness"
0x28: Stack[-3] = (float) 0.03
0x29: Stack[-2] = (int) 0
0x2a: Stack[-1] = (int) 1
0x2b: Call2 0x3b

0x2c: Pop(5)
0x2d: PushEmpty(float)
0x2e: Stack[-1] = (float) 0.03
0x2f: Call2 0x8b

0x30: Pop(1)
0x31: PushEmpty(object, string, int)
0x32: PushEmpty(object)
0x33: Call2 0x4e

0x34: Stack[-4] = Stack[-1]
0x35: Pop(1)
0x36: Stack[-2] = "bottle_empty"
0x37: Stack[-1] = (int) 1
0x38: Call2 0x7e

0x39: Pop(3)
0x3a: Return(); Pop(4)

0x3b: PushEmpty(bool, float, bool, float)
0x3c: @ HasProperty(Stack[-8], Stack[-2])
0x3d: Pop(0)
0x3e: Pop(0); Push((bool) Stack[-2] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-9] = (bool) 0
0x41: Return(); Pop(4)

0x42: @ GetProperty(Stack[-8], Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(float, float, float, float)
0x45: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x46: Stack[-2] = Stack[-10]
0x47: Stack[-1] = Stack[-9]
0x48: Call2 0x54

0x49: Pop(3)
0x4a: @ SetProperty(Stack[-9], Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-9] = (bool) 1
0x4d: Return(); Pop(4)

0x4e: PushEmpty(object, object)
0x4f: @ self(Stack[-1])
0x50: Pop(0)
0x51: Stack[-3] = Stack[-1]
0x52: Return(); Pop(2)

0x53: Stack[-1] = 0
0x54: PushEmpty()
0x55: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-4] = Stack[-2]
0x58: Return(); Pop(0)

0x59: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Stack[-4] = Stack[-1]
0x5c: Return(); Pop(0)

0x5d: Stack[-4] = Stack[-3]
0x5e: Return(); Pop(0)

0x5f: PushEmpty(object, object)
0x60: @ CreateIntVector(Stack[-1])
0x61: Pop(0)
0x62: @@ add(Stack[-4])
0x63: Pop(0)
0x64: @@ add(Stack[-3])
0x65: Pop(0)
0x66: Push((int) 3)
0x67: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x68: Pop(1)
0x69: Return(); Pop(2)

0x6a: Stack[-1] = 0
0x6b: PushEmpty(int, int, bool, int, int, bool)
0x6c: @@ GetItemID(Stack[-3])
0x6d: Pop(0)
0x6e: Push("Category")
0x6f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x70: Pop(1)
0x71: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x72: Pop(0)
0x73: Pop(0); Push((bool) Stack[-1] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x75: @@ DropItems(Stack[-8], Stack[-7])
0x76: Pop(0)
0x77: GOTO 0x7d

0x78: PushEmpty(int, int)
0x79: Stack[-2] = Stack[-5]
0x7a: Stack[-1] = Stack[-9]
0x7b: Call2 0x5f

0x7c: Pop(2)
0x7d: Return(); Pop(6)

0x7e: PushEmpty(object, object)
0x7f: @ CreateInvItem(Stack[-1])
0x80: Pop(0)
0x81: @@ SetItemName(Stack[-4])
0x82: Pop(0)
0x83: PushEmpty(object, object, int)
0x84: Stack[-3] = Stack[-8]
0x85: Stack[-2] = Stack[-4]
0x86: Stack[-1] = Stack[-6]
0x87: Call2 0x6b

0x88: Pop(3)
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
0x8b: PushEmpty(object, object)
0x8c: @ CreateFloatVector(Stack[-1])
0x8d: Pop(0)
0x8e: @@ add(Stack[-3])
0x8f: Pop(0)
0x90: Push((int) 11)
0x91: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x92: Pop(1)
0x93: Return(); Pop(2)

0x94: Stack[-1] = 0
0x95: PushEmpty(object, object)
0x96: @ CreateFloatVector(Stack[-1])
0x97: Pop(0)
0x98: @@ add(Stack[-3])
0x99: Pop(0)
0x9a: Push((int) 12)
0x9b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x9c: Pop(1)
0x9d: Return(); Pop(2)

0x9e: Stack[-1] = 0
0x9f: PushEmpty(object, object)
0xa0: @ CreateFloatVector(Stack[-1])
0xa1: Pop(0)
0xa2: @@ add(Stack[-3])
0xa3: Pop(0)
0xa4: Push((int) 0)
0xa5: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa7: Push((float)0.7)
0xa8: Push((int) 500)
0xa9: @ RumblePlay(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: Push((int) 15)
0xac: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xad: Pop(1)
0xae: Return(); Pop(2)

0xaf: Stack[-1] = 0
