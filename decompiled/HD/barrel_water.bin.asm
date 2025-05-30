GlobalVarCount = 0

Strings:
	bottle_empty
	Category
	GetItemCount
	GetItem
	GetItemID
	GetItemAmount
	RemoveItem
	bottle_water
	SetItemName
	fill
	add
	AddItem
	DropItems

Import:
	SetVisibility (1 args)
	Hold (0 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	PlaySound (1 args)
	SendWorldWndMessage (1 args)
	Sleep (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xb Vars = (object)


0x0: PushEmpty()
0x1: Call2 0xa

0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetVisibility(Stack[-1])
0x5: Pop(1)
0x6: @ Hold()
0x7: Pop(0)
0x8: GOTO 0x6

0x9: Return(); Pop(0)

0xa: Return(); Pop(0)

0xb: PushEmpty(int, int, int, int, int, object, int, int, object, int, int, int, int, int, object, int, int, object)
0xc: Push("bottle_empty")
0xd: @ GetInvItemByName(Stack[-10], Stack[-1])
0xe: Pop(1)
0xf: Push("Category")
0x10: @ GetInvItemProperty(Stack[-9], Stack[-10], Stack[-1])
0x11: Pop(1)
0x12: @@ GetItemCount(Stack[-7], Stack[-8])
0x13: Pop(0)
0x14: Stack[-6] = (int) 0
0x15: Stack[-5] = (int) 0
0x16: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0x17: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x18: @@ GetItem(Stack[-4], Stack[-5], Stack[-8])
0x19: Pop(0)
0x1a: @@ GetItemID(Stack[-3])
0x1b: Pop(0)
0x1c: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x1d: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1e: @@ GetItemAmount(Stack[-2], Stack[-5], Stack[-8])
0x1f: Pop(0)
0x20: Stack[-6] = Stack[-6] + Stack[-2]; Pop(0);
0x21: @@ RemoveItem(Stack[-5], Stack[-2], Stack[-8])
0x22: Pop(0)
0x23: Push((int) -1)
0x24: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x25: GOTO 0x28

0x26: Push((int) 1)
0x27: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x28: Stack[-4] = 0
0x29: GOTO 0x16

0x2a: Push(Stack[-6])
0x2b: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x2c: EventDisable(0)
0x2d: @ CreateInvItem(Stack[-1])
0x2e: Pop(0)
0x2f: Push("bottle_water")
0x30: @@ SetItemName(Stack[-1])
0x31: Pop(1)
0x32: PushEmpty(object, object, int)
0x33: Stack[-3] = Stack[-22]
0x34: Stack[-2] = Stack[-4]
0x35: Stack[-1] = Stack[-9]
0x36: Call2 0x5f

0x37: Pop(3)
0x38: Push("fill")
0x39: @ PlaySound(Stack[-1])
0x3a: Pop(1)
0x3b: Push((int) 5)
0x3c: @ SendWorldWndMessage(Stack[-1])
0x3d: Pop(1)
0x3e: Push((int) 1)
0x3f: @ Sleep(Stack[-1])
0x40: Pop(1)
0x41: EventEnable(0)
0x42: Stack[-1] = 0
0x43: GOTO 0x48

0x44: PushEmpty(int)
0x45: Stack[-1] = (int) 400
0x46: Call2 0x49

0x47: Pop(1)
0x48: Return(); Pop(18)

0x49: PushEmpty(object, object)
0x4a: @ CreateIntVector(Stack[-1])
0x4b: Pop(0)
0x4c: @@ add(Stack[-3])
0x4d: Pop(0)
0x4e: Push((int) 200)
0x4f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x50: Pop(1)
0x51: Return(); Pop(2)

0x52: Stack[-1] = 0
0x53: PushEmpty(object, object)
0x54: @ CreateIntVector(Stack[-1])
0x55: Pop(0)
0x56: @@ add(Stack[-4])
0x57: Pop(0)
0x58: @@ add(Stack[-3])
0x59: Pop(0)
0x5a: Push((int) 3)
0x5b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5c: Pop(1)
0x5d: Return(); Pop(2)

0x5e: Stack[-1] = 0
0x5f: PushEmpty(int, int, bool, int, int, bool)
0x60: @@ GetItemID(Stack[-3])
0x61: Pop(0)
0x62: Push("Category")
0x63: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x64: Pop(1)
0x65: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x66: Pop(0)
0x67: Pop(0); Push((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x69: @@ DropItems(Stack[-8], Stack[-7])
0x6a: Pop(0)
0x6b: GOTO 0x71

0x6c: PushEmpty(int, int)
0x6d: Stack[-2] = Stack[-5]
0x6e: Stack[-1] = Stack[-9]
0x6f: Call2 0x53

0x70: Pop(2)
0x71: Return(); Pop(6)

