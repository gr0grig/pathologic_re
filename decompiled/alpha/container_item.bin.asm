GlobalVarCount = 0

Strings:
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	nouse_container
	GetItemID
	Category
	AddItem

Import:
	SetVisibility (1 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	RemoveActor (1 args)
	GetScene (1 args)
	self (1 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(object, int, object, int)
0x8: PushEmpty(bool)
0x9: Stack[-1] = (bool) 1
0xa: PushEmpty(bool, object)
0xb: Stack[-1] = Stack[-8]
0xc: Call 0x61

0xd: Pop(1)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x10: PushEmpty(bool)
0x11: Call 0x7f

0x12: Pop(0)
0x13: Pop(1); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x15: Stack[-1] = (bool) 0
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(4)

0x18: Push((int) 0)
0x19: @ GetItem(Stack[-3], Stack[-1])
0x1a: Pop(1)
0x1b: Push((int) 0)
0x1c: @ GetItemAmount(Stack[-2], Stack[-1])
0x1d: Pop(1)
0x1e: PushEmpty(bool, object, object, int)
0x1f: Stack[-3] = Stack[-9]
0x20: Stack[-2] = Stack[-6]
0x21: Stack[-1] = Stack[-5]
0x22: Call 0x85

0x23: Pop(3)
0x24: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x25: PushEmpty(object)
0x26: Call 0x79

0x27: Pop(0)
0x28: @ RemoveActor(Stack[-1])
0x29: Pop(1)
0x2a: Return(); Pop(4)

0x2b: Stack[-2] = 0
0x2c: PushEmpty(bool, bool)
0x2d: Push("HasProperty")
0x2e: Push((int) 2)
0x2f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-5] = (bool) 0
0x33: Return(); Pop(2)

0x34: @@ HasProperty(Stack[-3], Stack[-1])
0x35: Pop(0)
0x36: Stack[-5] = Stack[-1]
0x37: Return(); Pop(2)

0x38: PushEmpty(bool, bool)
0x39: @@ IsDead(Stack[-1])
0x3a: Pop(0)
0x3b: Stack[-4] = Stack[-1]
0x3c: Return(); Pop(2)

0x3d: PushEmpty(object, object, object, object)
0x3e: Pop(0); Push((bool) Stack[-5] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-6] = (bool) 0
0x41: Return(); Pop(4)

0x42: PushEmpty(bool)
0x43: Stack[-1] = (bool) 0
0x44: Push("IsDead")
0x45: Push((int) 1)
0x46: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x47: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x48: PushEmpty(bool, object)
0x49: Stack[-1] = Stack[-8]
0x4a: Call 0x38

0x4b: Pop(1)
0x4c: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4d: Stack[-1] = (bool) 1
0x4e: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4f: Stack[-6] = (bool) 0
0x50: Return(); Pop(4)

0x51: @ GetScene(Stack[-2])
0x52: Pop(0)
0x53: Pop(0); Push((bool) Stack[-2] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x55: Stack[-6] = (bool) 0
0x56: Return(); Pop(4)

0x57: @@ GetScene(Stack[-1])
0x58: Pop(0)
0x59: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Stack[-6] = (bool) 0
0x5c: Return(); Pop(4)

0x5d: Stack[-6] = (bool) 1
0x5e: Return(); Pop(4)

0x5f: Stack[-1] = 0
0x60: Stack[-2] = 0
0x61: PushEmpty(int, int)
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[-5]
0x64: Call 0x3d

0x65: Pop(1)
0x66: Pop(1); Push((bool) Stack[-1] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x68: Stack[-4] = (bool) 0
0x69: Return(); Pop(2)

0x6a: PushEmpty(bool, object, string)
0x6b: Stack[-2] = Stack[-6]
0x6c: Stack[-1] = "noaccess"
0x6d: Call 0x2c

0x6e: Pop(2)
0x6f: Pop(1); Push((bool) Stack[-1] == 0)
0x70: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x71: Stack[-4] = (bool) 1
0x72: Return(); Pop(2)

0x73: Push("noaccess")
0x74: @@ GetProperty(Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: Push((int) 0)
0x77: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x78: Return(); Pop(2)

0x79: PushEmpty(object, object)
0x7a: @ self(Stack[-1])
0x7b: Pop(0)
0x7c: Stack[-3] = Stack[-1]
0x7d: Return(); Pop(2)

0x7e: Stack[-1] = 0
0x7f: PushEmpty(int, int)
0x80: Push("nouse_container")
0x81: @ GetVariable(Stack[-1], Stack[-2])
0x82: Pop(1)
0x83: Stack[-3] = !Stack[-1]; Pop(0);
0x84: Return(); Pop(2)

0x85: PushEmpty(int, int, bool, int, int, bool)
0x86: @@ GetItemID(Stack[-3])
0x87: Pop(0)
0x88: Push("Category")
0x89: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x8a: Pop(1)
0x8b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x8c: Pop(0)
0x8d: Stack[-10] = Stack[-1]
0x8e: Return(); Pop(6)

