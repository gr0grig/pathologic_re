GlobalVarCount = 0

Strings:
	W:d3q03
	W:boy
	W:pt_d3q03_boy
	W:pers_littleboy
	W:d3q03_boy.xml
	W:boy_attacked
	W:boy_free
	A:Remove
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:64003300710030003300000062006f0079000000700074005f00640033007100300033005f0062006f007900000070006500720073005f006c006900740074006c00650062006f0079000000640033007100300033005f0062006f0079002e0078006d006c00000062006f0079005f00610074007400610063006b0065006400000062006f0079005f006600720065006500000052656d6f7665006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x84 Vars = (int, float)


0x0: Push("d3q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 3
0x6: Call2 0x71

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, int, object, int)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("boy") // @poff=12
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0xf: @ GetMainOutdoorScene(Stack[-2])
0x10: Pop(0)
0x11: PushEmpty(object, object, string, string, string)
0x12: Stack[-7] = Stack[-4]
0x13: Stack[-3] = "pt_d3q03_boy" // @poff=20
0x14: Stack[-2] = "pers_littleboy" // @poff=46
0x15: Stack[-1] = "d3q03_boy.xml" // @poff=76
0x16: Call2 0x8f

0x17: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x18: Pop(5)
0x19: Stack[-2] = 0
0x1a: GOTO 0x3d

0x1b: Push("boy_attacked") // @poff=104
0x1c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x1e: Push("d3q03") // @poff=0
0x1f: @ GetVariable(Stack[-1], Stack[-2])
0x20: Pop(1)
0x21: PushEmpty(bool, int)
0x22: Stack[-3] = Stack[-1]
0x23: Call2 0xa1

0x24: Pop(1)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: PushEmpty()
0x27: Call2 0x49

0x28: Pop(0)
0x29: GOTO 0x3d

0x2a: Push("boy_free") // @poff=130
0x2b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2d: @@@ Remove(); Obj=0 // @poff=148
0x2e: Pop(0)
0x2f: GOTO 0x3d

0x30: Push("fail") // @poff=155
0x31: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x33: PushEmpty()
0x34: Call2 0x49

0x35: Pop(0)
0x36: GOTO 0x3d

0x37: Push("completed") // @poff=165
0x38: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3a: PushEmpty()
0x3b: Call2 0x51

0x3c: Pop(0)
0x3d: Return(); Pop(4)

0x3e: PushEmpty(int, int)
0x3f: Push("d3q03") // @poff=0
0x40: @ GetVariable(Stack[-1], Stack[-2])
0x41: Pop(1)
0x42: Push((int) 1000)
0x43: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: PushEmpty()
0x46: Call2 0x49

0x47: Pop(0)
0x48: Return(); Pop(2)

0x49: Push("d3q03") // @poff=0
0x4a: Push((int) -1)
0x4b: @ SetVariable(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: PushEmpty()
0x4e: Call2 0x67

0x4f: Pop(0)
0x50: Return(); Pop(0)

0x51: PushEmpty(int, int)
0x52: Push("d3q03") // @poff=0
0x53: @ GetVariable(Stack[-1], Stack[-2])
0x54: Pop(1)
0x55: PushEmpty(bool)
0x56: Stack[-1] = (bool) 0
0x57: Push((int) 1000)
0x58: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: Push((int) -1)
0x5b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x5f: Push("d3q03") // @poff=0
0x60: Push((int) 1000)
0x61: @ SetVariable(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: PushEmpty()
0x64: Call2 0x67

0x65: Pop(0)
0x66: Return(); Pop(2)

0x67: Push( Stack[0 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: @@@ Remove(); Obj=0 // @poff=148
0x6a: Pop(0)
0x6b: PushEmpty(object)
0x6c: Call2 0x89

0x6d: Pop(0)
0x6e: @ RemoveActor(Stack[-1])
0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty(float, float)
0x72: @ GetGameTime(Stack[-1])
0x73: Pop(0)
0x74: Push((int) 24)
0x75: Pop(1); Push(Stack[-4] * Stack[-1]);
0x76: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x78: PushEmpty()
0x79: Call2 0x67

0x7a: Pop(0)
0x7b: GOTO 0x83

0x7c: Push((int) 0)
0x7d: Push((int) 24)
0x7e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x7f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: @ Hold()
0x82: Pop(0)
0x83: Return(); Pop(2)

0x84: PushEmpty()
0x85: PushEmpty()
0x86: Call2 0x3e

0x87: Pop(0)
0x88: Return(); Pop(0)

0x89: PushEmpty(object, object)
0x8a: @ self(Stack[-1])
0x8b: Pop(0)
0x8c: Stack[-1] = Stack[-3]
0x8d: Return(); Pop(2)

0x8e: Stack[-1] = 0
0x8f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x90: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=185
0x91: Pop(0)
0x92: Pop(0); Push((bool) Stack[-4] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x94: Push("Locator ") // @poff=196
0x95: Pop(1); Push(Stack[-1] + Stack[-12]);
0x96: Push(" doesn't exist") // @poff=214
0x97: Pop(2); Push(Stack[-2] + Stack[-1]);
0x98: @ Trace(Stack[-1])
0x99: Pop(1)
0x9a: Stack[-1] = 0
0x9b: GOTO 0x9e

0x9c: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=244
0x9d: Pop(0)
0x9e: Stack[-1] = Stack[-13]
0x9f: Return(); Pop(8)

0xa0: Stack[-1] = 0
0xa1: PushEmpty()
0xa2: Stack[-2] = (bool) 0
0xa3: Push((int) 1)
0xa4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa6: Push((int) 1000)
0xa7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-2] = (bool) 1
0xaa: Return(); Pop(0)

