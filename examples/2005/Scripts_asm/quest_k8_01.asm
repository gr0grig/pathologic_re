GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:boiny@door1
	W:unlock_boiny
	W:fail
	W:completed
	W:cleanup
	W:k8q01
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:klara2_npc_positioner
	W:init
// @pool_raw:62006f0069006e007900400064006f006f0072003100000075006e006c006f0063006b005f0062006f0069006e00790000006600610069006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000006b003800710030003100000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006b006c0061007200610032005f006e00700063005f0070006f0073006900740069006f006e0065007200000069006e00690074000000

Import:
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0xc Vars = (string)


0x0: PushEmpty()
0x1: Call2 0x76

0x2: Pop(0)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "boiny@door1" // @poff=0
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x59

0x7: Pop(2)
0x8: @ Hold()
0x9: Pop(0)
0xa: GOTO 0x8

0xb: Return(); Pop(0)

0xc: PushEmpty(int, int)
0xd: @ Trace(Stack[-3])
0xe: Pop(0)
0xf: Push("unlock_boiny") // @poff=24
0x10: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x12: PushEmpty(string, bool)
0x13: Stack[-2] = "boiny@door1" // @poff=0
0x14: Stack[-1] = (bool) 0
0x15: Call2 0x59

0x16: Pop(2)
0x17: GOTO 0x36

0x18: Push("fail") // @poff=50
0x19: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: PushEmpty()
0x1c: Call2 0x37

0x1d: Pop(0)
0x1e: GOTO 0x36

0x1f: Push("completed") // @poff=60
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x22: PushEmpty()
0x23: Call2 0x3f

0x24: Pop(0)
0x25: GOTO 0x36

0x26: Push("cleanup") // @poff=80
0x27: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x29: Push("k8q01") // @poff=96
0x2a: @ GetVariable(Stack[-1], Stack[-2])
0x2b: Pop(1)
0x2c: Push((int) 1000)
0x2d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: PushEmpty()
0x30: Call2 0x37

0x31: Pop(0)
0x32: GOTO 0x36

0x33: PushEmpty()
0x34: Call2 0x47

0x35: Pop(0)
0x36: Return(); Pop(2)

0x37: Push("k8q01") // @poff=96
0x38: Push((int) -1)
0x39: @ SetVariable(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: PushEmpty()
0x3c: Call2 0x47

0x3d: Pop(0)
0x3e: Return(); Pop(0)

0x3f: Push("k8q01") // @poff=96
0x40: Push((int) 1000)
0x41: @ SetVariable(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: PushEmpty()
0x44: Call2 0x47

0x45: Pop(0)
0x46: Return(); Pop(0)

0x47: EventDisable(26)
0x48: PushEmpty(string, bool)
0x49: Stack[-2] = "boiny@door1" // @poff=0
0x4a: Stack[-1] = (bool) 1
0x4b: Call2 0x59

0x4c: Pop(2)
0x4d: PushEmpty(object)
0x4e: Call2 0x53

0x4f: Pop(0)
0x50: @ RemoveActor(Stack[-1])
0x51: Pop(1)
0x52: Return(); Pop(0)

0x53: PushEmpty(object, object)
0x54: @ self(Stack[-1])
0x55: Pop(0)
0x56: Stack[-1] = Stack[-3]
0x57: Return(); Pop(2)

0x58: Stack[-1] = 0
0x59: PushEmpty(object, object)
0x5a: @ FindActor(Stack[-1], Stack[-4])
0x5b: Pop(0)
0x5c: Pop(0); Push((bool) Stack[-1] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: Push("Door ") // @poff=108
0x5f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x60: Push(" not found") // @poff=120
0x61: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62: @ Trace(Stack[-1])
0x63: Pop(1)
0x64: GOTO 0x68

0x65: Push("locked") // @poff=142
0x66: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=156
0x67: Pop(1)
0x68: Return(); Pop(2)

0x69: Stack[-1] = 0
0x6a: PushEmpty(object, object)
0x6b: @ FindActor(Stack[-1], Stack[-4])
0x6c: Pop(0)
0x6d: Pop(0); PushNull((bool) Stack[-1] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6f: Stack[-5] = (bool) 0
0x70: Return(); Pop(2)

0x71: @ Trigger(Stack[-1], Stack[-3])
0x72: Pop(0)
0x73: Stack[-5] = (bool) 1
0x74: Return(); Pop(2)

0x75: Stack[-1] = 0
0x76: PushEmpty(bool, string, string)
0x77: Stack[-2] = "klara2_npc_positioner" // @poff=168
0x78: Stack[-1] = "init" // @poff=212
0x79: Call2 0x6a

0x7a: Pop(3)
0x7b: Return(); Pop(0)

