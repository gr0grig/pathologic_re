GlobalVarCount = 0

Strings:
	W:bottle_empty
	W:Category
	A:GetItemCount
	A:GetItem
	A:GetItemID
	A:GetItemAmount
	A:RemoveItem
	W:bottle_water
	A:SetItemName
	W:fill
	A:add
	A:AddItem
	A:DropItems
// @pool_raw:62006f00740074006c0065005f0065006d007000740079000000430061007400650067006f007200790000004765744974656d436f756e74004765744974656d004765744974656d4944004765744974656d416d6f756e740052656d6f76654974656d0062006f00740074006c0065005f007700610074006500720000005365744974656d4e616d6500660069006c006c000000616464004164644974656d0044726f704974656d7300

Import:
	SetVisibility (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	SetUsable (1 args)
	StopGroup0 (0 args)
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
	GTASK_0 Vars = (bool) Params = 0
		EVENT_9 Op = 0x13 Vars = (int, float)
		EVENT_0 Op = 0x1c Vars = (object)


0x0: PushEmpty()
0x1: Call2 0x1b

0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetVisibility(Stack[-1])
0x5: Pop(1)
0x6: Push((int) 0)
0x7: Push((int) 24)
0x8: @ SetTimeEvent(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xb: @ Hold()
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe: IF (Stack[-1] == 1) GOTO 0xb; Pop(1)

0xf: Push((bool) 0)
0x10: @ SetUsable(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: Push((int) 0)
0x15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x17: @ StopGroup0()
0x18: Pop(0)
0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a: Return(); Pop(0)

0x1b: Return(); Pop(0)

0x1c: PushEmpty(int, int, int, int, int, object, int, int, object, int, int, int, int, int, object, int, int, object)
0x1d: Push("bottle_empty") // @poff=0
0x1e: @ GetInvItemByName(Stack[-10], Stack[-1])
0x1f: Pop(1)
0x20: Push("Category") // @poff=26
0x21: @ GetInvItemProperty(Stack[-9], Stack[-10], Stack[-1])
0x22: Pop(1)
0x23: @@ GetItemCount(Stack[-7], Stack[-8]); Obj=19 // @poff=44
0x24: Pop(0)
0x25: Stack[-6] = (int) 0
0x26: Stack[-5] = (int) 0
0x27: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0x28: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x29: @@ GetItem(Stack[-4], Stack[-5], Stack[-8]); Obj=19 // @poff=57
0x2a: Pop(0)
0x2b: @@ GetItemID(Stack[-3]); Obj=4 // @poff=65
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x2e: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x2f: @@ GetItemAmount(Stack[-2], Stack[-5], Stack[-8]); Obj=19 // @poff=75
0x30: Pop(0)
0x31: Stack[-6] = Stack[-6] + Stack[-2]; Pop(0);
0x32: @@ RemoveItem(Stack[-5], Stack[-2], Stack[-8]); Obj=19 // @poff=89
0x33: Pop(0)
0x34: Push((int) -1)
0x35: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x36: GOTO 0x39

0x37: Push((int) 1)
0x38: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x39: Stack[-4] = 0
0x3a: GOTO 0x27

0x3b: Push(Stack[-6])
0x3c: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x3d: EventDisable(0)
0x3e: @ CreateInvItem(Stack[-1])
0x3f: Pop(0)
0x40: Push("bottle_water") // @poff=100
0x41: @@ SetItemName(Stack[-1]); Obj=2 // @poff=126
0x42: Pop(1)
0x43: PushEmpty(object, object, int)
0x44: Stack[-22] = Stack[-3]
0x45: Stack[-4] = Stack[-2]
0x46: Stack[-9] = Stack[-1]
0x47: Call2 0x70

0x48: Pop(3)
0x49: Push("fill") // @poff=138
0x4a: @ PlaySound(Stack[-1])
0x4b: Pop(1)
0x4c: Push((int) 5)
0x4d: @ SendWorldWndMessage(Stack[-1])
0x4e: Pop(1)
0x4f: Push((int) 1)
0x50: @ Sleep(Stack[-1])
0x51: Pop(1)
0x52: EventEnable(0)
0x53: Stack[-1] = 0
0x54: GOTO 0x59

0x55: PushEmpty(int)
0x56: Stack[-1] = (int) 400
0x57: Call2 0x5a

0x58: Pop(1)
0x59: Return(); Pop(18)

0x5a: PushEmpty(object, object)
0x5b: @ CreateIntVector(Stack[-1])
0x5c: Pop(0)
0x5d: @@ add(Stack[-3]); Obj=1 // @poff=148
0x5e: Pop(0)
0x5f: Push((int) 200)
0x60: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Return(); Pop(2)

0x63: Stack[-1] = 0
0x64: PushEmpty(object, object)
0x65: @ CreateIntVector(Stack[-1])
0x66: Pop(0)
0x67: @@ add(Stack[-4]); Obj=1 // @poff=148
0x68: Pop(0)
0x69: @@ add(Stack[-3]); Obj=1 // @poff=148
0x6a: Pop(0)
0x6b: Push((int) 3)
0x6c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6d: Pop(1)
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
0x70: PushEmpty(int, int, bool, int, int, bool)
0x71: @@ GetItemID(Stack[-3]); Obj=8 // @poff=65
0x72: Pop(0)
0x73: Push("Category") // @poff=26
0x74: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x75: Pop(1)
0x76: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=152
0x77: Pop(0)
0x78: Pop(0); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7a: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=160
0x7b: Pop(0)
0x7c: GOTO 0x82

0x7d: PushEmpty(int, int)
0x7e: Stack[-5] = Stack[-2]
0x7f: Stack[-9] = Stack[-1]
0x80: Call2 0x64

0x81: Pop(2)
0x82: Return(); Pop(6)

