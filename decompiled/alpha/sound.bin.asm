GlobalVarCount = 0

Strings:
	distance
	mindistance
	Null player
	stopped
	Stop
	started
	envsound
	Sound was not found
	FadeIn
	GetPosition
	HasProperty
	HasProperty

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	GetProperty (2 args)
	SetTimer (2 args)
	Trace (1 args)
	WaitFor3DSoundToLoad (1 args)
	PlayLoopedGlobalSound (5 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindActor (2 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (object, float, float) Params = 0
		EVENT_7 Op = 0x38 Vars = (int)
		EVENT_6 Op = 0x7d Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: Stack[0 + Tasks[-1].StackPointer] = 0
0x7: PushEmpty(bool)
0x8: Call 0xa7

0x9: Pop(0)
0xa: Pop(1); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty()
0xd: Push(-0, 0); TaskCall(0)
0xe: Call 0x0

0xf: Pop(-0, 0); TaskReturn
0x10: Pop(0)
0x11: PushEmpty(bool, object, string)
0x12: PushEmpty(object)
0x13: Call 0xac

0x14: Stack[-3] = Stack[-1]
0x15: Pop(1)
0x16: Stack[-1] = "distance"
0x17: Call 0x9b

0x18: Pop(2)
0x19: Pop(1); Push((bool) Stack[-1] == 0)
0x1a: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1b: Stack[1 + Tasks[-1].StackPointer] = (int)250000
0x1c: GOTO 0x21

0x1d: Push("distance")
0x1e: @ GetProperty(Stack[-1], Stack[-1])
0x1f: Pop(1)
0x20: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] * Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x21: PushEmpty(bool, object, string)
0x22: PushEmpty(object)
0x23: Call 0xac

0x24: Stack[-3] = Stack[-1]
0x25: Pop(1)
0x26: Stack[-1] = "mindistance"
0x27: Call 0x9b

0x28: Pop(2)
0x29: Pop(1); Push((bool) Stack[-1] == 0)
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[2 + Tasks[-1].StackPointer] = (int)100
0x2c: GOTO 0x30

0x2d: Push("mindistance")
0x2e: @ GetProperty(Stack[-1], Stack[-2])
0x2f: Pop(1)
0x30: Push((int) 101)
0x31: Push((float)1.0)
0x32: @ SetTimer(Stack[-2], Stack[-1])
0x33: Pop(2)
0x34: @ Hold()
0x35: Pop(0)
0x36: GOTO 0x34

0x37: Return(); Pop(0)

0x38: PushEmpty(object, cvector, cvector, cvector, float, object, cvector, cvector, cvector, float)
0x39: PushEmpty(object)
0x3a: Call 0x94

0x3b: Stack[-6] = Stack[-1]
0x3c: Pop(1)
0x3d: Pop(0); Push((bool) Stack[-5] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3f: Push("Null player")
0x40: @ Trace(Stack[-1])
0x41: Pop(1)
0x42: Return(); Pop(10)

0x43: PushEmpty(cvector, object)
0x44: Stack[-1] = Stack[-7]
0x45: Call 0x8f

0x46: Stack[-6] = Stack[-2]
0x47: Pop(2)
0x48: PushEmpty(cvector)
0x49: Call 0x8a

0x4a: Stack[-4] = Stack[-1]
0x4b: Pop(1)
0x4c: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x4d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4e: PushEmpty(bool)
0x4f: Stack[-1] = (bool) 0
0x50: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: Pop(0); Push((bool) Stack[-2] > Stack[1 + Tasks[-1].StackPointer])
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-1] = (bool) 1
0x55: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x56: Push("stopped")
0x57: @ Trace(Stack[-1])
0x58: Pop(1)
0x59: @@ Stop()
0x5a: Pop(0)
0x5b: Stack[0 + Tasks[-1].StackPointer] = 0
0x5c: Return(); Pop(10)

0x5d: PushEmpty(bool)
0x5e: Stack[-1] = (bool) 0
0x5f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x60: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x61: Pop(0); Push((bool) Stack[-2] < Stack[1 + Tasks[-1].StackPointer])
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x65: EventDisable(7)
0x66: Push("started")
0x67: @ Trace(Stack[-1])
0x68: Pop(1)
0x69: Push("envsound")
0x6a: @ WaitFor3DSoundToLoad(Stack[-1])
0x6b: Pop(1)
0x6c: Push("envsound")
0x6d: Push(CVector(0.0, 0.0, 0.0))
0x6e: Push((float)0.0)
0x6f: @ PlayLoopedGlobalSound(Stack[-0], Stack[-3], Stack[-2], Stack[-1], Stack[-2])
0x70: Pop(3)
0x71: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x73: Push("Sound was not found")
0x74: @ Trace(Stack[-1])
0x75: Pop(1)
0x76: GOTO 0x7a

0x77: Push((float)0.5)
0x78: @@ FadeIn(Stack[-1])
0x79: Pop(1)
0x7a: EventEnable(7)
0x7b: Return(); Pop(10)

0x7c: Stack[-5] = 0
0x7d: Push((int) 101)
0x7e: @ KillTimer(Stack[-1])
0x7f: Pop(1)
0x80: PushEmpty()
0x81: Push(-0, 0); TaskCall(0)
0x82: Call 0x0

0x83: Pop(-0, 0); TaskReturn
0x84: Pop(0)
0x85: Push((int) 101)
0x86: Push((float)1.0)
0x87: @ SetTimer(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: Return(); Pop(0)

0x8a: PushEmpty(cvector, cvector)
0x8b: @ GetPosition(Stack[-1])
0x8c: Pop(0)
0x8d: Stack[-3] = Stack[-1]
0x8e: Return(); Pop(2)

0x8f: PushEmpty(cvector, cvector)
0x90: @@ GetPosition(Stack[-1])
0x91: Pop(0)
0x92: Stack[-4] = Stack[-1]
0x93: Return(); Pop(2)

0x94: PushEmpty(object, object)
0x95: Push("player")
0x96: @ FindActor(Stack[-2], Stack[-1])
0x97: Pop(1)
0x98: Stack[-3] = Stack[-1]
0x99: Return(); Pop(2)

0x9a: Stack[-1] = 0
0x9b: PushEmpty(bool, bool)
0x9c: Push("HasProperty")
0x9d: Push((int) 2)
0x9e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: Stack[-5] = (bool) 0
0xa2: Return(); Pop(2)

0xa3: @@ HasProperty(Stack[-3], Stack[-1])
0xa4: Pop(0)
0xa5: Stack[-5] = Stack[-1]
0xa6: Return(); Pop(2)

0xa7: PushEmpty(bool, bool)
0xa8: @ IsLoaded(Stack[-1])
0xa9: Pop(0)
0xaa: Stack[-3] = Stack[-1]
0xab: Return(); Pop(2)

0xac: PushEmpty(object, object)
0xad: @ self(Stack[-1])
0xae: Pop(0)
0xaf: Stack[-3] = Stack[-1]
0xb0: Return(); Pop(2)

0xb1: Stack[-1] = 0
