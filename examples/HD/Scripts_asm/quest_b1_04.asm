GlobalVarCount = 0

Strings:
	W:pt_b1q04_grabitel1
	W:pers_grabitel
	W:b1q04_grabitel.xml
	A:add
	W:pt_b1q04_grabitel2
	W:b1q04_grabitel2.xml
	W:pt_b1q04_worker1
	W:pers_worker
	W:b1q04_worker.xml
	W:pt_b1q04_worker2
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	A:size
	A:get
	A:Remove
	A:clear
// @pool_raw:700074005f00620031007100300034005f0067007200610062006900740065006c003100000070006500720073005f0067007200610062006900740065006c000000620031007100300034005f0067007200610062006900740065006c002e0078006d006c00000061646400700074005f00620031007100300034005f0067007200610062006900740065006c0032000000620031007100300034005f0067007200610062006900740065006c0032002e0078006d006c000000700074005f00620031007100300034005f0077006f0072006b00650072003100000070006500720073005f0077006f0072006b00650072000000620031007100300034005f0077006f0072006b00650072002e0078006d006c000000700074005f00620031007100300034005f0077006f0072006b0065007200320000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720073697a65006765740052656d6f766500636c65617200

Import:
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	Trace (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_9 Op = 0x55 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x60

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: @ GetMainOutdoorScene(Stack[-1])
0x6: Pop(0)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-6] = Stack[-4]
0x9: Stack[-3] = "pt_b1q04_grabitel1" // @poff=0
0xa: Stack[-2] = "pers_grabitel" // @poff=38
0xb: Stack[-1] = "b1q04_grabitel.xml" // @poff=66
0xc: Call2 0x66

0xd: Pop(4)
0xe: @@@ add(Stack[-1]); Obj=0 // @poff=104
0xf: Pop(1)
0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-6] = Stack[-4]
0x12: Stack[-3] = "pt_b1q04_grabitel2" // @poff=108
0x13: Stack[-2] = "pers_grabitel" // @poff=38
0x14: Stack[-1] = "b1q04_grabitel2.xml" // @poff=146
0x15: Call2 0x66

0x16: Pop(4)
0x17: @@@ add(Stack[-1]); Obj=0 // @poff=104
0x18: Pop(1)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-6] = Stack[-4]
0x1b: Stack[-3] = "pt_b1q04_worker1" // @poff=186
0x1c: Stack[-2] = "pers_worker" // @poff=220
0x1d: Stack[-1] = "b1q04_worker.xml" // @poff=244
0x1e: Call2 0x66

0x1f: Pop(4)
0x20: @@@ add(Stack[-1]); Obj=0 // @poff=104
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-6] = Stack[-4]
0x24: Stack[-3] = "pt_b1q04_worker2" // @poff=278
0x25: Stack[-2] = "pers_worker" // @poff=220
0x26: Stack[-1] = "b1q04_worker.xml" // @poff=244
0x27: Call2 0x66

0x28: Pop(4)
0x29: @@@ add(Stack[-1]); Obj=0 // @poff=104
0x2a: Pop(1)
0x2b: PushEmpty(int)
0x2c: Stack[-1] = (int) 1
0x2d: Call2 0x42

0x2e: Pop(1)
0x2f: Return(); Pop(2)

0x30: Stack[-1] = 0
0x31: PushEmpty()
0x32: Call2 0x35

0x33: Pop(0)
0x34: Return(); Pop(0)

0x35: Push( Stack[0 + Tasks[-1].StackPointer] )
0x36: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x37: PushEmpty(object)
0x38: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39: Call2 0x78

0x3a: Pop(1)
0x3b: Stack[0 + Tasks[-1].StackPointer] = 0
0x3c: PushEmpty(object)
0x3d: Call2 0x5a

0x3e: Pop(0)
0x3f: @ RemoveActor(Stack[-1])
0x40: Pop(1)
0x41: Return(); Pop(0)

0x42: PushEmpty(float, float)
0x43: @ GetGameTime(Stack[-1])
0x44: Pop(0)
0x45: Push((int) 24)
0x46: Pop(1); Push(Stack[-4] * Stack[-1]);
0x47: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x49: PushEmpty()
0x4a: Call2 0x35

0x4b: Pop(0)
0x4c: GOTO 0x54

0x4d: Push((int) 0)
0x4e: Push((int) 24)
0x4f: Pop(1); Push(Stack[-5] * Stack[-1]);
0x50: @ SetTimeEvent(Stack[-2], Stack[-1])
0x51: Pop(2)
0x52: @ Hold()
0x53: Pop(0)
0x54: Return(); Pop(2)

0x55: PushEmpty()
0x56: PushEmpty()
0x57: Call2 0x31

0x58: Pop(0)
0x59: Return(); Pop(0)

0x5a: PushEmpty(object, object)
0x5b: @ self(Stack[-1])
0x5c: Pop(0)
0x5d: Stack[-1] = Stack[-3]
0x5e: Return(); Pop(2)

0x5f: Stack[-1] = 0
0x60: PushEmpty(object, object)
0x61: @ CreateObjectVector(Stack[-1])
0x62: Pop(0)
0x63: Stack[-1] = Stack[-3]
0x64: Return(); Pop(2)

0x65: Stack[-1] = 0
0x66: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x67: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=312
0x68: Pop(0)
0x69: Pop(0); Push((bool) Stack[-4] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6b: Push("Locator ") // @poff=323
0x6c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x6d: Push(" doesn't exist") // @poff=341
0x6e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f: @ Trace(Stack[-1])
0x70: Pop(1)
0x71: Stack[-1] = 0
0x72: GOTO 0x75

0x73: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=371
0x74: Pop(0)
0x75: Stack[-1] = Stack[-13]
0x76: Return(); Pop(8)

0x77: Stack[-1] = 0
0x78: PushEmpty(int, int, object, int, int, object)
0x79: Push(Stack[-7])
0x7a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x7b: @@ size(Stack[-3]); Obj=7 // @poff=390
0x7c: Pop(0)
0x7d: Stack[-2] = (int) 0
0x7e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x7f: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x80: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=395
0x81: Pop(0)
0x82: Push(Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: @@ Remove(); Obj=1 // @poff=399
0x85: Pop(0)
0x86: Stack[-1] = 0
0x87: Push((int) 1)
0x88: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x89: GOTO 0x7e

0x8a: @@ clear(); Obj=7 // @poff=406
0x8b: Pop(0)
0x8c: Return(); Pop(6)

