GlobalVarCount = 0

Strings:
	quest_d11_02
	uprava_load
	pt_d11_klara
	NPC_Klara
	d11_klara.xml
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x4 Vars = ()
		EVENT_6 Op = 0x1a Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, string, string)
0x5: Stack[-2] = "quest_d11_02"
0x6: Stack[-1] = "uprava_load"
0x7: Call2 0x37

0x8: Pop(3)
0x9: PushEmpty(bool, int)
0xa: Stack[-1] = (int) 11
0xb: Call2 0x4c

0xc: Pop(1)
0xd: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0xe: PushEmpty(object, object, string, string, string)
0xf: PushEmpty(object)
0x10: Call2 0x1f

0x11: Stack[-5] = Stack[-1]
0x12: Pop(1)
0x13: Stack[-3] = "pt_d11_klara"
0x14: Stack[-2] = "NPC_Klara"
0x15: Stack[-1] = "d11_klara.xml"
0x16: Call2 0x25

0x17: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x18: Pop(5)
0x19: Return(); Pop(0)

0x1a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1b: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1c: @ RemoveActor(Stack[-0])
0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(object, object)
0x20: @ self(Stack[-1])
0x21: Pop(0)
0x22: Stack[-3] = Stack[-1]
0x23: Return(); Pop(2)

0x24: Stack[-1] = 0
0x25: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x26: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x27: Pop(0)
0x28: Pop(0); Push((bool) Stack[-4] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2a: Push("Locator ")
0x2b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x2c: Push(" doesn't exist")
0x2d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e: @ Trace(Stack[-1])
0x2f: Pop(1)
0x30: Stack[-1] = 0
0x31: GOTO 0x34

0x32: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x33: Pop(0)
0x34: Stack[-13] = Stack[-1]
0x35: Return(); Pop(8)

0x36: Stack[-1] = 0
0x37: PushEmpty(object, object)
0x38: @ FindActor(Stack[-1], Stack[-4])
0x39: Pop(0)
0x3a: Pop(0); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3c: Stack[-5] = (bool) 0
0x3d: Return(); Pop(2)

0x3e: @ Trigger(Stack[-1], Stack[-3])
0x3f: Pop(0)
0x40: Stack[-5] = (bool) 1
0x41: Return(); Pop(2)

0x42: Stack[-1] = 0
0x43: PushEmpty(float, float)
0x44: @ GetGameTime(Stack[-1])
0x45: Pop(0)
0x46: Push((int) 1)
0x47: PushEmpty(int)
0x48: Push((int) 24)
0x49: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4b: Return(); Pop(2)

0x4c: PushEmpty()
0x4d: PushEmpty(int)
0x4e: Call2 0x43

0x4f: Pop(0)
0x50: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x51: Return(); Pop(0)

