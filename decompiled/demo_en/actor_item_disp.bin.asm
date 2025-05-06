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
	add
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
	GetScene (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
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
0x2: Call2 0x20

0x3: Pop(0)
0x4: Return(); Pop(0)

0x5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x7: PushEmpty(object)
0x8: Call2 0x9b

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
0x17: Call2 0x9b

0x18: Pop(0)
0x19: @ RemoveActor(Stack[-1])
0x1a: Pop(1)
0x1b: Return(); Pop(2)

0x1c: PushEmpty()
0x1d: Call2 0x5

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
0x2f: Call2 0x83

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
0x3e: Call2 0xad

0x3f: Pop(3)
0x40: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x41: PushEmpty(object)
0x42: Stack[-1] = Stack[-6]
0x43: Call2 0x47

0x44: Pop(1)
0x45: Return(); Pop(4)

0x46: Stack[-2] = 0
0x47: PushEmpty()
0x48: PushEmpty(object)
0x49: Call2 0x9b

0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-1])
0x4c: Pop(1)
0x4d: Return(); Pop(0)

0x4e: PushEmpty(bool, bool)
0x4f: Push("HasProperty")
0x50: Push((int) 2)
0x51: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x52: Pop(1); Push((bool) Stack[-1] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x54: Stack[-5] = (bool) 0
0x55: Return(); Pop(2)

0x56: @@ HasProperty(Stack[-3], Stack[-1])
0x57: Pop(0)
0x58: Stack[-5] = Stack[-1]
0x59: Return(); Pop(2)

0x5a: PushEmpty(bool, bool)
0x5b: @@ IsDead(Stack[-1])
0x5c: Pop(0)
0x5d: Stack[-4] = Stack[-1]
0x5e: Return(); Pop(2)

0x5f: PushEmpty(object, object, object, object)
0x60: Pop(0); Push((bool) Stack[-5] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x62: Stack[-6] = (bool) 0
0x63: Return(); Pop(4)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: Push("IsDead")
0x67: Push((int) 1)
0x68: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x69: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[-8]
0x6c: Call2 0x5a

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: Stack[-1] = (bool) 1
0x70: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x71: Stack[-6] = (bool) 0
0x72: Return(); Pop(4)

0x73: @ GetScene(Stack[-2])
0x74: Pop(0)
0x75: Pop(0); Push((bool) Stack[-2] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-6] = (bool) 0
0x78: Return(); Pop(4)

0x79: @@ GetScene(Stack[-1])
0x7a: Pop(0)
0x7b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: Stack[-6] = (bool) 0
0x7e: Return(); Pop(4)

0x7f: Stack[-6] = (bool) 1
0x80: Return(); Pop(4)

0x81: Stack[-1] = 0
0x82: Stack[-2] = 0
0x83: PushEmpty(int, int)
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[-5]
0x86: Call2 0x5f

0x87: Pop(1)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8a: Stack[-4] = (bool) 0
0x8b: Return(); Pop(2)

0x8c: PushEmpty(bool, object, string)
0x8d: Stack[-2] = Stack[-6]
0x8e: Stack[-1] = "noaccess"
0x8f: Call2 0x4e

0x90: Pop(2)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-4] = (bool) 1
0x94: Return(); Pop(2)

0x95: Push("noaccess")
0x96: @@ GetProperty(Stack[-1], Stack[-2])
0x97: Pop(1)
0x98: Push((int) 0)
0x99: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x9a: Return(); Pop(2)

0x9b: PushEmpty(object, object)
0x9c: @ self(Stack[-1])
0x9d: Pop(0)
0x9e: Stack[-3] = Stack[-1]
0x9f: Return(); Pop(2)

0xa0: Stack[-1] = 0
0xa1: PushEmpty(object, object)
0xa2: @ CreateIntVector(Stack[-1])
0xa3: Pop(0)
0xa4: @@ add(Stack[-4])
0xa5: Pop(0)
0xa6: @@ add(Stack[-3])
0xa7: Pop(0)
0xa8: Push((int) 3)
0xa9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xaa: Pop(1)
0xab: Return(); Pop(2)

0xac: Stack[-1] = 0
0xad: PushEmpty(int, int, bool, int, int, bool)
0xae: @@ GetItemID(Stack[-3])
0xaf: Pop(0)
0xb0: Push("Category")
0xb1: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xb2: Pop(1)
0xb3: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xb4: Pop(0)
0xb5: Push(Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(int, int)
0xb8: Stack[-2] = Stack[-5]
0xb9: Stack[-1] = Stack[-9]
0xba: Call2 0xa1

0xbb: Pop(2)
0xbc: Stack[-10] = Stack[-1]
0xbd: Return(); Pop(6)

