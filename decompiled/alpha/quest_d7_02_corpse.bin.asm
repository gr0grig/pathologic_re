GlobalVarCount = 0

Strings:
	d7q02BirdBalahon
	d7q02
	quest_d7_02
	completed
	cleanup
	restore

Import:
	SetVariable (2 args)
	GetVariable (2 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	sync (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x1e
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_6 Op = 0x2f Vars = ()
		EVENT_26 Op = 0x3d Vars = (string)


0x0: PushEmpty(int, bool, int, bool)
0x1: Push("d7q02BirdBalahon")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6: Push("d7q02")
0x7: @ GetVariable(Stack[-1], Stack[-3])
0x8: Pop(1)
0x9: Push((int) 4)
0xa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty(bool, string, string)
0xd: Stack[-2] = "quest_d7_02"
0xe: Stack[-1] = "completed"
0xf: Call 0x74

0x10: Pop(3)
0x11: @ IsOverrideActive(Stack[-1])
0x12: Pop(0)
0x13: Pop(0); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x15: @ WorkWithCorpse(Stack[-5])
0x16: Pop(0)
0x17: Return(); Pop(4)

0x18: PushEmpty(bool, bool)
0x19: Push("d7q02BirdBalahon")
0x1a: @ GetVariable(Stack[-1], Stack[-2])
0x1b: Pop(1)
0x1c: Stack[-3] = Stack[-1]
0x1d: Return(); Pop(2)

0x1e: @ sync()
0x1f: Pop(0)
0x20: PushEmpty(bool)
0x21: Call 0x69

0x22: Pop(0)
0x23: Pop(1); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x25: Push((bool) 1)
0x26: @ SetVisibility(Stack[-1])
0x27: Pop(1)
0x28: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x29: GOTO 0x2b

0x2a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2b: PushEmpty()
0x2c: Call 0x39

0x2d: Pop(0)
0x2e: Return(); Pop(0)

0x2f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x31: Push((bool) 1)
0x32: @ SetVisibility(Stack[-1])
0x33: Pop(1)
0x34: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x35: PushEmpty()
0x36: Call 0x59

0x37: Pop(0)
0x38: Return(); Pop(0)

0x39: @ Hold()
0x3a: Pop(0)
0x3b: GOTO 0x39

0x3c: Return(); Pop(0)

0x3d: PushEmpty(bool, bool)
0x3e: Push("cleanup")
0x3f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x41: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x42: @ IsLoaded(Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(bool)
0x45: Stack[-1] = (bool) 0
0x46: Pop(0); Push((bool) Stack[-2] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x48: PushEmpty(bool)
0x49: Call 0x18

0x4a: Pop(0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Stack[-1] = (bool) 1
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: PushEmpty(object)
0x4f: Call 0x6e

0x50: Pop(0)
0x51: @ RemoveActor(Stack[-1])
0x52: Pop(1)
0x53: GOTO 0x58

0x54: Push("restore")
0x55: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x58: Return(); Pop(2)

0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5c: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5d: PushEmpty(bool)
0x5e: Call 0x18

0x5f: Pop(0)
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: Stack[-1] = (bool) 1
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: PushEmpty(object)
0x64: Call 0x6e

0x65: Pop(0)
0x66: @ RemoveActor(Stack[-1])
0x67: Pop(1)
0x68: Return(); Pop(0)

0x69: PushEmpty(bool, bool)
0x6a: @ IsLoaded(Stack[-1])
0x6b: Pop(0)
0x6c: Stack[-3] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: PushEmpty(object, object)
0x6f: @ self(Stack[-1])
0x70: Pop(0)
0x71: Stack[-3] = Stack[-1]
0x72: Return(); Pop(2)

0x73: Stack[-1] = 0
0x74: PushEmpty(object, object)
0x75: @ FindActor(Stack[-1], Stack[-4])
0x76: Pop(0)
0x77: Pop(0); Push((bool) Stack[-1] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-5] = (bool) 0
0x7a: Return(); Pop(2)

0x7b: @ Trigger(Stack[-1], Stack[-3])
0x7c: Pop(0)
0x7d: Stack[-5] = (bool) 1
0x7e: Return(); Pop(2)

0x7f: Stack[-1] = 0
