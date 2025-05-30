GlobalVarCount = 0

Strings:
	IsOnGround
	nouse_container
	branch
	SetItemName
	Organ
	SetProperty
	GetItemID
	liver
	kidney
	heart
	blood

Import:
	SetVisibility (1 args)
	SetTimeEvent (2 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	IsLoaded (1 args)
	self (1 args)
	GetVariable (2 args)
	CreateInvItem (1 args)
	AddItem (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_9 Op = 0xf Vars = (int, float)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x29 Vars = (object)


0x0: PushEmpty()
0x1: Call2 0x6b

0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetVisibility(Stack[-1])
0x5: Pop(1)
0x6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7: Push((int) 0)
0x8: Push((int) 24)
0x9: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: PushEmpty()
0xc: Call2 0x25

0xd: Pop(0)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: PushEmpty(bool)
0x11: Call2 0x43

0x12: Pop(0)
0x13: Pop(1); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x15: PushEmpty(object)
0x16: Call2 0x48

0x17: Pop(0)
0x18: @ RemoveActor(Stack[-1])
0x19: Pop(1)
0x1a: GOTO 0x1c

0x1b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c: Return(); Pop(0)

0x1d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1e: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1f: PushEmpty(object)
0x20: Call2 0x48

0x21: Pop(0)
0x22: @ RemoveActor(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(0)

0x25: @ Hold()
0x26: Pop(0)
0x27: GOTO 0x25

0x28: Return(); Pop(0)

0x29: PushEmpty(bool, bool, bool, bool)
0x2a: PushEmpty(bool)
0x2b: Stack[-1] = (bool) 1
0x2c: Pop(0); Push((bool) Stack[-6] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2e: PushEmpty(bool)
0x2f: Call2 0x4e

0x30: Pop(0)
0x31: Pop(1); Push((bool) Stack[-1] == 0)
0x32: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x33: Stack[-1] = (bool) 0
0x34: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x35: Return(); Pop(4)

0x36: @@ IsOnGround(Stack[-2])
0x37: Pop(0)
0x38: Push(Stack[-2])
0x39: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3a: EventDisable(0)
0x3b: @ IsOverrideActive(Stack[-1])
0x3c: Pop(0)
0x3d: Pop(0); Push((bool) Stack[-1] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: @ WorkWithCorpse(Stack[-5])
0x40: Pop(0)
0x41: EventEnable(0)
0x42: Return(); Pop(4)

0x43: PushEmpty(bool, bool)
0x44: @ IsLoaded(Stack[-1])
0x45: Pop(0)
0x46: Stack[-3] = Stack[-1]
0x47: Return(); Pop(2)

0x48: PushEmpty(object, object)
0x49: @ self(Stack[-1])
0x4a: Pop(0)
0x4b: Stack[-3] = Stack[-1]
0x4c: Return(); Pop(2)

0x4d: Stack[-1] = 0
0x4e: PushEmpty(int, int)
0x4f: Push("nouse_container")
0x50: @ GetVariable(Stack[-1], Stack[-2])
0x51: Pop(1)
0x52: Stack[-3] = !Stack[-1]; Pop(0);
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: Push("branch")
0x56: @ GetVariable(Stack[-1], Stack[-2])
0x57: Pop(1)
0x58: Stack[-3] = Stack[-1]
0x59: Return(); Pop(2)

0x5a: PushEmpty(object, int, bool, object, int, bool)
0x5b: @ CreateInvItem(Stack[-3])
0x5c: Pop(0)
0x5d: @@ SetItemName(Stack[-7])
0x5e: Pop(0)
0x5f: Push("Organ")
0x60: Push((int) 1)
0x61: @@ SetProperty(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: @@ GetItemID(Stack[-2])
0x64: Pop(0)
0x65: Push((int) 0)
0x66: Push((int) 1)
0x67: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: Return(); Pop(6)

0x6a: Stack[-3] = 0
0x6b: PushEmpty(int)
0x6c: Call2 0x54

0x6d: Pop(0)
0x6e: Push((int) 1)
0x6f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Return(); Pop(0)

0x72: PushEmpty(string)
0x73: Stack[-1] = "liver"
0x74: Call2 0x5a

0x75: Pop(1)
0x76: PushEmpty(string)
0x77: Stack[-1] = "kidney"
0x78: Call2 0x5a

0x79: Pop(1)
0x7a: PushEmpty(string)
0x7b: Stack[-1] = "heart"
0x7c: Call2 0x5a

0x7d: Pop(1)
0x7e: PushEmpty(string)
0x7f: Stack[-1] = "blood"
0x80: Call2 0x5a

0x81: Pop(1)
0x82: Return(); Pop(0)

