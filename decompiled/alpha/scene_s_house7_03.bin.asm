GlobalVarCount = 0

Strings:
	quest_d4_02
	scene_load
	scene_unload
	New fog at 
	fog
	horror_fog.xml

Import:
	Hold (0 args)
	Sleep (2 args)
	GetRandomPFPoint (3 args)
	StopGroup0 (0 args)
	Trace (1 args)
	AddActorByType (6 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0xf
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0x9 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x19 Vars = ()


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_d4_02"
0x2: Stack[-1] = "scene_load"
0x3: Call 0x51

0x4: Pop(3)
0x5: PushEmpty()
0x6: Call 0x13

0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, string, string)
0xa: Stack[-2] = "quest_d4_02"
0xb: Stack[-1] = "scene_unload"
0xc: Call 0x51

0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: @ Hold()
0x10: Pop(0)
0x11: GOTO 0xf

0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: Push(-0, 0); TaskCall(1)
0x15: Call 0x22

0x16: Pop(-0, 0); TaskReturn
0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: PushEmpty(bool, string, string)
0x1a: Stack[-2] = "quest_d4_02"
0x1b: Stack[-1] = "scene_unload"
0x1c: Call 0x51

0x1d: Pop(3)
0x1e: PushEmpty()
0x1f: Call 0x39

0x20: Pop(0)
0x21: Return(); Pop(0)

0x22: PushEmpty(bool, cvector, bool, cvector)
0x23: Push((int) 3)
0x24: @ Sleep(Stack[-1], Stack[-3])
0x25: Pop(1)
0x26: Pop(0); Push((bool) Stack[-2] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Return(); Pop(4)

0x29: Push((int) 0)
0x2a: Push((int) 0)
0x2b: @ GetRandomPFPoint(Stack[-3], Stack[-2], Stack[-1])
0x2c: Pop(2)
0x2d: PushEmpty(cvector)
0x2e: Stack[-1] = Stack[-2]
0x2f: Call 0x3c

0x30: Pop(1)
0x31: Push((int) 30)
0x32: @ Sleep(Stack[-1], Stack[-3])
0x33: Pop(1)
0x34: Pop(0); Push((bool) Stack[-2] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: GOTO 0x38

0x37: GOTO 0x29

0x38: Return(); Pop(4)

0x39: @ StopGroup0()
0x3a: Pop(0)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(object, object)
0x3d: Push("New fog at ")
0x3e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x3f: @ Trace(Stack[-1])
0x40: Pop(1)
0x41: Push("fog")
0x42: PushEmpty(object)
0x43: Call 0x4b

0x44: Pop(0)
0x45: Push(CVector(0.0, 0.0, 1.0))
0x46: Push("horror_fog.xml")
0x47: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0x48: Pop(4)
0x49: Return(); Pop(2)

0x4a: Stack[-1] = 0
0x4b: PushEmpty(object, object)
0x4c: @ self(Stack[-1])
0x4d: Pop(0)
0x4e: Stack[-3] = Stack[-1]
0x4f: Return(); Pop(2)

0x50: Stack[-1] = 0
0x51: PushEmpty(object, object)
0x52: @ FindActor(Stack[-1], Stack[-4])
0x53: Pop(0)
0x54: Pop(0); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: Stack[-5] = (bool) 0
0x57: Return(); Pop(2)

0x58: @ Trigger(Stack[-1], Stack[-3])
0x59: Pop(0)
0x5a: Stack[-5] = (bool) 1
0x5b: Return(); Pop(2)

0x5c: Stack[-1] = 0
