GlobalVarCount = 0

Strings:
	cleanup
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
	RemoveActor (1 args)
	IsLoaded (1 args)
	FindGeometry (2 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	SetDeathStateAndRemove (0 args)
	GetScene (1 args)
	self (1 args)
	GetInvItemProperty (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_6 Op = 0x1c Vars = ()
		EVENT_0 Op = 0x2c Vars = (object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: PushEmpty()
0x2: Call 0x20

0x3: Pop(0)
0x4: Return(); Pop(0)

0x5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x7: PushEmpty(object)
0x8: Call 0x98

0x9: Pop(0)
0xa: @ RemoveActor(Stack[-1])
0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool, bool)
0xe: Push("cleanup")
0xf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x11: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x12: @ IsLoaded(Stack[-1])
0x13: Pop(0)
0x14: Pop(0); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: PushEmpty(object)
0x17: Call 0x98

0x18: Pop(0)
0x19: @ RemoveActor(Stack[-1])
0x1a: Pop(1)
0x1b: Return(); Pop(2)

0x1c: PushEmpty()
0x1d: Call 0x5

0x1e: Pop(0)
0x1f: Return(); Pop(0)

0x20: PushEmpty(object, object)
0x21: Push("object")
0x22: @ FindGeometry(Stack[-1], Stack[-2])
0x23: Pop(1)
0x24: Push((bool) 1)
0x25: @@ Enable(Stack[-1])
0x26: Pop(1)
0x27: @ Hold()
0x28: Pop(0)
0x29: GOTO 0x27

0x2a: Return(); Pop(2)

0x2b: Stack[-1] = 0
0x2c: PushEmpty(object, int, object, int)
0x2d: PushEmpty(bool, object)
0x2e: Stack[-1] = Stack[-7]
0x2f: Call 0x80

0x30: Pop(1)
0x31: Pop(1); Push((bool) Stack[-1] == 0)
0x32: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x33: Return(); Pop(4)

0x34: Push((int) 0)
0x35: @ GetItem(Stack[-3], Stack[-1])
0x36: Pop(1)
0x37: Push((int) 0)
0x38: @ GetItemAmount(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(bool, object, object, int)
0x3b: Stack[-3] = Stack[-9]
0x3c: Stack[-2] = Stack[-6]
0x3d: Stack[-1] = Stack[-5]
0x3e: Call 0x9e

0x3f: Pop(3)
0x40: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x41: PushEmpty(object)
0x42: Stack[-1] = Stack[-6]
0x43: Call 0x49

0x44: Pop(1)
0x45: @ SetDeathStateAndRemove()
0x46: Pop(0)
0x47: Return(); Pop(4)

0x48: Stack[-2] = 0
0x49: PushEmpty()
0x4a: Return(); Pop(0)

0x4b: PushEmpty(bool, bool)
0x4c: Push("HasProperty")
0x4d: Push((int) 2)
0x4e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4f: Pop(1); Push((bool) Stack[-1] == 0)
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-5] = (bool) 0
0x52: Return(); Pop(2)

0x53: @@ HasProperty(Stack[-3], Stack[-1])
0x54: Pop(0)
0x55: Stack[-5] = Stack[-1]
0x56: Return(); Pop(2)

0x57: PushEmpty(bool, bool)
0x58: @@ IsDead(Stack[-1])
0x59: Pop(0)
0x5a: Stack[-4] = Stack[-1]
0x5b: Return(); Pop(2)

0x5c: PushEmpty(object, object, object, object)
0x5d: Pop(0); Push((bool) Stack[-5] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-6] = (bool) 0
0x60: Return(); Pop(4)

0x61: PushEmpty(bool)
0x62: Stack[-1] = (bool) 0
0x63: Push("IsDead")
0x64: Push((int) 1)
0x65: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[-8]
0x69: Call 0x57

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-6] = (bool) 0
0x6f: Return(); Pop(4)

0x70: @ GetScene(Stack[-2])
0x71: Pop(0)
0x72: Pop(0); Push((bool) Stack[-2] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x74: Stack[-6] = (bool) 0
0x75: Return(); Pop(4)

0x76: @@ GetScene(Stack[-1])
0x77: Pop(0)
0x78: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7a: Stack[-6] = (bool) 0
0x7b: Return(); Pop(4)

0x7c: Stack[-6] = (bool) 1
0x7d: Return(); Pop(4)

0x7e: Stack[-1] = 0
0x7f: Stack[-2] = 0
0x80: PushEmpty(int, int)
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[-5]
0x83: Call 0x5c

0x84: Pop(1)
0x85: Pop(1); Push((bool) Stack[-1] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: Stack[-4] = (bool) 0
0x88: Return(); Pop(2)

0x89: PushEmpty(bool, object, string)
0x8a: Stack[-2] = Stack[-6]
0x8b: Stack[-1] = "noaccess"
0x8c: Call 0x4b

0x8d: Pop(2)
0x8e: Pop(1); Push((bool) Stack[-1] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x90: Stack[-4] = (bool) 1
0x91: Return(); Pop(2)

0x92: Push("noaccess")
0x93: @@ GetProperty(Stack[-1], Stack[-2])
0x94: Pop(1)
0x95: Push((int) 0)
0x96: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x97: Return(); Pop(2)

0x98: PushEmpty(object, object)
0x99: @ self(Stack[-1])
0x9a: Pop(0)
0x9b: Stack[-3] = Stack[-1]
0x9c: Return(); Pop(2)

0x9d: Stack[-1] = 0
0x9e: PushEmpty(int, int, bool, int, int, bool)
0x9f: @@ GetItemID(Stack[-3])
0xa0: Pop(0)
0xa1: Push("Category")
0xa2: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xa3: Pop(1)
0xa4: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xa5: Pop(0)
0xa6: Stack[-10] = Stack[-1]
0xa7: Return(); Pop(6)

