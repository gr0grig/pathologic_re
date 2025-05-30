GlobalVarCount = 0

Strings:
	pt_Danko
	NPC_Bakalavr
	NPC_Klara_Danko.xml
	pt_eva
	NPC_Eva
	NPC_Klara_Eva.xml
	quest_k6_01
	cot_eva_load
	quest_k7_01
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
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, object, object) Params = 0
		EVENT_5 Op = 0x6 Vars = ()
		EVENT_6 Op = 0x2b Vars = ()
		EVENT_26 Op = 0x34 Vars = (string)


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
0xa: Call2 0x49

0xb: Stack[-5] = Stack[-1]
0xc: Pop(1)
0xd: Stack[-3] = "pt_Danko"
0xe: Stack[-2] = "NPC_Bakalavr"
0xf: Stack[-1] = "NPC_Klara_Danko.xml"
0x10: Call2 0x4f

0x11: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: Push( Stack[1 + Tasks[-1].StackPointer] )
0x14: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x49

0x18: Stack[-5] = Stack[-1]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_eva"
0x1b: Stack[-2] = "NPC_Eva"
0x1c: Stack[-1] = "NPC_Klara_Eva.xml"
0x1d: Call2 0x4f

0x1e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(bool, string, string)
0x21: Stack[-2] = "quest_k6_01"
0x22: Stack[-1] = "cot_eva_load"
0x23: Call2 0x61

0x24: Pop(3)
0x25: PushEmpty(bool, string, string)
0x26: Stack[-2] = "quest_k7_01"
0x27: Stack[-1] = "cot_eva_load"
0x28: Call2 0x61

0x29: Pop(3)
0x2a: Return(); Pop(0)

0x2b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: @ RemoveActor(Stack[-2])
0x2e: Pop(0)
0x2f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: @ RemoveActor(Stack[-3])
0x32: Pop(0)
0x33: Return(); Pop(0)

0x34: PushEmpty()
0x35: Push("nodanko")
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x39: GOTO 0x48

0x3a: Push("danko")
0x3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3e: GOTO 0x48

0x3f: Push("noeva")
0x40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x43: GOTO 0x48

0x44: Push("eva")
0x45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x48: Return(); Pop(0)

0x49: PushEmpty(object, object)
0x4a: @ self(Stack[-1])
0x4b: Pop(0)
0x4c: Stack[-3] = Stack[-1]
0x4d: Return(); Pop(2)

0x4e: Stack[-1] = 0
0x4f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x50: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[-4] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x54: Push("Locator ")
0x55: Pop(1); Push(Stack[-1] + Stack[-12]);
0x56: Push(" doesn't exist")
0x57: Pop(2); Push(Stack[-2] + Stack[-1]);
0x58: @ Trace(Stack[-1])
0x59: Pop(1)
0x5a: Stack[-1] = 0
0x5b: GOTO 0x5e

0x5c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x5d: Pop(0)
0x5e: Stack[-13] = Stack[-1]
0x5f: Return(); Pop(8)

0x60: Stack[-1] = 0
0x61: PushEmpty(object, object)
0x62: @ FindActor(Stack[-1], Stack[-4])
0x63: Pop(0)
0x64: Pop(0); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x66: Stack[-5] = (bool) 0
0x67: Return(); Pop(2)

0x68: @ Trigger(Stack[-1], Stack[-3])
0x69: Pop(0)
0x6a: Stack[-5] = (bool) 1
0x6b: Return(); Pop(2)

0x6c: Stack[-1] = 0
