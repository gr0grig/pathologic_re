GlobalVarCount = 0

Strings:
	W:Blocking polygons: 
	A:BlockPolygons
	A:UnblockPolygons
	W:Barricade null scene
	W:pers_soldat
	W:soldier.xml
	A:AddStationaryActor
	W:Error adding soldier
	W:Soldier was added: 
	A:Remove
// @pool_raw:42006c006f0063006b0069006e006700200070006f006c00790067006f006e0073003a0020000000426c6f636b506f6c79676f6e7300556e626c6f636b506f6c79676f6e730042006100720072006900630061006400650020006e0075006c006c0020007300630065006e006500000070006500720073005f0073006f006c00640061007400000073006f006c0064006900650072002e0078006d006c00000041646453746174696f6e6172794163746f72004500720072006f007200200061006400640069006e006700200073006f006c006400690065007200000053006f006c00640069006500720020007700610073002000610064006400650064003a002000000052656d6f766500

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	GetGameTime (1 args)
	SetVisibility (1 args)
	GetPFPolyID (1 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	RandVec2D (2 args)
	GetScene (1 args)
	GetPosition (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (object) Params = 0
		EVENT_5 Op = 0xa Vars = ()
		EVENT_6 Op = 0x1e Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: @ Hold()
0x7: Pop(0)
0x8: GOTO 0x6

0x9: Return(); Pop(0)

0xa: PushEmpty(bool)
0xb: Call 0x27

0xc: Pop(0)
0xd: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xe: PushEmpty(bool)
0xf: Stack[-1] = (bool) 1
0x10: Call 0x31

0x11: Pop(1)
0x12: PushEmpty()
0x13: Call 0x4c

0x14: Pop(0)
0x15: GOTO 0x1d

0x16: PushEmpty(bool)
0x17: Stack[-1] = (bool) 0
0x18: Call 0x31

0x19: Pop(1)
0x1a: PushEmpty()
0x1b: Call 0x7f

0x1c: Pop(0)
0x1d: Return(); Pop(0)

0x1e: PushEmpty()
0x1f: Call 0x7f

0x20: Pop(0)
0x21: PushEmpty()
0x22: Push(-0, 0); TaskCall(0)
0x23: Call 0x0

0x24: Pop(-0, 0); TaskReturn
0x25: Pop(0)
0x26: Return(); Pop(0)

0x27: PushEmpty(float, float)
0x28: @ GetGameTime(Stack[-1])
0x29: Pop(0)
0x2a: Push((int) 198)
0x2b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: Stack[-3] = (bool) 1
0x2e: Return(); Pop(2)

0x2f: Stack[-3] = (bool) 0
0x30: Return(); Pop(2)

0x31: PushEmpty(int, object, int, object)
0x32: @ SetVisibility(Stack[-5])
0x33: Pop(0)
0x34: @ GetPFPolyID(Stack[-2])
0x35: Pop(0)
0x36: Push((int) -1)
0x37: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x39: Push("Blocking polygons: ") // @poff=0
0x3a: Push((int) 248)
0x3b: Pop(1); Push(Stack[-4] & Stack[-1]);
0x3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d: @ Trace(Stack[-1])
0x3e: Pop(1)
0x3f: @ GetMainOutdoorScene(Stack[-1])
0x40: Pop(0)
0x41: Push(Stack[-5])
0x42: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x43: Push((int) 248)
0x44: @@ BlockPolygons(Stack[-3], Stack[-1]); Obj=2 // @poff=40
0x45: Pop(1)
0x46: GOTO 0x4a

0x47: Push((int) 248)
0x48: @@ UnblockPolygons(Stack[-3], Stack[-1]); Obj=2 // @poff=54
0x49: Pop(1)
0x4a: Stack[-1] = 0
0x4b: Return(); Pop(4)

0x4c: PushEmpty(cvector, cvector, float, float, object, cvector, cvector, float, float, object)
0x4d: PushEmpty(cvector)
0x4e: Call 0x85

0x4f: Pop(0)
0x50: Push(CVector(0.0, 150.0, 0.0))
0x51: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x52: @ RandVec2D(Stack[-3], Stack[-2])
0x53: Pop(0)
0x54: Push(CvectorIndex(Stack[-4], 0))
0x55: Stack[-4] = Stack[-1]
0x56: CvectorIndex(Stack[-5], 0) = Stack[-1];
0x57: Push(CvectorIndex(Stack[-4], 1))
0x58: Stack[-1] = (int) 0
0x59: CvectorIndex(Stack[-5], 1) = Stack[-1];
0x5a: Push(CvectorIndex(Stack[-4], 2))
0x5b: Stack[-3] = Stack[-1]
0x5c: CvectorIndex(Stack[-5], 2) = Stack[-1];
0x5d: @ GetScene(Stack[-1])
0x5e: Pop(0)
0x5f: Pop(0); Push((bool) Stack[-1] == 0)
0x60: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x61: Push("Barricade null scene") // @poff=70
0x62: @ Trace(Stack[-1])
0x63: Pop(1)
0x64: Return(); Pop(10)

0x65: Push("pers_soldat") // @poff=112
0x66: Push("soldier.xml") // @poff=136
0x67: Push((bool) 1)
0x68: @@ AddStationaryActor(Stack[-0]T, Stack[-8], Stack[-7], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=160
0x69: Pop(3)
0x6a: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6c: Push("Error adding soldier") // @poff=179
0x6d: @ Trace(Stack[-1])
0x6e: Pop(1)
0x6f: GOTO 0x7d

0x70: Push("Soldier was added: ") // @poff=221
0x71: Push(CvectorIndex(Stack[-6], 0))
0x72: Pop(2); Push(Stack[-2] + Stack[-1]);
0x73: Push(" ") // @poff=36
0x74: Pop(2); Push(Stack[-2] + Stack[-1]);
0x75: Push(CvectorIndex(Stack[-6], 1))
0x76: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77: Push(" ") // @poff=36
0x78: Pop(2); Push(Stack[-2] + Stack[-1]);
0x79: Push(CvectorIndex(Stack[-6], 2))
0x7a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b: @ Trace(Stack[-1])
0x7c: Pop(1)
0x7d: Return(); Pop(10)

0x7e: Stack[-1] = 0
0x7f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x81: @@@ Remove(); Obj=0 // @poff=261
0x82: Pop(0)
0x83: Stack[0 + Tasks[-1].StackPointer] = 0
0x84: Return(); Pop(0)

0x85: PushEmpty(cvector, cvector)
0x86: @ GetPosition(Stack[-1])
0x87: Pop(0)
0x88: Stack[-1] = Stack[-3]
0x89: Return(); Pop(2)

