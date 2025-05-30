GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	boiny@door1
	unlock_boiny
	fail
	completed
	cleanup
	k8q01
	Door 
	 not found
	locked
	SetProperty
	klara2_npc_positioner
	init
	burah_home
	noburah

Import:
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetSceneByName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0xf Vars = (string)


0x0: PushEmpty()
0x1: Call2 0x7c

0x2: Pop(0)
0x3: PushEmpty()
0x4: Call2 0x82

0x5: Pop(0)
0x6: PushEmpty(string, bool)
0x7: Stack[-2] = "boiny@door1"
0x8: Stack[-1] = (bool) 1
0x9: Call2 0x5f

0xa: Pop(2)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: @ Trace(Stack[-3])
0x11: Pop(0)
0x12: Push("unlock_boiny")
0x13: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x15: PushEmpty(string, bool)
0x16: Stack[-2] = "boiny@door1"
0x17: Stack[-1] = (bool) 0
0x18: Call2 0x5f

0x19: Pop(2)
0x1a: GOTO 0x38

0x1b: Push("fail")
0x1c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: PushEmpty()
0x1f: Call2 0x39

0x20: Pop(0)
0x21: GOTO 0x38

0x22: Push("completed")
0x23: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty()
0x26: Call2 0x41

0x27: Pop(0)
0x28: GOTO 0x38

0x29: Push("cleanup")
0x2a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x2c: Push("k8q01")
0x2d: @ GetVariable(Stack[-1], Stack[-2])
0x2e: Pop(1)
0x2f: Push((int) 1000)
0x30: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: PushEmpty()
0x33: Call2 0x39

0x34: Pop(0)
0x35: PushEmpty()
0x36: Call2 0x4f

0x37: Pop(0)
0x38: Return(); Pop(2)

0x39: Push("k8q01")
0x3a: Push((int) -1)
0x3b: @ SetVariable(Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: PushEmpty()
0x3e: Call2 0x49

0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: Push("k8q01")
0x42: Push((int) 1000)
0x43: @ SetVariable(Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: PushEmpty()
0x46: Call2 0x49

0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: PushEmpty(string, bool)
0x4a: Stack[-2] = "boiny@door1"
0x4b: Stack[-1] = (bool) 1
0x4c: Call2 0x5f

0x4d: Pop(2)
0x4e: Return(); Pop(0)

0x4f: EventDisable(26)
0x50: PushEmpty()
0x51: Call2 0x8b

0x52: Pop(0)
0x53: PushEmpty(object)
0x54: Call2 0x59

0x55: Pop(0)
0x56: @ RemoveActor(Stack[-1])
0x57: Pop(1)
0x58: Return(); Pop(0)

0x59: PushEmpty(object, object)
0x5a: @ self(Stack[-1])
0x5b: Pop(0)
0x5c: Stack[-3] = Stack[-1]
0x5d: Return(); Pop(2)

0x5e: Stack[-1] = 0
0x5f: PushEmpty(object, object)
0x60: @ FindActor(Stack[-1], Stack[-4])
0x61: Pop(0)
0x62: Pop(0); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x64: Push("Door ")
0x65: Pop(1); Push(Stack[-1] + Stack[-5]);
0x66: Push(" not found")
0x67: Pop(2); Push(Stack[-2] + Stack[-1]);
0x68: @ Trace(Stack[-1])
0x69: Pop(1)
0x6a: GOTO 0x6e

0x6b: Push("locked")
0x6c: @@ SetProperty(Stack[-1], Stack[-4])
0x6d: Pop(1)
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
0x70: PushEmpty(object, object)
0x71: @ FindActor(Stack[-1], Stack[-4])
0x72: Pop(0)
0x73: Pop(0); Push((bool) Stack[-1] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Stack[-5] = (bool) 0
0x76: Return(); Pop(2)

0x77: @ Trigger(Stack[-1], Stack[-3])
0x78: Pop(0)
0x79: Stack[-5] = (bool) 1
0x7a: Return(); Pop(2)

0x7b: Stack[-1] = 0
0x7c: PushEmpty(bool, string, string)
0x7d: Stack[-2] = "klara2_npc_positioner"
0x7e: Stack[-1] = "init"
0x7f: Call2 0x70

0x80: Pop(3)
0x81: Return(); Pop(0)

0x82: PushEmpty(object, object)
0x83: Push("burah_home")
0x84: @ GetSceneByName(Stack[-2], Stack[-1])
0x85: Pop(1)
0x86: Push("noburah")
0x87: @ Trigger(Stack[-2], Stack[-1])
0x88: Pop(1)
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
0x8b: PushEmpty(object, object)
0x8c: Push("burah_home")
0x8d: @ GetSceneByName(Stack[-2], Stack[-1])
0x8e: Pop(1)
0x8f: Push("burah")
0x90: @ Trigger(Stack[-2], Stack[-1])
0x91: Pop(1)
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
