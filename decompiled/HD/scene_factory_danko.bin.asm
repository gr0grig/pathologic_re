GlobalVarCount = 0

Strings:
	pt_d11q03_Burah
	NPC_Burah
	d11q03_Burah.xml
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	GetGameTime (1 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 0
		EVENT_5 Op = 0x5 Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(float, float, float, float)
0x6: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x8: @ GetGameTime(Stack[-2])
0x9: Pop(0)
0xa: PushEmpty(bool)
0xb: Stack[-1] = (bool) 0
0xc: Push((int) 240)
0xd: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xf: Push((int) 264)
0x10: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: Stack[-1] = (bool) 1
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x2c

0x18: Stack[-5] = Stack[-1]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_d11q03_Burah"
0x1b: Stack[-2] = "NPC_Burah"
0x1c: Stack[-1] = "d11q03_Burah.xml"
0x1d: Call2 0x32

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: GOTO 0x2b

0x21: @ GetGameTime(Stack[-1])
0x22: Pop(0)
0x23: Push((int) 264)
0x24: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: Push( Stack[1 + Tasks[-1].StackPointer] )
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: @ RemoveActor(Stack[-1])
0x29: Pop(0)
0x2a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2b: Return(); Pop(4)

0x2c: PushEmpty(object, object)
0x2d: @ self(Stack[-1])
0x2e: Pop(0)
0x2f: Stack[-3] = Stack[-1]
0x30: Return(); Pop(2)

0x31: Stack[-1] = 0
0x32: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x33: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x34: Pop(0)
0x35: Pop(0); Push((bool) Stack[-4] == 0)
0x36: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x37: Push("Locator ")
0x38: Pop(1); Push(Stack[-1] + Stack[-12]);
0x39: Push(" doesn't exist")
0x3a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b: @ Trace(Stack[-1])
0x3c: Pop(1)
0x3d: Stack[-1] = 0
0x3e: GOTO 0x41

0x3f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x40: Pop(0)
0x41: Stack[-13] = Stack[-1]
0x42: Return(); Pop(8)

0x43: Stack[-1] = 0
