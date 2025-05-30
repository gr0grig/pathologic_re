GlobalVarCount = 0

Strings:
	sobor_aglaja
	pt_Aglaja
	NPC_Aglaja
	NPC_Burah_Aglaja.xml
	pt_sobor_mask1
	pers_whitemask
	sobor_whitemask.xml
	pt_sobor_mask2
	quest_b12_01
	sobor_load
	sobor_unload
	noaglaja
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	SetVariable (2 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_5 Op = 0x4 Vars = ()
		EVENT_6 Op = 0x31 Vars = ()
		EVENT_26 Op = 0x43 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(int, int)
0x5: Push("sobor_aglaja")
0x6: @ GetVariable(Stack[-1], Stack[-2])
0x7: Pop(1)
0x8: Push(Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0xa: PushEmpty(object, object, string, string, string)
0xb: PushEmpty(object)
0xc: Call2 0x54

0xd: Stack[-5] = Stack[-1]
0xe: Pop(1)
0xf: Stack[-3] = "pt_Aglaja"
0x10: Stack[-2] = "NPC_Aglaja"
0x11: Stack[-1] = "NPC_Burah_Aglaja.xml"
0x12: Call2 0x5a

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x54

0x18: Stack[-5] = Stack[-1]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_sobor_mask1"
0x1b: Stack[-2] = "pers_whitemask"
0x1c: Stack[-1] = "sobor_whitemask.xml"
0x1d: Call2 0x5a

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(object, object, string, string, string)
0x21: PushEmpty(object)
0x22: Call2 0x54

0x23: Stack[-5] = Stack[-1]
0x24: Pop(1)
0x25: Stack[-3] = "pt_sobor_mask2"
0x26: Stack[-2] = "pers_whitemask"
0x27: Stack[-1] = "sobor_whitemask.xml"
0x28: Call2 0x5a

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(bool, string, string)
0x2c: Stack[-2] = "quest_b12_01"
0x2d: Stack[-1] = "sobor_load"
0x2e: Call2 0x6c

0x2f: Pop(3)
0x30: Return(); Pop(2)

0x31: Push( Stack[0 + Tasks[-1].StackPointer] )
0x32: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x33: @ RemoveActor(Stack[-0])
0x34: Pop(0)
0x35: Push( Stack[1 + Tasks[-1].StackPointer] )
0x36: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x37: @ RemoveActor(Stack[-1])
0x38: Pop(0)
0x39: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3a: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3b: @ RemoveActor(Stack[-2])
0x3c: Pop(0)
0x3d: PushEmpty(bool, string, string)
0x3e: Stack[-2] = "quest_b12_01"
0x3f: Stack[-1] = "sobor_unload"
0x40: Call2 0x6c

0x41: Pop(3)
0x42: Return(); Pop(0)

0x43: PushEmpty()
0x44: Push("noaglaja")
0x45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: Push("sobor_aglaja")
0x48: Push((int) 0)
0x49: @ SetVariable(Stack[-2], Stack[-1])
0x4a: Pop(2)
0x4b: GOTO 0x53

0x4c: Push("aglaja")
0x4d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: Push("sobor_aglaja")
0x50: Push((int) 1)
0x51: @ SetVariable(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: Return(); Pop(0)

0x54: PushEmpty(object, object)
0x55: @ self(Stack[-1])
0x56: Pop(0)
0x57: Stack[-3] = Stack[-1]
0x58: Return(); Pop(2)

0x59: Stack[-1] = 0
0x5a: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x5b: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x5c: Pop(0)
0x5d: Pop(0); Push((bool) Stack[-4] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x5f: Push("Locator ")
0x60: Pop(1); Push(Stack[-1] + Stack[-12]);
0x61: Push(" doesn't exist")
0x62: Pop(2); Push(Stack[-2] + Stack[-1]);
0x63: @ Trace(Stack[-1])
0x64: Pop(1)
0x65: Stack[-1] = 0
0x66: GOTO 0x69

0x67: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x68: Pop(0)
0x69: Stack[-13] = Stack[-1]
0x6a: Return(); Pop(8)

0x6b: Stack[-1] = 0
0x6c: PushEmpty(object, object)
0x6d: @ FindActor(Stack[-1], Stack[-4])
0x6e: Pop(0)
0x6f: Pop(0); Push((bool) Stack[-1] == 0)
0x70: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x71: Stack[-5] = (bool) 0
0x72: Return(); Pop(2)

0x73: @ Trigger(Stack[-1], Stack[-3])
0x74: Pop(0)
0x75: Stack[-5] = (bool) 1
0x76: Return(); Pop(2)

0x77: Stack[-1] = 0
