GlobalVarCount = 0

Strings:
	W:Trigger is locked
	W:@
	W:Wrong door name
	W:pt_
	W:Destination scene '
	W:' not found
	A:GetLocator
	W:Locator 
	W: not found in destination scene 
// @pool_raw:540072006900670067006500720020006900730020006c006f0063006b0065006400000040000000570072006f006e006700200064006f006f00720020006e0061006d0065000000700074005f000000440065007300740069006e006100740069006f006e0020007300630065006e006500200027000000270020006e006f007400200066006f0075006e00640000004765744c6f6361746f72004c006f006300610074006f0072002000000020006e006f007400200066006f0075006e006400200069006e002000640065007300740069006e006100740069006f006e0020007300630065006e00650020000000

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	Trace (1 args)
	GetActorName (1 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	_strsub (4 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_23 Op = 0x4 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, string, int, string, string, object, bool, cvector, cvector, bool, string, int, string, string, object, bool, cvector, cvector)
0x5: @ IsPlayerActor(Stack[-19], Stack[-9])
0x6: Pop(0)
0x7: Pop(0); Push((bool) Stack[-9] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x9: Return(); Pop(18)

0xa: PushEmpty(bool)
0xb: Call2 0x5a

0xc: Pop(0)
0xd: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xe: Push("Trigger is locked") // @poff=0
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: Return(); Pop(18)

0x12: @ GetActorName(Stack[-8])
0x13: Pop(0)
0x14: PushEmpty(int, string, string)
0x15: Stack[-11] = Stack[-2]
0x16: Stack[-1] = "@" // @poff=36
0x17: Call2 0x4b

0x18: Stack[-3] = Stack[-10]
0x19: Pop(3)
0x1a: Push((int) -1)
0x1b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push("Wrong door name") // @poff=40
0x1e: @ Trace(Stack[-1])
0x1f: Pop(1)
0x20: Return(); Pop(18)

0x21: PushEmpty(string, string, int, int)
0x22: Stack[-12] = Stack[-3]
0x23: Stack[-2] = (int) 0
0x24: Stack[-11] = Stack[-1]
0x25: Call2 0x55

0x26: Stack[-4] = Stack[-10]
0x27: Pop(4)
0x28: Push("pt_") // @poff=72
0x29: PushEmpty(string, string, int)
0x2a: Stack[-12] = Stack[-2]
0x2b: Push((int) 1)
0x2c: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x2d: Call2 0x50

0x2e: Pop(2)
0x2f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x30: @ GetSceneByName(Stack[-4], Stack[-6])
0x31: Pop(0)
0x32: Pop(0); PushNull((bool) Stack[-4] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x34: Push("Destination scene '") // @poff=80
0x35: Pop(1); Push(Stack[-1] + Stack[-7]);
0x36: Push("' not found") // @poff=120
0x37: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38: @ Trace(Stack[-1])
0x39: Pop(1)
0x3a: Return(); Pop(18)

0x3b: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=144
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: @ Teleport(Stack[-19], Stack[-4], Stack[-2], Stack[-1])
0x40: Pop(0)
0x41: GOTO 0x49

0x42: Push("Locator ") // @poff=155
0x43: Pop(1); Push(Stack[-1] + Stack[-6]);
0x44: Push(" not found in destination scene ") // @poff=173
0x45: Pop(2); Push(Stack[-2] + Stack[-1]);
0x46: Pop(1); Push(Stack[-1] + Stack[-7]);
0x47: @ Trace(Stack[-1])
0x48: Pop(1)
0x49: Return(); Pop(18)

0x4a: Stack[-4] = 0
0x4b: PushEmpty(int, int)
0x4c: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x4d: Pop(0)
0x4e: Stack[-1] = Stack[-5]
0x4f: Return(); Pop(2)

0x50: PushEmpty(string, string)
0x51: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x52: Pop(0)
0x53: Stack[-1] = Stack[-5]
0x54: Return(); Pop(2)

0x55: PushEmpty(string, string)
0x56: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x57: Pop(0)
0x58: Stack[-1] = Stack[-6]
0x59: Return(); Pop(2)

0x5a: PushEmpty(int, int)
0x5b: Push("locked") // @poff=22
0x5c: @ GetProperty(Stack[-1], Stack[-2])
0x5d: Pop(1)
0x5e: Push((int) 0)
0x5f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x60: Return(); Pop(2)

