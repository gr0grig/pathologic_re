GlobalVarCount = 1
	G_VAR_0 object 

Strings:
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
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x9
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x16 Vars = (string)
		EVENT_6 Op = 0x25 Vars = ()
		EVENT_0 Op = 0x35 Vars = (object)


0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call2 0xc7

0x3: Pop(0)
0x4: PushEmpty(object)
0x5: Stack[-1] = Stack[-2]
0x6: Call2 0x50

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xa: PushEmpty()
0xb: Call2 0x29

0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x10: PushEmpty(object)
0x11: Call2 0xa4

0x12: Pop(0)
0x13: @ RemoveActor(Stack[-1])
0x14: Pop(1)
0x15: Return(); Pop(0)

0x16: PushEmpty(bool, bool)
0x17: Push("cleanup")
0x18: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b: @ IsLoaded(Stack[-1])
0x1c: Pop(0)
0x1d: Pop(0); Push((bool) Stack[-1] == 0)
0x1e: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1f: PushEmpty(object)
0x20: Call2 0xa4

0x21: Pop(0)
0x22: @ RemoveActor(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(2)

0x25: PushEmpty()
0x26: Call2 0xe

0x27: Pop(0)
0x28: Return(); Pop(0)

0x29: PushEmpty(object, object)
0x2a: Push("object")
0x2b: @ FindGeometry(Stack[-1], Stack[-2])
0x2c: Pop(1)
0x2d: Push((bool) 1)
0x2e: @@ Enable(Stack[-1])
0x2f: Pop(1)
0x30: @ Hold()
0x31: Pop(0)
0x32: GOTO 0x30

0x33: Return(); Pop(2)

0x34: Stack[-1] = 0
0x35: PushEmpty(object, int, object, int)
0x36: PushEmpty(bool, object)
0x37: Stack[-1] = Stack[-7]
0x38: Call2 0x8c

0x39: Pop(1)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Return(); Pop(4)

0x3d: Push((int) 0)
0x3e: @ GetItem(Stack[-3], Stack[-1])
0x3f: Pop(1)
0x40: Push((int) 0)
0x41: @ GetItemAmount(Stack[-2], Stack[-1])
0x42: Pop(1)
0x43: PushEmpty(bool, object, object, int)
0x44: Stack[-3] = Stack[-9]
0x45: Stack[-2] = Stack[-6]
0x46: Stack[-1] = Stack[-5]
0x47: Call2 0xb6

0x48: Pop(3)
0x49: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4a: PushEmpty(object)
0x4b: Stack[-1] = Stack[-6]
0x4c: Call2 0x0

0x4d: Pop(1)
0x4e: Return(); Pop(4)

0x4f: Stack[-2] = 0
0x50: PushEmpty()
0x51: PushEmpty(object)
0x52: Call2 0xa4

0x53: Pop(0)
0x54: @ RemoveActor(Stack[-1])
0x55: Pop(1)
0x56: Return(); Pop(0)

0x57: PushEmpty(bool, bool)
0x58: Push("HasProperty")
0x59: Push((int) 2)
0x5a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: Stack[-5] = (bool) 0
0x5e: Return(); Pop(2)

0x5f: @@ HasProperty(Stack[-3], Stack[-1])
0x60: Pop(0)
0x61: Stack[-5] = Stack[-1]
0x62: Return(); Pop(2)

0x63: PushEmpty(bool, bool)
0x64: @@ IsDead(Stack[-1])
0x65: Pop(0)
0x66: Stack[-4] = Stack[-1]
0x67: Return(); Pop(2)

0x68: PushEmpty(object, object, object, object)
0x69: Pop(0); Push((bool) Stack[-5] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6b: Stack[-6] = (bool) 0
0x6c: Return(); Pop(4)

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: Push("IsDead")
0x70: Push((int) 1)
0x71: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x72: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x73: PushEmpty(bool, object)
0x74: Stack[-1] = Stack[-8]
0x75: Call2 0x63

0x76: Pop(1)
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: Stack[-1] = (bool) 1
0x79: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7a: Stack[-6] = (bool) 0
0x7b: Return(); Pop(4)

0x7c: @ GetScene(Stack[-2])
0x7d: Pop(0)
0x7e: Pop(0); Push((bool) Stack[-2] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x80: Stack[-6] = (bool) 0
0x81: Return(); Pop(4)

0x82: @@ GetScene(Stack[-1])
0x83: Pop(0)
0x84: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: Stack[-6] = (bool) 0
0x87: Return(); Pop(4)

0x88: Stack[-6] = (bool) 1
0x89: Return(); Pop(4)

0x8a: Stack[-1] = 0
0x8b: Stack[-2] = 0
0x8c: PushEmpty(int, int)
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[-5]
0x8f: Call2 0x68

0x90: Pop(1)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-4] = (bool) 0
0x94: Return(); Pop(2)

0x95: PushEmpty(bool, object, string)
0x96: Stack[-2] = Stack[-6]
0x97: Stack[-1] = "noaccess"
0x98: Call2 0x57

0x99: Pop(2)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9c: Stack[-4] = (bool) 1
0x9d: Return(); Pop(2)

0x9e: Push("noaccess")
0x9f: @@ GetProperty(Stack[-1], Stack[-2])
0xa0: Pop(1)
0xa1: Push((int) 0)
0xa2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa3: Return(); Pop(2)

0xa4: PushEmpty(object, object)
0xa5: @ self(Stack[-1])
0xa6: Pop(0)
0xa7: Stack[-3] = Stack[-1]
0xa8: Return(); Pop(2)

0xa9: Stack[-1] = 0
0xaa: PushEmpty(object, object)
0xab: @ CreateIntVector(Stack[-1])
0xac: Pop(0)
0xad: @@ add(Stack[-4])
0xae: Pop(0)
0xaf: @@ add(Stack[-3])
0xb0: Pop(0)
0xb1: Push((int) 3)
0xb2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb3: Pop(1)
0xb4: Return(); Pop(2)

0xb5: Stack[-1] = 0
0xb6: PushEmpty(int, int, bool, int, int, bool)
0xb7: @@ GetItemID(Stack[-3])
0xb8: Pop(0)
0xb9: Push("Category")
0xba: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xbb: Pop(1)
0xbc: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xbd: Pop(0)
0xbe: Push(Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc0: PushEmpty(int, int)
0xc1: Stack[-2] = Stack[-5]
0xc2: Stack[-1] = Stack[-9]
0xc3: Call2 0xaa

0xc4: Pop(2)
0xc5: Stack[-10] = Stack[-1]
0xc6: Return(); Pop(6)

0xc7: PushEmpty(object, object)
0xc8: Push((int) 45)
0xc9: Push((int) 2)
0xca: Push((int) 512127)
0xcb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: PushEmpty(bool, object, int)
0xce: Stack[-2] = Stack[-4]
0xcf: Stack[-1] = (int) 43
0xd0: Call2 0xe1

0xd1: Pop(3)
0xd2: Return(); Pop(2)

0xd3: Stack[-1] = 0
0xd4: PushEmpty(object, object)
0xd5: @ GetDiaryRoot(Stack[-1])
0xd6: Pop(0)
0xd7: Pop(0); Push((bool) Stack[-1] == 0)
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: Push("Can't retrieve diary root")
0xda: @ Trace(Stack[-1])
0xdb: Pop(1)
0xdc: Stack[-3] = (bool) 0
0xdd: Return(); Pop(2)

0xde: Stack[-3] = Stack[-1]
0xdf: Return(); Pop(2)

0xe0: Stack[-1] = 0
0xe1: PushEmpty(object, object, int, object, object, int)
0xe2: PushEmpty(object)
0xe3: Call2 0xd4

0xe4: Stack[-4] = Stack[-1]
0xe5: Pop(1)
0xe6: @@ Find(Stack[-7], Stack[-2])
0xe7: Pop(0)
0xe8: Pop(0); Push((bool) Stack[-2] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xea: Push("Can't find diary parent with id: ")
0xeb: Pop(1); Push(Stack[-1] + Stack[-8]);
0xec: @ Trace(Stack[-1])
0xed: Pop(1)
0xee: Stack[-9] = (bool) 0
0xef: Return(); Pop(6)

0xf0: @@ AddChild(Stack[-8])
0xf1: Pop(0)
0xf2: Push((int) 7)
0xf3: @ SendWorldWndMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ GetCategory(Stack[-1])
0xf6: Pop(0)
0xf7: @ SetDiarySection(Stack[-1])
0xf8: Pop(0)
0xf9: Stack[-9] = (bool) 0
0xfa: Return(); Pop(6)

0xfb: Stack[-2] = 0
0xfc: Stack[-3] = 0
