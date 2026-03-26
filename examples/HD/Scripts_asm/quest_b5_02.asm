GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:place_prophet
	W:house_vlad
	W:pt_prorok
	W:pers_krysa
	W:b5q02_prorok.xml
	W:remove_prophet
	W:cleanup
	W:maze_start
	W:pt_maze_start
	W:fail
	W:completed
	W:b5q02
	W:player
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Teleport location '
	W:' not found in scene '
// @pool_raw:70006c006100630065005f00700072006f007000680065007400000068006f007500730065005f0076006c00610064000000700074005f00700072006f0072006f006b00000070006500720073005f006b0072007900730061000000620035007100300032005f00700072006f0072006f006b002e0078006d006c000000720065006d006f00760065005f00700072006f007000680065007400000063006c00650061006e007500700000006d0061007a0065005f00730074006100720074000000700074005f006d0061007a0065005f007300740061007200740000006600610069006c00000063006f006d0070006c006500740065006400000062003500710030003200000070006c00610079006500720000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000540065006c00650070006f007200740020006c006f0063006100740069006f006e00200027000000270020006e006f007400200066006f0075006e006400200069006e0020007300630065006e006500200027000000

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	FindActor (2 args)
	self (1 args)
	AddActor (6 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x74 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 5
0x2: Call2 0x61

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: @ Trace(Stack[-3])
0x7: Pop(0)
0x8: Push("place_prophet") // @poff=0
0x9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0xb: Push("house_vlad") // @poff=28
0xc: @ GetSceneByName(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-6] = Stack[-4]
0x10: Stack[-3] = "pt_prorok" // @poff=50
0x11: Stack[-2] = "pers_krysa" // @poff=70
0x12: Stack[-1] = "b5q02_prorok.xml" // @poff=92
0x13: Call2 0x86

0x14: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x15: Pop(5)
0x16: Stack[-1] = 0
0x17: GOTO 0x39

0x18: Push("remove_prophet") // @poff=126
0x19: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: Push("cleanup") // @poff=156
0x1c: @ Trigger(Stack[-0]T, Stack[-1])
0x1d: Pop(1)
0x1e: GOTO 0x39

0x1f: Push("maze_start") // @poff=172
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x22: PushEmpty(object, string, string)
0x23: PushEmpty(object)
0x24: Call2 0x79

0x25: Stack[-1] = Stack[-4]
0x26: Pop(1)
0x27: Stack[-2] = "house_vlad" // @poff=28
0x28: Stack[-1] = "pt_maze_start" // @poff=194
0x29: Call2 0x98

0x2a: Pop(3)
0x2b: GOTO 0x39

0x2c: Push("fail") // @poff=222
0x2d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: PushEmpty()
0x30: Call2 0x45

0x31: Pop(0)
0x32: GOTO 0x39

0x33: Push("completed") // @poff=232
0x34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x4d

0x38: Pop(0)
0x39: Return(); Pop(2)

0x3a: PushEmpty(int, int)
0x3b: Push("b5q02") // @poff=252
0x3c: @ GetVariable(Stack[-1], Stack[-2])
0x3d: Pop(1)
0x3e: Push((int) 1000)
0x3f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x41: PushEmpty()
0x42: Call2 0x45

0x43: Pop(0)
0x44: Return(); Pop(2)

0x45: Push("b5q02") // @poff=252
0x46: Push((int) -1)
0x47: @ SetVariable(Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: PushEmpty()
0x4a: Call2 0x55

0x4b: Pop(0)
0x4c: Return(); Pop(0)

0x4d: Push("b5q02") // @poff=252
0x4e: Push((int) 1000)
0x4f: @ SetVariable(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: PushEmpty()
0x52: Call2 0x55

0x53: Pop(0)
0x54: Return(); Pop(0)

0x55: EventDisable(26)
0x56: Push( Stack[0 + Tasks[-1].StackPointer] )
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: Push("cleanup") // @poff=156
0x59: @ Trigger(Stack[-0]T, Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty(object)
0x5c: Call2 0x80

0x5d: Pop(0)
0x5e: @ RemoveActor(Stack[-1])
0x5f: Pop(1)
0x60: Return(); Pop(0)

0x61: PushEmpty(float, float)
0x62: @ GetGameTime(Stack[-1])
0x63: Pop(0)
0x64: Push((int) 24)
0x65: Pop(1); Push(Stack[-4] * Stack[-1]);
0x66: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x68: PushEmpty()
0x69: Call2 0x55

0x6a: Pop(0)
0x6b: GOTO 0x73

0x6c: Push((int) 0)
0x6d: Push((int) 24)
0x6e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x6f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x70: Pop(2)
0x71: @ Hold()
0x72: Pop(0)
0x73: Return(); Pop(2)

0x74: PushEmpty()
0x75: PushEmpty()
0x76: Call2 0x3a

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: PushEmpty(object, object)
0x7a: Push("player") // @poff=264
0x7b: @ FindActor(Stack[-2], Stack[-1])
0x7c: Pop(1)
0x7d: Stack[-1] = Stack[-3]
0x7e: Return(); Pop(2)

0x7f: Stack[-1] = 0
0x80: PushEmpty(object, object)
0x81: @ self(Stack[-1])
0x82: Pop(0)
0x83: Stack[-1] = Stack[-3]
0x84: Return(); Pop(2)

0x85: Stack[-1] = 0
0x86: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x87: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=278
0x88: Pop(0)
0x89: Pop(0); Push((bool) Stack[-4] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8b: Push("Locator ") // @poff=289
0x8c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x8d: Push(" doesn't exist") // @poff=307
0x8e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8f: @ Trace(Stack[-1])
0x90: Pop(1)
0x91: Stack[-1] = 0
0x92: GOTO 0x95

0x93: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x94: Pop(0)
0x95: Stack[-1] = Stack[-13]
0x96: Return(); Pop(8)

0x97: Stack[-1] = 0
0x98: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x99: Pop(0); Push((bool) Stack[-11] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(8)

0x9c: @ GetSceneByName(Stack[-4], Stack[-10])
0x9d: Pop(0)
0x9e: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=278
0x9f: Pop(0)
0xa0: Pop(0); Push((bool) Stack[-3] == 0)
0xa1: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa2: Push("Teleport location '") // @poff=337
0xa3: Pop(1); Push(Stack[-1] + Stack[-10]);
0xa4: Push("' not found in scene '") // @poff=377
0xa5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa6: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa7: Push("'") // @poff=373
0xa8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa9: @ Trace(Stack[-1])
0xaa: Pop(1)
0xab: GOTO 0xae

0xac: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0xad: Pop(0)
0xae: Return(); Pop(8)

0xaf: Stack[-4] = 0
