GlobalVarCount = 0

Strings:
	playsound
	meshok_drop
	IsOnGround
	undisposable
	HasProperty
	GetProperty
	nouse_container

Import:
	TriggerWorld (2 args)
	SetVisibility (1 args)
	Sleep (2 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	StopGroup0 (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetItemCount (1 args)
	GetItem (2 args)
	self (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1e Vars = (object)
		EVENT_33 Op = 0x37 Vars = (object, int, int, int)
		EVENT_34 Op = 0x3c Vars = (object, int, int, int)
		EVENT_6 Op = 0x4b Vars = ()


0x0: PushEmpty(bool, bool, bool, bool)
0x1: Push("playsound")
0x2: Push("meshok_drop")
0x3: @ TriggerWorld(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push((bool) 1)
0x6: @ SetVisibility(Stack[-1])
0x7: Pop(1)
0x8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x9: Push((float)900.0)
0xa: @ Sleep(Stack[-1], Stack[-3])
0xb: Pop(1)
0xc: Pop(0); Push((bool) Stack[-2] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: GOTO 0x9

0xf: @ IsLoaded(Stack[-1])
0x10: Pop(0)
0x11: Pop(0); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x13: PushEmpty(object)
0x14: Call2 0x6d

0x15: Pop(0)
0x16: @ RemoveActor(Stack[-1])
0x17: Pop(1)
0x18: Return(); Pop(4)

0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a: @ Hold()
0x1b: Pop(0)
0x1c: GOTO 0x8

0x1d: Return(); Pop(4)

0x1e: PushEmpty(bool, bool, bool, bool)
0x1f: PushEmpty()
0x20: Call2 0x6a

0x21: Pop(0)
0x22: PushEmpty(bool)
0x23: Call2 0x73

0x24: Pop(0)
0x25: Pop(1); Push((bool) Stack[-1] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Return(); Pop(4)

0x28: @ StopGroup0()
0x29: Pop(0)
0x2a: @@ IsOnGround(Stack[-2])
0x2b: Pop(0)
0x2c: Push(Stack[-2])
0x2d: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2e: EventDisable(0)
0x2f: @ IsOverrideActive(Stack[-1])
0x30: Pop(0)
0x31: Pop(0); Push((bool) Stack[-1] == 0)
0x32: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x33: @ Barter(Stack[-5])
0x34: Pop(0)
0x35: EventEnable(0)
0x36: Return(); Pop(4)

0x37: PushEmpty()
0x38: PushEmpty()
0x39: Call2 0x6a

0x3a: Pop(0)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(bool, bool)
0x3d: @ GetItemCount(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x41: PushEmpty(object)
0x42: Call2 0x6d

0x43: Pop(0)
0x44: @ RemoveActor(Stack[-1])
0x45: Pop(1)
0x46: GOTO 0x4a

0x47: PushEmpty()
0x48: Call2 0x6a

0x49: Pop(0)
0x4a: Return(); Pop(2)

0x4b: PushEmpty(int, int, object, bool, bool, int, int, object, bool, bool)
0x4c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4d: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x4e: @ GetItemCount(Stack[-5])
0x4f: Pop(0)
0x50: Stack[-4] = (int) 0
0x51: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x52: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x53: @ GetItem(Stack[-3], Stack[-4])
0x54: Pop(0)
0x55: Push("undisposable")
0x56: @@ HasProperty(Stack[-3], Stack[-1])
0x57: Pop(1)
0x58: Push(Stack[-2])
0x59: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5a: Push("undisposable")
0x5b: @@ GetProperty(Stack[-2], Stack[-1])
0x5c: Pop(1)
0x5d: Push(Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Return(); Pop(10)

0x60: Stack[-3] = 0
0x61: Push((int) 1)
0x62: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x63: GOTO 0x51

0x64: PushEmpty(object)
0x65: Call2 0x6d

0x66: Pop(0)
0x67: @ RemoveActor(Stack[-1])
0x68: Pop(1)
0x69: Return(); Pop(10)

0x6a: @ StopGroup0()
0x6b: Pop(0)
0x6c: Return(); Pop(0)

0x6d: PushEmpty(object, object)
0x6e: @ self(Stack[-1])
0x6f: Pop(0)
0x70: Stack[-3] = Stack[-1]
0x71: Return(); Pop(2)

0x72: Stack[-1] = 0
0x73: PushEmpty(int, int)
0x74: Push("nouse_container")
0x75: @ GetVariable(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Stack[-3] = !Stack[-1]; Pop(0);
0x78: Return(); Pop(2)

