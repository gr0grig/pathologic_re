GlobalVarCount = 0

Strings:
	bottle_empty
	Category
	GetItemCount
	GetItem
	GetItemID
	disease
	HasProperty
	GetProperty
	RemoveItem
	bottle_water
	SetItemName
	SetProperty
	fill
	player_exchange
	AddItem
	DropItems

Import:
	SetVisibility (1 args)
	Hold (0 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	PlaySound (1 args)
	SetVariable (2 args)
	Sleep (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xb Vars = (object)


0x0: PushEmpty()
0x1: Call 0xa

0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetVisibility(Stack[-1])
0x5: Pop(1)
0x6: @ Hold()
0x7: Pop(0)
0x8: GOTO 0x6

0x9: Return(); Pop(0)

0xa: Return(); Pop(0)

0xb: PushEmpty(int, int, int, int, float, int, object, int, bool, float, object, int, int, int, int, float, int, object, int, bool, float, object)
0xc: Push("bottle_empty")
0xd: @ GetInvItemByName(Stack[-12], Stack[-1])
0xe: Pop(1)
0xf: Push("Category")
0x10: @ GetInvItemProperty(Stack[-11], Stack[-12], Stack[-1])
0x11: Pop(1)
0x12: @@ GetItemCount(Stack[-9], Stack[-10])
0x13: Pop(0)
0x14: Stack[-8] = (int) -1
0x15: Stack[-6] = (int) 0
0x16: Pop(0); Push((bool) Stack[-6] < Stack[-9])
0x17: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x18: @@ GetItem(Stack[-5], Stack[-6], Stack[-10])
0x19: Pop(0)
0x1a: @@ GetItemID(Stack[-4])
0x1b: Pop(0)
0x1c: Pop(0); Push((bool) Stack[-4] == Stack[-11])
0x1d: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x1e: Push("disease")
0x1f: @@ HasProperty(Stack[-4], Stack[-1])
0x20: Pop(1)
0x21: Pop(0); Push((bool) Stack[-3] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x23: PushEmpty(bool)
0x24: Stack[-1] = (bool) 1
0x25: Push((int) -1)
0x26: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x28: Push((int) 0)
0x29: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: Stack[-1] = (bool) 0
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: Stack[-8] = Stack[-6]
0x2e: Stack[-7] = (int) 0
0x2f: GOTO 0x3e

0x30: Push("disease")
0x31: @@ GetProperty(Stack[-3], Stack[-1])
0x32: Pop(1)
0x33: PushEmpty(bool)
0x34: Stack[-1] = (bool) 1
0x35: Push((int) -1)
0x36: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: Pop(0); Push((bool) Stack[-3] < Stack[-8])
0x39: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x3a: Stack[-1] = (bool) 0
0x3b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3c: Stack[-8] = Stack[-6]
0x3d: Stack[-7] = Stack[-2]
0x3e: Stack[-5] = 0
0x3f: Push((int) 1)
0x40: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x41: GOTO 0x16

0x42: Push((int) -1)
0x43: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x45: EventDisable(0)
0x46: Push((int) 1)
0x47: @@ RemoveItem(Stack[-9], Stack[-1], Stack[-11])
0x48: Pop(1)
0x49: @ CreateInvItem(Stack[-1])
0x4a: Pop(0)
0x4b: Push("bottle_water")
0x4c: @@ SetItemName(Stack[-1])
0x4d: Pop(1)
0x4e: Push("disease")
0x4f: @@ SetProperty(Stack[-1], Stack[-8])
0x50: Pop(1)
0x51: PushEmpty(object, object, int)
0x52: Stack[-3] = Stack[-26]
0x53: Stack[-2] = Stack[-4]
0x54: Stack[-1] = (int) 1
0x55: Call 0x64

0x56: Pop(3)
0x57: Push("fill")
0x58: @ PlaySound(Stack[-1])
0x59: Pop(1)
0x5a: Push("player_exchange")
0x5b: Push((int) 1)
0x5c: @ SetVariable(Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: Push((int) 1)
0x5f: @ Sleep(Stack[-1])
0x60: Pop(1)
0x61: EventEnable(0)
0x62: Stack[-1] = 0
0x63: Return(); Pop(22)

0x64: PushEmpty(int, int, bool, int, int, bool)
0x65: @@ GetItemID(Stack[-3])
0x66: Pop(0)
0x67: Push("Category")
0x68: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x69: Pop(1)
0x6a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x6b: Pop(0)
0x6c: Pop(0); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @@ DropItems(Stack[-8], Stack[-7])
0x6f: Pop(0)
0x70: Return(); Pop(6)

