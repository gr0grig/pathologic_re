GlobalVarCount = 0

Strings:
	W:pt_gun_soldier
	W:pers_soldat
	W:gun_sentry.xml
	A:add
	W:pt_gun_sanitar
	W:pers_sanitar
	W:d9q01_sanitar.xml
	W:pt_gun_guard_soldier
	W:soldier.xml
	W:pt_gun_guard_sanitar
	W:sanitar_stat.xml
	A:size
	A:get
	A:GetActor
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:700074005f00670075006e005f0073006f006c006400690065007200000070006500720073005f0073006f006c006400610074000000670075006e005f00730065006e007400720079002e0078006d006c00000061646400700074005f00670075006e005f00730061006e006900740061007200000070006500720073005f00730061006e0069007400610072000000640039007100300031005f00730061006e0069007400610072002e0078006d006c000000700074005f00670075006e005f00670075006100720064005f0073006f006c006400690065007200000073006f006c0064006900650072002e0078006d006c000000700074005f00670075006e005f00670075006100720064005f00730061006e0069007400610072000000730061006e0069007400610072005f0073007400610074002e0078006d006c00000073697a6500676574004765744163746f72004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	Hold (0 args)
	GetMainOutdoorScene (1 args)
	IsPlayerActor (2 args)
	rand (2 args)
	Sleep (1 args)
	SimulateAttack (2 args)
	CreateObjectVector (1 args)
	Trace (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_23 Op = 0x4e Vars = (object)


0x0: PushEmpty(object)
0x1: Call 0x70

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty()
0x5: Call 0xb

0x6: Pop(0)
0x7: @ Hold()
0x8: Pop(0)
0x9: GOTO 0x7

0xa: Return(); Pop(0)

0xb: PushEmpty(object, int, int, int, int, object, int, int, int, int)
0xc: @ GetMainOutdoorScene(Stack[-5])
0xd: Pop(0)
0xe: Stack[-4] = (int) 1
0xf: Push((int) 5)
0x10: Pop(1); Push((bool) Stack[-5] <= Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-10] = Stack[-4]
0x14: Push("pt_gun_soldier") // @poff=0
0x15: Stack[-4] = Stack[-1] + Stack[-10]; Pop(1);
0x16: Stack[-2] = "pers_soldat" // @poff=30
0x17: Stack[-1] = "gun_sentry.xml" // @poff=54
0x18: Call 0x76

0x19: Pop(4)
0x1a: @@@ add(Stack[-1]); Obj=0 // @poff=84
0x1b: Pop(1)
0x1c: Push((int) 1)
0x1d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1e: GOTO 0xf

0x1f: Stack[-3] = (int) 1
0x20: Push((int) 2)
0x21: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-10] = Stack[-4]
0x25: Push("pt_gun_sanitar") // @poff=88
0x26: Stack[-4] = Stack[-1] + Stack[-9]; Pop(1);
0x27: Stack[-2] = "pers_sanitar" // @poff=118
0x28: Stack[-1] = "d9q01_sanitar.xml" // @poff=144
0x29: Call 0x76

0x2a: Pop(5)
0x2b: Push((int) 1)
0x2c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2d: GOTO 0x20

0x2e: Stack[-2] = (int) 1
0x2f: Push((int) 3)
0x30: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x32: PushEmpty(object, object, string, string, string)
0x33: Stack[-10] = Stack[-4]
0x34: Push("pt_gun_guard_soldier") // @poff=180
0x35: Stack[-4] = Stack[-1] + Stack[-8]; Pop(1);
0x36: Stack[-2] = "pers_soldat" // @poff=30
0x37: Stack[-1] = "soldier.xml" // @poff=222
0x38: Call 0x76

0x39: Pop(5)
0x3a: Push((int) 1)
0x3b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c: GOTO 0x2f

0x3d: Stack[-1] = (int) 1
0x3e: Push((int) 2)
0x3f: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x41: PushEmpty(object, object, string, string, string)
0x42: Stack[-10] = Stack[-4]
0x43: Push("pt_gun_guard_sanitar") // @poff=246
0x44: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x45: Stack[-2] = "pers_sanitar" // @poff=118
0x46: Stack[-1] = "sanitar_stat.xml" // @poff=288
0x47: Call 0x76

0x48: Pop(5)
0x49: Push((int) 1)
0x4a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4b: GOTO 0x3e

0x4c: Return(); Pop(10)

0x4d: Stack[-5] = 0
0x4e: PushEmpty(bool, int, int, object, object, float, bool, int, int, object, object, float)
0x4f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Return(); Pop(12)

0x52: @ IsPlayerActor(Stack[-13], Stack[-6])
0x53: Pop(0)
0x54: Push(Stack[-6])
0x55: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x56: EventDisable(23)
0x57: @@@ size(Stack[-5]); Obj=0 // @poff=322
0x58: Pop(0)
0x59: Stack[-4] = (int) 0
0x5a: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x5b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x5c: @@@ get(Stack[-3], Stack[-4]); Obj=0 // @poff=327
0x5d: Pop(0)
0x5e: @@ GetActor(Stack[-2]); Obj=3 // @poff=331
0x5f: Pop(0)
0x60: Push(Stack[-2])
0x61: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x62: Push((float)0.3499999940395355)
0x63: @ rand(Stack[-2], Stack[-1])
0x64: Pop(1)
0x65: @ Sleep(Stack[-1])
0x66: Pop(0)
0x67: @ SimulateAttack(Stack[-2], Stack[-13])
0x68: Pop(0)
0x69: Stack[-2] = 0
0x6a: Stack[-3] = 0
0x6b: Push((int) 1)
0x6c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6d: GOTO 0x5a

0x6e: EventEnable(23)
0x6f: Return(); Pop(12)

0x70: PushEmpty(object, object)
0x71: @ CreateObjectVector(Stack[-1])
0x72: Pop(0)
0x73: Stack[-1] = Stack[-3]
0x74: Return(); Pop(2)

0x75: Stack[-1] = 0
0x76: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x77: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=340
0x78: Pop(0)
0x79: Pop(0); Push((bool) Stack[-4] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7b: Push("Locator ") // @poff=351
0x7c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x7d: Push(" doesn't exist") // @poff=369
0x7e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f: @ Trace(Stack[-1])
0x80: Pop(1)
0x81: Stack[-1] = 0
0x82: GOTO 0x85

0x83: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=399
0x84: Pop(0)
0x85: Stack[-1] = Stack[-13]
0x86: Return(); Pop(8)

0x87: Stack[-1] = 0
