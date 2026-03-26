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
	W:ACHIEVEMENT_DONT
	W:cleanup
	A:Remove
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:710075006500730074005f00620031005f00300031000000720065006d006f00760065005f006300750074007300630065006e006500000062003100710030003300000070006c006100630065005f0064006f006200650072006d0061006e000000700074005f00620031007100300033005f0064006f006200650072006d0061006e00000070006500720073005f0064006f006200650072006d0061006e000000620031007100300033005f0064006f006200650072006d0061006e002e0078006d006c00000064006f006200650072006d0061006e005f0064006500610064000000620031007100300033005f006400650061006400000041004300480049004500560045004d0045004e0054005f0044004f004e005400000063006c00650061006e0075007000000052656d6f7665004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	UnlockAchievement (1 args)
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
		EVENT_9 Op = 0x64 Vars = (int, float)


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_b1_01" // @poff=0
0x2: Stack[-1] = "remove_cutscene" // @poff=24
0x3: Call2 0x81

0x4: Pop(3)
0x5: Push("b1q03") // @poff=56
0x6: Push((int) 1)
0x7: @ SetVariable(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Stack[-1] = (int) 1
0xb: Call2 0x51

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
0x1b: Call2 0x6f

0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1d: Pop(5)
0x1e: Stack[-1] = 0
0x1f: GOTO 0x31

0x20: Push("doberman_dead") // @poff=200
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x23: Push("b1q03_dead") // @poff=228
0x24: Push((int) 1)
0x25: @ SetVariable(Stack[-2], Stack[-1])
0x26: Pop(2)
0x27: Push("ACHIEVEMENT_DONT") // @poff=250
0x28: @ UnlockAchievement(Stack[-1])
0x29: Pop(1)
0x2a: GOTO 0x31

0x2b: Push("cleanup") // @poff=284
0x2c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x45

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: PushEmpty(int, int)
0x33: Push("b1q03") // @poff=56
0x34: @ GetVariable(Stack[-1], Stack[-2])
0x35: Pop(1)
0x36: Push((int) 1000)
0x37: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: PushEmpty()
0x3a: Call2 0x3d

0x3b: Pop(0)
0x3c: Return(); Pop(2)

0x3d: Push("b1q03") // @poff=56
0x3e: Push((int) -1)
0x3f: @ SetVariable(Stack[-2], Stack[-1])
0x40: Pop(2)
0x41: PushEmpty()
0x42: Call2 0x45

0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: EventDisable(26)
0x46: Push( Stack[0 + Tasks[-1].StackPointer] )
0x47: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x48: @@@ Remove(); Obj=0 // @poff=300
0x49: Pop(0)
0x4a: Stack[0 + Tasks[-1].StackPointer] = 0
0x4b: PushEmpty(object)
0x4c: Call2 0x69

0x4d: Pop(0)
0x4e: @ RemoveActor(Stack[-1])
0x4f: Pop(1)
0x50: Return(); Pop(0)

0x51: PushEmpty(float, float)
0x52: @ GetGameTime(Stack[-1])
0x53: Pop(0)
0x54: Push((int) 24)
0x55: Pop(1); Push(Stack[-4] * Stack[-1]);
0x56: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x58: PushEmpty()
0x59: Call2 0x45

0x5a: Pop(0)
0x5b: GOTO 0x63

0x5c: Push((int) 0)
0x5d: Push((int) 24)
0x5e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x5f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: @ Hold()
0x62: Pop(0)
0x63: Return(); Pop(2)

0x64: PushEmpty()
0x65: PushEmpty()
0x66: Call2 0x32

0x67: Pop(0)
0x68: Return(); Pop(0)

0x69: PushEmpty(object, object)
0x6a: @ self(Stack[-1])
0x6b: Pop(0)
0x6c: Stack[-1] = Stack[-3]
0x6d: Return(); Pop(2)

0x6e: Stack[-1] = 0
0x6f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x70: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=307
0x71: Pop(0)
0x72: Pop(0); Push((bool) Stack[-4] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x74: Push("Locator ") // @poff=318
0x75: Pop(1); Push(Stack[-1] + Stack[-12]);
0x76: Push(" doesn't exist") // @poff=336
0x77: Pop(2); Push(Stack[-2] + Stack[-1]);
0x78: @ Trace(Stack[-1])
0x79: Pop(1)
0x7a: Stack[-1] = 0
0x7b: GOTO 0x7e

0x7c: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=366
0x7d: Pop(0)
0x7e: Stack[-1] = Stack[-13]
0x7f: Return(); Pop(8)

0x80: Stack[-1] = 0
0x81: PushEmpty(object, object)
0x82: @ FindActor(Stack[-1], Stack[-4])
0x83: Pop(0)
0x84: Pop(0); PushNull((bool) Stack[-1] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: Stack[-5] = (bool) 0
0x87: Return(); Pop(2)

0x88: @ Trigger(Stack[-1], Stack[-3])
0x89: Pop(0)
0x8a: Stack[-5] = (bool) 1
0x8b: Return(); Pop(2)

0x8c: Stack[-1] = 0
