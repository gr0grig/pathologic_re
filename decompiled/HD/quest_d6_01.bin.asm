GlobalVarCount = 0

Strings:
	sobor@door1
	saburov_klara
	cot_katerina
	pt_d6q01_klara
	NPC_Klara
	d6q01_Klara.xml
	saburov_klara_remove
	cleanup
	eva_klara
	cot_eva
	eva_klara_remove
	albinos_klara
	pt_d6q03_albinos
	albinos_klara_remove
	d6q01
	fail
	completed
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "sobor@door1"
0x2: Stack[-1] = (bool) 0
0x3: Call2 0xb8

0x4: Pop(2)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, object, int, object, object, object, int)
0xa: @ Trace(Stack[-9])
0xb: Pop(0)
0xc: Push("saburov_klara")
0xd: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0xf: Push("cot_katerina")
0x10: @ GetSceneByName(Stack[-5], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-4] = Stack[-9]
0x14: Stack[-3] = "pt_d6q01_klara"
0x15: Stack[-2] = "NPC_Klara"
0x16: Stack[-1] = "d6q01_Klara.xml"
0x17: Call2 0xa6

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Stack[-4] = 0
0x1b: GOTO 0x73

0x1c: Push("saburov_klara_remove")
0x1d: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1f: Push("cleanup")
0x20: @ Trigger(Stack[-0], Stack[-1])
0x21: Pop(1)
0x22: GOTO 0x73

0x23: Push("eva_klara")
0x24: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x26: Push("cot_eva")
0x27: @ GetSceneByName(Stack[-4], Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-4] = Stack[-8]
0x2b: Stack[-3] = "pt_d6q01_klara"
0x2c: Stack[-2] = "NPC_Klara"
0x2d: Stack[-1] = "d6q01_Klara.xml"
0x2e: Call2 0xa6

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: Stack[-3] = 0
0x32: GOTO 0x73

0x33: Push("eva_klara_remove")
0x34: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x36: Push("cleanup")
0x37: @ Trigger(Stack[-1], Stack[-1])
0x38: Pop(1)
0x39: GOTO 0x73

0x3a: Push("albinos_klara")
0x3b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x3d: @ GetMainOutdoorScene(Stack[-2])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-7]
0x41: Stack[-3] = "pt_d6q03_albinos"
0x42: Stack[-2] = "NPC_Klara"
0x43: Stack[-1] = "d6q01_Klara.xml"
0x44: Call2 0xa6

0x45: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: Stack[-2] = 0
0x48: GOTO 0x73

0x49: Push("albinos_klara_remove")
0x4a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: Push("cleanup")
0x4f: @ Trigger(Stack[-2], Stack[-1])
0x50: Pop(1)
0x51: GOTO 0x73

0x52: Push("cleanup")
0x53: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x55: Push("d6q01")
0x56: @ GetVariable(Stack[-1], Stack[-2])
0x57: Pop(1)
0x58: Push((int) 1000)
0x59: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5b: PushEmpty()
0x5c: Call2 0x74

0x5d: Pop(0)
0x5e: GOTO 0x62

0x5f: PushEmpty()
0x60: Call2 0x84

0x61: Pop(0)
0x62: PushEmpty()
0x63: Call2 0x94

0x64: Pop(0)
0x65: GOTO 0x73

0x66: Push("fail")
0x67: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x69: PushEmpty()
0x6a: Call2 0x74

0x6b: Pop(0)
0x6c: GOTO 0x73

0x6d: Push("completed")
0x6e: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x70: PushEmpty()
0x71: Call2 0x7c

0x72: Pop(0)
0x73: Return(); Pop(8)

0x74: Push("d6q01")
0x75: Push((int) -1)
0x76: @ SetVariable(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: PushEmpty()
0x79: Call2 0x84

0x7a: Pop(0)
0x7b: Return(); Pop(0)

0x7c: Push("d6q01")
0x7d: Push((int) 1000)
0x7e: @ SetVariable(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: PushEmpty()
0x81: Call2 0x84

0x82: Pop(0)
0x83: Return(); Pop(0)

0x84: Push( Stack[0 + Tasks[-1].StackPointer] )
0x85: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x86: Push("cleanup")
0x87: @ Trigger(Stack[-0], Stack[-1])
0x88: Pop(1)
0x89: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8b: Push("cleanup")
0x8c: @ Trigger(Stack[-1], Stack[-1])
0x8d: Pop(1)
0x8e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x90: Push("cleanup")
0x91: @ Trigger(Stack[-2], Stack[-1])
0x92: Pop(1)
0x93: Return(); Pop(0)

0x94: EventDisable(26)
0x95: PushEmpty(string, bool)
0x96: Stack[-2] = "sobor@door1"
0x97: Stack[-1] = (bool) 1
0x98: Call2 0xb8

0x99: Pop(2)
0x9a: PushEmpty(object)
0x9b: Call2 0xa0

0x9c: Pop(0)
0x9d: @ RemoveActor(Stack[-1])
0x9e: Pop(1)
0x9f: Return(); Pop(0)

0xa0: PushEmpty(object, object)
0xa1: @ self(Stack[-1])
0xa2: Pop(0)
0xa3: Stack[-3] = Stack[-1]
0xa4: Return(); Pop(2)

0xa5: Stack[-1] = 0
0xa6: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa7: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa8: Pop(0)
0xa9: Pop(0); Push((bool) Stack[-4] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xab: Push("Locator ")
0xac: Pop(1); Push(Stack[-1] + Stack[-12]);
0xad: Push(" doesn't exist")
0xae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf: @ Trace(Stack[-1])
0xb0: Pop(1)
0xb1: Stack[-1] = 0
0xb2: GOTO 0xb5

0xb3: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb4: Pop(0)
0xb5: Stack[-13] = Stack[-1]
0xb6: Return(); Pop(8)

0xb7: Stack[-1] = 0
0xb8: PushEmpty(object, object)
0xb9: @ FindActor(Stack[-1], Stack[-4])
0xba: Pop(0)
0xbb: Pop(0); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbd: Push("Door ")
0xbe: Pop(1); Push(Stack[-1] + Stack[-5]);
0xbf: Push(" not found")
0xc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1: @ Trace(Stack[-1])
0xc2: Pop(1)
0xc3: GOTO 0xc7

0xc4: Push("locked")
0xc5: @@ SetProperty(Stack[-1], Stack[-4])
0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: Stack[-1] = 0
