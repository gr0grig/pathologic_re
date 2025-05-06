GlobalVarCount = 0

Strings:
	key_actors
	pt_d4q01_key1
	pers_whitemask
	d4q01_key1.xml
	pt_d4q01_key2
	pers_wasted_male
	d4q01_key2.xml
	pers
	pt_d4q01_birdmask
	pers_birdmask
	d4q01_birdmask.xml
	pt_d4q01_wastedwoman
	pers_wasted_girl
	d4q01_wastedwoman.xml
	key1_done
	Remove
	key2_done
	birdmask_done
	wastedwoman_done
	fail
	completed
	d4q01
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object)
0x5: @ Trace(Stack[-5])
0x6: Pop(0)
0x7: Push("key_actors")
0x8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0xa: @ GetMainOutdoorScene(Stack[-2])
0xb: Pop(0)
0xc: PushEmpty(object, object, string, string, string)
0xd: Stack[-4] = Stack[-7]
0xe: Stack[-3] = "pt_d4q01_key1"
0xf: Stack[-2] = "pers_whitemask"
0x10: Stack[-1] = "d4q01_key1.xml"
0x11: Call 0x7d

0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x13: Pop(5)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-4] = Stack[-7]
0x16: Stack[-3] = "pt_d4q01_key2"
0x17: Stack[-2] = "pers_wasted_male"
0x18: Stack[-1] = "d4q01_key2.xml"
0x19: Call 0x7d

0x1a: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: Stack[-2] = 0
0x1d: GOTO 0x5a

0x1e: Push("pers")
0x1f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x21: @ GetMainOutdoorScene(Stack[-1])
0x22: Pop(0)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-4] = Stack[-6]
0x25: Stack[-3] = "pt_d4q01_birdmask"
0x26: Stack[-2] = "pers_birdmask"
0x27: Stack[-1] = "d4q01_birdmask.xml"
0x28: Call 0x7d

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(object, object, string, string, string)
0x2c: Stack[-4] = Stack[-6]
0x2d: Stack[-3] = "pt_d4q01_wastedwoman"
0x2e: Stack[-2] = "pers_wasted_girl"
0x2f: Stack[-1] = "d4q01_wastedwoman.xml"
0x30: Call 0x7d

0x31: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x32: Pop(5)
0x33: Stack[-1] = 0
0x34: GOTO 0x5a

0x35: Push("key1_done")
0x36: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: @@ Remove()
0x39: Pop(0)
0x3a: GOTO 0x5a

0x3b: Push("key2_done")
0x3c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: @@ Remove()
0x3f: Pop(0)
0x40: GOTO 0x5a

0x41: Push("birdmask_done")
0x42: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x44: @@ Remove()
0x45: Pop(0)
0x46: GOTO 0x5a

0x47: Push("wastedwoman_done")
0x48: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: @@ Remove()
0x4b: Pop(0)
0x4c: GOTO 0x5a

0x4d: Push("fail")
0x4e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: PushEmpty()
0x51: Call 0x5b

0x52: Pop(0)
0x53: GOTO 0x5a

0x54: Push("completed")
0x55: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: PushEmpty()
0x58: Call 0x63

0x59: Pop(0)
0x5a: Return(); Pop(4)

0x5b: Push("d4q01")
0x5c: Push((int) -1)
0x5d: @ SetVariable(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: PushEmpty()
0x60: Call 0x6b

0x61: Pop(0)
0x62: Return(); Pop(0)

0x63: Push("d4q01")
0x64: Push((int) 1000)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call 0x6b

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: EventDisable(26)
0x6c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @@ Remove()
0x6f: Pop(0)
0x70: Push( Stack[1 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x72: @@ Remove()
0x73: Pop(0)
0x74: Push( Stack[2 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x76: @@ Remove()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7a: @@ Remove()
0x7b: Pop(0)
0x7c: Return(); Pop(0)

0x7d: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7e: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-4] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: Push("Locator ")
0x83: Pop(1); Push(Stack[-1] + Stack[-12]);
0x84: Push(" doesn't exist")
0x85: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86: @ Trace(Stack[-1])
0x87: Pop(1)
0x88: Stack[-1] = 0
0x89: GOTO 0x8c

0x8a: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x8b: Pop(0)
0x8c: Stack[-13] = Stack[-1]
0x8d: Return(); Pop(8)

0x8e: Stack[-1] = 0
