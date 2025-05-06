GlobalVarCount = 0

Strings:
	quest_d8_01
	termitnik_load
	pt_d11q04_Klara
	NPC_Klara
	d11q04_Klara.xml
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	GetGameTime (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_5 Op = 0x5 Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(float, float)
0x6: PushEmpty(bool, string, string)
0x7: Stack[-2] = "quest_d8_01"
0x8: Stack[-1] = "termitnik_load"
0x9: Call 0x36

0xa: Pop(3)
0xb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0xd: @ GetGameTime(Stack[-1])
0xe: Pop(0)
0xf: Push((int) 240)
0x10: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x12: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13: PushEmpty(object, object, string, string, string)
0x14: PushEmpty(object)
0x15: Call 0x1e

0x16: Stack[-5] = Stack[-1]
0x17: Pop(1)
0x18: Stack[-3] = "pt_d11q04_Klara"
0x19: Stack[-2] = "NPC_Klara"
0x1a: Stack[-1] = "d11q04_Klara.xml"
0x1b: Call 0x24

0x1c: Pop(5)
0x1d: Return(); Pop(2)

0x1e: PushEmpty(object, object)
0x1f: @ self(Stack[-1])
0x20: Pop(0)
0x21: Stack[-3] = Stack[-1]
0x22: Return(); Pop(2)

0x23: Stack[-1] = 0
0x24: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x25: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[-4] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x29: Push("Locator ")
0x2a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x2b: Push(" doesn't exist")
0x2c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d: @ Trace(Stack[-1])
0x2e: Pop(1)
0x2f: Stack[-1] = 0
0x30: GOTO 0x33

0x31: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x32: Pop(0)
0x33: Stack[-13] = Stack[-1]
0x34: Return(); Pop(8)

0x35: Stack[-1] = 0
0x36: PushEmpty(object, object)
0x37: @ FindActor(Stack[-1], Stack[-4])
0x38: Pop(0)
0x39: Pop(0); Push((bool) Stack[-1] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3b: Stack[-5] = (bool) 0
0x3c: Return(); Pop(2)

0x3d: @ Trigger(Stack[-1], Stack[-3])
0x3e: Pop(0)
0x3f: Stack[-5] = (bool) 1
0x40: Return(); Pop(2)

0x41: Stack[-1] = 0
