GlobalVarCount = 0

Strings:
	A:GetRegionByPt
	W:Invalid bonfire region
	W:_light
	W:light_fire.xml
	W:scripted
	W:Region
	W:State
// @pool_raw:476574526567696f6e427950740049006e00760061006c0069006400200062006f006e006600690072006500200072006500670069006f006e0000005f006c00690067006800740000006c0069006700680074005f0066006900720065002e0078006d006c00000073006300720069007000740065006400000052006500670069006f006e000000530074006100740065000000
// @pool_encoding:utf8

Import:
	SetVisibility (1 args)
	Hold (0 args)
	GetPosition (1 args)
	GetScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	GetActorName (1 args)
	AddActor (6 args)
	AddActorByType (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x7 Vars = ()
		EVENT_6 Op = 0x37 Vars = ()


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(cvector, object, int, int, string, cvector, object, int, int, string)
0x8: @ GetPosition(Stack[-5])
0x9: Pop(0)
0xa: @ GetScene(Stack[-4])
0xb: Pop(0)
0xc: @@ GetRegionByPt(Stack[-3], Stack[-5]); Obj=4 // @poff=0
0xd: Pop(0)
0xe: Push((int) -1)
0xf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x11: Push("Invalid bonfire region") // @poff=14
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: Return(); Pop(10)

0x15: PushEmpty(string, int)
0x16: Stack[-5] = Stack[-1]
0x17: Call2 0x40

0x18: Pop(1)
0x19: @ GetVariable(Stack[-1], Stack[-3])
0x1a: Pop(1)
0x1b: Push((int) 3)
0x1c: Stack[-3] = Stack[-3] & Stack[-1]; Pop(1);
0x1d: PushEmpty(bool)
0x1e: Stack[-1] = (bool) 1
0x1f: Push((int) 1)
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 1) GOTO 0x26; Pop(1)

0x22: Push((int) 2)
0x23: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24: IF (Stack[-1] == 1) GOTO 0x26; Pop(1)

0x25: Stack[-1] = (bool) 0
0x26: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x27: @ GetActorName(Stack[-1])
0x28: Pop(0)
0x29: Push("_light") // @poff=60
0x2a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2b: Push([0.0, 0.0, 0.0])
0x2c: Push([0.0, 0.0, 1.0])
0x2d: Push("light_fire.xml") // @poff=74
0x2e: @ AddActor(Stack[-0]T, Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x2f: Pop(4)
0x30: Push("scripted") // @poff=104
0x31: Push([0.0, 0.0, 1.0])
0x32: Push("fire.xml") // @poff=86
0x33: @ AddActorByType(Stack[-1]T, Stack[-3], Stack[-7], Stack[-8], Stack[-2], Stack[-1])
0x34: Pop(3)
0x35: Return(); Pop(10)

0x36: Stack[-4] = 0
0x37: Push( Stack[0 + Tasks[-1].StackPointer] )
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: @ RemoveActor(Stack[-0]T)
0x3a: Pop(0)
0x3b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: @ RemoveActor(Stack[-1]T)
0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty()
0x41: Push("Region") // @poff=122
0x42: Pop(1); Push(Stack[-1] + Stack[-2]);
0x43: Push("State") // @poff=136
0x44: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x45: Return(); Pop(0)

