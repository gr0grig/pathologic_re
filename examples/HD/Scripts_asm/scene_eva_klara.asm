GlobalVarCount = 0

Strings:
	W:pt_Danko
	W:NPC_Bakalavr
	W:NPC_Klara_Danko.xml
	W:pt_eva
	W:NPC_Eva
	W:NPC_Klara_Eva.xml
	W:quest_k6_01
	W:cot_eva_load
	W:quest_k7_01
	W:nodanko
	W:noeva
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f00440061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000004e00500043005f004b006c006100720061005f00440061006e006b006f002e0078006d006c000000700074005f0065007600610000004e00500043005f0045007600610000004e00500043005f004b006c006100720061005f004500760061002e0078006d006c000000710075006500730074005f006b0036005f0030003100000063006f0074005f006500760061005f006c006f00610064000000710075006500730074005f006b0037005f003000310000006e006f00640061006e006b006f0000006e006f0065007600610000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

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

0xb: Stack[-1] = Stack[-5]
0xc: Pop(1)
0xd: Stack[-3] = "pt_Danko" // @poff=0
0xe: Stack[-2] = "NPC_Bakalavr" // @poff=18
0xf: Stack[-1] = "NPC_Klara_Danko.xml" // @poff=44
0x10: Call2 0x4f

0x11: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: Push( Stack[1 + Tasks[-1].StackPointer] )
0x14: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x49

0x18: Stack[-1] = Stack[-5]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_eva" // @poff=84
0x1b: Stack[-2] = "NPC_Eva" // @poff=98
0x1c: Stack[-1] = "NPC_Klara_Eva.xml" // @poff=114
0x1d: Call2 0x4f

0x1e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(bool, string, string)
0x21: Stack[-2] = "quest_k6_01" // @poff=150
0x22: Stack[-1] = "cot_eva_load" // @poff=174
0x23: Call2 0x61

0x24: Pop(3)
0x25: PushEmpty(bool, string, string)
0x26: Stack[-2] = "quest_k7_01" // @poff=200
0x27: Stack[-1] = "cot_eva_load" // @poff=174
0x28: Call2 0x61

0x29: Pop(3)
0x2a: Return(); Pop(0)

0x2b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: @ RemoveActor(Stack[-2]T)
0x2e: Pop(0)
0x2f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: @ RemoveActor(Stack[-3]T)
0x32: Pop(0)
0x33: Return(); Pop(0)

0x34: PushEmpty()
0x35: Push("nodanko") // @poff=224
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x39: GOTO 0x48

0x3a: Push("danko") // @poff=228
0x3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3e: GOTO 0x48

0x3f: Push("noeva") // @poff=240
0x40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x43: GOTO 0x48

0x44: Push("eva") // @poff=90
0x45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x48: Return(); Pop(0)

0x49: PushEmpty(object, object)
0x4a: @ self(Stack[-1])
0x4b: Pop(0)
0x4c: Stack[-1] = Stack[-3]
0x4d: Return(); Pop(2)

0x4e: Stack[-1] = 0
0x4f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x50: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=252
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[-4] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x54: Push("Locator ") // @poff=263
0x55: Pop(1); Push(Stack[-1] + Stack[-12]);
0x56: Push(" doesn't exist") // @poff=281
0x57: Pop(2); Push(Stack[-2] + Stack[-1]);
0x58: @ Trace(Stack[-1])
0x59: Pop(1)
0x5a: Stack[-1] = 0
0x5b: GOTO 0x5e

0x5c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x5d: Pop(0)
0x5e: Stack[-1] = Stack[-13]
0x5f: Return(); Pop(8)

0x60: Stack[-1] = 0
0x61: PushEmpty(object, object)
0x62: @ FindActor(Stack[-1], Stack[-4])
0x63: Pop(0)
0x64: Pop(0); PushNull((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x66: Stack[-5] = (bool) 0
0x67: Return(); Pop(2)

0x68: @ Trigger(Stack[-1], Stack[-3])
0x69: Pop(0)
0x6a: Stack[-5] = (bool) 1
0x6b: Return(); Pop(2)

0x6c: Stack[-1] = 0
