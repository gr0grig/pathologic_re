GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d2q03
	birdmask
	r4_house_2_02
	pt_d2q03_birdmask
	pers_birdmask
	d2q03_birdmask.xml
	completed
	icot_lara_supply
	enabled
	SetProperty
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	Can't retrieve diary root
	Find
	Remove

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	GetDiaryRoot (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x69 Vars = (int, float)


0x0: Push("d2q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 2
0x6: Call 0x56

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("birdmask")
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0xf: Push("r4_house_2_02")
0x10: @ GetSceneByName(Stack[-2], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-4] = Stack[-6]
0x14: Stack[-3] = "pt_d2q03_birdmask"
0x15: Stack[-2] = "pers_birdmask"
0x16: Stack[-1] = "d2q03_birdmask.xml"
0x17: Call 0x74

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Stack[-1] = 0
0x1b: GOTO 0x22

0x1c: Push("completed")
0x1d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: PushEmpty()
0x20: Call 0x36

0x21: Pop(0)
0x22: Return(); Pop(2)

0x23: PushEmpty(int, int)
0x24: Push("d2q03")
0x25: @ GetVariable(Stack[-1], Stack[-2])
0x26: Pop(1)
0x27: Push((int) 1000)
0x28: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: PushEmpty()
0x2b: Call 0x2e

0x2c: Pop(0)
0x2d: Return(); Pop(2)

0x2e: Push("d2q03")
0x2f: Push((int) -1)
0x30: @ SetVariable(Stack[-2], Stack[-1])
0x31: Pop(2)
0x32: PushEmpty()
0x33: Call 0x47

0x34: Pop(0)
0x35: Return(); Pop(0)

0x36: PushEmpty(object, object)
0x37: Push("icot_lara_supply")
0x38: @ FindActor(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: Push("enabled")
0x3b: Push((bool) 1)
0x3c: @@ SetProperty(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: Push("d2q03")
0x3f: Push((int) 1000)
0x40: @ SetVariable(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: PushEmpty()
0x43: Call 0x47

0x44: Pop(0)
0x45: Return(); Pop(2)

0x46: Stack[-1] = 0
0x47: EventDisable(26)
0x48: PushEmpty()
0x49: Call 0xa9

0x4a: Pop(0)
0x4b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: Push("cleanup")
0x4e: @ Trigger(Stack[-0], Stack[-1])
0x4f: Pop(1)
0x50: PushEmpty(object)
0x51: Call 0x6e

0x52: Pop(0)
0x53: @ RemoveActor(Stack[-1])
0x54: Pop(1)
0x55: Return(); Pop(0)

0x56: PushEmpty(float, float)
0x57: @ GetGameTime(Stack[-1])
0x58: Pop(0)
0x59: Push((int) 24)
0x5a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x5b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5d: PushEmpty()
0x5e: Call 0x47

0x5f: Pop(0)
0x60: GOTO 0x68

0x61: Push((int) 0)
0x62: Push((int) 24)
0x63: Pop(1); Push(Stack[-5] * Stack[-1]);
0x64: @ SetTimeEvent(Stack[-2], Stack[-1])
0x65: Pop(2)
0x66: @ Hold()
0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: PushEmpty()
0x6a: PushEmpty()
0x6b: Call 0x23

0x6c: Pop(0)
0x6d: Return(); Pop(0)

0x6e: PushEmpty(object, object)
0x6f: @ self(Stack[-1])
0x70: Pop(0)
0x71: Stack[-3] = Stack[-1]
0x72: Return(); Pop(2)

0x73: Stack[-1] = 0
0x74: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x75: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x76: Pop(0)
0x77: Pop(0); Push((bool) Stack[-4] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x79: Push("Locator ")
0x7a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x7b: Push(" doesn't exist")
0x7c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7d: @ Trace(Stack[-1])
0x7e: Pop(1)
0x7f: Stack[-1] = 0
0x80: GOTO 0x83

0x81: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x82: Pop(0)
0x83: Stack[-13] = Stack[-1]
0x84: Return(); Pop(8)

0x85: Stack[-1] = 0
0x86: PushEmpty(object, object)
0x87: @ GetDiaryRoot(Stack[-1])
0x88: Pop(0)
0x89: Pop(0); Push((bool) Stack[-1] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push("Can't retrieve diary root")
0x8c: @ Trace(Stack[-1])
0x8d: Pop(1)
0x8e: Stack[-3] = (bool) 0
0x8f: Return(); Pop(2)

0x90: Stack[-3] = Stack[-1]
0x91: Return(); Pop(2)

0x92: Stack[-1] = 0
0x93: PushEmpty(object, object, object, object)
0x94: PushEmpty(object)
0x95: Call 0x86

0x96: Stack[-3] = Stack[-1]
0x97: Pop(1)
0x98: @@ Find(Stack[-5], Stack[-1])
0x99: Pop(0)
0x9a: Pop(0); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9c: Stack[-6] = (bool) 0
0x9d: Return(); Pop(4)

0x9e: @@ Remove()
0x9f: Pop(0)
0xa0: Stack[-6] = (bool) 1
0xa1: Return(); Pop(4)

0xa2: Stack[-1] = 0
0xa3: Stack[-2] = 0
0xa4: PushEmpty(bool, int)
0xa5: Stack[-1] = (int) 37
0xa6: Call 0x93

0xa7: Pop(2)
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Call 0xa4

0xab: Pop(0)
0xac: Return(); Pop(0)

