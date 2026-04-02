GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:quest_b1_01
	W:remove_cutscene
	W:b1q03
	W:place_doberman
	W:pt_b1q03_doberman
	W:pers_doberman
	W:b1q03_doberman.xml
	W:doberman_dead
	W:b1q03_dead
	W:cleanup
	A:Remove
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:710075006500730074005f00620031005f00300031000000720065006d006f00760065005f006300750074007300630065006e006500000062003100710030003300000070006c006100630065005f0064006f006200650072006d0061006e000000700074005f00620031007100300033005f0064006f006200650072006d0061006e00000070006500720073005f0064006f006200650072006d0061006e000000620031007100300033005f0064006f006200650072006d0061006e002e0078006d006c00000064006f006200650072006d0061006e005f0064006500610064000000620031007100300033005f006400650061006400000063006c00650061006e0075007000000052656d6f7665004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

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
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x61 Vars = (int, float)


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_b1_01" // @poff=0
0x2: Stack[-1] = "remove_cutscene" // @poff=24
0x3: Call2 0x7e

0x4: Pop(3)
0x5: Push("b1q03") // @poff=56
0x6: Push((int) 1)
0x7: @ SetVariable(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Stack[-1] = (int) 1
0xb: Call2 0x4e

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ Trace(Stack[-3])
0x10: Pop(0)
0x11: Push("place_doberman") // @poff=68
0x12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: @ GetMainOutdoorScene(Stack[-1])
0x15: Pop(0)
0x16: PushEmpty(object, object, string, string, string)
0x17: Stack[-6] = Stack[-4]
0x18: Stack[-3] = "pt_b1q03_doberman" // @poff=98
0x19: Stack[-2] = "pers_doberman" // @poff=134
0x1a: Stack[-1] = "b1q03_doberman.xml" // @poff=162
0x1b: Call2 0x6c

0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1d: Pop(5)
0x1e: Stack[-1] = 0
0x1f: GOTO 0x2e

0x20: Push("doberman_dead") // @poff=200
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: Push("b1q03_dead") // @poff=228
0x24: Push((int) 1)
0x25: @ SetVariable(Stack[-2], Stack[-1])
0x26: Pop(2)
0x27: GOTO 0x2e

0x28: Push("cleanup") // @poff=250
0x29: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x42

0x2d: Pop(0)
0x2e: Return(); Pop(2)

0x2f: PushEmpty(int, int)
0x30: Push("b1q03") // @poff=56
0x31: @ GetVariable(Stack[-1], Stack[-2])
0x32: Pop(1)
0x33: Push((int) 1000)
0x34: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x3a

0x38: Pop(0)
0x39: Return(); Pop(2)

0x3a: Push("b1q03") // @poff=56
0x3b: Push((int) -1)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: @@@ Remove(); Obj=0 // @poff=266
0x46: Pop(0)
0x47: Stack[0 + Tasks[-1].StackPointer] = 0
0x48: PushEmpty(object)
0x49: Call2 0x66

0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-1])
0x4c: Pop(1)
0x4d: Return(); Pop(0)

0x4e: PushEmpty(float, float)
0x4f: @ GetGameTime(Stack[-1])
0x50: Pop(0)
0x51: Push((int) 24)
0x52: Pop(1); Push(Stack[-4] * Stack[-1]);
0x53: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x55: PushEmpty()
0x56: Call2 0x42

0x57: Pop(0)
0x58: GOTO 0x60

0x59: Push((int) 0)
0x5a: Push((int) 24)
0x5b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x5c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: @ Hold()
0x5f: Pop(0)
0x60: Return(); Pop(2)

0x61: PushEmpty()
0x62: PushEmpty()
0x63: Call2 0x2f

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: PushEmpty(object, object)
0x67: @ self(Stack[-1])
0x68: Pop(0)
0x69: Stack[-1] = Stack[-3]
0x6a: Return(); Pop(2)

0x6b: Stack[-1] = 0
0x6c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x6d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=273
0x6e: Pop(0)
0x6f: Pop(0); Push((bool) Stack[-4] == 0)
0x70: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x71: Push("Locator ") // @poff=284
0x72: Pop(1); Push(Stack[-1] + Stack[-12]);
0x73: Push(" doesn't exist") // @poff=302
0x74: Pop(2); Push(Stack[-2] + Stack[-1]);
0x75: @ Trace(Stack[-1])
0x76: Pop(1)
0x77: Stack[-1] = 0
0x78: GOTO 0x7b

0x79: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=332
0x7a: Pop(0)
0x7b: Stack[-1] = Stack[-13]
0x7c: Return(); Pop(8)

0x7d: Stack[-1] = 0
0x7e: PushEmpty(object, object)
0x7f: @ FindActor(Stack[-1], Stack[-4])
0x80: Pop(0)
0x81: Pop(0); PushNull((bool) Stack[-1] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x83: Stack[-5] = (bool) 0
0x84: Return(); Pop(2)

0x85: @ Trigger(Stack[-1], Stack[-3])
0x86: Pop(0)
0x87: Stack[-5] = (bool) 1
0x88: Return(); Pop(2)

0x89: Stack[-1] = 0
