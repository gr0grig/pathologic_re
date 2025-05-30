GlobalVarCount = 0

Strings:
	cleanup
	quest_d10_01
	soldier_fight
	object
	Enable
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetItemID
	Category
	AddItem

Import:
	RemoveActor (1 args)
	IsLoaded (1 args)
	FindGeometry (2 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	SetDeathStateAndRemove (0 args)
	GetScene (1 args)
	self (1 args)
	GetInvItemProperty (3 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_6 Op = 0x1c Vars = ()
		EVENT_0 Op = 0x33 Vars = (object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: PushEmpty()
0x2: Call 0x27

0x3: Pop(0)
0x4: Return(); Pop(0)

0x5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x7: PushEmpty(object)
0x8: Call 0x9d

0x9: Pop(0)
0xa: @ RemoveActor(Stack[-1])
0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool, bool)
0xe: Push("cleanup")
0xf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x11: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x12: @ IsLoaded(Stack[-1])
0x13: Pop(0)
0x14: Pop(0); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: PushEmpty(object)
0x17: Call 0x9d

0x18: Pop(0)
0x19: @ RemoveActor(Stack[-1])
0x1a: Pop(1)
0x1b: Return(); Pop(2)

0x1c: PushEmpty()
0x1d: Call 0x5

0x1e: Pop(0)
0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: PushEmpty(bool, string, string)
0x22: Stack[-2] = "quest_d10_01"
0x23: Stack[-1] = "soldier_fight"
0x24: Call 0xad

0x25: Pop(3)
0x26: Return(); Pop(0)

0x27: PushEmpty(object, object)
0x28: Push("object")
0x29: @ FindGeometry(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((bool) 1)
0x2c: @@ Enable(Stack[-1])
0x2d: Pop(1)
0x2e: @ Hold()
0x2f: Pop(0)
0x30: GOTO 0x2e

0x31: Return(); Pop(2)

0x32: Stack[-1] = 0
0x33: PushEmpty(object, int, object, int)
0x34: PushEmpty(bool, object)
0x35: Stack[-1] = Stack[-7]
0x36: Call 0x85

0x37: Pop(1)
0x38: Pop(1); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x3a: Return(); Pop(4)

0x3b: Push((int) 0)
0x3c: @ GetItem(Stack[-3], Stack[-1])
0x3d: Pop(1)
0x3e: Push((int) 0)
0x3f: @ GetItemAmount(Stack[-2], Stack[-1])
0x40: Pop(1)
0x41: PushEmpty(bool, object, object, int)
0x42: Stack[-3] = Stack[-9]
0x43: Stack[-2] = Stack[-6]
0x44: Stack[-1] = Stack[-5]
0x45: Call 0xa3

0x46: Pop(3)
0x47: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x48: PushEmpty(object)
0x49: Stack[-1] = Stack[-6]
0x4a: Call 0x20

0x4b: Pop(1)
0x4c: @ SetDeathStateAndRemove()
0x4d: Pop(0)
0x4e: Return(); Pop(4)

0x4f: Stack[-2] = 0
0x50: PushEmpty(bool, bool)
0x51: Push("HasProperty")
0x52: Push((int) 2)
0x53: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: Stack[-5] = (bool) 0
0x57: Return(); Pop(2)

0x58: @@ HasProperty(Stack[-3], Stack[-1])
0x59: Pop(0)
0x5a: Stack[-5] = Stack[-1]
0x5b: Return(); Pop(2)

0x5c: PushEmpty(bool, bool)
0x5d: @@ IsDead(Stack[-1])
0x5e: Pop(0)
0x5f: Stack[-4] = Stack[-1]
0x60: Return(); Pop(2)

0x61: PushEmpty(object, object, object, object)
0x62: Pop(0); Push((bool) Stack[-5] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: Stack[-6] = (bool) 0
0x65: Return(); Pop(4)

0x66: PushEmpty(bool)
0x67: Stack[-1] = (bool) 0
0x68: Push("IsDead")
0x69: Push((int) 1)
0x6a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[-8]
0x6e: Call 0x5c

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x73: Stack[-6] = (bool) 0
0x74: Return(); Pop(4)

0x75: @ GetScene(Stack[-2])
0x76: Pop(0)
0x77: Pop(0); Push((bool) Stack[-2] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-6] = (bool) 0
0x7a: Return(); Pop(4)

0x7b: @@ GetScene(Stack[-1])
0x7c: Pop(0)
0x7d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7f: Stack[-6] = (bool) 0
0x80: Return(); Pop(4)

0x81: Stack[-6] = (bool) 1
0x82: Return(); Pop(4)

0x83: Stack[-1] = 0
0x84: Stack[-2] = 0
0x85: PushEmpty(int, int)
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[-5]
0x88: Call 0x61

0x89: Pop(1)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8c: Stack[-4] = (bool) 0
0x8d: Return(); Pop(2)

0x8e: PushEmpty(bool, object, string)
0x8f: Stack[-2] = Stack[-6]
0x90: Stack[-1] = "noaccess"
0x91: Call 0x50

0x92: Pop(2)
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-4] = (bool) 1
0x96: Return(); Pop(2)

0x97: Push("noaccess")
0x98: @@ GetProperty(Stack[-1], Stack[-2])
0x99: Pop(1)
0x9a: Push((int) 0)
0x9b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x9c: Return(); Pop(2)

0x9d: PushEmpty(object, object)
0x9e: @ self(Stack[-1])
0x9f: Pop(0)
0xa0: Stack[-3] = Stack[-1]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(int, int, bool, int, int, bool)
0xa4: @@ GetItemID(Stack[-3])
0xa5: Pop(0)
0xa6: Push("Category")
0xa7: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xa8: Pop(1)
0xa9: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xaa: Pop(0)
0xab: Stack[-10] = Stack[-1]
0xac: Return(); Pop(6)

0xad: PushEmpty(object, object)
0xae: @ FindActor(Stack[-1], Stack[-4])
0xaf: Pop(0)
0xb0: Pop(0); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb2: Stack[-5] = (bool) 0
0xb3: Return(); Pop(2)

0xb4: @ Trigger(Stack[-1], Stack[-3])
0xb5: Pop(0)
0xb6: Stack[-5] = (bool) 1
0xb7: Return(); Pop(2)

0xb8: Stack[-1] = 0
