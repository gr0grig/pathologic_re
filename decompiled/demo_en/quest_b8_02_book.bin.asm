GlobalVarCount = 0

Strings:
	quest_b8_02
	book_taken
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
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0xb
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x18 Vars = (string)
		EVENT_6 Op = 0x27 Vars = ()
		EVENT_0 Op = 0x37 Vars = (object)


0x0: PushEmpty()
0x1: PushEmpty(bool, string, string)
0x2: Stack[-2] = "quest_b8_02"
0x3: Stack[-1] = "book_taken"
0x4: Call2 0xc9

0x5: Pop(3)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0x52

0x9: Pop(1)
0xa: Return(); Pop(0)

0xb: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc: PushEmpty()
0xd: Call2 0x2b

0xe: Pop(0)
0xf: Return(); Pop(0)

0x10: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x12: PushEmpty(object)
0x13: Call2 0xa6

0x14: Pop(0)
0x15: @ RemoveActor(Stack[-1])
0x16: Pop(1)
0x17: Return(); Pop(0)

0x18: PushEmpty(bool, bool)
0x19: Push("cleanup")
0x1a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d: @ IsLoaded(Stack[-1])
0x1e: Pop(0)
0x1f: Pop(0); Push((bool) Stack[-1] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x21: PushEmpty(object)
0x22: Call2 0xa6

0x23: Pop(0)
0x24: @ RemoveActor(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: PushEmpty()
0x28: Call2 0x10

0x29: Pop(0)
0x2a: Return(); Pop(0)

0x2b: PushEmpty(object, object)
0x2c: Push("object")
0x2d: @ FindGeometry(Stack[-1], Stack[-2])
0x2e: Pop(1)
0x2f: Push((bool) 1)
0x30: @@ Enable(Stack[-1])
0x31: Pop(1)
0x32: @ Hold()
0x33: Pop(0)
0x34: GOTO 0x32

0x35: Return(); Pop(2)

0x36: Stack[-1] = 0
0x37: PushEmpty(object, int, object, int)
0x38: PushEmpty(bool, object)
0x39: Stack[-1] = Stack[-7]
0x3a: Call2 0x8e

0x3b: Pop(1)
0x3c: Pop(1); Push((bool) Stack[-1] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Return(); Pop(4)

0x3f: Push((int) 0)
0x40: @ GetItem(Stack[-3], Stack[-1])
0x41: Pop(1)
0x42: Push((int) 0)
0x43: @ GetItemAmount(Stack[-2], Stack[-1])
0x44: Pop(1)
0x45: PushEmpty(bool, object, object, int)
0x46: Stack[-3] = Stack[-9]
0x47: Stack[-2] = Stack[-6]
0x48: Stack[-1] = Stack[-5]
0x49: Call2 0xb8

0x4a: Pop(3)
0x4b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4c: PushEmpty(object)
0x4d: Stack[-1] = Stack[-6]
0x4e: Call2 0x0

0x4f: Pop(1)
0x50: Return(); Pop(4)

0x51: Stack[-2] = 0
0x52: PushEmpty()
0x53: PushEmpty(object)
0x54: Call2 0xa6

0x55: Pop(0)
0x56: @ RemoveActor(Stack[-1])
0x57: Pop(1)
0x58: Return(); Pop(0)

0x59: PushEmpty(bool, bool)
0x5a: Push("HasProperty")
0x5b: Push((int) 2)
0x5c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-5] = (bool) 0
0x60: Return(); Pop(2)

0x61: @@ HasProperty(Stack[-3], Stack[-1])
0x62: Pop(0)
0x63: Stack[-5] = Stack[-1]
0x64: Return(); Pop(2)

0x65: PushEmpty(bool, bool)
0x66: @@ IsDead(Stack[-1])
0x67: Pop(0)
0x68: Stack[-4] = Stack[-1]
0x69: Return(); Pop(2)

0x6a: PushEmpty(object, object, object, object)
0x6b: Pop(0); Push((bool) Stack[-5] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6d: Stack[-6] = (bool) 0
0x6e: Return(); Pop(4)

0x6f: PushEmpty(bool)
0x70: Stack[-1] = (bool) 0
0x71: Push("IsDead")
0x72: Push((int) 1)
0x73: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x74: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[-8]
0x77: Call2 0x65

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-6] = (bool) 0
0x7d: Return(); Pop(4)

0x7e: @ GetScene(Stack[-2])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-2] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-6] = (bool) 0
0x83: Return(); Pop(4)

0x84: @@ GetScene(Stack[-1])
0x85: Pop(0)
0x86: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x88: Stack[-6] = (bool) 0
0x89: Return(); Pop(4)

0x8a: Stack[-6] = (bool) 1
0x8b: Return(); Pop(4)

0x8c: Stack[-1] = 0
0x8d: Stack[-2] = 0
0x8e: PushEmpty(int, int)
0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[-5]
0x91: Call2 0x6a

0x92: Pop(1)
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-4] = (bool) 0
0x96: Return(); Pop(2)

0x97: PushEmpty(bool, object, string)
0x98: Stack[-2] = Stack[-6]
0x99: Stack[-1] = "noaccess"
0x9a: Call2 0x59

0x9b: Pop(2)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9e: Stack[-4] = (bool) 1
0x9f: Return(); Pop(2)

0xa0: Push("noaccess")
0xa1: @@ GetProperty(Stack[-1], Stack[-2])
0xa2: Pop(1)
0xa3: Push((int) 0)
0xa4: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa5: Return(); Pop(2)

0xa6: PushEmpty(object, object)
0xa7: @ self(Stack[-1])
0xa8: Pop(0)
0xa9: Stack[-3] = Stack[-1]
0xaa: Return(); Pop(2)

0xab: Stack[-1] = 0
0xac: PushEmpty(object, object)
0xad: @ CreateIntVector(Stack[-1])
0xae: Pop(0)
0xaf: @@ add(Stack[-4])
0xb0: Pop(0)
0xb1: @@ add(Stack[-3])
0xb2: Pop(0)
0xb3: Push((int) 3)
0xb4: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb5: Pop(1)
0xb6: Return(); Pop(2)

0xb7: Stack[-1] = 0
0xb8: PushEmpty(int, int, bool, int, int, bool)
0xb9: @@ GetItemID(Stack[-3])
0xba: Pop(0)
0xbb: Push("Category")
0xbc: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xbd: Pop(1)
0xbe: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xbf: Pop(0)
0xc0: Push(Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc2: PushEmpty(int, int)
0xc3: Stack[-2] = Stack[-5]
0xc4: Stack[-1] = Stack[-9]
0xc5: Call2 0xac

0xc6: Pop(2)
0xc7: Stack[-10] = Stack[-1]
0xc8: Return(); Pop(6)

0xc9: PushEmpty(object, object)
0xca: @ FindActor(Stack[-1], Stack[-4])
0xcb: Pop(0)
0xcc: Pop(0); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-5] = (bool) 0
0xcf: Return(); Pop(2)

0xd0: @ Trigger(Stack[-1], Stack[-3])
0xd1: Pop(0)
0xd2: Stack[-5] = (bool) 1
0xd3: Return(); Pop(2)

0xd4: Stack[-1] = 0
