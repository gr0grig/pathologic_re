GlobalVarCount = 0

Strings:
	W:bottle_empty
	W:Category
	A:GetItemCount
	A:GetItem
	A:GetItemID
	W:disease
	A:HasProperty
	A:GetProperty
	A:RemoveItem
	W:bottle_water
	A:SetItemName
	A:SetProperty
	W:fill
	W:player_exchange
	A:AddItem
	A:DropItems
// @pool_raw:62006f00740074006c0065005f0065006d007000740079000000430061007400650067006f007200790000004765744974656d436f756e74004765744974656d004765744974656d4944006400690073006500610073006500000048617350726f70657274790047657450726f70657274790052656d6f76654974656d0062006f00740074006c0065005f007700610074006500720000005365744974656d4e616d650053657450726f706572747900660069006c006c00000070006c0061007900650072005f00650078006300680061006e006700650000004164644974656d0044726f704974656d7300

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
	SetVariable (2 args)
	Sleep (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_9 Op = 0x13 Vars = (int, float)
		EVENT_0 Op = 0x1c Vars = (object)


0x0: PushEmpty()
0x1: Call 0x1b

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

0x1c: PushEmpty(int, int, int, int, float, int, object, int, bool, float, object, int, int, int, int, float, int, object, int, bool, float, object)
0x1d: Push("bottle_empty") // @poff=0
0x1e: @ GetInvItemByName(Stack[-12], Stack[-1])
0x1f: Pop(1)
0x20: Push("Category") // @poff=26
0x21: @ GetInvItemProperty(Stack[-11], Stack[-12], Stack[-1])
0x22: Pop(1)
0x23: @@ GetItemCount(Stack[-9], Stack[-10]); Obj=23 // @poff=44
0x24: Pop(0)
0x25: Stack[-8] = (int) -1
0x26: Stack[-6] = (int) 0
0x27: Pop(0); Push((bool) Stack[-6] < Stack[-9])
0x28: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x29: @@ GetItem(Stack[-5], Stack[-6], Stack[-10]); Obj=23 // @poff=57
0x2a: Pop(0)
0x2b: @@ GetItemID(Stack[-4]); Obj=5 // @poff=65
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-4] == Stack[-11])
0x2e: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x2f: Push("disease") // @poff=75
0x30: @@ HasProperty(Stack[-4], Stack[-1]); Obj=6 // @poff=91
0x31: Pop(1)
0x32: Pop(0); Push((bool) Stack[-3] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x34: PushEmpty(bool)
0x35: Stack[-1] = (bool) 1
0x36: Push((int) -1)
0x37: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x38: IF (Stack[-1] == 1) GOTO 0x3d; Pop(1)

0x39: Push((int) 0)
0x3a: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x3b: IF (Stack[-1] == 1) GOTO 0x3d; Pop(1)

0x3c: Stack[-1] = (bool) 0
0x3d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3e: Stack[-6] = Stack[-8]
0x3f: Stack[-7] = (int) 0
0x40: GOTO 0x4f

0x41: Push("disease") // @poff=75
0x42: @@ GetProperty(Stack[-3], Stack[-1]); Obj=6 // @poff=103
0x43: Pop(1)
0x44: PushEmpty(bool)
0x45: Stack[-1] = (bool) 1
0x46: Push((int) -1)
0x47: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x48: IF (Stack[-1] == 1) GOTO 0x4c; Pop(1)

0x49: Pop(0); Push((bool) Stack[-3] < Stack[-8])
0x4a: IF (Stack[-1] == 1) GOTO 0x4c; Pop(1)

0x4b: Stack[-1] = (bool) 0
0x4c: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4d: Stack[-6] = Stack[-8]
0x4e: Stack[-2] = Stack[-7]
0x4f: Stack[-5] = 0
0x50: Push((int) 1)
0x51: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x52: GOTO 0x27

0x53: Push((int) -1)
0x54: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x56: EventDisable(0)
0x57: Push((int) 1)
0x58: @@ RemoveItem(Stack[-9], Stack[-1], Stack[-11]); Obj=24 // @poff=115
0x59: Pop(1)
0x5a: @ CreateInvItem(Stack[-1])
0x5b: Pop(0)
0x5c: Push("bottle_water") // @poff=126
0x5d: @@ SetItemName(Stack[-1]); Obj=2 // @poff=152
0x5e: Pop(1)
0x5f: Push("disease") // @poff=75
0x60: @@ SetProperty(Stack[-1], Stack[-8]); Obj=2 // @poff=164
0x61: Pop(1)
0x62: PushEmpty(object, object, int)
0x63: Stack[-26] = Stack[-3]
0x64: Stack[-4] = Stack[-2]
0x65: Stack[-1] = (int) 1
0x66: Call 0x75

0x67: Pop(3)
0x68: Push("fill") // @poff=176
0x69: @ PlaySound(Stack[-1])
0x6a: Pop(1)
0x6b: Push("player_exchange") // @poff=186
0x6c: Push((int) 1)
0x6d: @ SetVariable(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: Push((int) 1)
0x70: @ Sleep(Stack[-1])
0x71: Pop(1)
0x72: EventEnable(0)
0x73: Stack[-1] = 0
0x74: Return(); Pop(22)

0x75: PushEmpty(int, int, bool, int, int, bool)
0x76: @@ GetItemID(Stack[-3]); Obj=8 // @poff=65
0x77: Pop(0)
0x78: Push("Category") // @poff=26
0x79: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x7a: Pop(1)
0x7b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=218
0x7c: Pop(0)
0x7d: Pop(0); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7f: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=226
0x80: Pop(0)
0x81: Return(); Pop(6)

