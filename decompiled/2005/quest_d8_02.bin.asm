GlobalVarCount = 0

Strings:
	cot_eva
	pt_d8q02_doberman1
	pers_doberman
	d8q02_doberman.xml
	pt_d8q02_doberman2
	pt_d8q02_doberman3
	d8q02 dobermans are placed
	fail
	completed
	d8q02
	cleanup
	GetLocator
	Locator 
	 doesn't exist

Import:
	GetGameTime (1 args)
	GetSceneByName (2 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	AddMessage (4 args)
	SendWorldWndMessage (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x31 Vars = (string)
		EVENT_9 Op = 0x86 Vars = (int, float)


0x0: PushEmpty(float, object, float, object)
0x1: @ GetGameTime(Stack[-2])
0x2: Pop(0)
0x3: PushEmpty(int)
0x4: Call2 0xa3

0x5: Pop(0)
0x6: Push((int) 8)
0x7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x9: PushEmpty(int, float)
0xa: Stack[-1] = Stack[-4]
0xb: Call2 0xac

0xc: Pop(2)
0xd: Push("cot_eva")
0xe: @ GetSceneByName(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-4] = Stack[-6]
0x12: Stack[-3] = "pt_d8q02_doberman1"
0x13: Stack[-2] = "pers_doberman"
0x14: Stack[-1] = "d8q02_doberman.xml"
0x15: Call2 0x91

0x16: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x17: Pop(5)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-4] = Stack[-6]
0x1a: Stack[-3] = "pt_d8q02_doberman2"
0x1b: Stack[-2] = "pers_doberman"
0x1c: Stack[-1] = "d8q02_doberman.xml"
0x1d: Call2 0x91

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-4] = Stack[-6]
0x22: Stack[-3] = "pt_d8q02_doberman3"
0x23: Stack[-2] = "pers_doberman"
0x24: Stack[-1] = "d8q02_doberman.xml"
0x25: Call2 0x91

0x26: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: Push("d8q02 dobermans are placed")
0x29: @ Trace(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty(int)
0x2c: Stack[-1] = (int) 8
0x2d: Call2 0x73

0x2e: Pop(1)
0x2f: Return(); Pop(4)

0x30: Stack[-1] = 0
0x31: PushEmpty()
0x32: @ Trace(Stack[-1])
0x33: Pop(0)
0x34: Push("fail")
0x35: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x37: PushEmpty()
0x38: Call2 0x4d

0x39: Pop(0)
0x3a: GOTO 0x41

0x3b: Push("completed")
0x3c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: PushEmpty()
0x3f: Call2 0x55

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: PushEmpty(int, int)
0x43: Push("d8q02")
0x44: @ GetVariable(Stack[-1], Stack[-2])
0x45: Pop(1)
0x46: Push((int) 1000)
0x47: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: PushEmpty()
0x4a: Call2 0x4d

0x4b: Pop(0)
0x4c: Return(); Pop(2)

0x4d: Push("d8q02")
0x4e: Push((int) -1)
0x4f: @ SetVariable(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: PushEmpty()
0x52: Call2 0x5d

0x53: Pop(0)
0x54: Return(); Pop(0)

0x55: Push("d8q02")
0x56: Push((int) 1000)
0x57: @ SetVariable(Stack[-2], Stack[-1])
0x58: Pop(2)
0x59: PushEmpty()
0x5a: Call2 0x5d

0x5b: Pop(0)
0x5c: Return(); Pop(0)

0x5d: EventDisable(26)
0x5e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x60: Push("cleanup")
0x61: @ Trigger(Stack[-0], Stack[-1])
0x62: Pop(1)
0x63: Push( Stack[1 + Tasks[-1].StackPointer] )
0x64: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x65: Push("cleanup")
0x66: @ Trigger(Stack[-1], Stack[-1])
0x67: Pop(1)
0x68: Push( Stack[2 + Tasks[-1].StackPointer] )
0x69: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6a: Push("cleanup")
0x6b: @ Trigger(Stack[-2], Stack[-1])
0x6c: Pop(1)
0x6d: PushEmpty(object)
0x6e: Call2 0x8b

0x6f: Pop(0)
0x70: @ RemoveActor(Stack[-1])
0x71: Pop(1)
0x72: Return(); Pop(0)

0x73: PushEmpty(float, float)
0x74: @ GetGameTime(Stack[-1])
0x75: Pop(0)
0x76: Push((int) 24)
0x77: Pop(1); Push(Stack[-4] * Stack[-1]);
0x78: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7a: PushEmpty()
0x7b: Call2 0x5d

0x7c: Pop(0)
0x7d: GOTO 0x85

0x7e: Push((int) 0)
0x7f: Push((int) 24)
0x80: Pop(1); Push(Stack[-5] * Stack[-1]);
0x81: @ SetTimeEvent(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ Hold()
0x84: Pop(0)
0x85: Return(); Pop(2)

0x86: PushEmpty()
0x87: PushEmpty()
0x88: Call2 0x42

0x89: Pop(0)
0x8a: Return(); Pop(0)

0x8b: PushEmpty(object, object)
0x8c: @ self(Stack[-1])
0x8d: Pop(0)
0x8e: Stack[-3] = Stack[-1]
0x8f: Return(); Pop(2)

0x90: Stack[-1] = 0
0x91: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x92: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x93: Pop(0)
0x94: Pop(0); Push((bool) Stack[-4] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x96: Push("Locator ")
0x97: Pop(1); Push(Stack[-1] + Stack[-12]);
0x98: Push(" doesn't exist")
0x99: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9a: @ Trace(Stack[-1])
0x9b: Pop(1)
0x9c: Stack[-1] = 0
0x9d: GOTO 0xa0

0x9e: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x9f: Pop(0)
0xa0: Stack[-13] = Stack[-1]
0xa1: Return(); Pop(8)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(float, float)
0xa4: @ GetGameTime(Stack[-1])
0xa5: Pop(0)
0xa6: Push((int) 1)
0xa7: PushEmpty(int)
0xa8: Push((int) 24)
0xa9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xaa: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xab: Return(); Pop(2)

0xac: PushEmpty()
0xad: PushEmpty(int, int, int, float)
0xae: Stack[-3] = (int) 533303
0xaf: Stack[-2] = (int) 533302
0xb0: Stack[-1] = Stack[-5]
0xb1: Call2 0xb5

0xb2: Stack[-6] = Stack[-4]
0xb3: Pop(4)
0xb4: Return(); Pop(0)

0xb5: PushEmpty(int, int)
0xb6: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0xb7: Pop(0)
0xb8: Push((int) 6)
0xb9: @ SendWorldWndMessage(Stack[-1])
0xba: Pop(1)
0xbb: Stack[-6] = Stack[-1]
0xbc: Return(); Pop(2)

