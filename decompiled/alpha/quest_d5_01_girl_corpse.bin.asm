GlobalVarCount = 0

Strings:
	d5q02KnowNudeIsDead
	d5q01_heart
	d5q01
	cleanup
	restore

Import:
	SetVariable (2 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	GetItemCountOfType (2 args)
	GetVariable (2 args)
	sync (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x1d
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_6 Op = 0x2e Vars = ()
		EVENT_26 Op = 0x3c Vars = (string)


0x0: PushEmpty(bool, bool)
0x1: Push("d5q02KnowNudeIsDead")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: @ IsOverrideActive(Stack[-1])
0x6: Pop(0)
0x7: Pop(0); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: @ WorkWithCorpse(Stack[-3])
0xa: Pop(0)
0xb: Return(); Pop(2)

0xc: PushEmpty(int, int, int, int)
0xd: Push("d5q01_heart")
0xe: @ GetItemCountOfType(Stack[-3], Stack[-1])
0xf: Pop(1)
0x10: Pop(0); Push((bool) Stack[-2] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x12: Stack[-5] = (bool) 1
0x13: Return(); Pop(4)

0x14: Push("d5q01")
0x15: @ GetVariable(Stack[-1], Stack[-2])
0x16: Pop(1)
0x17: PushEmpty(bool, int)
0x18: Stack[-1] = Stack[-3]
0x19: Call 0x73

0x1a: Pop(1)
0x1b: Stack[-6] = !Stack[-1]; Pop(1);
0x1c: Return(); Pop(4)

0x1d: @ sync()
0x1e: Pop(0)
0x1f: PushEmpty(bool)
0x20: Call 0x68

0x21: Pop(0)
0x22: Pop(1); Push((bool) Stack[-1] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: Push((bool) 1)
0x25: @ SetVisibility(Stack[-1])
0x26: Pop(1)
0x27: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x28: GOTO 0x2a

0x29: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2a: PushEmpty()
0x2b: Call 0x38

0x2c: Pop(0)
0x2d: Return(); Pop(0)

0x2e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x30: Push((bool) 1)
0x31: @ SetVisibility(Stack[-1])
0x32: Pop(1)
0x33: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x34: PushEmpty()
0x35: Call 0x58

0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: @ Hold()
0x39: Pop(0)
0x3a: GOTO 0x38

0x3b: Return(); Pop(0)

0x3c: PushEmpty(bool, bool)
0x3d: Push("cleanup")
0x3e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x40: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x41: @ IsLoaded(Stack[-1])
0x42: Pop(0)
0x43: PushEmpty(bool)
0x44: Stack[-1] = (bool) 0
0x45: Pop(0); Push((bool) Stack[-2] == 0)
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: PushEmpty(bool)
0x48: Call 0xc

0x49: Pop(0)
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Stack[-1] = (bool) 1
0x4c: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4d: PushEmpty(object)
0x4e: Call 0x6d

0x4f: Pop(0)
0x50: @ RemoveActor(Stack[-1])
0x51: Pop(1)
0x52: GOTO 0x57

0x53: Push("restore")
0x54: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x56: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x57: Return(); Pop(2)

0x58: PushEmpty(bool)
0x59: Stack[-1] = (bool) 0
0x5a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5b: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5c: PushEmpty(bool)
0x5d: Call 0xc

0x5e: Pop(0)
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Stack[-1] = (bool) 1
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: PushEmpty(object)
0x63: Call 0x6d

0x64: Pop(0)
0x65: @ RemoveActor(Stack[-1])
0x66: Pop(1)
0x67: Return(); Pop(0)

0x68: PushEmpty(bool, bool)
0x69: @ IsLoaded(Stack[-1])
0x6a: Pop(0)
0x6b: Stack[-3] = Stack[-1]
0x6c: Return(); Pop(2)

0x6d: PushEmpty(object, object)
0x6e: @ self(Stack[-1])
0x6f: Pop(0)
0x70: Stack[-3] = Stack[-1]
0x71: Return(); Pop(2)

0x72: Stack[-1] = 0
0x73: PushEmpty()
0x74: Stack[-2] = (bool) 0
0x75: Push((int) 1)
0x76: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x78: Push((int) 1000)
0x79: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-2] = (bool) 1
0x7c: Return(); Pop(0)

