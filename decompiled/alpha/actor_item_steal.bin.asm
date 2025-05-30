GlobalVarCount = 0

Strings:
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
	GetScene (1 args)
	BroadcastSteal (2 args)
	FindGeometry (2 args)
	Hold (0 args)
	GetItem (2 args)
	GetItemAmount (2 args)
	SetDeathStateAndRemove (0 args)
	GetInvItemProperty (3 args)

RunOp = 0x9
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x15 Vars = (object)


0x0: PushEmpty(object, object)
0x1: Push(Stack[-3])
0x2: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x3: @ GetScene(Stack[-1])
0x4: Pop(0)
0x5: @ BroadcastSteal(Stack[-3], Stack[-1])
0x6: Pop(0)
0x7: Stack[-1] = 0
0x8: Return(); Pop(2)

0x9: PushEmpty(object, object)
0xa: Push("object")
0xb: @ FindGeometry(Stack[-1], Stack[-2])
0xc: Pop(1)
0xd: Push((bool) 1)
0xe: @@ Enable(Stack[-1])
0xf: Pop(1)
0x10: @ Hold()
0x11: Pop(0)
0x12: GOTO 0x10

0x13: Return(); Pop(2)

0x14: Stack[-1] = 0
0x15: PushEmpty(object, int, object, int)
0x16: PushEmpty(bool, object)
0x17: Stack[-1] = Stack[-7]
0x18: Call 0x67

0x19: Pop(1)
0x1a: Pop(1); Push((bool) Stack[-1] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1c: Return(); Pop(4)

0x1d: Push((int) 0)
0x1e: @ GetItem(Stack[-3], Stack[-1])
0x1f: Pop(1)
0x20: Push((int) 0)
0x21: @ GetItemAmount(Stack[-2], Stack[-1])
0x22: Pop(1)
0x23: PushEmpty(bool, object, object, int)
0x24: Stack[-3] = Stack[-9]
0x25: Stack[-2] = Stack[-6]
0x26: Stack[-1] = Stack[-5]
0x27: Call 0x7f

0x28: Pop(3)
0x29: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2a: PushEmpty(object)
0x2b: Stack[-1] = Stack[-6]
0x2c: Call 0x0

0x2d: Pop(1)
0x2e: @ SetDeathStateAndRemove()
0x2f: Pop(0)
0x30: Return(); Pop(4)

0x31: Stack[-2] = 0
0x32: PushEmpty(bool, bool)
0x33: Push("HasProperty")
0x34: Push((int) 2)
0x35: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x36: Pop(1); Push((bool) Stack[-1] == 0)
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[-5] = (bool) 0
0x39: Return(); Pop(2)

0x3a: @@ HasProperty(Stack[-3], Stack[-1])
0x3b: Pop(0)
0x3c: Stack[-5] = Stack[-1]
0x3d: Return(); Pop(2)

0x3e: PushEmpty(bool, bool)
0x3f: @@ IsDead(Stack[-1])
0x40: Pop(0)
0x41: Stack[-4] = Stack[-1]
0x42: Return(); Pop(2)

0x43: PushEmpty(object, object, object, object)
0x44: Pop(0); Push((bool) Stack[-5] == 0)
0x45: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x46: Stack[-6] = (bool) 0
0x47: Return(); Pop(4)

0x48: PushEmpty(bool)
0x49: Stack[-1] = (bool) 0
0x4a: Push("IsDead")
0x4b: Push((int) 1)
0x4c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[-8]
0x50: Call 0x3e

0x51: Pop(1)
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Stack[-1] = (bool) 1
0x54: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x55: Stack[-6] = (bool) 0
0x56: Return(); Pop(4)

0x57: @ GetScene(Stack[-2])
0x58: Pop(0)
0x59: Pop(0); Push((bool) Stack[-2] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Stack[-6] = (bool) 0
0x5c: Return(); Pop(4)

0x5d: @@ GetScene(Stack[-1])
0x5e: Pop(0)
0x5f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x61: Stack[-6] = (bool) 0
0x62: Return(); Pop(4)

0x63: Stack[-6] = (bool) 1
0x64: Return(); Pop(4)

0x65: Stack[-1] = 0
0x66: Stack[-2] = 0
0x67: PushEmpty(int, int)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[-5]
0x6a: Call 0x43

0x6b: Pop(1)
0x6c: Pop(1); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-4] = (bool) 0
0x6f: Return(); Pop(2)

0x70: PushEmpty(bool, object, string)
0x71: Stack[-2] = Stack[-6]
0x72: Stack[-1] = "noaccess"
0x73: Call 0x32

0x74: Pop(2)
0x75: Pop(1); Push((bool) Stack[-1] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-4] = (bool) 1
0x78: Return(); Pop(2)

0x79: Push("noaccess")
0x7a: @@ GetProperty(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: Push((int) 0)
0x7d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7e: Return(); Pop(2)

0x7f: PushEmpty(int, int, bool, int, int, bool)
0x80: @@ GetItemID(Stack[-3])
0x81: Pop(0)
0x82: Push("Category")
0x83: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x84: Pop(1)
0x85: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x86: Pop(0)
0x87: Stack[-10] = Stack[-1]
0x88: Return(); Pop(6)

