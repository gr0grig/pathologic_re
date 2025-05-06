GlobalVarCount = 0

Strings:
	cleanup
	restore
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	nouse_container
	add
	GetItemID
	Category
	AddItem

Import:
	SetVisibility (1 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	RemoveActor (1 args)
	IsLoaded (1 args)
	GetScene (1 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_0 Op = 0x7 Vars = (object)
		EVENT_26 Op = 0x2c Vars = (string)
		EVENT_6 Op = 0x48 Vars = ()


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
0xc: Call2 0x8f

0xd: Pop(1)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x10: PushEmpty(bool)
0x11: Call2 0xad

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
0x22: Call2 0xbf

0x23: Pop(3)
0x24: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x25: PushEmpty(object)
0x26: Call2 0xa7

0x27: Pop(0)
0x28: @ RemoveActor(Stack[-1])
0x29: Pop(1)
0x2a: Return(); Pop(4)

0x2b: Stack[-2] = 0
0x2c: PushEmpty(bool, bool)
0x2d: Push("cleanup")
0x2e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x30: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x31: @ IsLoaded(Stack[-1])
0x32: Pop(0)
0x33: PushEmpty(bool)
0x34: Stack[-1] = (bool) 0
0x35: Pop(0); Push((bool) Stack[-2] == 0)
0x36: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x37: PushEmpty(bool)
0x38: Call2 0x58

0x39: Pop(0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Stack[-1] = (bool) 1
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(object)
0x3e: Call2 0xa7

0x3f: Pop(0)
0x40: @ RemoveActor(Stack[-1])
0x41: Pop(1)
0x42: GOTO 0x47

0x43: Push("restore")
0x44: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x46: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x47: Return(); Pop(2)

0x48: PushEmpty(bool)
0x49: Stack[-1] = (bool) 0
0x4a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4b: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4c: PushEmpty(bool)
0x4d: Call2 0x58

0x4e: Pop(0)
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: Stack[-1] = (bool) 1
0x51: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x52: PushEmpty(object)
0x53: Call2 0xa7

0x54: Pop(0)
0x55: @ RemoveActor(Stack[-1])
0x56: Pop(1)
0x57: Return(); Pop(0)

0x58: Stack[-1] = (bool) 1
0x59: Return(); Pop(0)

0x5a: PushEmpty(bool, bool)
0x5b: Push("HasProperty")
0x5c: Push((int) 2)
0x5d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5e: Pop(1); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: Stack[-5] = (bool) 0
0x61: Return(); Pop(2)

0x62: @@ HasProperty(Stack[-3], Stack[-1])
0x63: Pop(0)
0x64: Stack[-5] = Stack[-1]
0x65: Return(); Pop(2)

0x66: PushEmpty(bool, bool)
0x67: @@ IsDead(Stack[-1])
0x68: Pop(0)
0x69: Stack[-4] = Stack[-1]
0x6a: Return(); Pop(2)

0x6b: PushEmpty(object, object, object, object)
0x6c: Pop(0); Push((bool) Stack[-5] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-6] = (bool) 0
0x6f: Return(); Pop(4)

0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 0
0x72: Push("IsDead")
0x73: Push((int) 1)
0x74: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x75: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[-8]
0x78: Call2 0x66

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = (bool) 1
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: Stack[-6] = (bool) 0
0x7e: Return(); Pop(4)

0x7f: @ GetScene(Stack[-2])
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-2] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x83: Stack[-6] = (bool) 0
0x84: Return(); Pop(4)

0x85: @@ GetScene(Stack[-1])
0x86: Pop(0)
0x87: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x89: Stack[-6] = (bool) 0
0x8a: Return(); Pop(4)

0x8b: Stack[-6] = (bool) 1
0x8c: Return(); Pop(4)

0x8d: Stack[-1] = 0
0x8e: Stack[-2] = 0
0x8f: PushEmpty(int, int)
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[-5]
0x92: Call2 0x6b

0x93: Pop(1)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x96: Stack[-4] = (bool) 0
0x97: Return(); Pop(2)

0x98: PushEmpty(bool, object, string)
0x99: Stack[-2] = Stack[-6]
0x9a: Stack[-1] = "noaccess"
0x9b: Call2 0x5a

0x9c: Pop(2)
0x9d: Pop(1); Push((bool) Stack[-1] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-4] = (bool) 1
0xa0: Return(); Pop(2)

0xa1: Push("noaccess")
0xa2: @@ GetProperty(Stack[-1], Stack[-2])
0xa3: Pop(1)
0xa4: Push((int) 0)
0xa5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa6: Return(); Pop(2)

0xa7: PushEmpty(object, object)
0xa8: @ self(Stack[-1])
0xa9: Pop(0)
0xaa: Stack[-3] = Stack[-1]
0xab: Return(); Pop(2)

0xac: Stack[-1] = 0
0xad: PushEmpty(int, int)
0xae: Push("nouse_container")
0xaf: @ GetVariable(Stack[-1], Stack[-2])
0xb0: Pop(1)
0xb1: Stack[-3] = !Stack[-1]; Pop(0);
0xb2: Return(); Pop(2)

0xb3: PushEmpty(object, object)
0xb4: @ CreateIntVector(Stack[-1])
0xb5: Pop(0)
0xb6: @@ add(Stack[-4])
0xb7: Pop(0)
0xb8: @@ add(Stack[-3])
0xb9: Pop(0)
0xba: Push((int) 3)
0xbb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xbc: Pop(1)
0xbd: Return(); Pop(2)

0xbe: Stack[-1] = 0
0xbf: PushEmpty(int, int, bool, int, int, bool)
0xc0: @@ GetItemID(Stack[-3])
0xc1: Pop(0)
0xc2: Push("Category")
0xc3: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xc4: Pop(1)
0xc5: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xc6: Pop(0)
0xc7: Push(Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(int, int)
0xca: Stack[-2] = Stack[-5]
0xcb: Stack[-1] = Stack[-9]
0xcc: Call2 0xb3

0xcd: Pop(2)
0xce: Stack[-10] = Stack[-1]
0xcf: Return(); Pop(6)

