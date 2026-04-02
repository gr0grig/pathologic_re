GlobalVarCount = 0

Strings:
	W:sobor_aglaja
	W:pt_Aglaja
	W:NPC_Aglaja
	W:NPC_Klara_Aglaja.xml
	W:pt_sobor_mask1
	W:pers_whitemask
	W:sobor_whitemask.xml
	W:pt_sobor_mask2
	W:quest_k12_01
	W:sobor_load
	W:quest_k5_04
	W:sobor_unload
	W:noaglaja
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:73006f0062006f0072005f00610067006c0061006a0061000000700074005f00410067006c0061006a00610000004e00500043005f00410067006c0061006a00610000004e00500043005f004b006c006100720061005f00410067006c0061006a0061002e0078006d006c000000700074005f0073006f0062006f0072005f006d00610073006b003100000070006500720073005f00770068006900740065006d00610073006b00000073006f0062006f0072005f00770068006900740065006d00610073006b002e0078006d006c000000700074005f0073006f0062006f0072005f006d00610073006b0032000000710075006500730074005f006b00310032005f0030003100000073006f0062006f0072005f006c006f00610064000000710075006500730074005f006b0035005f0030003400000073006f0062006f0072005f0075006e006c006f006100640000006e006f00610067006c0061006a00610000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

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
		EVENT_6 Op = 0x36 Vars = ()
		EVENT_26 Op = 0x4d Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(int, int)
0x5: Push("sobor_aglaja") // @poff=0
0x6: @ GetVariable(Stack[-1], Stack[-2])
0x7: Pop(1)
0x8: Push(Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0xa: PushEmpty(object, object, string, string, string)
0xb: PushEmpty(object)
0xc: Call2 0x5e

0xd: Stack[-1] = Stack[-5]
0xe: Pop(1)
0xf: Stack[-3] = "pt_Aglaja" // @poff=26
0x10: Stack[-2] = "NPC_Aglaja" // @poff=46
0x11: Stack[-1] = "NPC_Klara_Aglaja.xml" // @poff=68
0x12: Call2 0x64

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: PushEmpty(object, object, string, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x5e

0x18: Stack[-1] = Stack[-5]
0x19: Pop(1)
0x1a: Stack[-3] = "pt_sobor_mask1" // @poff=110
0x1b: Stack[-2] = "pers_whitemask" // @poff=140
0x1c: Stack[-1] = "sobor_whitemask.xml" // @poff=170
0x1d: Call2 0x64

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(object, object, string, string, string)
0x21: PushEmpty(object)
0x22: Call2 0x5e

0x23: Stack[-1] = Stack[-5]
0x24: Pop(1)
0x25: Stack[-3] = "pt_sobor_mask2" // @poff=210
0x26: Stack[-2] = "pers_whitemask" // @poff=140
0x27: Stack[-1] = "sobor_whitemask.xml" // @poff=170
0x28: Call2 0x64

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(bool, string, string)
0x2c: Stack[-2] = "quest_k12_01" // @poff=240
0x2d: Stack[-1] = "sobor_load" // @poff=266
0x2e: Call2 0x76

0x2f: Pop(3)
0x30: PushEmpty(bool, string, string)
0x31: Stack[-2] = "quest_k5_04" // @poff=288
0x32: Stack[-1] = "sobor_load" // @poff=266
0x33: Call2 0x76

0x34: Pop(3)
0x35: Return(); Pop(2)

0x36: Push( Stack[0 + Tasks[-1].StackPointer] )
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: @ RemoveActor(Stack[-0]T)
0x39: Pop(0)
0x3a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3c: @ RemoveActor(Stack[-1]T)
0x3d: Pop(0)
0x3e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: @ RemoveActor(Stack[-2]T)
0x41: Pop(0)
0x42: PushEmpty(bool, string, string)
0x43: Stack[-2] = "quest_k12_01" // @poff=240
0x44: Stack[-1] = "sobor_unload" // @poff=312
0x45: Call2 0x76

0x46: Pop(3)
0x47: PushEmpty(bool, string, string)
0x48: Stack[-2] = "quest_k5_04" // @poff=288
0x49: Stack[-1] = "sobor_unload" // @poff=312
0x4a: Call2 0x76

0x4b: Pop(3)
0x4c: Return(); Pop(0)

0x4d: PushEmpty()
0x4e: Push("noaglaja") // @poff=338
0x4f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x51: Push("sobor_aglaja") // @poff=0
0x52: Push((int) 0)
0x53: @ SetVariable(Stack[-2], Stack[-1])
0x54: Pop(2)
0x55: GOTO 0x5d

0x56: Push("aglaja") // @poff=12
0x57: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x59: Push("sobor_aglaja") // @poff=0
0x5a: Push((int) 1)
0x5b: @ SetVariable(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: Return(); Pop(0)

0x5e: PushEmpty(object, object)
0x5f: @ self(Stack[-1])
0x60: Pop(0)
0x61: Stack[-1] = Stack[-3]
0x62: Return(); Pop(2)

0x63: Stack[-1] = 0
0x64: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x65: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=356
0x66: Pop(0)
0x67: Pop(0); Push((bool) Stack[-4] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x69: Push("Locator ") // @poff=367
0x6a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x6b: Push(" doesn't exist") // @poff=385
0x6c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d: @ Trace(Stack[-1])
0x6e: Pop(1)
0x6f: Stack[-1] = 0
0x70: GOTO 0x73

0x71: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x72: Pop(0)
0x73: Stack[-1] = Stack[-13]
0x74: Return(); Pop(8)

0x75: Stack[-1] = 0
0x76: PushEmpty(object, object)
0x77: @ FindActor(Stack[-1], Stack[-4])
0x78: Pop(0)
0x79: Pop(0); PushNull((bool) Stack[-1] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7b: Stack[-5] = (bool) 0
0x7c: Return(); Pop(2)

0x7d: @ Trigger(Stack[-1], Stack[-3])
0x7e: Pop(0)
0x7f: Stack[-5] = (bool) 1
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
