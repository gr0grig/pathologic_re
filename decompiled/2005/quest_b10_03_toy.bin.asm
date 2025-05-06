GlobalVarCount = 1
	G_VAR_0 object 

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
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

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
0xf: Call2 0x69

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
0x1f: Call2 0x93

0x20: Pop(3)
0x21: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x22: @ GetScene(Stack[-1])
0x23: Pop(0)
0x24: PushEmpty(object)
0x25: Call2 0x81

0x26: Pop(0)
0x27: @@ RemoveStationaryActor(Stack[-1])
0x28: Pop(1)
0x29: PushEmpty()
0x2a: Call2 0xa4

0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Call2 0x81

0x2e: Pop(0)
0x2f: @ RemoveActor(Stack[-1])
0x30: Pop(1)
0x31: Stack[-1] = 0
0x32: Return(); Pop(6)

0x33: Stack[-2] = 0
0x34: PushEmpty(bool, bool)
0x35: Push("HasProperty")
0x36: Push((int) 2)
0x37: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x38: Pop(1); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-5] = (bool) 0
0x3b: Return(); Pop(2)

0x3c: @@ HasProperty(Stack[-3], Stack[-1])
0x3d: Pop(0)
0x3e: Stack[-5] = Stack[-1]
0x3f: Return(); Pop(2)

0x40: PushEmpty(bool, bool)
0x41: @@ IsDead(Stack[-1])
0x42: Pop(0)
0x43: Stack[-4] = Stack[-1]
0x44: Return(); Pop(2)

0x45: PushEmpty(object, object, object, object)
0x46: Pop(0); Push((bool) Stack[-5] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x48: Stack[-6] = (bool) 0
0x49: Return(); Pop(4)

0x4a: PushEmpty(bool)
0x4b: Stack[-1] = (bool) 0
0x4c: Push("IsDead")
0x4d: Push((int) 1)
0x4e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4f: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[-8]
0x52: Call2 0x40

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Stack[-1] = (bool) 1
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-6] = (bool) 0
0x58: Return(); Pop(4)

0x59: @ GetScene(Stack[-2])
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[-2] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: Stack[-6] = (bool) 0
0x5e: Return(); Pop(4)

0x5f: @@ GetScene(Stack[-1])
0x60: Pop(0)
0x61: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x63: Stack[-6] = (bool) 0
0x64: Return(); Pop(4)

0x65: Stack[-6] = (bool) 1
0x66: Return(); Pop(4)

0x67: Stack[-1] = 0
0x68: Stack[-2] = 0
0x69: PushEmpty(int, int)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[-5]
0x6c: Call2 0x45

0x6d: Pop(1)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x70: Stack[-4] = (bool) 0
0x71: Return(); Pop(2)

0x72: PushEmpty(bool, object, string)
0x73: Stack[-2] = Stack[-6]
0x74: Stack[-1] = "noaccess"
0x75: Call2 0x34

0x76: Pop(2)
0x77: Pop(1); Push((bool) Stack[-1] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-4] = (bool) 1
0x7a: Return(); Pop(2)

0x7b: Push("noaccess")
0x7c: @@ GetProperty(Stack[-1], Stack[-2])
0x7d: Pop(1)
0x7e: Push((int) 0)
0x7f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x80: Return(); Pop(2)

0x81: PushEmpty(object, object)
0x82: @ self(Stack[-1])
0x83: Pop(0)
0x84: Stack[-3] = Stack[-1]
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
0x87: PushEmpty(object, object)
0x88: @ CreateIntVector(Stack[-1])
0x89: Pop(0)
0x8a: @@ add(Stack[-4])
0x8b: Pop(0)
0x8c: @@ add(Stack[-3])
0x8d: Pop(0)
0x8e: Push((int) 3)
0x8f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x90: Pop(1)
0x91: Return(); Pop(2)

0x92: Stack[-1] = 0
0x93: PushEmpty(int, int, bool, int, int, bool)
0x94: @@ GetItemID(Stack[-3])
0x95: Pop(0)
0x96: Push("Category")
0x97: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x98: Pop(1)
0x99: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x9a: Pop(0)
0x9b: Push(Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: PushEmpty(int, int)
0x9e: Stack[-2] = Stack[-5]
0x9f: Stack[-1] = Stack[-9]
0xa0: Call2 0x87

0xa1: Pop(2)
0xa2: Stack[-10] = Stack[-1]
0xa3: Return(); Pop(6)

0xa4: PushEmpty(object, object)
0xa5: Push((int) 597)
0xa6: Push((int) 2)
0xa7: Push((int) 531148)
0xa8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: PushEmpty(bool, object, int)
0xab: Stack[-2] = Stack[-4]
0xac: Stack[-1] = (int) 594
0xad: Call2 0xbe

0xae: Pop(3)
0xaf: Return(); Pop(2)

0xb0: Stack[-1] = 0
0xb1: PushEmpty(object, object)
0xb2: @ GetDiaryRoot(Stack[-1])
0xb3: Pop(0)
0xb4: Pop(0); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: Push("Can't retrieve diary root")
0xb7: @ Trace(Stack[-1])
0xb8: Pop(1)
0xb9: Stack[-3] = (bool) 0
0xba: Return(); Pop(2)

0xbb: Stack[-3] = Stack[-1]
0xbc: Return(); Pop(2)

0xbd: Stack[-1] = 0
0xbe: PushEmpty(object, object, int, object, object, int)
0xbf: PushEmpty(object)
0xc0: Call2 0xb1

0xc1: Stack[-4] = Stack[-1]
0xc2: Pop(1)
0xc3: @@ Find(Stack[-7], Stack[-2])
0xc4: Pop(0)
0xc5: Pop(0); Push((bool) Stack[-2] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc7: Push("Can't find diary parent with id: ")
0xc8: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc9: @ Trace(Stack[-1])
0xca: Pop(1)
0xcb: Stack[-9] = (bool) 0
0xcc: Return(); Pop(6)

0xcd: @@ AddChild(Stack[-8])
0xce: Pop(0)
0xcf: Push((int) 7)
0xd0: @ SendWorldWndMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ GetCategory(Stack[-1])
0xd3: Pop(0)
0xd4: @ SetDiarySection(Stack[-1])
0xd5: Pop(0)
0xd6: Stack[-9] = (bool) 0
0xd7: Return(); Pop(6)

0xd8: Stack[-2] = 0
0xd9: Stack[-3] = 0
