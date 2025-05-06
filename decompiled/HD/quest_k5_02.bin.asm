GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	k5q02
	shouse1_kabak
	noandrei
	pt_k5q02_patrol1
	pers_patrool
	k5q02_patrol.xml
	pt_k5q02_patrol2
	init_kabak
	pt_k5q02_kabatchik
	pers_dohodyaga
	k5q02_kabatchik.xml
	place_andrei
	cleanup
	completed
	GetLocator
	Locator 
	 doesn't exist

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
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
		EVENT_26 Op = 0x21 Vars = (string)
		EVENT_9 Op = 0xa1 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("k5q02")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("shouse1_kabak")
0x6: @ GetSceneByName(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: Push("noandrei")
0x9: @ Trigger(Stack[-2], Stack[-1])
0xa: Pop(1)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-4] = Stack[-6]
0xd: Stack[-3] = "pt_k5q02_patrol1"
0xe: Stack[-2] = "pers_patrool"
0xf: Stack[-1] = "k5q02_patrol.xml"
0x10: Call2 0xac

0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(object, object, string, string, string)
0x14: Stack[-4] = Stack[-6]
0x15: Stack[-3] = "pt_k5q02_patrol2"
0x16: Stack[-2] = "pers_patrool"
0x17: Stack[-1] = "k5q02_patrol.xml"
0x18: Call2 0xac

0x19: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1a: Pop(5)
0x1b: PushEmpty(int)
0x1c: Stack[-1] = (int) 5
0x1d: Call2 0x8e

0x1e: Pop(1)
0x1f: Return(); Pop(2)

0x20: Stack[-1] = 0
0x21: PushEmpty(object, object, object, object)
0x22: @ Trace(Stack[-5])
0x23: Pop(0)
0x24: Push("init_kabak")
0x25: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x27: Push("shouse1_kabak")
0x28: @ GetSceneByName(Stack[-3], Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(object, object, string, string, string)
0x2b: Stack[-4] = Stack[-7]
0x2c: Stack[-3] = "pt_k5q02_kabatchik"
0x2d: Stack[-2] = "pers_dohodyaga"
0x2e: Stack[-1] = "k5q02_kabatchik.xml"
0x2f: Call2 0xac

0x30: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x31: Pop(5)
0x32: Stack[-2] = 0
0x33: GOTO 0x54

0x34: Push("place_andrei")
0x35: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x37: Push("shouse1_kabak")
0x38: @ GetSceneByName(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: Push("andrei")
0x3b: @ Trigger(Stack[-2], Stack[-1])
0x3c: Pop(1)
0x3d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: Push("cleanup")
0x40: @ Trigger(Stack[-2], Stack[-1])
0x41: Pop(1)
0x42: Push( Stack[0 + Tasks[-1].StackPointer] )
0x43: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x44: Push("cleanup")
0x45: @ Trigger(Stack[-0], Stack[-1])
0x46: Pop(1)
0x47: Push( Stack[1 + Tasks[-1].StackPointer] )
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: Push("cleanup")
0x4a: @ Trigger(Stack[-1], Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-1] = 0
0x4d: GOTO 0x54

0x4e: Push("completed")
0x4f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: PushEmpty()
0x52: Call2 0x68

0x53: Pop(0)
0x54: Return(); Pop(4)

0x55: PushEmpty(int, int)
0x56: Push("k5q02")
0x57: @ GetVariable(Stack[-1], Stack[-2])
0x58: Pop(1)
0x59: Push((int) 1000)
0x5a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5c: PushEmpty()
0x5d: Call2 0x60

0x5e: Pop(0)
0x5f: Return(); Pop(2)

0x60: Push("k5q02")
0x61: Push((int) -1)
0x62: @ SetVariable(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: PushEmpty()
0x65: Call2 0x70

0x66: Pop(0)
0x67: Return(); Pop(0)

0x68: Push("k5q02")
0x69: Push((int) 1000)
0x6a: @ SetVariable(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: PushEmpty()
0x6d: Call2 0x70

0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: PushEmpty(object, object)
0x71: EventDisable(26)
0x72: Push( Stack[2 + Tasks[-1].StackPointer] )
0x73: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x74: Push("cleanup")
0x75: @ Trigger(Stack[-2], Stack[-1])
0x76: Pop(1)
0x77: Push( Stack[0 + Tasks[-1].StackPointer] )
0x78: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x79: Push("cleanup")
0x7a: @ Trigger(Stack[-0], Stack[-1])
0x7b: Pop(1)
0x7c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x7d: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7e: Push("cleanup")
0x7f: @ Trigger(Stack[-1], Stack[-1])
0x80: Pop(1)
0x81: Push("shouse1_kabak")
0x82: @ GetSceneByName(Stack[-2], Stack[-1])
0x83: Pop(1)
0x84: Push("andrei")
0x85: @ Trigger(Stack[-2], Stack[-1])
0x86: Pop(1)
0x87: PushEmpty(object)
0x88: Call2 0xa6

0x89: Pop(0)
0x8a: @ RemoveActor(Stack[-1])
0x8b: Pop(1)
0x8c: Return(); Pop(2)

0x8d: Stack[-1] = 0
0x8e: PushEmpty(float, float)
0x8f: @ GetGameTime(Stack[-1])
0x90: Pop(0)
0x91: Push((int) 24)
0x92: Pop(1); Push(Stack[-4] * Stack[-1]);
0x93: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x95: PushEmpty()
0x96: Call2 0x70

0x97: Pop(0)
0x98: GOTO 0xa0

0x99: Push((int) 0)
0x9a: Push((int) 24)
0x9b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x9c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ Hold()
0x9f: Pop(0)
0xa0: Return(); Pop(2)

0xa1: PushEmpty()
0xa2: PushEmpty()
0xa3: Call2 0x55

0xa4: Pop(0)
0xa5: Return(); Pop(0)

0xa6: PushEmpty(object, object)
0xa7: @ self(Stack[-1])
0xa8: Pop(0)
0xa9: Stack[-3] = Stack[-1]
0xaa: Return(); Pop(2)

0xab: Stack[-1] = 0
0xac: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xad: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xae: Pop(0)
0xaf: Pop(0); Push((bool) Stack[-4] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb1: Push("Locator ")
0xb2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb3: Push(" doesn't exist")
0xb4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb5: @ Trace(Stack[-1])
0xb6: Pop(1)
0xb7: Stack[-1] = 0
0xb8: GOTO 0xbb

0xb9: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xba: Pop(0)
0xbb: Stack[-13] = Stack[-1]
0xbc: Return(); Pop(8)

0xbd: Stack[-1] = 0
