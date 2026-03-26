GlobalVarCount = 0

Strings:
	W:pt_spawn
	W:Not enough spawn points
	A:add
	A:get
	A:remove
	W:pers_butcher
	W:boiny_butcher.xml
	W:pers_morlok
	W:boiny_morlok.xml
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:size
	A:clear
// @pool_raw:700074005f0073007000610077006e0000004e006f007400200065006e006f00750067006800200073007000610077006e00200070006f0069006e00740073000000616464006765740072656d6f76650070006500720073005f006200750074006300680065007200000062006f0069006e0079005f0062007500740063006800650072002e0078006d006c00000070006500720073005f006d006f0072006c006f006b00000062006f0069006e0079005f006d006f0072006c006f006b002e0078006d006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000073697a6500636c65617200

Import:
	Hold (0 args)
	GetLocator (2 args)
	Trace (1 args)
	CreateIntVector (1 args)
	irand (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x8 Vars = ()
		EVENT_6 Op = 0x61 Vars = ()


0x0: PushEmpty(object)
0x1: Call2 0x6c

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty(int, bool, object, int, int, int, int, int, int, int, int, bool, object, int, int, int, int, int, int, int)
0x9: Stack[-10] = (int) 0
0xa: Push("pt_spawn") // @poff=0
0xb: Push((int) 1)
0xc: Pop(1); Push(Stack[-12] + Stack[-1]);
0xd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe: @ GetLocator(Stack[-1], Stack[-10])
0xf: Pop(1)
0x10: Pop(0); Push((bool) Stack[-9] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: GOTO 0x16

0x13: Push((int) 1)
0x14: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x15: GOTO 0xa

0x16: Push((int) 18)
0x17: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x19: Push("Not enough spawn points") // @poff=18
0x1a: @ Trace(Stack[-1])
0x1b: Pop(1)
0x1c: Return(); Pop(20)

0x1d: @ CreateIntVector(Stack[-8])
0x1e: Pop(0)
0x1f: Stack[-7] = (int) 1
0x20: Pop(0); Push((bool) Stack[-7] <= Stack[-10])
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: @@ add(Stack[-7]); Obj=8 // @poff=66
0x23: Pop(0)
0x24: Push((int) 1)
0x25: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x26: GOTO 0x20

0x27: Stack[-6] = (int) 0
0x28: Push((int) 12)
0x29: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x2b: @ irand(Stack[-5], Stack[-10])
0x2c: Pop(0)
0x2d: @@ get(Stack[-4], Stack[-5]); Obj=8 // @poff=70
0x2e: Pop(0)
0x2f: @@ remove(Stack[-5]); Obj=8 // @poff=74
0x30: Pop(0)
0x31: Push((int) -1)
0x32: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x33: PushEmpty(object, object, string, string, string)
0x34: PushEmpty(object)
0x35: Call2 0x66

0x36: Stack[-1] = Stack[-5]
0x37: Pop(1)
0x38: Push("pt_spawn") // @poff=0
0x39: Stack[-4] = Stack[-1] + Stack[-10]; Pop(1);
0x3a: Stack[-2] = "pers_butcher" // @poff=81
0x3b: Stack[-1] = "boiny_butcher.xml" // @poff=107
0x3c: Call2 0x72

0x3d: Pop(4)
0x3e: @@@ add(Stack[-1]); Obj=0 // @poff=66
0x3f: Pop(1)
0x40: Push((int) 1)
0x41: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x42: GOTO 0x28

0x43: Stack[-3] = (int) 0
0x44: Push((int) 6)
0x45: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x47: @ irand(Stack[-2], Stack[-10])
0x48: Pop(0)
0x49: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=70
0x4a: Pop(0)
0x4b: @@ remove(Stack[-2]); Obj=8 // @poff=74
0x4c: Pop(0)
0x4d: Push((int) -1)
0x4e: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x4f: PushEmpty(object, object, string, string, string)
0x50: PushEmpty(object)
0x51: Call2 0x66

0x52: Stack[-1] = Stack[-5]
0x53: Pop(1)
0x54: Push("pt_spawn") // @poff=0
0x55: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x56: Stack[-2] = "pers_morlok" // @poff=143
0x57: Stack[-1] = "boiny_morlok.xml" // @poff=167
0x58: Call2 0x72

0x59: Pop(4)
0x5a: @@@ add(Stack[-1]); Obj=0 // @poff=66
0x5b: Pop(1)
0x5c: Push((int) 1)
0x5d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x5e: GOTO 0x44

0x5f: Return(); Pop(20)

0x60: Stack[-8] = 0
0x61: PushEmpty(object)
0x62: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63: Call2 0x84

0x64: Pop(1)
0x65: Return(); Pop(0)

0x66: PushEmpty(object, object)
0x67: @ self(Stack[-1])
0x68: Pop(0)
0x69: Stack[-1] = Stack[-3]
0x6a: Return(); Pop(2)

0x6b: Stack[-1] = 0
0x6c: PushEmpty(object, object)
0x6d: @ CreateObjectVector(Stack[-1])
0x6e: Pop(0)
0x6f: Stack[-1] = Stack[-3]
0x70: Return(); Pop(2)

0x71: Stack[-1] = 0
0x72: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x73: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=201
0x74: Pop(0)
0x75: Pop(0); Push((bool) Stack[-4] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x77: Push("Locator ") // @poff=212
0x78: Pop(1); Push(Stack[-1] + Stack[-12]);
0x79: Push(" doesn't exist") // @poff=230
0x7a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b: @ Trace(Stack[-1])
0x7c: Pop(1)
0x7d: Stack[-1] = 0
0x7e: GOTO 0x81

0x7f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x80: Pop(0)
0x81: Stack[-1] = Stack[-13]
0x82: Return(); Pop(8)

0x83: Stack[-1] = 0
0x84: PushEmpty(int, int, object, int, int, object)
0x85: Push(Stack[-7])
0x86: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x87: @@ size(Stack[-3]); Obj=7 // @poff=260
0x88: Pop(0)
0x89: Stack[-2] = (int) 0
0x8a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x8b: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8c: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=70
0x8d: Pop(0)
0x8e: Push(Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x90: @ RemoveActor(Stack[-1])
0x91: Pop(0)
0x92: Stack[-1] = 0
0x93: Push((int) 1)
0x94: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x95: GOTO 0x8a

0x96: @@ clear(); Obj=7 // @poff=265
0x97: Pop(0)
0x98: Return(); Pop(6)

