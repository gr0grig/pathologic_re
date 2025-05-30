GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	all
	ill
	b10q04_bull_envelope
	cleanup
	restore

Import:
	Hold (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	GetScene (1 args)
	AddActor (5 args)
	StopAnimation (0 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_6 Op = 0x22 Vars = ()
		EVENT_5 Op = 0x2e Vars = ()
		EVENT_26 Op = 0x31 Vars = (string)

Events:
EVENT_32 Op = 0x50 Vars = ()

0x0: PushEmpty(bool)
0x1: Call2 0x45

0x2: Pop(0)
0x3: Pop(1); Push((bool) Stack[-1] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x5: @ Hold()
0x6: Pop(0)
0x7: PushEmpty()
0x8: Call2 0x14

0x9: Pop(0)
0xa: Push((bool) 1)
0xb: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xc: Push("all")
0xd: Push("ill")
0xe: @ PlayAnimation(Stack[-2], Stack[-1])
0xf: Pop(2)
0x10: @ WaitForAnimEnd()
0x11: Pop(0)
0x12: GOTO 0xa

0x13: Return(); Pop(0)

0x14: PushEmpty(object, object, object, object)
0x15: @ GetScene(Stack[-2])
0x16: Pop(0)
0x17: Push("b10q04_bull_envelope")
0x18: Push(CVector(0.0, 0.0, 0.0))
0x19: Push(CVector(0.0, 0.0, 1.0))
0x1a: @ AddActor(Stack[-4], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1b: Pop(3)
0x1c: Push(GlobalVars[0])
0x1d: Stack[-1] = Stack[-2]
0x1e: GlobalVars[0] = Stack[-1]; Pop(1)
0x1f: Return(); Pop(4)

0x20: Stack[-1] = 0
0x21: Stack[-2] = 0
0x22: @ StopAnimation()
0x23: Pop(0)
0x24: Push( Stack[0 + Tasks[-1].StackPointer] )
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: PushEmpty(object)
0x27: Call2 0x4a

0x28: Pop(0)
0x29: @ RemoveActor(Stack[-1])
0x2a: Pop(1)
0x2b: @ Hold()
0x2c: Pop(0)
0x2d: Return(); Pop(0)

0x2e: @ StopGroup0()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(bool, bool)
0x32: Push("cleanup")
0x33: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x35: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x36: @ IsLoaded(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(object)
0x3b: Call2 0x4a

0x3c: Pop(0)
0x3d: @ RemoveActor(Stack[-1])
0x3e: Pop(1)
0x3f: GOTO 0x44

0x40: Push("restore")
0x41: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x44: Return(); Pop(2)

0x45: PushEmpty(bool, bool)
0x46: @ IsLoaded(Stack[-1])
0x47: Pop(0)
0x48: Stack[-3] = Stack[-1]
0x49: Return(); Pop(2)

0x4a: PushEmpty(object, object)
0x4b: @ self(Stack[-1])
0x4c: Pop(0)
0x4d: Stack[-3] = Stack[-1]
0x4e: Return(); Pop(2)

0x4f: Stack[-1] = 0
0x50: Push(GlobalVars[0])
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: Push(GlobalVars[0])
0x53: @ RemoveActor(Stack[-1])
0x54: Pop(1)
0x55: Return(); Pop(0)

