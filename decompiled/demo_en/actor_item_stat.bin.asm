GlobalVarCount = 0

Strings:
	object
	Enable
	Item
	SetItemName
	RemoveStationaryActor
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	add
	GetItemID
	Category
	AddItem

Import:
	FindGeometry (2 args)
	Hold (0 args)
	GetProperty (2 args)
	CreateInvItem (1 args)
	GetScene (1 args)
	RemoveActor (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xc Vars = (object)


0x0: PushEmpty(object, object)
0x1: Push("object")
0x2: @ FindGeometry(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @@ Enable(Stack[-1])
0x6: Pop(1)
0x7: @ Hold()
0x8: Pop(0)
0x9: GOTO 0x7

0xa: Return(); Pop(2)

0xb: Stack[-1] = 0
0xc: PushEmpty(string, object, object, string, object, object)
0xd: PushEmpty(bool, object)
0xe: Stack[-1] = Stack[-9]
0xf: Call2 0x66

0x10: Pop(1)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: Return(); Pop(6)

0x14: Push("Item")
0x15: @ GetProperty(Stack[-1], Stack[-4])
0x16: Pop(1)
0x17: @ CreateInvItem(Stack[-2])
0x18: Pop(0)
0x19: @@ SetItemName(Stack[-3])
0x1a: Pop(0)
0x1b: PushEmpty(bool, object, object, int)
0x1c: Stack[-3] = Stack[-11]
0x1d: Stack[-2] = Stack[-6]
0x1e: Stack[-1] = (int) 1
0x1f: Call2 0x90

0x20: Pop(3)
0x21: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x22: @ GetScene(Stack[-1])
0x23: Pop(0)
0x24: PushEmpty(object)
0x25: Call2 0x7e

0x26: Pop(0)
0x27: @@ RemoveStationaryActor(Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object)
0x2a: Call2 0x7e

0x2b: Pop(0)
0x2c: @ RemoveActor(Stack[-1])
0x2d: Pop(1)
0x2e: Stack[-1] = 0
0x2f: Return(); Pop(6)

0x30: Stack[-2] = 0
0x31: PushEmpty(bool, bool)
0x32: Push("HasProperty")
0x33: Push((int) 2)
0x34: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x35: Pop(1); Push((bool) Stack[-1] == 0)
0x36: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x37: Stack[-5] = (bool) 0
0x38: Return(); Pop(2)

0x39: @@ HasProperty(Stack[-3], Stack[-1])
0x3a: Pop(0)
0x3b: Stack[-5] = Stack[-1]
0x3c: Return(); Pop(2)

0x3d: PushEmpty(bool, bool)
0x3e: @@ IsDead(Stack[-1])
0x3f: Pop(0)
0x40: Stack[-4] = Stack[-1]
0x41: Return(); Pop(2)

0x42: PushEmpty(object, object, object, object)
0x43: Pop(0); Push((bool) Stack[-5] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x45: Stack[-6] = (bool) 0
0x46: Return(); Pop(4)

0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 0
0x49: Push("IsDead")
0x4a: Push((int) 1)
0x4b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4c: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4d: PushEmpty(bool, object)
0x4e: Stack[-1] = Stack[-8]
0x4f: Call2 0x3d

0x50: Pop(1)
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 1
0x53: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x54: Stack[-6] = (bool) 0
0x55: Return(); Pop(4)

0x56: @ GetScene(Stack[-2])
0x57: Pop(0)
0x58: Pop(0); Push((bool) Stack[-2] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: Stack[-6] = (bool) 0
0x5b: Return(); Pop(4)

0x5c: @@ GetScene(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: Stack[-6] = (bool) 0
0x61: Return(); Pop(4)

0x62: Stack[-6] = (bool) 1
0x63: Return(); Pop(4)

0x64: Stack[-1] = 0
0x65: Stack[-2] = 0
0x66: PushEmpty(int, int)
0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[-5]
0x69: Call2 0x42

0x6a: Pop(1)
0x6b: Pop(1); Push((bool) Stack[-1] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6d: Stack[-4] = (bool) 0
0x6e: Return(); Pop(2)

0x6f: PushEmpty(bool, object, string)
0x70: Stack[-2] = Stack[-6]
0x71: Stack[-1] = "noaccess"
0x72: Call2 0x31

0x73: Pop(2)
0x74: Pop(1); Push((bool) Stack[-1] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x76: Stack[-4] = (bool) 1
0x77: Return(); Pop(2)

0x78: Push("noaccess")
0x79: @@ GetProperty(Stack[-1], Stack[-2])
0x7a: Pop(1)
0x7b: Push((int) 0)
0x7c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7d: Return(); Pop(2)

0x7e: PushEmpty(object, object)
0x7f: @ self(Stack[-1])
0x80: Pop(0)
0x81: Stack[-3] = Stack[-1]
0x82: Return(); Pop(2)

0x83: Stack[-1] = 0
0x84: PushEmpty(object, object)
0x85: @ CreateIntVector(Stack[-1])
0x86: Pop(0)
0x87: @@ add(Stack[-4])
0x88: Pop(0)
0x89: @@ add(Stack[-3])
0x8a: Pop(0)
0x8b: Push((int) 3)
0x8c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: Return(); Pop(2)

0x8f: Stack[-1] = 0
0x90: PushEmpty(int, int, bool, int, int, bool)
0x91: @@ GetItemID(Stack[-3])
0x92: Pop(0)
0x93: Push("Category")
0x94: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x95: Pop(1)
0x96: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x97: Pop(0)
0x98: Push(Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: PushEmpty(int, int)
0x9b: Stack[-2] = Stack[-5]
0x9c: Stack[-1] = Stack[-9]
0x9d: Call2 0x84

0x9e: Pop(2)
0x9f: Stack[-10] = Stack[-1]
0xa0: Return(); Pop(6)

