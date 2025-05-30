GlobalVarCount = 0

Strings:
	Blocking polygons: 
	BlockPolygons
	UnblockPolygons
	Barricade null scene
	pers_soldat
	soldier.xml
	AddStationaryActor
	Error adding soldier
	Soldier was added: 
	Remove

Import:
	Hold (0 args)
	GetGameTime (1 args)
	SetVisibility (1 args)
	GetPFPolyID (1 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	RandVec2D (2 args)
	GetScene (1 args)
	GetPosition (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x4 Vars = ()
		EVENT_6 Op = 0x18 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool)
0x5: Call2 0x1c

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x8: PushEmpty(bool)
0x9: Stack[-1] = (bool) 1
0xa: Call2 0x26

0xb: Pop(1)
0xc: PushEmpty()
0xd: Call2 0x41

0xe: Pop(0)
0xf: GOTO 0x17

0x10: PushEmpty(bool)
0x11: Stack[-1] = (bool) 0
0x12: Call2 0x26

0x13: Pop(1)
0x14: PushEmpty()
0x15: Call2 0x74

0x16: Pop(0)
0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: Call2 0x74

0x1a: Pop(0)
0x1b: Return(); Pop(0)

0x1c: PushEmpty(float, float)
0x1d: @ GetGameTime(Stack[-1])
0x1e: Pop(0)
0x1f: Push((int) 198)
0x20: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-3] = (bool) 1
0x23: Return(); Pop(2)

0x24: Stack[-3] = (bool) 0
0x25: Return(); Pop(2)

0x26: PushEmpty(int, object, int, object)
0x27: @ SetVisibility(Stack[-5])
0x28: Pop(0)
0x29: @ GetPFPolyID(Stack[-2])
0x2a: Pop(0)
0x2b: Push((int) -1)
0x2c: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x2e: @ GetMainOutdoorScene(Stack[-1])
0x2f: Pop(0)
0x30: Push(Stack[-5])
0x31: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x32: Push("Blocking polygons: ")
0x33: Push((int) 1016)
0x34: Pop(1); Push(Stack[-4] & Stack[-1]);
0x35: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36: @ Trace(Stack[-1])
0x37: Pop(1)
0x38: Push((int) 1016)
0x39: @@ BlockPolygons(Stack[-3], Stack[-1])
0x3a: Pop(1)
0x3b: GOTO 0x3f

0x3c: Push((int) 1016)
0x3d: @@ UnblockPolygons(Stack[-3], Stack[-1])
0x3e: Pop(1)
0x3f: Stack[-1] = 0
0x40: Return(); Pop(4)

0x41: PushEmpty(cvector, cvector, float, float, object, cvector, cvector, float, float, object)
0x42: PushEmpty(cvector)
0x43: Call2 0x7a

0x44: Pop(0)
0x45: Push(CVector(0.0, 150.0, 0.0))
0x46: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x47: @ RandVec2D(Stack[-3], Stack[-2])
0x48: Pop(0)
0x49: Push(CvectorIndex(Stack[-4], 0))
0x4a: Stack[-1] = Stack[-4]
0x4b: CvectorIndex(Stack[-5], 0) = Stack[-1];
0x4c: Push(CvectorIndex(Stack[-4], 1))
0x4d: Stack[-1] = (int) 0
0x4e: CvectorIndex(Stack[-5], 1) = Stack[-1];
0x4f: Push(CvectorIndex(Stack[-4], 2))
0x50: Stack[-1] = Stack[-3]
0x51: CvectorIndex(Stack[-5], 2) = Stack[-1];
0x52: @ GetScene(Stack[-1])
0x53: Pop(0)
0x54: Pop(0); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x56: Push("Barricade null scene")
0x57: @ Trace(Stack[-1])
0x58: Pop(1)
0x59: Return(); Pop(10)

0x5a: Push("pers_soldat")
0x5b: Push("soldier.xml")
0x5c: Push((bool) 1)
0x5d: @@ AddStationaryActor(Stack[-0], Stack[-8], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x5e: Pop(3)
0x5f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x60: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x61: Push("Error adding soldier")
0x62: @ Trace(Stack[-1])
0x63: Pop(1)
0x64: GOTO 0x72

0x65: Push("Soldier was added: ")
0x66: Push(CvectorIndex(Stack[-6], 0))
0x67: Pop(2); Push(Stack[-2] + Stack[-1]);
0x68: Push(" ")
0x69: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6a: Push(CvectorIndex(Stack[-6], 1))
0x6b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6c: Push(" ")
0x6d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e: Push(CvectorIndex(Stack[-6], 2))
0x6f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x70: @ Trace(Stack[-1])
0x71: Pop(1)
0x72: Return(); Pop(10)

0x73: Stack[-1] = 0
0x74: Push( Stack[0 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: @@ Remove()
0x77: Pop(0)
0x78: Stack[0 + Tasks[-1].StackPointer] = 0
0x79: Return(); Pop(0)

0x7a: PushEmpty(cvector, cvector)
0x7b: @ GetPosition(Stack[-1])
0x7c: Pop(0)
0x7d: Stack[-3] = Stack[-1]
0x7e: Return(); Pop(2)

