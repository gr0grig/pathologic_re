GlobalVarCount = 0

Strings:
	W:Trying to use
	A:IsOnGround
	W:blooddiseased
	W:Can't add corpse item
	W:I am in region 
	W: and visible
	W: and not visible
	A:GetRegionByPt
	W:Region
	W:State
// @pool_raw:54007200790069006e006700200074006f002000750073006500000049734f6e47726f756e640062006c006f006f006400640069007300650061007300650064000000430061006e00270074002000610064006400200063006f00720070007300650020006900740065006d0000004900200061006d00200069006e00200072006500670069006f006e0020000000200061006e0064002000760069007300690062006c0065000000200061006e00640020006e006f0074002000760069007300690062006c0065000000476574526567696f6e427950740052006500670069006f006e000000530074006100740065000000

Import:
	Hold (0 args)
	Trace (1 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	SetVisibility (1 args)
	GetPosition (1 args)
	GetScene (1 args)
	GetGameTime (1 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x7 Vars = (object)
		EVENT_5 Op = 0x18 Vars = ()


0x0: PushEmpty()
0x1: Call 0x1c

0x2: Pop(0)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(bool, bool, bool, bool)
0x8: Push("Trying to use") // @poff=0
0x9: @ Trace(Stack[-1])
0xa: Pop(1)
0xb: @@ IsOnGround(Stack[-2]); Obj=5 // @poff=28
0xc: Pop(0)
0xd: Push(Stack[-2])
0xe: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xf: EventDisable(0)
0x10: @ IsOverrideActive(Stack[-1])
0x11: Pop(0)
0x12: Pop(0); Push((bool) Stack[-1] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x14: @ WorkWithCorpse(Stack[-5])
0x15: Pop(0)
0x16: EventEnable(0)
0x17: Return(); Pop(4)

0x18: PushEmpty()
0x19: Call 0x28

0x1a: Pop(0)
0x1b: Return(); Pop(0)

0x1c: PushEmpty(bool, string, int, int)
0x1d: Stack[-3] = "blooddiseased" // @poff=39
0x1e: Stack[-2] = (int) 1
0x1f: Stack[-1] = (int) 0
0x20: Call 0x8b

0x21: Pop(3)
0x22: Pop(1); Push((bool) Stack[-1] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: Push("Can't add corpse item") // @poff=67
0x25: @ Trace(Stack[-1])
0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty(int, int)
0x29: PushEmpty(bool, int)
0x2a: Stack[-1] = (int) 3
0x2b: Call 0x6a

0x2c: Pop(1)
0x2d: Pop(1); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: Push((bool) 0)
0x30: @ SetVisibility(Stack[-1])
0x31: Pop(1)
0x32: Return(); Pop(2)

0x33: PushEmpty(int)
0x34: Call 0x56

0x35: Stack[-1] = Stack[-2]
0x36: Pop(1)
0x37: PushEmpty(bool, int)
0x38: Push((int) 1)
0x39: Stack[-2] = Stack[-4] - Stack[-1]; Pop(1);
0x3a: Call 0x76

0x3b: Pop(1)
0x3c: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x3d: Push((bool) 1)
0x3e: @ SetVisibility(Stack[-1])
0x3f: Pop(1)
0x40: Push("I am in region ") // @poff=111
0x41: Pop(1); Push(Stack[-1] + Stack[-2]);
0x42: Push(" and visible") // @poff=143
0x43: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44: @ Trace(Stack[-1])
0x45: Pop(1)
0x46: GOTO 0x50

0x47: Push((bool) 1)
0x48: @ SetVisibility(Stack[-1])
0x49: Pop(1)
0x4a: Push("I am in region ") // @poff=111
0x4b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4c: Push(" and not visible") // @poff=169
0x4d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e: @ Trace(Stack[-1])
0x4f: Pop(1)
0x50: Return(); Pop(2)

0x51: PushEmpty(cvector, cvector)
0x52: @ GetPosition(Stack[-1])
0x53: Pop(0)
0x54: Stack[-1] = Stack[-3]
0x55: Return(); Pop(2)

0x56: PushEmpty(object, int, object, int)
0x57: @ GetScene(Stack[-2])
0x58: Pop(0)
0x59: PushEmpty(cvector)
0x5a: Call 0x51

0x5b: Pop(0)
0x5c: @@ GetRegionByPt(Stack[-2], Stack[-1]); Obj=3 // @poff=203
0x5d: Pop(1)
0x5e: Stack[-1] = Stack[-5]
0x5f: Return(); Pop(4)

0x60: Stack[-2] = 0
0x61: PushEmpty(float, float)
0x62: @ GetGameTime(Stack[-1])
0x63: Pop(0)
0x64: Push((int) 1)
0x65: PushEmpty(int)
0x66: Push((int) 24)
0x67: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x68: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x69: Return(); Pop(2)

0x6a: PushEmpty()
0x6b: PushEmpty(int)
0x6c: Call 0x61

0x6d: Pop(0)
0x6e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x6f: Return(); Pop(0)

0x70: PushEmpty()
0x71: Push("Region") // @poff=217
0x72: Pop(1); Push(Stack[-1] + Stack[-2]);
0x73: Push("State") // @poff=231
0x74: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x75: Return(); Pop(0)

0x76: PushEmpty(int, int)
0x77: PushEmpty(string, int)
0x78: Stack[-5] = Stack[-1]
0x79: Call 0x70

0x7a: Pop(1)
0x7b: @ GetVariable(Stack[-1], Stack[-2])
0x7c: Pop(1)
0x7d: Push((int) 3)
0x7e: Pop(1); Push(Stack[-2] & Stack[-1]);
0x7f: Push((int) 1)
0x80: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-4] = (bool) 1
0x83: Return(); Pop(2)

0x84: Stack[-4] = (bool) 0
0x85: Return(); Pop(2)

0x86: PushEmpty(int, int)
0x87: @ GetInvItemByName(Stack[-1], Stack[-3])
0x88: Pop(0)
0x89: Stack[-1] = Stack[-4]
0x8a: Return(); Pop(2)

0x8b: PushEmpty(int, bool, int, bool)
0x8c: PushEmpty(int, string)
0x8d: Stack[-9] = Stack[-1]
0x8e: Call 0x86

0x8f: Stack[-2] = Stack[-4]
0x90: Pop(2)
0x91: Push((int) -1)
0x92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x94: Stack[-8] = (bool) 0
0x95: Return(); Pop(4)

0x96: Push((int) 0)
0x97: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x99: Stack[-8] = (bool) 1
0x9a: Return(); Pop(4)

0x9b: @ AddItem(Stack[-1], Stack[-2], Stack[-5], Stack[-6])
0x9c: Pop(0)
0x9d: Stack[-1] = Stack[-8]
0x9e: Return(); Pop(4)

