GlobalVarCount = 0

Strings:
	object
	Enable
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
	GetScene (1 args)
	BroadcastSteal (2 args)
	FindGeometry (2 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)

RunOp = 0xd
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x19 Vars = (object)


0x0: PushEmpty(object, object)
0x1: Push(Stack[-3])
0x2: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x3: @ GetScene(Stack[-1])
0x4: Pop(0)
0x5: @ BroadcastSteal(Stack[-3], Stack[-1])
0x6: Pop(0)
0x7: Stack[-1] = 0
0x8: PushEmpty(object)
0x9: Stack[-1] = Stack[-4]
0xa: Call2 0x34

0xb: Pop(1)
0xc: Return(); Pop(2)

0xd: PushEmpty(object, object)
0xe: Push("object")
0xf: @ FindGeometry(Stack[-1], Stack[-2])
0x10: Pop(1)
0x11: Push((bool) 1)
0x12: @@ Enable(Stack[-1])
0x13: Pop(1)
0x14: @ Hold()
0x15: Pop(0)
0x16: GOTO 0x14

0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty(object, int, object, int)
0x1a: PushEmpty(bool, object)
0x1b: Stack[-1] = Stack[-7]
0x1c: Call2 0x70

0x1d: Pop(1)
0x1e: Pop(1); Push((bool) Stack[-1] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: Return(); Pop(4)

0x21: Push((int) 0)
0x22: @ GetItem(Stack[-3], Stack[-1])
0x23: Pop(1)
0x24: Push((int) 0)
0x25: @ GetItemAmount(Stack[-2], Stack[-1])
0x26: Pop(1)
0x27: PushEmpty(bool, object, object, int)
0x28: Stack[-3] = Stack[-9]
0x29: Stack[-2] = Stack[-6]
0x2a: Stack[-1] = Stack[-5]
0x2b: Call2 0x9a

0x2c: Pop(3)
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: PushEmpty(object)
0x2f: Stack[-1] = Stack[-6]
0x30: Call2 0x0

0x31: Pop(1)
0x32: Return(); Pop(4)

0x33: Stack[-2] = 0
0x34: PushEmpty()
0x35: PushEmpty(object)
0x36: Call2 0x88

0x37: Pop(0)
0x38: @ RemoveActor(Stack[-1])
0x39: Pop(1)
0x3a: Return(); Pop(0)

0x3b: PushEmpty(bool, bool)
0x3c: Push("HasProperty")
0x3d: Push((int) 2)
0x3e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3f: Pop(1); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x41: Stack[-5] = (bool) 0
0x42: Return(); Pop(2)

0x43: @@ HasProperty(Stack[-3], Stack[-1])
0x44: Pop(0)
0x45: Stack[-5] = Stack[-1]
0x46: Return(); Pop(2)

0x47: PushEmpty(bool, bool)
0x48: @@ IsDead(Stack[-1])
0x49: Pop(0)
0x4a: Stack[-4] = Stack[-1]
0x4b: Return(); Pop(2)

0x4c: PushEmpty(object, object, object, object)
0x4d: Pop(0); Push((bool) Stack[-5] == 0)
0x4e: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4f: Stack[-6] = (bool) 0
0x50: Return(); Pop(4)

0x51: PushEmpty(bool)
0x52: Stack[-1] = (bool) 0
0x53: Push("IsDead")
0x54: Push((int) 1)
0x55: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[-8]
0x59: Call2 0x47

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5e: Stack[-6] = (bool) 0
0x5f: Return(); Pop(4)

0x60: @ GetScene(Stack[-2])
0x61: Pop(0)
0x62: Pop(0); Push((bool) Stack[-2] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: Stack[-6] = (bool) 0
0x65: Return(); Pop(4)

0x66: @@ GetScene(Stack[-1])
0x67: Pop(0)
0x68: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-6] = (bool) 0
0x6b: Return(); Pop(4)

0x6c: Stack[-6] = (bool) 1
0x6d: Return(); Pop(4)

0x6e: Stack[-1] = 0
0x6f: Stack[-2] = 0
0x70: PushEmpty(int, int)
0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[-5]
0x73: Call2 0x4c

0x74: Pop(1)
0x75: Pop(1); Push((bool) Stack[-1] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-4] = (bool) 0
0x78: Return(); Pop(2)

0x79: PushEmpty(bool, object, string)
0x7a: Stack[-2] = Stack[-6]
0x7b: Stack[-1] = "noaccess"
0x7c: Call2 0x3b

0x7d: Pop(2)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x80: Stack[-4] = (bool) 1
0x81: Return(); Pop(2)

0x82: Push("noaccess")
0x83: @@ GetProperty(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Push((int) 0)
0x86: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x87: Return(); Pop(2)

0x88: PushEmpty(object, object)
0x89: @ self(Stack[-1])
0x8a: Pop(0)
0x8b: Stack[-3] = Stack[-1]
0x8c: Return(); Pop(2)

0x8d: Stack[-1] = 0
0x8e: PushEmpty(object, object)
0x8f: @ CreateIntVector(Stack[-1])
0x90: Pop(0)
0x91: @@ add(Stack[-4])
0x92: Pop(0)
0x93: @@ add(Stack[-3])
0x94: Pop(0)
0x95: Push((int) 3)
0x96: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x97: Pop(1)
0x98: Return(); Pop(2)

0x99: Stack[-1] = 0
0x9a: PushEmpty(int, int, bool, int, int, bool)
0x9b: @@ GetItemID(Stack[-3])
0x9c: Pop(0)
0x9d: Push("Category")
0x9e: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x9f: Pop(1)
0xa0: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xa1: Pop(0)
0xa2: Push(Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: PushEmpty(int, int)
0xa5: Stack[-2] = Stack[-5]
0xa6: Stack[-1] = Stack[-9]
0xa7: Call2 0x8e

0xa8: Pop(2)
0xa9: Stack[-10] = Stack[-1]
0xaa: Return(); Pop(6)

