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
	GetItemID
	Category
	AddItem

Import:
	FindGeometry (2 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	SetDeathStateAndRemove (0 args)
	GetScene (1 args)
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
0xf: Call 0x60

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
0x1e: Call 0x78

0x1f: Pop(3)
0x20: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x21: PushEmpty(object)
0x22: Stack[-1] = Stack[-6]
0x23: Call 0x29

0x24: Pop(1)
0x25: @ SetDeathStateAndRemove()
0x26: Pop(0)
0x27: Return(); Pop(4)

0x28: Stack[-2] = 0
0x29: PushEmpty()
0x2a: Return(); Pop(0)

0x2b: PushEmpty(bool, bool)
0x2c: Push("HasProperty")
0x2d: Push((int) 2)
0x2e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-5] = (bool) 0
0x32: Return(); Pop(2)

0x33: @@ HasProperty(Stack[-3], Stack[-1])
0x34: Pop(0)
0x35: Stack[-5] = Stack[-1]
0x36: Return(); Pop(2)

0x37: PushEmpty(bool, bool)
0x38: @@ IsDead(Stack[-1])
0x39: Pop(0)
0x3a: Stack[-4] = Stack[-1]
0x3b: Return(); Pop(2)

0x3c: PushEmpty(object, object, object, object)
0x3d: Pop(0); Push((bool) Stack[-5] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-6] = (bool) 0
0x40: Return(); Pop(4)

0x41: PushEmpty(bool)
0x42: Stack[-1] = (bool) 0
0x43: Push("IsDead")
0x44: Push((int) 1)
0x45: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x46: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[-8]
0x49: Call 0x37

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Stack[-1] = (bool) 1
0x4d: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4e: Stack[-6] = (bool) 0
0x4f: Return(); Pop(4)

0x50: @ GetScene(Stack[-2])
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[-2] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x54: Stack[-6] = (bool) 0
0x55: Return(); Pop(4)

0x56: @@ GetScene(Stack[-1])
0x57: Pop(0)
0x58: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: Stack[-6] = (bool) 0
0x5b: Return(); Pop(4)

0x5c: Stack[-6] = (bool) 1
0x5d: Return(); Pop(4)

0x5e: Stack[-1] = 0
0x5f: Stack[-2] = 0
0x60: PushEmpty(int, int)
0x61: PushEmpty(bool, object)
0x62: Stack[-1] = Stack[-5]
0x63: Call 0x3c

0x64: Pop(1)
0x65: Pop(1); Push((bool) Stack[-1] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x67: Stack[-4] = (bool) 0
0x68: Return(); Pop(2)

0x69: PushEmpty(bool, object, string)
0x6a: Stack[-2] = Stack[-6]
0x6b: Stack[-1] = "noaccess"
0x6c: Call 0x2b

0x6d: Pop(2)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x70: Stack[-4] = (bool) 1
0x71: Return(); Pop(2)

0x72: Push("noaccess")
0x73: @@ GetProperty(Stack[-1], Stack[-2])
0x74: Pop(1)
0x75: Push((int) 0)
0x76: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x77: Return(); Pop(2)

0x78: PushEmpty(int, int, bool, int, int, bool)
0x79: @@ GetItemID(Stack[-3])
0x7a: Pop(0)
0x7b: Push("Category")
0x7c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x7d: Pop(1)
0x7e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x7f: Pop(0)
0x80: Stack[-10] = Stack[-1]
0x81: Return(); Pop(6)

