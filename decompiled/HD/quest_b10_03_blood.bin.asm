GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	avroks_blood
	SetItemName
	b10q03
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
	SetVisibility (1 args)
	Hold (0 args)
	CreateInvItem (1 args)
	SetVariable (2 args)
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
	GTASK_0 Vars = (bool) Params = 0
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(object, object)
0x8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x9: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0xa: Return(); Pop(2)

0xb: @ CreateInvItem(Stack[-1])
0xc: Pop(0)
0xd: Push("avroks_blood")
0xe: @@ SetItemName(Stack[-1])
0xf: Pop(1)
0x10: PushEmpty(bool, object, object, int)
0x11: Stack[-3] = Stack[-7]
0x12: Stack[-2] = Stack[-5]
0x13: Stack[-1] = (int) 1
0x14: Call2 0x38

0x15: Pop(3)
0x16: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x17: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18: PushEmpty()
0x19: Call2 0x49

0x1a: Pop(0)
0x1b: Push("b10q03")
0x1c: Push((int) 4)
0x1d: @ SetVariable(Stack[-2], Stack[-1])
0x1e: Pop(2)
0x1f: PushEmpty(object)
0x20: Call2 0x26

0x21: Pop(0)
0x22: @ RemoveActor(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty(object, object)
0x27: @ self(Stack[-1])
0x28: Pop(0)
0x29: Stack[-3] = Stack[-1]
0x2a: Return(); Pop(2)

0x2b: Stack[-1] = 0
0x2c: PushEmpty(object, object)
0x2d: @ CreateIntVector(Stack[-1])
0x2e: Pop(0)
0x2f: @@ add(Stack[-4])
0x30: Pop(0)
0x31: @@ add(Stack[-3])
0x32: Pop(0)
0x33: Push((int) 3)
0x34: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x35: Pop(1)
0x36: Return(); Pop(2)

0x37: Stack[-1] = 0
0x38: PushEmpty(int, int, bool, int, int, bool)
0x39: @@ GetItemID(Stack[-3])
0x3a: Pop(0)
0x3b: Push("Category")
0x3c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x3d: Pop(1)
0x3e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x3f: Pop(0)
0x40: Push(Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x42: PushEmpty(int, int)
0x43: Stack[-2] = Stack[-5]
0x44: Stack[-1] = Stack[-9]
0x45: Call2 0x2c

0x46: Pop(2)
0x47: Stack[-10] = Stack[-1]
0x48: Return(); Pop(6)

0x49: PushEmpty(object, object)
0x4a: Push((int) 604)
0x4b: Push((int) 2)
0x4c: Push((int) 531183)
0x4d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e: Pop(3)
0x4f: PushEmpty(bool, object, int)
0x50: Stack[-2] = Stack[-4]
0x51: Stack[-1] = (int) 594
0x52: Call2 0x63

0x53: Pop(3)
0x54: Return(); Pop(2)

0x55: Stack[-1] = 0
0x56: PushEmpty(object, object)
0x57: @ GetDiaryRoot(Stack[-1])
0x58: Pop(0)
0x59: Pop(0); Push((bool) Stack[-1] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5b: Push("Can't retrieve diary root")
0x5c: @ Trace(Stack[-1])
0x5d: Pop(1)
0x5e: Stack[-3] = (bool) 0
0x5f: Return(); Pop(2)

0x60: Stack[-3] = Stack[-1]
0x61: Return(); Pop(2)

0x62: Stack[-1] = 0
0x63: PushEmpty(object, object, int, object, object, int)
0x64: PushEmpty(object)
0x65: Call2 0x56

0x66: Stack[-4] = Stack[-1]
0x67: Pop(1)
0x68: @@ Find(Stack[-7], Stack[-2])
0x69: Pop(0)
0x6a: Pop(0); Push((bool) Stack[-2] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: Push("Can't find diary parent with id: ")
0x6d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6e: @ Trace(Stack[-1])
0x6f: Pop(1)
0x70: Stack[-9] = (bool) 0
0x71: Return(); Pop(6)

0x72: @@ AddChild(Stack[-8])
0x73: Pop(0)
0x74: Push((int) 7)
0x75: @ SendWorldWndMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ GetCategory(Stack[-1])
0x78: Pop(0)
0x79: @ SetDiarySection(Stack[-1])
0x7a: Pop(0)
0x7b: Stack[-9] = (bool) 0
0x7c: Return(); Pop(6)

0x7d: Stack[-2] = 0
0x7e: Stack[-3] = 0
