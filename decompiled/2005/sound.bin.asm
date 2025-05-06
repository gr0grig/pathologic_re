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
	sync (0 args)
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

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object, float, float) Params = 0
		EVENT_7 Op = 0x3f Vars = (int)
		EVENT_6 Op = 0x84 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xae

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: Stack[0 + Tasks[-1].StackPointer] = 0
0xe: PushEmpty(bool)
0xf: Call2 0xae

0x10: Pop(0)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x13: PushEmpty()
0x14: Push(-0, 0); TaskCall(0)
0x15: Call2 0x0

0x16: Pop(-0, 0); TaskReturn
0x17: Pop(0)
0x18: PushEmpty(bool, object, string)
0x19: PushEmpty(object)
0x1a: Call2 0xb3

0x1b: Stack[-3] = Stack[-1]
0x1c: Pop(1)
0x1d: Stack[-1] = "distance"
0x1e: Call2 0xa2

0x1f: Pop(2)
0x20: Pop(1); Push((bool) Stack[-1] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[1 + Tasks[-1].StackPointer] = (int)250000
0x23: GOTO 0x28

0x24: Push("distance")
0x25: @ GetProperty(Stack[-1], Stack[-1])
0x26: Pop(1)
0x27: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] * Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x28: PushEmpty(bool, object, string)
0x29: PushEmpty(object)
0x2a: Call2 0xb3

0x2b: Stack[-3] = Stack[-1]
0x2c: Pop(1)
0x2d: Stack[-1] = "mindistance"
0x2e: Call2 0xa2

0x2f: Pop(2)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[2 + Tasks[-1].StackPointer] = (int)100
0x33: GOTO 0x37

0x34: Push("mindistance")
0x35: @ GetProperty(Stack[-1], Stack[-2])
0x36: Pop(1)
0x37: Push((int) 101)
0x38: Push((float)1.0)
0x39: @ SetTimer(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: @ Hold()
0x3c: Pop(0)
0x3d: GOTO 0x3b

0x3e: Return(); Pop(0)

0x3f: PushEmpty(object, cvector, cvector, cvector, float, object, cvector, cvector, cvector, float)
0x40: PushEmpty(object)
0x41: Call2 0x9b

0x42: Stack[-6] = Stack[-1]
0x43: Pop(1)
0x44: Pop(0); Push((bool) Stack[-5] == 0)
0x45: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x46: Push("Null player")
0x47: @ Trace(Stack[-1])
0x48: Pop(1)
0x49: Return(); Pop(10)

0x4a: PushEmpty(cvector, object)
0x4b: Stack[-1] = Stack[-7]
0x4c: Call2 0x96

0x4d: Stack[-6] = Stack[-2]
0x4e: Pop(2)
0x4f: PushEmpty(cvector)
0x50: Call2 0x91

0x51: Stack[-4] = Stack[-1]
0x52: Pop(1)
0x53: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x54: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x55: PushEmpty(bool)
0x56: Stack[-1] = (bool) 0
0x57: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0x58: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x59: Pop(0); Push((bool) Stack[-2] > Stack[1 + Tasks[-1].StackPointer])
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Stack[-1] = (bool) 1
0x5c: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5d: Push("stopped")
0x5e: @ Trace(Stack[-1])
0x5f: Pop(1)
0x60: @@ Stop()
0x61: Pop(0)
0x62: Stack[0 + Tasks[-1].StackPointer] = 0
0x63: Return(); Pop(10)

0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x68: Pop(0); Push((bool) Stack[-2] < Stack[1 + Tasks[-1].StackPointer])
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 1
0x6b: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x6c: EventDisable(7)
0x6d: Push("started")
0x6e: @ Trace(Stack[-1])
0x6f: Pop(1)
0x70: Push("envsound")
0x71: @ WaitFor3DSoundToLoad(Stack[-1])
0x72: Pop(1)
0x73: Push("envsound")
0x74: Push(CVector(0.0, 0.0, 0.0))
0x75: Push((float)0.0)
0x76: @ PlayLoopedGlobalSound(Stack[-0], Stack[-3], Stack[-2], Stack[-1], Stack[-2])
0x77: Pop(3)
0x78: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7a: Push("Sound was not found")
0x7b: @ Trace(Stack[-1])
0x7c: Pop(1)
0x7d: GOTO 0x81

0x7e: Push((float)0.5)
0x7f: @@ FadeIn(Stack[-1])
0x80: Pop(1)
0x81: EventEnable(7)
0x82: Return(); Pop(10)

0x83: Stack[-5] = 0
0x84: Push((int) 101)
0x85: @ KillTimer(Stack[-1])
0x86: Pop(1)
0x87: PushEmpty()
0x88: Push(-0, 0); TaskCall(0)
0x89: Call2 0x0

0x8a: Pop(-0, 0); TaskReturn
0x8b: Pop(0)
0x8c: Push((int) 101)
0x8d: Push((float)1.0)
0x8e: @ SetTimer(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: Return(); Pop(0)

0x91: PushEmpty(cvector, cvector)
0x92: @ GetPosition(Stack[-1])
0x93: Pop(0)
0x94: Stack[-3] = Stack[-1]
0x95: Return(); Pop(2)

0x96: PushEmpty(cvector, cvector)
0x97: @@ GetPosition(Stack[-1])
0x98: Pop(0)
0x99: Stack[-4] = Stack[-1]
0x9a: Return(); Pop(2)

0x9b: PushEmpty(object, object)
0x9c: Push("player")
0x9d: @ FindActor(Stack[-2], Stack[-1])
0x9e: Pop(1)
0x9f: Stack[-3] = Stack[-1]
0xa0: Return(); Pop(2)

0xa1: Stack[-1] = 0
0xa2: PushEmpty(bool, bool)
0xa3: Push("HasProperty")
0xa4: Push((int) 2)
0xa5: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-5] = (bool) 0
0xa9: Return(); Pop(2)

0xaa: @@ HasProperty(Stack[-3], Stack[-1])
0xab: Pop(0)
0xac: Stack[-5] = Stack[-1]
0xad: Return(); Pop(2)

0xae: PushEmpty(bool, bool)
0xaf: @ IsLoaded(Stack[-1])
0xb0: Pop(0)
0xb1: Stack[-3] = Stack[-1]
0xb2: Return(); Pop(2)

0xb3: PushEmpty(object, object)
0xb4: @ self(Stack[-1])
0xb5: Pop(0)
0xb6: Stack[-3] = Stack[-1]
0xb7: Return(); Pop(2)

0xb8: Stack[-1] = 0
