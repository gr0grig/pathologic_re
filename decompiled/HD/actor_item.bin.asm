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
	FindGeometry (2 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	RemoveActor (1 args)
	GetScene (1 args)
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
0xc: PushEmpty(object, int, object, int)
0xd: PushEmpty(bool, object)
0xe: Stack[-1] = Stack[-7]
0xf: Call2 0x63

0x10: Pop(1)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: Return(); Pop(4)

0x14: Push((int) 0)
0x15: @ GetItem(Stack[-3], Stack[-1])
0x16: Pop(1)
0x17: Push((int) 0)
0x18: @ GetItemAmount(Stack[-2], Stack[-1])
0x19: Pop(1)
0x1a: PushEmpty(bool, object, object, int)
0x1b: Stack[-3] = Stack[-9]
0x1c: Stack[-2] = Stack[-6]
0x1d: Stack[-1] = Stack[-5]
0x1e: Call2 0x8d

0x1f: Pop(3)
0x20: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x21: PushEmpty(object)
0x22: Stack[-1] = Stack[-6]
0x23: Call2 0x27

0x24: Pop(1)
0x25: Return(); Pop(4)

0x26: Stack[-2] = 0
0x27: PushEmpty()
0x28: PushEmpty(object)
0x29: Call2 0x7b

0x2a: Pop(0)
0x2b: @ RemoveActor(Stack[-1])
0x2c: Pop(1)
0x2d: Return(); Pop(0)

0x2e: PushEmpty(bool, bool)
0x2f: Push("HasProperty")
0x30: Push((int) 2)
0x31: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x32: Pop(1); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[-5] = (bool) 0
0x35: Return(); Pop(2)

0x36: @@ HasProperty(Stack[-3], Stack[-1])
0x37: Pop(0)
0x38: Stack[-5] = Stack[-1]
0x39: Return(); Pop(2)

0x3a: PushEmpty(bool, bool)
0x3b: @@ IsDead(Stack[-1])
0x3c: Pop(0)
0x3d: Stack[-4] = Stack[-1]
0x3e: Return(); Pop(2)

0x3f: PushEmpty(object, object, object, object)
0x40: Pop(0); Push((bool) Stack[-5] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[-6] = (bool) 0
0x43: Return(); Pop(4)

0x44: PushEmpty(bool)
0x45: Stack[-1] = (bool) 0
0x46: Push("IsDead")
0x47: Push((int) 1)
0x48: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x49: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4a: PushEmpty(bool, object)
0x4b: Stack[-1] = Stack[-8]
0x4c: Call2 0x3a

0x4d: Pop(1)
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 1
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-6] = (bool) 0
0x52: Return(); Pop(4)

0x53: @ GetScene(Stack[-2])
0x54: Pop(0)
0x55: Pop(0); Push((bool) Stack[-2] == 0)
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-6] = (bool) 0
0x58: Return(); Pop(4)

0x59: @@ GetScene(Stack[-1])
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: Stack[-6] = (bool) 0
0x5e: Return(); Pop(4)

0x5f: Stack[-6] = (bool) 1
0x60: Return(); Pop(4)

0x61: Stack[-1] = 0
0x62: Stack[-2] = 0
0x63: PushEmpty(int, int)
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[-5]
0x66: Call2 0x3f

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-4] = (bool) 0
0x6b: Return(); Pop(2)

0x6c: PushEmpty(bool, object, string)
0x6d: Stack[-2] = Stack[-6]
0x6e: Stack[-1] = "noaccess"
0x6f: Call2 0x2e

0x70: Pop(2)
0x71: Pop(1); Push((bool) Stack[-1] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x73: Stack[-4] = (bool) 1
0x74: Return(); Pop(2)

0x75: Push("noaccess")
0x76: @@ GetProperty(Stack[-1], Stack[-2])
0x77: Pop(1)
0x78: Push((int) 0)
0x79: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7a: Return(); Pop(2)

0x7b: PushEmpty(object, object)
0x7c: @ self(Stack[-1])
0x7d: Pop(0)
0x7e: Stack[-3] = Stack[-1]
0x7f: Return(); Pop(2)

0x80: Stack[-1] = 0
0x81: PushEmpty(object, object)
0x82: @ CreateIntVector(Stack[-1])
0x83: Pop(0)
0x84: @@ add(Stack[-4])
0x85: Pop(0)
0x86: @@ add(Stack[-3])
0x87: Pop(0)
0x88: Push((int) 3)
0x89: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: Return(); Pop(2)

0x8c: Stack[-1] = 0
0x8d: PushEmpty(int, int, bool, int, int, bool)
0x8e: @@ GetItemID(Stack[-3])
0x8f: Pop(0)
0x90: Push("Category")
0x91: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x92: Pop(1)
0x93: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x94: Pop(0)
0x95: Push(Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: PushEmpty(int, int)
0x98: Stack[-2] = Stack[-5]
0x99: Stack[-1] = Stack[-9]
0x9a: Call2 0x81

0x9b: Pop(2)
0x9c: Stack[-10] = Stack[-1]
0x9d: Return(); Pop(6)

