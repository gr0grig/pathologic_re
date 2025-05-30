GlobalVarCount = 0

Strings:
	size
	get
	clear
	enabled
	alpha_pills
	SetItemName
	add
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	AddItem (3 args)
	HasProperty (2 args)
	GetProperty (2 args)
	CreateInvItem (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_9 Op = 0x21 Vars = (int, float)
		EVENT_5 Op = 0x28 Vars = ()
		EVENT_0 Op = 0x55 Vars = (object)


0x0: PushEmpty(object)
0x1: Call 0x69

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ SetVisibility(Stack[-1])
0x6: Pop(1)
0x7: PushEmpty()
0x8: Call 0xe

0x9: Pop(0)
0xa: PushEmpty()
0xb: Call 0x51

0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty(float, int, float, int)
0xf: @ GetGameTime(Stack[-2])
0x10: Pop(0)
0x11: PushEmpty(int)
0x12: Push((int) 24)
0x13: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x14: Push((int) 1)
0x15: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x16: Push((int) 12)
0x17: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x19: Push((int) 24)
0x1a: Pop(1); Push(Stack[-2] * Stack[-1]);
0x1b: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1c: Pop(1)
0x1d: Push((int) 1)
0x1e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1f: GOTO 0x16

0x20: Return(); Pop(4)

0x21: PushEmpty()
0x22: PushEmpty(int)
0x23: Push((int) 1)
0x24: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x25: Call 0x3d

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty(int, int, object, bool, int, int, object, bool)
0x29: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: Return(); Pop(8)

0x2c: @@ size(Stack[-4])
0x2d: Pop(0)
0x2e: Stack[-3] = (int) 0
0x2f: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x30: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x31: @@ get(Stack[-2], Stack[-3])
0x32: Pop(0)
0x33: Push((int) 0)
0x34: @ AddItem(Stack[-2], Stack[-3], Stack[-1])
0x35: Pop(1)
0x36: Stack[-2] = 0
0x37: Push((int) 1)
0x38: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x39: GOTO 0x2f

0x3a: @@ clear()
0x3b: Pop(0)
0x3c: Return(); Pop(8)

0x3d: PushEmpty(bool, bool, object, bool, bool, object)
0x3e: Push("enabled")
0x3f: @ HasProperty(Stack[-1], Stack[-4])
0x40: Pop(1)
0x41: Push(Stack[-3])
0x42: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x43: Push("enabled")
0x44: @ GetProperty(Stack[-1], Stack[-3])
0x45: Pop(1)
0x46: Push(Stack[-2])
0x47: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x48: @ CreateInvItem(Stack[-1])
0x49: Pop(0)
0x4a: Push("alpha_pills")
0x4b: @@ SetItemName(Stack[-1])
0x4c: Pop(1)
0x4d: @@ add(Stack[-1])
0x4e: Pop(0)
0x4f: Stack[-1] = 0
0x50: Return(); Pop(6)

0x51: @ Hold()
0x52: Pop(0)
0x53: GOTO 0x51

0x54: Return(); Pop(0)

0x55: PushEmpty(bool, bool, bool, bool)
0x56: PushEmpty(bool)
0x57: Call 0x6f

0x58: Pop(0)
0x59: Pop(1); Push((bool) Stack[-1] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Return(); Pop(4)

0x5c: @@ IsOnGround(Stack[-2])
0x5d: Pop(0)
0x5e: Push(Stack[-2])
0x5f: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x60: EventDisable(0)
0x61: @ IsOverrideActive(Stack[-1])
0x62: Pop(0)
0x63: Pop(0); Push((bool) Stack[-1] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x65: @ Barter(Stack[-5])
0x66: Pop(0)
0x67: EventEnable(0)
0x68: Return(); Pop(4)

0x69: PushEmpty(object, object)
0x6a: @ CreateObjectVector(Stack[-1])
0x6b: Pop(0)
0x6c: Stack[-3] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: Stack[-1] = 0
0x6f: PushEmpty(int, int)
0x70: Push("nouse_container")
0x71: @ GetVariable(Stack[-1], Stack[-2])
0x72: Pop(1)
0x73: Stack[-3] = !Stack[-1]; Pop(0);
0x74: Return(); Pop(2)

