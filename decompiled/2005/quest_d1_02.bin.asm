GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d1q02
	cot_anna
	cot_anna_corpse
	actor_disp.bin
	storojka
	nolaska
	init_storojka
	pt_d1q02_salesman
	pers_salesman
	d1q02_salesman.xml
	pt_d1q02_gorbun
	pers_gorbun
	d1q02_gorbun.xml
	completed
	fail
	cleanup
	GetLocator
	Locator 
	 doesn't exist

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	AddScriptedActor (5 args)
	Trigger (2 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x19 Vars = (string)
		EVENT_9 Op = 0x93 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("d1q02")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("cot_anna")
0x6: @ GetSceneByName(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: Push("cot_anna_corpse")
0x9: Push("actor_disp.bin")
0xa: Push(CVector(0.0, 0.0, 0.0))
0xb: @ AddScriptedActor(Stack[-0], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0xc: Pop(3)
0xd: Push("storojka")
0xe: @ GetSceneByName(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: Push("nolaska")
0x11: @ Trigger(Stack[-2], Stack[-1])
0x12: Pop(1)
0x13: PushEmpty(int)
0x14: Stack[-1] = (int) 1
0x15: Call2 0x80

0x16: Pop(1)
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty(object, object)
0x1a: @ Trace(Stack[-3])
0x1b: Pop(0)
0x1c: Push("init_storojka")
0x1d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x1f: Push("storojka")
0x20: @ GetSceneByName(Stack[-2], Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-4] = Stack[-6]
0x24: Stack[-3] = "pt_d1q02_salesman"
0x25: Stack[-2] = "pers_salesman"
0x26: Stack[-1] = "d1q02_salesman.xml"
0x27: Call2 0x9e

0x28: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x29: Pop(5)
0x2a: PushEmpty(object, object, string, string, string)
0x2b: Stack[-4] = Stack[-6]
0x2c: Stack[-3] = "pt_d1q02_gorbun"
0x2d: Stack[-2] = "pers_gorbun"
0x2e: Stack[-1] = "d1q02_gorbun.xml"
0x2f: Call2 0x9e

0x30: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x31: Pop(5)
0x32: Stack[-1] = 0
0x33: GOTO 0x41

0x34: Push("completed")
0x35: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x37: PushEmpty()
0x38: Call2 0x58

0x39: Pop(0)
0x3a: GOTO 0x41

0x3b: Push("fail")
0x3c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: PushEmpty()
0x3f: Call2 0x50

0x40: Pop(0)
0x41: Return(); Pop(2)

0x42: PushEmpty(int, int)
0x43: Push("d1q02")
0x44: @ GetVariable(Stack[-1], Stack[-2])
0x45: Pop(1)
0x46: Push((int) 1000)
0x47: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: PushEmpty()
0x4a: Call2 0x50

0x4b: Pop(0)
0x4c: PushEmpty()
0x4d: Call2 0x67

0x4e: Pop(0)
0x4f: Return(); Pop(2)

0x50: Push("d1q02")
0x51: Push((int) -1)
0x52: @ SetVariable(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: PushEmpty()
0x55: Call2 0x60

0x56: Pop(0)
0x57: Return(); Pop(0)

0x58: Push("d1q02")
0x59: Push((int) 1000)
0x5a: @ SetVariable(Stack[-2], Stack[-1])
0x5b: Pop(2)
0x5c: PushEmpty()
0x5d: Call2 0x60

0x5e: Pop(0)
0x5f: Return(); Pop(0)

0x60: EventDisable(26)
0x61: Push( Stack[0 + Tasks[-1].StackPointer] )
0x62: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x63: Push("cleanup")
0x64: @ Trigger(Stack[-0], Stack[-1])
0x65: Pop(1)
0x66: Return(); Pop(0)

0x67: PushEmpty(object, object)
0x68: EventDisable(26)
0x69: Push("storojka")
0x6a: @ GetSceneByName(Stack[-2], Stack[-1])
0x6b: Pop(1)
0x6c: Push("laska")
0x6d: @ Trigger(Stack[-2], Stack[-1])
0x6e: Pop(1)
0x6f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push("cleanup")
0x72: @ Trigger(Stack[-2], Stack[-1])
0x73: Pop(1)
0x74: Push( Stack[1 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: Push("cleanup")
0x77: @ Trigger(Stack[-1], Stack[-1])
0x78: Pop(1)
0x79: PushEmpty(object)
0x7a: Call2 0x98

0x7b: Pop(0)
0x7c: @ RemoveActor(Stack[-1])
0x7d: Pop(1)
0x7e: Return(); Pop(2)

0x7f: Stack[-1] = 0
0x80: PushEmpty(float, float)
0x81: @ GetGameTime(Stack[-1])
0x82: Pop(0)
0x83: Push((int) 24)
0x84: Pop(1); Push(Stack[-4] * Stack[-1]);
0x85: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x67

0x89: Pop(0)
0x8a: GOTO 0x92

0x8b: Push((int) 0)
0x8c: Push((int) 24)
0x8d: Pop(1); Push(Stack[-5] * Stack[-1]);
0x8e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ Hold()
0x91: Pop(0)
0x92: Return(); Pop(2)

0x93: PushEmpty()
0x94: PushEmpty()
0x95: Call2 0x42

0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: PushEmpty(object, object)
0x99: @ self(Stack[-1])
0x9a: Pop(0)
0x9b: Stack[-3] = Stack[-1]
0x9c: Return(); Pop(2)

0x9d: Stack[-1] = 0
0x9e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa0: Pop(0)
0xa1: Pop(0); Push((bool) Stack[-4] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa3: Push("Locator ")
0xa4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa5: Push(" doesn't exist")
0xa6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa7: @ Trace(Stack[-1])
0xa8: Pop(1)
0xa9: Stack[-1] = 0
0xaa: GOTO 0xad

0xab: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xac: Pop(0)
0xad: Stack[-13] = Stack[-1]
0xae: Return(); Pop(8)

0xaf: Stack[-1] = 0
