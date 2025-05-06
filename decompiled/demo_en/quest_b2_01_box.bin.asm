GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	locked
	b2q01_key
	unlock
	IsOnGround
	nouse_container
	add
	HasItem
	Category
	RemoveItemByType
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove

Import:
	SetVisibility (1 args)
	GetProperty (2 args)
	SetProperty (2 args)
	PlaySound (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
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
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x32

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty(int, int)
0x8: Push("locked")
0x9: @ GetProperty(Stack[-1], Stack[-2])
0xa: Pop(1)
0xb: Push(Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0xd: PushEmpty(bool, object, string)
0xe: Stack[-2] = Stack[-6]
0xf: Stack[-1] = "b2q01_key"
0x10: Call2 0x62

0x11: Pop(2)
0x12: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x13: PushEmpty(bool, object, string)
0x14: Stack[-2] = Stack[-6]
0x15: Stack[-1] = "b2q01_key"
0x16: Call2 0x69

0x17: Pop(3)
0x18: Push("locked")
0x19: Push((int) 0)
0x1a: @ SetProperty(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: Push("unlock")
0x1d: @ PlaySound(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty()
0x20: Call2 0x87

0x21: Pop(0)
0x22: PushEmpty()
0x23: Call2 0x94

0x24: Pop(0)
0x25: PushEmpty()
0x26: Call2 0x7a

0x27: Pop(0)
0x28: GOTO 0x2d

0x29: Push("locked")
0x2a: @ PlaySound(Stack[-1])
0x2b: Pop(1)
0x2c: Return(); Pop(2)

0x2d: PushEmpty(object)
0x2e: Stack[-1] = Stack[-4]
0x2f: Call2 0x36

0x30: Pop(1)
0x31: Return(); Pop(2)

0x32: @ Hold()
0x33: Pop(0)
0x34: GOTO 0x32

0x35: Return(); Pop(0)

0x36: PushEmpty(bool, bool, bool, bool)
0x37: PushEmpty(bool)
0x38: Stack[-1] = (bool) 1
0x39: Pop(0); Push((bool) Stack[-6] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3b: PushEmpty(bool)
0x3c: Call2 0x50

0x3d: Pop(0)
0x3e: Pop(1); Push((bool) Stack[-1] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x40: Stack[-1] = (bool) 0
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: Return(); Pop(4)

0x43: @@ IsOnGround(Stack[-2])
0x44: Pop(0)
0x45: Push(Stack[-2])
0x46: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x47: EventDisable(0)
0x48: @ IsOverrideActive(Stack[-1])
0x49: Pop(0)
0x4a: Pop(0); Push((bool) Stack[-1] == 0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4c: @ Barter(Stack[-5])
0x4d: Pop(0)
0x4e: EventEnable(0)
0x4f: Return(); Pop(4)

0x50: PushEmpty(int, int)
0x51: Push("nouse_container")
0x52: @ GetVariable(Stack[-1], Stack[-2])
0x53: Pop(1)
0x54: Stack[-3] = !Stack[-1]; Pop(0);
0x55: Return(); Pop(2)

0x56: PushEmpty(object, object)
0x57: @ CreateIntVector(Stack[-1])
0x58: Pop(0)
0x59: @@ add(Stack[-4])
0x5a: Pop(0)
0x5b: @@ add(Stack[-3])
0x5c: Pop(0)
0x5d: Push((int) 4)
0x5e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5f: Pop(1)
0x60: Return(); Pop(2)

0x61: Stack[-1] = 0
0x62: PushEmpty(int, bool, int, bool)
0x63: @ GetInvItemByName(Stack[-2], Stack[-5])
0x64: Pop(0)
0x65: @@ HasItem(Stack[-2], Stack[-1])
0x66: Pop(0)
0x67: Stack[-7] = Stack[-1]
0x68: Return(); Pop(4)

0x69: PushEmpty(int, int, bool, int, int, bool)
0x6a: @ GetInvItemByName(Stack[-3], Stack[-7])
0x6b: Pop(0)
0x6c: Push("Category")
0x6d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x6e: Pop(1)
0x6f: @@ RemoveItemByType(Stack[-1], Stack[-3], Stack[-2])
0x70: Pop(0)
0x71: Push(Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x73: PushEmpty(int, int)
0x74: Stack[-2] = Stack[-5]
0x75: Stack[-1] = (int) 1
0x76: Call2 0x56

0x77: Pop(2)
0x78: Stack[-9] = Stack[-1]
0x79: Return(); Pop(6)

0x7a: PushEmpty(object, object)
0x7b: Push((int) 563)
0x7c: Push((int) 0)
0x7d: Push((int) 530577)
0x7e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: PushEmpty(bool, object, int)
0x81: Stack[-2] = Stack[-4]
0x82: Stack[-1] = (int) -1
0x83: Call2 0xa6

0x84: Pop(3)
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
0x87: PushEmpty(object, object)
0x88: Push((int) 572)
0x89: Push((int) 1)
0x8a: Push((int) 530605)
0x8b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: PushEmpty(bool, object, int)
0x8e: Stack[-2] = Stack[-4]
0x8f: Stack[-1] = (int) 245
0x90: Call2 0xa6

0x91: Pop(3)
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
0x94: PushEmpty(bool, int)
0x95: Stack[-1] = (int) 562
0x96: Call2 0xc2

0x97: Pop(2)
0x98: Return(); Pop(0)

0x99: PushEmpty(object, object)
0x9a: @ GetDiaryRoot(Stack[-1])
0x9b: Pop(0)
0x9c: Pop(0); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9e: Push("Can't retrieve diary root")
0x9f: @ Trace(Stack[-1])
0xa0: Pop(1)
0xa1: Stack[-3] = (bool) 0
0xa2: Return(); Pop(2)

0xa3: Stack[-3] = Stack[-1]
0xa4: Return(); Pop(2)

0xa5: Stack[-1] = 0
0xa6: PushEmpty(object, object, int, object, object, int)
0xa7: PushEmpty(object)
0xa8: Call2 0x99

0xa9: Stack[-4] = Stack[-1]
0xaa: Pop(1)
0xab: @@ Find(Stack[-7], Stack[-2])
0xac: Pop(0)
0xad: Pop(0); Push((bool) Stack[-2] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: Push("Can't find diary parent with id: ")
0xb0: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb1: @ Trace(Stack[-1])
0xb2: Pop(1)
0xb3: Stack[-9] = (bool) 0
0xb4: Return(); Pop(6)

0xb5: @@ AddChild(Stack[-8])
0xb6: Pop(0)
0xb7: Push((int) 7)
0xb8: @ SendWorldWndMessage(Stack[-1])
0xb9: Pop(1)
0xba: @@ GetCategory(Stack[-1])
0xbb: Pop(0)
0xbc: @ SetDiarySection(Stack[-1])
0xbd: Pop(0)
0xbe: Stack[-9] = (bool) 0
0xbf: Return(); Pop(6)

0xc0: Stack[-2] = 0
0xc1: Stack[-3] = 0
0xc2: PushEmpty(object, object, object, object)
0xc3: PushEmpty(object)
0xc4: Call2 0x99

0xc5: Stack[-3] = Stack[-1]
0xc6: Pop(1)
0xc7: @@ Find(Stack[-5], Stack[-1])
0xc8: Pop(0)
0xc9: Pop(0); Push((bool) Stack[-1] == 0)
0xca: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcb: Stack[-6] = (bool) 0
0xcc: Return(); Pop(4)

0xcd: @@ Remove()
0xce: Pop(0)
0xcf: Stack[-6] = (bool) 1
0xd0: Return(); Pop(4)

0xd1: Stack[-1] = 0
0xd2: Stack[-2] = 0
