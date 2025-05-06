GlobalVarCount = 0

Strings:
	pt_Danko
	NPC_Bakalavr
	NPC_Burah_Danko.xml
	pt_eva
	NPC_Eva
	NPC_Burah_Eva.xml
	nodanko
	noeva
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, object, object) Params = 0
		EVENT_5 Op = 0x6 Vars = ()
		EVENT_6 Op = 0x21 Vars = ()
		EVENT_26 Op = 0x2a Vars = (string)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x2: @ Hold()
0x3: Pop(0)
0x4: GOTO 0x2

0x5: Return(); Pop(0)

0x6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x8: PushEmpty(object, object, string, string, string)
0x9: PushEmpty(object)
0xa: Call2 0x3f

0xb: Stack[-5] = Stack[-1]
0xc: Pop(1)
0xd: Stack[-3] = "pt_Danko"
0xe: Stack[-2] = "NPC_Bakalavr"
0xf: Stack[-1] = "NPC_Burah_Danko.xml"
0x10: Call2 0x45

0x11: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: Push( Stack[1 + Tasks[-1].StackPointer] )
0x14: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x3f

0x18: Stack[-5] = Stack[-1]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_eva"
0x1b: Stack[-2] = "NPC_Eva"
0x1c: Stack[-1] = "NPC_Burah_Eva.xml"
0x1d: Call2 0x45

0x1e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: Return(); Pop(0)

0x21: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x23: @ RemoveActor(Stack[-2])
0x24: Pop(0)
0x25: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x27: @ RemoveActor(Stack[-3])
0x28: Pop(0)
0x29: Return(); Pop(0)

0x2a: PushEmpty()
0x2b: Push("nodanko")
0x2c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2f: GOTO 0x3e

0x30: Push("danko")
0x31: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x33: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x34: GOTO 0x3e

0x35: Push("noeva")
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x39: GOTO 0x3e

0x3a: Push("eva")
0x3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3e: Return(); Pop(0)

0x3f: PushEmpty(object, object)
0x40: @ self(Stack[-1])
0x41: Pop(0)
0x42: Stack[-3] = Stack[-1]
0x43: Return(); Pop(2)

0x44: Stack[-1] = 0
0x45: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x46: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-4] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4a: Push("Locator ")
0x4b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x4c: Push(" doesn't exist")
0x4d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e: @ Trace(Stack[-1])
0x4f: Pop(1)
0x50: Stack[-1] = 0
0x51: GOTO 0x54

0x52: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x53: Pop(0)
0x54: Stack[-13] = Stack[-1]
0x55: Return(); Pop(8)

0x56: Stack[-1] = 0
