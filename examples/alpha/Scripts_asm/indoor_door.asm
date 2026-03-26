GlobalVarCount = 0

Strings:
	W:door_closed
	W:Door is locked
	W:@
	W:Wrong door name
	W:No main outdoor scene
	A:GetName
	W:pt_
	A:GetLocator
	W:door_open
// @pool_raw:64006f006f0072005f0063006c006f00730065006400000044006f006f00720020006900730020006c006f0063006b0065006400000040000000570072006f006e006700200064006f006f00720020006e0061006d00650000004e006f0020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744e616d6500700074005f0000004765744c6f6361746f720064006f006f0072005f006f00700065006e000000

Import:
	SetVisibility (1 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
	GetActorName (1 args)
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	PlaySharedSound (1 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(string, int, object, object, string, string, bool, cvector, cvector, string, int, object, object, string, string, bool, cvector, cvector)
0x8: PushEmpty(bool)
0x9: Call 0x51

0xa: Pop(0)
0xb: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xc: Push("door_closed") // @poff=0
0xd: @ PlaySound(Stack[-1])
0xe: Pop(1)
0xf: Push("Door is locked") // @poff=24
0x10: @ Trace(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(18)

0x13: @ GetActorName(Stack[-9])
0x14: Pop(0)
0x15: PushEmpty(int, string, string)
0x16: Stack[-12] = Stack[-2]
0x17: Stack[-1] = "@" // @poff=54
0x18: Call 0x47

0x19: Stack[-3] = Stack[-11]
0x1a: Pop(3)
0x1b: Push((int) -1)
0x1c: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: Push("Wrong door name") // @poff=58
0x1f: @ Trace(Stack[-1])
0x20: Pop(1)
0x21: Return(); Pop(18)

0x22: @ GetMainOutdoorScene(Stack[-7])
0x23: Pop(0)
0x24: Pop(0); PushNull((bool) Stack[-7] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x26: Push("No main outdoor scene") // @poff=90
0x27: @ Trace(Stack[-1])
0x28: Pop(1)
0x29: Return(); Pop(18)

0x2a: @ GetScene(Stack[-6])
0x2b: Pop(0)
0x2c: @@ GetName(Stack[-5]); Obj=6 // @poff=134
0x2d: Pop(0)
0x2e: Push("pt_") // @poff=142
0x2f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x30: Push("@") // @poff=54
0x31: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32: PushEmpty(string, string, int)
0x33: Stack[-13] = Stack[-2]
0x34: Push((int) 1)
0x35: Stack[-2] = Stack[-13] + Stack[-1]; Pop(1);
0x36: Call 0x4c

0x37: Pop(2)
0x38: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0x39: @ Trace(Stack[-4])
0x3a: Pop(0)
0x3b: @@ GetLocator(Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=7 // @poff=150
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3f: Push("door_open") // @poff=161
0x40: @ PlaySharedSound(Stack[-1])
0x41: Pop(1)
0x42: @ Teleport(Stack[-19], Stack[-7], Stack[-2], Stack[-1])
0x43: Pop(0)
0x44: Return(); Pop(18)

0x45: Stack[-6] = 0
0x46: Stack[-7] = 0
0x47: PushEmpty(int, int)
0x48: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x49: Pop(0)
0x4a: Stack[-1] = Stack[-5]
0x4b: Return(); Pop(2)

0x4c: PushEmpty(string, string)
0x4d: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x4e: Pop(0)
0x4f: Stack[-1] = Stack[-5]
0x50: Return(); Pop(2)

0x51: PushEmpty(int, int)
0x52: Push("locked") // @poff=40
0x53: @ GetProperty(Stack[-1], Stack[-2])
0x54: Pop(1)
0x55: Push((int) 0)
0x56: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x57: Return(); Pop(2)

