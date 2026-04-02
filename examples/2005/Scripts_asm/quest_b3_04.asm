GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_d3q01_gpatrol1
	W:pers_patrool
	W:b3q04_gpatrol.xml
	W:d3q01_graveyard_fire
	W:d3q01_graveyard_fire.xml
	W:put_item
	W:b3q04
	W:fail
	W:completed
	A:Remove
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:700074005f00640033007100300031005f00670070006100740072006f006c003100000070006500720073005f0070006100740072006f006f006c000000620033007100300034005f00670070006100740072006f006c002e0078006d006c000000640033007100300031005f006700720061007600650079006100720064005f0066006900720065000000640033007100300031005f006700720061007600650079006100720064005f0066006900720065002e0078006d006c0000007000750074005f006900740065006d0000006200330071003000340000006600610069006c00000063006f006d0070006c006500740065006400000052656d6f76650063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	sync (0 args)
	Trigger (2 args)
	SetVariable (2 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x18
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x24 Vars = (string)
		EVENT_9 Op = 0x71 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string, string)
0x4: Stack[-6] = Stack[-4]
0x5: Stack[-3] = "pt_d3q01_gpatrol1" // @poff=0
0x6: Stack[-2] = "pers_patrool" // @poff=36
0x7: Stack[-1] = "b3q04_gpatrol.xml" // @poff=62
0x8: Call2 0x7c

0x9: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xa: Pop(5)
0xb: Push("d3q01_graveyard_fire") // @poff=98
0xc: Push([0.0, 0.0, 0.0])
0xd: Push([0.0, 0.0, 1.0])
0xe: Push("d3q01_graveyard_fire.xml") // @poff=140
0xf: @ AddActor(Stack[-1]T, Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x10: Pop(4)
0x11: @ sync()
0x12: Pop(0)
0x13: Push("put_item") // @poff=190
0x14: @ Trigger(Stack[-1]T, Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(2)

0x17: Stack[-1] = 0
0x18: Push("b3q04") // @poff=208
0x19: Push((int) 1)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: PushEmpty()
0x1d: Call2 0x0

0x1e: Pop(0)
0x1f: PushEmpty(int)
0x20: Stack[-1] = (int) 3
0x21: Call2 0x5e

0x22: Pop(1)
0x23: Return(); Pop(0)

0x24: PushEmpty()
0x25: @ Trace(Stack[-1])
0x26: Pop(0)
0x27: Push("fail") // @poff=220
0x28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: PushEmpty()
0x2b: Call2 0x40

0x2c: Pop(0)
0x2d: GOTO 0x34

0x2e: Push("completed") // @poff=230
0x2f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x31: PushEmpty()
0x32: Call2 0x48

0x33: Pop(0)
0x34: Return(); Pop(0)

0x35: PushEmpty(int, int)
0x36: Push("b3q04") // @poff=208
0x37: @ GetVariable(Stack[-1], Stack[-2])
0x38: Pop(1)
0x39: Push((int) 1000)
0x3a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x40

0x3e: Pop(0)
0x3f: Return(); Pop(2)

0x40: Push("b3q04") // @poff=208
0x41: Push((int) -1)
0x42: @ SetVariable(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: PushEmpty()
0x45: Call2 0x50

0x46: Pop(0)
0x47: Return(); Pop(0)

0x48: Push("b3q04") // @poff=208
0x49: Push((int) 1000)
0x4a: @ SetVariable(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: PushEmpty()
0x4d: Call2 0x50

0x4e: Pop(0)
0x4f: Return(); Pop(0)

0x50: EventDisable(26)
0x51: @@@ Remove(); Obj=0 // @poff=250
0x52: Pop(0)
0x53: Push( Stack[1 + Tasks[-1].StackPointer] )
0x54: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x55: Push("cleanup") // @poff=257
0x56: @ Trigger(Stack[-1]T, Stack[-1])
0x57: Pop(1)
0x58: PushEmpty(object)
0x59: Call2 0x76

0x5a: Pop(0)
0x5b: @ RemoveActor(Stack[-1])
0x5c: Pop(1)
0x5d: Return(); Pop(0)

0x5e: PushEmpty(float, float)
0x5f: @ GetGameTime(Stack[-1])
0x60: Pop(0)
0x61: Push((int) 24)
0x62: Pop(1); Push(Stack[-4] * Stack[-1]);
0x63: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x50

0x67: Pop(0)
0x68: GOTO 0x70

0x69: Push((int) 0)
0x6a: Push((int) 24)
0x6b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x6c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: @ Hold()
0x6f: Pop(0)
0x70: Return(); Pop(2)

0x71: PushEmpty()
0x72: PushEmpty()
0x73: Call2 0x35

0x74: Pop(0)
0x75: Return(); Pop(0)

0x76: PushEmpty(object, object)
0x77: @ self(Stack[-1])
0x78: Pop(0)
0x79: Stack[-1] = Stack[-3]
0x7a: Return(); Pop(2)

0x7b: Stack[-1] = 0
0x7c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=273
0x7e: Pop(0)
0x7f: Pop(0); Push((bool) Stack[-4] == 0)
0x80: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x81: Push("Locator ") // @poff=284
0x82: Pop(1); Push(Stack[-1] + Stack[-12]);
0x83: Push(" doesn't exist") // @poff=302
0x84: Pop(2); Push(Stack[-2] + Stack[-1]);
0x85: @ Trace(Stack[-1])
0x86: Pop(1)
0x87: Stack[-1] = 0
0x88: GOTO 0x8b

0x89: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=332
0x8a: Pop(0)
0x8b: Stack[-1] = Stack[-13]
0x8c: Return(); Pop(8)

0x8d: Stack[-1] = 0
