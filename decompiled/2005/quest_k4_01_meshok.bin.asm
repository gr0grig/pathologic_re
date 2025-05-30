GlobalVarCount = 0

Strings:
	quest_k4_01
	meshok_taken
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

RunOp = 0xc
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x19 Vars = (string)
		EVENT_6 Op = 0x28 Vars = ()
		EVENT_0 Op = 0x38 Vars = (object)


0x0: PushEmpty()
0x1: PushEmpty(bool, string, string)
0x2: Stack[-2] = "quest_k4_01"
0x3: Stack[-1] = "meshok_taken"
0x4: Call2 0xc3

0x5: Pop(3)
0x6: PushEmpty(object)
0x7: Call2 0xa0

0x8: Pop(0)
0x9: @ RemoveActor(Stack[-1])
0xa: Pop(1)
0xb: Return(); Pop(0)

0xc: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xd: PushEmpty()
0xe: Call2 0x2c

0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x13: PushEmpty(object)
0x14: Call2 0xa0

0x15: Pop(0)
0x16: @ RemoveActor(Stack[-1])
0x17: Pop(1)
0x18: Return(); Pop(0)

0x19: PushEmpty(bool, bool)
0x1a: Push("cleanup")
0x1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x1d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e: @ IsLoaded(Stack[-1])
0x1f: Pop(0)
0x20: Pop(0); Push((bool) Stack[-1] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: PushEmpty(object)
0x23: Call2 0xa0

0x24: Pop(0)
0x25: @ RemoveActor(Stack[-1])
0x26: Pop(1)
0x27: Return(); Pop(2)

0x28: PushEmpty()
0x29: Call2 0x11

0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(object, object)
0x2d: Push("object")
0x2e: @ FindGeometry(Stack[-1], Stack[-2])
0x2f: Pop(1)
0x30: Push((bool) 1)
0x31: @@ Enable(Stack[-1])
0x32: Pop(1)
0x33: @ Hold()
0x34: Pop(0)
0x35: GOTO 0x33

0x36: Return(); Pop(2)

0x37: Stack[-1] = 0
0x38: PushEmpty(object, int, object, int)
0x39: PushEmpty(bool, object)
0x3a: Stack[-1] = Stack[-7]
0x3b: Call2 0x88

0x3c: Pop(1)
0x3d: Pop(1); Push((bool) Stack[-1] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: Return(); Pop(4)

0x40: Push((int) 0)
0x41: @ GetItem(Stack[-3], Stack[-1])
0x42: Pop(1)
0x43: Push((int) 0)
0x44: @ GetItemAmount(Stack[-2], Stack[-1])
0x45: Pop(1)
0x46: PushEmpty(bool, object, object, int)
0x47: Stack[-3] = Stack[-9]
0x48: Stack[-2] = Stack[-6]
0x49: Stack[-1] = Stack[-5]
0x4a: Call2 0xb2

0x4b: Pop(3)
0x4c: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4d: PushEmpty(object)
0x4e: Stack[-1] = Stack[-6]
0x4f: Call2 0x0

0x50: Pop(1)
0x51: Return(); Pop(4)

0x52: Stack[-2] = 0
0x53: PushEmpty(bool, bool)
0x54: Push("HasProperty")
0x55: Push((int) 2)
0x56: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x57: Pop(1); Push((bool) Stack[-1] == 0)
0x58: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x59: Stack[-5] = (bool) 0
0x5a: Return(); Pop(2)

0x5b: @@ HasProperty(Stack[-3], Stack[-1])
0x5c: Pop(0)
0x5d: Stack[-5] = Stack[-1]
0x5e: Return(); Pop(2)

0x5f: PushEmpty(bool, bool)
0x60: @@ IsDead(Stack[-1])
0x61: Pop(0)
0x62: Stack[-4] = Stack[-1]
0x63: Return(); Pop(2)

0x64: PushEmpty(object, object, object, object)
0x65: Pop(0); Push((bool) Stack[-5] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x67: Stack[-6] = (bool) 0
0x68: Return(); Pop(4)

0x69: PushEmpty(bool)
0x6a: Stack[-1] = (bool) 0
0x6b: Push("IsDead")
0x6c: Push((int) 1)
0x6d: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6e: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[-8]
0x71: Call2 0x5f

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x74: Stack[-1] = (bool) 1
0x75: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x76: Stack[-6] = (bool) 0
0x77: Return(); Pop(4)

0x78: @ GetScene(Stack[-2])
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-2] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-6] = (bool) 0
0x7d: Return(); Pop(4)

0x7e: @@ GetScene(Stack[-1])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-6] = (bool) 0
0x83: Return(); Pop(4)

0x84: Stack[-6] = (bool) 1
0x85: Return(); Pop(4)

0x86: Stack[-1] = 0
0x87: Stack[-2] = 0
0x88: PushEmpty(int, int)
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x64

0x8c: Pop(1)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8f: Stack[-4] = (bool) 0
0x90: Return(); Pop(2)

0x91: PushEmpty(bool, object, string)
0x92: Stack[-2] = Stack[-6]
0x93: Stack[-1] = "noaccess"
0x94: Call2 0x53

0x95: Pop(2)
0x96: Pop(1); Push((bool) Stack[-1] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-4] = (bool) 1
0x99: Return(); Pop(2)

0x9a: Push("noaccess")
0x9b: @@ GetProperty(Stack[-1], Stack[-2])
0x9c: Pop(1)
0x9d: Push((int) 0)
0x9e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x9f: Return(); Pop(2)

0xa0: PushEmpty(object, object)
0xa1: @ self(Stack[-1])
0xa2: Pop(0)
0xa3: Stack[-3] = Stack[-1]
0xa4: Return(); Pop(2)

0xa5: Stack[-1] = 0
0xa6: PushEmpty(object, object)
0xa7: @ CreateIntVector(Stack[-1])
0xa8: Pop(0)
0xa9: @@ add(Stack[-4])
0xaa: Pop(0)
0xab: @@ add(Stack[-3])
0xac: Pop(0)
0xad: Push((int) 3)
0xae: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xaf: Pop(1)
0xb0: Return(); Pop(2)

0xb1: Stack[-1] = 0
0xb2: PushEmpty(int, int, bool, int, int, bool)
0xb3: @@ GetItemID(Stack[-3])
0xb4: Pop(0)
0xb5: Push("Category")
0xb6: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xb7: Pop(1)
0xb8: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xb9: Pop(0)
0xba: Push(Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(int, int)
0xbd: Stack[-2] = Stack[-5]
0xbe: Stack[-1] = Stack[-9]
0xbf: Call2 0xa6

0xc0: Pop(2)
0xc1: Stack[-10] = Stack[-1]
0xc2: Return(); Pop(6)

0xc3: PushEmpty(object, object)
0xc4: @ FindActor(Stack[-1], Stack[-4])
0xc5: Pop(0)
0xc6: Pop(0); Push((bool) Stack[-1] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: Stack[-5] = (bool) 0
0xc9: Return(); Pop(2)

0xca: @ Trigger(Stack[-1], Stack[-3])
0xcb: Pop(0)
0xcc: Stack[-5] = (bool) 1
0xcd: Return(); Pop(2)

0xce: Stack[-1] = 0
