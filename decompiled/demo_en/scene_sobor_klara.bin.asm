GlobalVarCount = 0

Strings:
	sobor_aglaja
	pt_Aglaja
	NPC_Aglaja
	NPC_Klara_Aglaja.xml
	pt_sobor_mask1
	pers_whitemask
	sobor_whitemask.xml
	pt_sobor_mask2
	quest_k12_01
	sobor_load
	quest_k5_04
	quest_k7_01
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
		EVENT_6 Op = 0x3b Vars = ()
		EVENT_26 Op = 0x52 Vars = (string)


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
0xc: Call2 0x63

0xd: Stack[-5] = Stack[-1]
0xe: Pop(1)
0xf: Stack[-3] = "pt_Aglaja"
0x10: Stack[-2] = "NPC_Aglaja"
0x11: Stack[-1] = "NPC_Klara_Aglaja.xml"
0x12: Call2 0x69

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x63

0x18: Stack[-5] = Stack[-1]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_sobor_mask1"
0x1b: Stack[-2] = "pers_whitemask"
0x1c: Stack[-1] = "sobor_whitemask.xml"
0x1d: Call2 0x69

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(object, object, string, string, string)
0x21: PushEmpty(object)
0x22: Call2 0x63

0x23: Stack[-5] = Stack[-1]
0x24: Pop(1)
0x25: Stack[-3] = "pt_sobor_mask2"
0x26: Stack[-2] = "pers_whitemask"
0x27: Stack[-1] = "sobor_whitemask.xml"
0x28: Call2 0x69

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(bool, string, string)
0x2c: Stack[-2] = "quest_k12_01"
0x2d: Stack[-1] = "sobor_load"
0x2e: Call2 0x7b

0x2f: Pop(3)
0x30: PushEmpty(bool, string, string)
0x31: Stack[-2] = "quest_k5_04"
0x32: Stack[-1] = "sobor_load"
0x33: Call2 0x7b

0x34: Pop(3)
0x35: PushEmpty(bool, string, string)
0x36: Stack[-2] = "quest_k7_01"
0x37: Stack[-1] = "sobor_load"
0x38: Call2 0x7b

0x39: Pop(3)
0x3a: Return(); Pop(2)

0x3b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: @ RemoveActor(Stack[-0])
0x3e: Pop(0)
0x3f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x40: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x41: @ RemoveActor(Stack[-1])
0x42: Pop(0)
0x43: Push( Stack[2 + Tasks[-1].StackPointer] )
0x44: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x45: @ RemoveActor(Stack[-2])
0x46: Pop(0)
0x47: PushEmpty(bool, string, string)
0x48: Stack[-2] = "quest_k12_01"
0x49: Stack[-1] = "sobor_unload"
0x4a: Call2 0x7b

0x4b: Pop(3)
0x4c: PushEmpty(bool, string, string)
0x4d: Stack[-2] = "quest_k5_04"
0x4e: Stack[-1] = "sobor_unload"
0x4f: Call2 0x7b

0x50: Pop(3)
0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: Push("noaglaja")
0x54: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x56: Push("sobor_aglaja")
0x57: Push((int) 0)
0x58: @ SetVariable(Stack[-2], Stack[-1])
0x59: Pop(2)
0x5a: GOTO 0x62

0x5b: Push("aglaja")
0x5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5e: Push("sobor_aglaja")
0x5f: Push((int) 1)
0x60: @ SetVariable(Stack[-2], Stack[-1])
0x61: Pop(2)
0x62: Return(); Pop(0)

0x63: PushEmpty(object, object)
0x64: @ self(Stack[-1])
0x65: Pop(0)
0x66: Stack[-3] = Stack[-1]
0x67: Return(); Pop(2)

0x68: Stack[-1] = 0
0x69: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x6a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x6b: Pop(0)
0x6c: Pop(0); Push((bool) Stack[-4] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x6e: Push("Locator ")
0x6f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x70: Push(" doesn't exist")
0x71: Pop(2); Push(Stack[-2] + Stack[-1]);
0x72: @ Trace(Stack[-1])
0x73: Pop(1)
0x74: Stack[-1] = 0
0x75: GOTO 0x78

0x76: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x77: Pop(0)
0x78: Stack[-13] = Stack[-1]
0x79: Return(); Pop(8)

0x7a: Stack[-1] = 0
0x7b: PushEmpty(object, object)
0x7c: @ FindActor(Stack[-1], Stack[-4])
0x7d: Pop(0)
0x7e: Pop(0); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x80: Stack[-5] = (bool) 0
0x81: Return(); Pop(2)

0x82: @ Trigger(Stack[-1], Stack[-3])
0x83: Pop(0)
0x84: Stack[-5] = (bool) 1
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
