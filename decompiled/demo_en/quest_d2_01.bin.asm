GlobalVarCount = 0

Strings:
	house_petr@door1
	shouse1_kabak@door1
	woman
	d2q01_house1@door1
	d2q01_house1
	pt_woman
	pers_woman
	d2q01_woman.xml
	cursed_women
	pt_enemy01
	d2q01_zombie_woman.xml
	pt_enemy02
	cleanup
	d2q01
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
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "house_petr@door1"
0x2: Stack[-1] = (bool) 0
0x3: Call2 0x97

0x4: Pop(2)
0x5: PushEmpty(string, bool)
0x6: Stack[-2] = "shouse1_kabak@door1"
0x7: Stack[-1] = (bool) 0
0x8: Call2 0x97

0x9: Pop(2)
0xa: @ Hold()
0xb: Pop(0)
0xc: GOTO 0xa

0xd: Return(); Pop(0)

0xe: PushEmpty(object, object, int, object, object, int)
0xf: @ Trace(Stack[-7])
0x10: Pop(0)
0x11: Push("woman")
0x12: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x14: PushEmpty(string, bool)
0x15: Stack[-2] = "d2q01_house1@door1"
0x16: Stack[-1] = (bool) 0
0x17: Call2 0x97

0x18: Pop(2)
0x19: Push("d2q01_house1")
0x1a: @ GetSceneByName(Stack[-4], Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-4] = Stack[-8]
0x1e: Stack[-3] = "pt_woman"
0x1f: Stack[-2] = "pers_woman"
0x20: Stack[-1] = "d2q01_woman.xml"
0x21: Call2 0x85

0x22: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x23: Pop(5)
0x24: Stack[-3] = 0
0x25: GOTO 0x5d

0x26: Push("cursed_women")
0x27: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x29: Push("d2q01_house1")
0x2a: @ GetSceneByName(Stack[-3], Stack[-1])
0x2b: Pop(1)
0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-4] = Stack[-7]
0x2e: Stack[-3] = "pt_enemy01"
0x2f: Stack[-2] = "pers_woman"
0x30: Stack[-1] = "d2q01_zombie_woman.xml"
0x31: Call2 0x85

0x32: Pop(5)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-4] = Stack[-7]
0x35: Stack[-3] = "pt_enemy02"
0x36: Stack[-2] = "pers_woman"
0x37: Stack[-1] = "d2q01_zombie_woman.xml"
0x38: Call2 0x85

0x39: Pop(5)
0x3a: Push("cleanup")
0x3b: @ Trigger(Stack[-0], Stack[-1])
0x3c: Pop(1)
0x3d: Stack[-2] = 0
0x3e: GOTO 0x5d

0x3f: Push("cleanup")
0x40: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x42: Push("d2q01")
0x43: @ GetVariable(Stack[-1], Stack[-2])
0x44: Pop(1)
0x45: Push((int) 1000)
0x46: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: PushEmpty()
0x49: Call2 0x5e

0x4a: Pop(0)
0x4b: GOTO 0x4f

0x4c: PushEmpty()
0x4d: Call2 0x6e

0x4e: Pop(0)
0x4f: GOTO 0x5d

0x50: Push("fail")
0x51: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: PushEmpty()
0x54: Call2 0x5e

0x55: Pop(0)
0x56: GOTO 0x5d

0x57: Push("completed")
0x58: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x66

0x5c: Pop(0)
0x5d: Return(); Pop(6)

0x5e: Push("d2q01")
0x5f: Push((int) -1)
0x60: @ SetVariable(Stack[-2], Stack[-1])
0x61: Pop(2)
0x62: PushEmpty()
0x63: Call2 0x6e

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: Push("d2q01")
0x67: Push((int) 1000)
0x68: @ SetVariable(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: PushEmpty()
0x6b: Call2 0x6e

0x6c: Pop(0)
0x6d: Return(); Pop(0)

0x6e: EventDisable(26)
0x6f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push("cleanup")
0x72: @ Trigger(Stack[-0], Stack[-1])
0x73: Pop(1)
0x74: PushEmpty(string, bool)
0x75: Stack[-2] = "d2q01_house1@door1"
0x76: Stack[-1] = (bool) 1
0x77: Call2 0x97

0x78: Pop(2)
0x79: PushEmpty(object)
0x7a: Call2 0x7f

0x7b: Pop(0)
0x7c: @ RemoveActor(Stack[-1])
0x7d: Pop(1)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(object, object)
0x80: @ self(Stack[-1])
0x81: Pop(0)
0x82: Stack[-3] = Stack[-1]
0x83: Return(); Pop(2)

0x84: Stack[-1] = 0
0x85: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x86: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x87: Pop(0)
0x88: Pop(0); Push((bool) Stack[-4] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8a: Push("Locator ")
0x8b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x8c: Push(" doesn't exist")
0x8d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8e: @ Trace(Stack[-1])
0x8f: Pop(1)
0x90: Stack[-1] = 0
0x91: GOTO 0x94

0x92: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x93: Pop(0)
0x94: Stack[-13] = Stack[-1]
0x95: Return(); Pop(8)

0x96: Stack[-1] = 0
0x97: PushEmpty(object, object)
0x98: @ FindActor(Stack[-1], Stack[-4])
0x99: Pop(0)
0x9a: Pop(0); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9c: Push("Door ")
0x9d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x9e: Push(" not found")
0x9f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa0: @ Trace(Stack[-1])
0xa1: Pop(1)
0xa2: GOTO 0xa6

0xa3: Push("locked")
0xa4: @@ SetProperty(Stack[-1], Stack[-4])
0xa5: Pop(1)
0xa6: Return(); Pop(2)

0xa7: Stack[-1] = 0
