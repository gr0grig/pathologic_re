GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:avroks_blood
	A:SetItemName
	W:b10q03
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:6100760072006f006b0073005f0062006c006f006f00640000005365744974656d4e616d65006200310030007100300033000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d00430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

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
0x9: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xa: Return(); Pop(2)

0xb: GOTO 0xd

0xc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd: @ CreateInvItem(Stack[-1])
0xe: Pop(0)
0xf: Push("avroks_blood") // @poff=0
0x10: @@ SetItemName(Stack[-1]); Obj=2 // @poff=26
0x11: Pop(1)
0x12: PushEmpty(bool, object, object, int)
0x13: Stack[-7] = Stack[-3]
0x14: Stack[-5] = Stack[-2]
0x15: Stack[-1] = (int) 1
0x16: Call2 0x39

0x17: Pop(3)
0x18: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x19: PushEmpty()
0x1a: Call2 0x4a

0x1b: Pop(0)
0x1c: Push("b10q03") // @poff=38
0x1d: Push((int) 4)
0x1e: @ SetVariable(Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: PushEmpty(object)
0x21: Call2 0x27

0x22: Pop(0)
0x23: @ RemoveActor(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(2)

0x26: Stack[-1] = 0
0x27: PushEmpty(object, object)
0x28: @ self(Stack[-1])
0x29: Pop(0)
0x2a: Stack[-1] = Stack[-3]
0x2b: Return(); Pop(2)

0x2c: Stack[-1] = 0
0x2d: PushEmpty(object, object)
0x2e: @ CreateIntVector(Stack[-1])
0x2f: Pop(0)
0x30: @@ add(Stack[-4]); Obj=1 // @poff=52
0x31: Pop(0)
0x32: @@ add(Stack[-3]); Obj=1 // @poff=52
0x33: Pop(0)
0x34: Push((int) 3)
0x35: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x36: Pop(1)
0x37: Return(); Pop(2)

0x38: Stack[-1] = 0
0x39: PushEmpty(int, int, bool, int, int, bool)
0x3a: @@ GetItemID(Stack[-3]); Obj=8 // @poff=56
0x3b: Pop(0)
0x3c: Push("Category") // @poff=66
0x3d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x3e: Pop(1)
0x3f: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=84
0x40: Pop(0)
0x41: Push(Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: PushEmpty(int, int)
0x44: Stack[-5] = Stack[-2]
0x45: Stack[-9] = Stack[-1]
0x46: Call2 0x2d

0x47: Pop(2)
0x48: Stack[-1] = Stack[-10]
0x49: Return(); Pop(6)

0x4a: PushEmpty(object, object)
0x4b: Push((int) 604)
0x4c: Push((int) 2)
0x4d: Push((int) 531183)
0x4e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4f: Pop(3)
0x50: PushEmpty(bool, object, int)
0x51: Stack[-4] = Stack[-2]
0x52: Stack[-1] = (int) 594
0x53: Call2 0x64

0x54: Pop(3)
0x55: Return(); Pop(2)

0x56: Stack[-1] = 0
0x57: PushEmpty(object, object)
0x58: @ GetDiaryRoot(Stack[-1])
0x59: Pop(0)
0x5a: Pop(0); Push((bool) Stack[-1] == 0)
0x5b: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5c: Push("Can't retrieve diary root") // @poff=92
0x5d: @ Trace(Stack[-1])
0x5e: Pop(1)
0x5f: Stack[-3] = (bool) 0
0x60: Return(); Pop(2)

0x61: Stack[-1] = Stack[-3]
0x62: Return(); Pop(2)

0x63: Stack[-1] = 0
0x64: PushEmpty(object, object, int, object, object, int)
0x65: PushEmpty(object)
0x66: Call2 0x57

0x67: Stack[-1] = Stack[-4]
0x68: Pop(1)
0x69: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=144
0x6a: Pop(0)
0x6b: Pop(0); Push((bool) Stack[-2] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6d: Push("Can't find diary parent with id: ") // @poff=149
0x6e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6f: @ Trace(Stack[-1])
0x70: Pop(1)
0x71: Stack[-9] = (bool) 0
0x72: Return(); Pop(6)

0x73: @@ AddChild(Stack[-8]); Obj=2 // @poff=217
0x74: Pop(0)
0x75: Push((int) 7)
0x76: @ SendWorldWndMessage(Stack[-1])
0x77: Pop(1)
0x78: @@ GetCategory(Stack[-1]); Obj=8 // @poff=226
0x79: Pop(0)
0x7a: @ SetDiarySection(Stack[-1])
0x7b: Pop(0)
0x7c: Stack[-9] = (bool) 0
0x7d: Return(); Pop(6)

0x7e: Stack[-2] = 0
0x7f: Stack[-3] = 0
